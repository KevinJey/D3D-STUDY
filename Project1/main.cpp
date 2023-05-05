struct VertexPosColor{
    DirectX::XMFLOAT3   pos;
    DirectX::XMFLOAT4   color;
    static const D3D11_INPUT_ELEMENT_DESC   inputLayout[2];
    // 注意是static修饰的变量，不占用类的空间，
    // 我们使用D3D11_INPUT_ELEMENT_DESC 来描述传入结构体中每个成员的具体信息
};

typedef struct D3D11_INPUT_ELEMENT_DESC{
    LPCSTR SemanticName;        // 语义名
    UINT SemanticIndex;         // 语义索引
    DXGI_FORMAT Format;         // 数据格式
    UINT InputSlot;             // 输入槽索引(0-15)
    UINT AlignedByteOffset;     // 初始位置(字节偏移量)      
    D3D11_INPUT_CLASSIFICATION InputSlotClass; // 输入类型
    UINT InstanceDataStepRate;  // 忽略
}     D3D11_INPUT_ELEMENT_DESC;

// input layout初始化
const D3D11_INPUT_ELEMENT_DESC VertexPosColor::inputLayout[2] = {
    { "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
    { "COLOR", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 12, D3D11_INPUT_PER_VERTEX_DATA, 0}
};


