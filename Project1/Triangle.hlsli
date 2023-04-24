// Triangle.hlsli
struct VertexIn{
	float3 pos: POSITION; // POSITION is the type; pos is the name
	float4 color: COLOR;
};

struct VertexOut{
	float4 posH: SV_POSITION;
	float4 color: COLOR;
};