ByteAddressBuffer ManagedHeap_ByteAddressBuffer[] : register(t0, space32);
Texture2D ManagedHeap_Texture2D[] : register(t0, space33);
Texture3D ManagedHeap_Texture3D[] : register(t0, space34);
TextureCube ManagedHeap_TextureCube[] : register(t0, space35);
SamplerState ManagedHeap_SamplerState[] : register(s0, space36);
struct ManagedIndirection { uint index; uint offset; };

/* Generated code from  ShaderResourceGroup PerObject*/
struct PerObject_SRGConstantsStruct
{
    row_major float3x4 PerObject_m_modelToWorld;
};

ConstantBuffer<ManagedIndirection> PerObject_indirect : register(b0, space0);
static uint PerObject_base;
void setPerObject_base(uint instanceId) {
        PerObject_base = 8 * instanceId + PerObject_indirect.offset;
}

static ::PerObject_SRGConstantsStruct PerObject_SRGConstantBuffer;
void setPerObject_SRGConstantBuffer() {
        uint2 indexOffset = ManagedHeap_ByteAddressBuffer[PerObject_indirect.index].Load<uint2>(PerObject_base);
        PerObject_SRGConstantBuffer = ManagedHeap_ByteAddressBuffer[indexOffset.x].Load<::PerObject_SRGConstantsStruct>(indexOffset.y);
}

/* Generated code from  ShaderResourceGroup MaterialSrg*/
struct MaterialSrg_SRGConstantsStruct
{
     float3 MaterialSrg_m_baseColor;
     float MaterialSrg_m_baseColorFactor;
};

ConstantBuffer<ManagedIndirection> MaterialSrg_indirect : register(b0, space1);
static uint MaterialSrg_base;
void setMaterialSrg_base(uint instanceId) {
        MaterialSrg_base = 16 * instanceId + MaterialSrg_indirect.offset;
}

static ::MaterialSrg_SRGConstantsStruct MaterialSrg_SRGConstantBuffer;
void setMaterialSrg_SRGConstantBuffer() {
        uint2 indexOffset = ManagedHeap_ByteAddressBuffer[MaterialSrg_indirect.index].Load<uint2>(MaterialSrg_base);
        MaterialSrg_SRGConstantBuffer = ManagedHeap_ByteAddressBuffer[indexOffset.x].Load<::MaterialSrg_SRGConstantsStruct>(indexOffset.y);
}

static Texture2D MaterialSrg_m_baseColorMap;
void setMaterialSrg_m_baseColorMap() {
        MaterialSrg_m_baseColorMap = ManagedHeap_Texture2D[ManagedHeap_ByteAddressBuffer[MaterialSrg_indirect.index].Load<uint>(MaterialSrg_base + 8)];
}
static SamplerState MaterialSrg_m_sampler;
void setMaterialSrg_m_sampler() {
        MaterialSrg_m_sampler = ManagedHeap_SamplerState[ManagedHeap_ByteAddressBuffer[MaterialSrg_indirect.index].Load<uint>(MaterialSrg_base + 12)];
}

float4 MainPS(  float2 uv :TEXCOORD, uint instanceId :SV_InstanceID) :SV_Target0{
setPerObject_base(instanceId);
setPerObject_SRGConstantBuffer();
setMaterialSrg_base(instanceId);
setMaterialSrg_SRGConstantBuffer();
setMaterialSrg_m_baseColorMap();
setMaterialSrg_m_sampler();
float4 baseColorMapSample = ::MaterialSrg_m_baseColorMap . Sample ( ::MaterialSrg_m_sampler , uv ) ;
float3 baseColor = baseColorMapSample . rgb * ::MaterialSrg_SRGConstantBuffer.MaterialSrg_m_baseColor . rgb * ::MaterialSrg_SRGConstantBuffer.MaterialSrg_m_baseColorFactor ;
return float4 ( baseColor , 1.0 ) ;
}