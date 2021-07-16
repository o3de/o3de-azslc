# AZSLc HowTo guide

`TL;DR` Use azslc from command line (or process invoke) to translate .azsl files to .hlsl, or extract data such as symbols reference table, shader resource table layout, input assembly layout and output merger layout.

Version `AZSL Compiler 1.6.5` will display the following with the `azslc --help` command:

```
Amazon Shader Language Compiler

         Usage:
          azslc (- | FILE) [--use-spaces] [--unique-idx] [--cb-body] [--root-sig] [--inline-const=<count>] [--Zpc] [--Zpr] [--namespace=<nspc>] [-o OUTFILE]
                           [--W0|--W1|--W2|--W3] [--Wx|--Wx1|--Wx2|--Wx3]
          azslc (- | FILE) --full [--use-spaces] [--unique-idx] [--cb-body] [--root-sig] [--inline-const=<count>] [--Zpc] [--Zpr] [--pack-dx12] [--pack-vulkan] [--pack-opengl] [--namespace=<nspc>] [-o OUTFILE]
                           [--W0|--W1|--W2|--W3] [--Wx|--Wx1|--Wx2|--Wx3]
          azslc (- | FILE) --ia [--use-spaces] [--unique-idx] [--cb-body] [--root-sig] [--Zpc] [--Zpr] [--pack-dx12] [--pack-vulkan] [--pack-opengl] [--namespace=<nspc>] [-o OUTFILE]
          azslc (- | FILE) --om [--use-spaces] [--unique-idx] [--cb-body] [--root-sig] [--Zpc] [--Zpr] [--pack-dx12] [--pack-vulkan] [--pack-opengl] [--namespace=<nspc>] [-o OUTFILE]
          azslc (- | FILE) --srg [--use-spaces] [--unique-idx] [--cb-body] [--root-sig] [--inline-const=<count>] [--Zpc] [--Zpr] [--pack-dx12] [--pack-vulkan] [--pack-opengl] [--namespace=<nspc>] [-o OUTFILE]
          azslc (- | FILE) --options [--use-spaces] [--unique-idx] [--cb-body] [--root-sig] [--Zpc] [--Zpr] [--pack-dx12] [--pack-vulkan] [--pack-opengl] [--namespace=<nspc>] [-o OUTFILE]
          azslc (- | FILE) --semantic [--verbose] [--W0|--W1|--W2|--W3] [--Wx|--Wx1|--Wx2|--Wx3] [--inline-const=<count>]
          azslc (- | FILE) --syntax
          azslc (- | FILE) --dumpsym
          azslc (- | FILE) --ast
          azslc (- | FILE) --bindingdep [--use-spaces] [--unique-idx] [--cb-body] [--Zpc] [--Zpr] [--pack-dx12] [--pack-vulkan] [--pack-opengl] [--namespace=<nspc>] [-o OUTFILE]
          azslc (- | FILE) --visitsym MQNAME [-d] [-v] [-f] [-r]
          azslc --listpredefined
          azslc -h | --help | --version

        Arguments:
          FILE              Input file (optional if use of stdin)

        Options:
          -o OUTFILE                Output file (optional if use of stdout)
          --use-spaces              Use logical space index per SRG.
          --unique-idx              Use unique indices for all registries.
          --cb-body                 Emit ConstantBuffer body rather than using <T>
          --root-sig                Emit RootSignature for parameter binding in the shader
          --inline-const=<count>    Number of inline constants allowed
          --Zpc                     Pack matrices in column-major order (default). Cannot be specified together with -Zpr
          --Zpr                     Pack matrices in row-major order. Cannot be specified together with -Zpc
          --pack-dx12               Pack buffers using strict DX12 packing rules. If not specified it will use relaxed packing rules.
          --pack-vulkan             Pack buffers using strict Vulkan packing rules. That's vector-relaxed std140 for uniform and std430 for storage buffers.
          --pack-opengl             Pack buffers using strict OpenGL packing rules. That's vector-strict std140 for uniform and std430 for storage buffers.
          --namespace=<nspc>        The list of namespaces (comma separated, no white spaces) indicates which attribute namespaces are active.
          --ia                      Output a list of vs entries with their Input Assembler layout *and* a list of cs entries with their numthreads
          --om                      Output the Output Merger layout, not the shader code
          --srg                     Output the Shader Resource Group layout, not the shader code
          --options                 Output the list of available shader options for this shader
          --dumpsym                 Dump symbols
          --syntax                  Check syntax    (no output means no complaints)
          --semantic                Check semantics (no output means no complaints)
          --ast                     Output the syntax tree
          --bindingdep              Output binding dependencies (what entry points access what external resource)
          --visitsym MQNAME         Output the locations of all relationships of the symbol MQNAME
          --full                    Output the shader code, Input Assembler layout, Output Merger layout, Shader Resource Group layout,
                                    the list of available shader options, and the binding dependencies
          -d                        (Option of --visitsym) Visit direct references
          -v                        (Option of --visitsym) Visit overload-set
          -f                        (Option of --visitsym) Visit family
          -r                        (Option of --visitsym) Visit recursively
          --listpredefined          Output a list of all predefined types in AZSLang

        Diagnostic Options:
          --W0                      Suppresses all warnings.
          --W1                      Severe warnings activated. (default)
          --W2                      Maybe significant warnings activated.
          --W3                      Low-confidence-diagnostic warnings activated.
          --Wx                      Treat any currently activated warning as error.
          --Wx1                     Treat level-1 warning as error.
          --Wx2                     Treat up to level-2 warning as error.
          --Wx3                     Treat up to level-3 warning as error.
```

# Commands breakdown

## General usage

Invoking `acslc` from command line requires either a file input (`.azsl` file written in the AZSL grammar) or the `stdin` (use the `-` option). It will transpile the AZSL shader code to HLSL code and it will emit it to the standard output.

Everything else is optional.

For most outputs, specifying `-o OUTFILE` redirects the code emission to a file. Warnings and errors still use the standard error output and verbose messages use the standard output.

## Generate shader source

### `--use-spaces`

When specified, all shader resources (data views, constant buffers and sampler states) will be grouped using logical space indices. The logical space index for each group is based on the resource's Shader Resource Group.
(All resources from the same SRG share the same logical space index.)

This option must be specified for DirectX 12 and Vulkan.

### `--cb-body`

This feature exists for legacy shaders support only (Shader Model 5). When compiling with dxc it shouldn't be used.

All constant buffers will use
```
cbuffer MyBuffer
{
  // Body
};
```
rather than
```
struct MyStruct
{
  // Body
};

ConstantBuffer<MyStruct> MyBuffer;
```

### `--root-sig`

Emits a RootSignature with the fixed name `sig` in the shader code for all resources, or the equivalent binding root for different graphic API.
This argument also requires the `--namespace=<nspc>` argument. For example passing `--namespace=dx` together will emit a DirectX 12 style RootSignature.

This argument only emits the struct, but it will not modify any other code. The signature must be specified when compiling with `dxc.exe` by using `rootsig-define sig -extractrootsignature` (if compiling for DirectX12) otherwise it will have no effect on the shader code. Note that the name has to match.

### Examples per platform

#### DirectX 12

Use `azslc Shader.azsl --namespace=dx --use-spaces -o Shader.hlsl`

#### Vulkan

Use `azslc Shader.azsl --namespace=vk --use-spaces --unique-idx -o Shader.hlsl`

#### Metal

Use `azslc Shader.azsl --namespace=mt --use-spaces --unique-idx -o Shader.hlsl`

## `--semantic`

Only performs semantic check of the code, no shader generation. No output if correct, use `--verbose` if you want to printout compiler internals trace data.

## `--syntax`

Only performs syntax check of the code, no shader generation. Ends with a 0 process code if the program is valid.

## `--dumpsym`

Dumps the symbol table to the standard output in yaml format.

It prints the symbol name, **all** lines which reference it, where is it declared and members (functions, variables, attributes, etc.).
```
Symbol /ExampleSRG:
  kind: ShaderResourceGroup
  references:
    - {line: 71, col: 29}
    - {line: 86, col: 29}
    - {line: 92, col: 24}
    - {line: 92, col: 55}
    - {line: 94, col: 24}
    - {line: 94, col: 67}
  line: 7
  structs: JustForPacking, ModelStruct, UserStruct,
  srViews: m_diffuseMap, m_bufferView1, m_bufferView2, m_bufferView4, m_bufferView5, m_bufferView6, m_bufferView7, m_bufferView8a,
  samplers: m_sampler,
  CBs: m_modelConstants, m_arrayOfFour,
Symbol /ExampleSRG/JustForPacking:
  kind: Struct
  references:
    - {line: 26, col: 20}
  line: 9
  members:
    - {kind: Variable, name: /ExampleSRG/JustForPacking/m_somePair}
    - {kind: Variable, name: /ExampleSRG/JustForPacking/m_columnMatrix}
    - {kind: Variable, name: /ExampleSRG/JustForPacking/m_someVector}
    - {kind: Variable, name: /ExampleSRG/JustForPacking/m_someScalar}
    - {kind: Variable, name: /ExampleSRG/JustForPacking/m_rowMatrix}
```

## `--ia` InputAssembly layout

Emits the InputAssembler layout instead of the shader source. The data is a Json array which lists all functions in the shader eligible for vertex shader entry point.

```
{
  "entry" : "MainVS",                # Name of the candidate entry point
  "streams" :                        # List of vertex streams it requires
  [
    {
      "baseType" : "float",          # Base type of the arithmetic type
      "cols" : 3,                    # 0 if scalar (assume it's 1 element)
                                     # number of elements if vector
                                     # number of columns if matrix
      "dimensions" : [],             # list of dimensions if array or multiarray
      "fullType" : "?float3",        # The arithmetic type as declared
      "name" : "m_position",         # Name of the attribute
      "rows" : 0,                    # 0 if scalar or vector (assume it's 1 row)
                                     # number of rows if matrix
      "semanticIndex" : 0,           # Semantic index
      "semanticName" : "POSITION",   # Semantic name without the index
      "systemValue" : false          # Is the semantic a system value
    }
  ]
},
```

## `--om` OutputMerger layout

Emits the OutputMerger layout instead of the shader source. The data is a Json array which lists all functions in the shader eligible for pixel shader entry point.

```
{
  "entry" : "MainPS",                # Name of the candidate entry point
  "renderTargets" :                  # List of render targets
  [
    {
      "baseType" : "float",          # Base type of the arithmetic type
      "cols" : 4,                    # 0 if scalar
                                     # number of elements if vector
                                     # cannot be a matrix
      "format" : "R8G8B8A8_UNORM",   # Format of the render target (hint)
      "semanticIndex" : 0,           # Semantic index
      "semanticName" : "SV_Target"   # Semantic name without the index
    }
  ]
}
```

## `--srg` ShaderResourceGroup layout

Emits the ShaderResourceGroup layout instead of the shader source. The data is a Json array which lists all resource data (data views, samplers and constant buffer packing data) in each SRG.

```
{
			"bindingSlot" : 0,                       # Binding slot for the SRG
			"id" : "ExampleSRG",                     # Name of the SRG

			"inputsForBufferViews" :                 # List of buffer views
			[
				{
					"count" : 4,                         # Number of views (1 if not an array)
					"id" : "m_myBuffer",                 # Name of the buffer view
					"type" : "ConstantBuffer<MyStruct>", # Type of the buffer
					"usage" : "Read"                     # Usage (Read or ReadWrite)
				}
			],

			"inputsForImageViews" :                  # List of image views
			[
				{
					"count" : 1,                         # Number of views (1 if not an array)
					"id" : "m_diffuseMap",               # Name of the image view
					"type" : "Texture2D",                # Type of the image
					"usage" : "Read"                     # Usage (Read or ReadWrite)
				}
			],

			"inputsForSRGConstants" :                # List of all SRG constants (implicit ConstantBuffer)
			[
				{
					"constantByteOffset" : 0,                     # Offset of the element
					"constantByteSize" : 64,                      # Size of the element
					"constantId" : "m_myModel.m_modelToWorld",    # Id of the element
					"qualifiedName" : "/ExampleSRG/ModelStruct/m_modelToWorld",
					"typeDimensions" : [],                        # List of dimensions of array or multiarray
					"typeKind" : "Predefined",                    # Predefined or Struct
					"typeName" : "?float4x4"                      # Type of the element
				},
				{
					"constantByteOffset" : 0,                     # Structs have same offset as their first element
					"constantByteSize" : 64,                      # Structs have the same size as the combined size of their elements
					"constantId" : "m_myModel",                   # Id of the struct. Must respect packing rules if used directly
					"qualifiedName" : "/ExampleSRG/m_myModel",
					"typeDimensions" : [],
					"typeKind" : "Struct",                        # Predefined or Struct
					"typeName" : "/ExampleSRG/ModelStruct"        # Type of the struct
				},
				{
					"constantByteOffset" : 64,
					"constantByteSize" : 32,                      # float2x3 row-major takes 2 (num of rows) registries (16 bytes each) = 32 bytes
					"constantId" : "m_rowMajorConst",
					"qualifiedName" : "/ExampleSRG/m_rowMajorConst",
					"typeDimensions" : [],
					"typeKind" : "Predefined",
					"typeName" : "?float2x3"
				},
				{
					"constantByteOffset" : 96,
					"constantByteSize" : 48,                     # float2x3 column-major takes 3 (num of cols) registries (16 bytes each) = 48 bytes
					"constantId" : "m_colMajorConst",
					"qualifiedName" : "/ExampleSRG/m_colMajorConst",
					"typeDimensions" : [],
					"typeKind" : "Predefined",
					"typeName" : "?float2x3"
				},
			],
			"inputsForSamplers" :                            # List of samplers. Attribute names are self-descriptive
			[
				{
					"addressU" : "TEXTURE_ADDRESS_WRAP",
					"addressV" : "TEXTURE_ADDRESS_WRAP",
					"addressW" : "TEXTURE_ADDRESS_WRAP",
					"anisotropyEnable" : true,
					"anisotropyMax" : 16,
					"borderColor" : "STATIC_BORDER_COLOR_TRANSPARENT_BLACK",
					"comparisonFunc" : "COMPARISON_ALWAYS",
					"filterMag" : "Point",
					"filterMin" : "Point",
					"filterMip" : "Point",
					"isComparison" : false,
					"mipLodBias" : 0,
					"mipLodMax" : 15,
					"mipLodMin" : 0,
					"reductionType" : "Filter"
				}
			]
		}
```


## `--ast` Abstract Syntax Tree

This option will print out on stdout a lisp-like tree of the syntax of an input program as parsed by AntlR.
Example:
`AZSLc\dev\bin\win_x64\Release>azslc.exe --ast ..\..\..\tests\Syntax\comma-separated-declarators.azsl`

```
  (compilationUnit
    (topLevelDeclaration
      (variableDeclarationStatement
        (variableDeclaration storageFlags
          (type
            (predefinedType
              (scalarType int)
            )
          )

          (variableDeclarators
            (variableDeclarator a)
           ,
            (variableDeclarator b)
          )
        )
       ;)
    )
   <EOF>)
```