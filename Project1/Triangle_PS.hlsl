// Triangle_PS.hlsl pixel sharder

#include "Triangle.h"

// 像素着色器 直接返回该像素的颜色
float4 PS(VertexOut pIn): SV_Target
{
    return pIn.color;
}