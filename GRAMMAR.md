# Amazon Shading Language

AZSL is a thin extension of HLSL.

For the most part everything that works in HLSL SM 6.0 and above should work in AZSL too, with a few additions and exceptions.

## Samples

The easiest way to get started is to check the test suite, which is a collection of 100+ tests that are also meant to be samples of what is allowed and what is disallowed in the grammar.
```
tests\Samples             // More advanced samples
tests\Semantic            // Gramatically and semantically correct tests - you can write such code
tests\Semantic\AsError    // Gramatically correct, but semantically incorrect - these samples don't work because of higher level language rules
tests\Syntax              // Gramatically correct language
tests\Syntax\AsError      // Gibberish - you shouldn't even write this, AZSLc can't make any sense of such files 
```


## Exceptions to HLSL

### Shader Resource Group

### Classes vs Structs

Classes can hold methods, while Structs cannot.
Only Structs may be defined within ShaderResourceGroups.
Both of them have public visibility members, since there is no notion of visibility at all.

## Additions to HLSL

HLSL6 supports them, but HLSL5 did not. AZSL does support:
enum
typedef

### Inheritance

Class may inherit from Interfaces, to be forced to respect a contract (the implementation of functions).

### Generics

Not generally supported in AZSL 1.6 nor under. At the exception of intrinsic HLSL types like vector, matrix or StructuredBuffer...

#### Associated Types

Not supported in AZSL 1.6 nor under.

### Attribute Sequences

In addition to HLSL attributes, we also use [attribute specifier sequences](https://en.cppreference.com/w/cpp/language/attributes) as a non-intrusive way of providing API specific information in AZSL.
Although not strictly related to C++ standards, currently we don't support `using` (C++17 standard) or contract-attributes (C++20 standard) specified in the linked document.

Example of usage are: 
```
[[namespace::attribute]]
[[namespace::attribute(arg1, arg2), attribute]]
[[namespace::attribute(arg1, arg2), namespace::attribute(arg), namespace::attribute, attribute]]
```

Namespace is used to filter out attributes and has no correlation to the namespaces used in the shader code.
Attribute is the name of the attribute specified. It can have no arguments or one or more arguments, which are literals - boolean, integer, float or string.
You can have more than one attribute in a sequence, separated by a comma.


The attributes function the way they are described in the C++ standard and affect the next declaration, expression or scope.
Attributes with no namespace are always enabled.
Attributes with a namespace are only enabled if the namespace is enabled when compiling the shader (`--namespace=<nspc>`).
The `void` namespace is always disabled. (This feature is still WIP, the grammar doesn't accept keywords like `void` as namespace identifiers yet.)

#### Filter namespaces

Attribute sequences without a namespace are always enabled, for example `[[location(1)]]`.

Attribute sequences with a namespace (for example `[[vk::location(1)]]`) have to be enabled when compiling by passing the `--namespace=vk` attribute. 
Multiple namespaces can be specified, for example `--namespace=vk,mobile,debug`, comma separated with no whitespaces. Note that only one such namespace can be a graphics API. For example `--namespace=vk,dx` is not allowed - you compile the file either for DirectX or Vulkan, but not both at the same time!

Throughout this document we use some naming conventions for namespaces - for example `[[dx::]]` for DirectX12, `[[vk::]]` for Vulkan, etc.
However, AZSLc doesn't restrict the choice of namespace. It is left to the shader authors and the consumer application. 


#### Global vs Attached attributes

To differentiate between attributes which belong to the global scope and attributes attached to the next declaration, we use the root namespace `global::`.
This is required since both cases appear in the same space! Think about attribute sequence before a function declaration in the global scope.

Thus `[[global::attribute]]` is a global attribute with no namespace (`global` is ignored as a namespace in this case) and `[[global::dx::attribute]]` is a global attribute in the `dx` namespace.

#### Special Attributes

AZSLc uses some attributes and passes others. The special attributes are listed below.

- `[[global::verbatim("// Text will be re-emitted as its!")]]`

Verbatim attributes will emit all their arguments as-is, on a single line with a single whitespace between them. AZSLc makes no sense of what's in the verbatim block. You can use macros and includes here, but those macros will have to target the next compiler (dxc, spriv-cross, etc.), AZSLc will make no sense of what's being included.

It is possible to include files with the `#include` directive this way, refer to `tests/Advanced/simple-surface.azsl` for an example.

- `[[global::output_format("R16G16B16A16_FLOAT")]]`

The `output_format` specifies pixel shader entry output format hint. If no index is provided, it affects all render targets, otherwise you can specify a render target (0 to 7) before the format.

Refer to `tests/Samples/PixelShaderOutputAttributes.azsl` for details.

### Enumerations

AZSLc supports enumerations, both unscoped (`enum`) and scoped (`enum class` and `enum struct`).

The usage is the same as in C++ for the most part with the exception that explicit declaration of underlying type is not supported. Also, unlike in Microsoft C++ Compiler (cl), non-class enumerators cannot be refered to using explicit qualification.

Refer to `tests/Samples/Enumeration.azsl` for details.