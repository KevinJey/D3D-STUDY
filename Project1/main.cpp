struct VertexPosColor{
    DirectX::XMFLOAT3   pos;
    DirectX::XMFLOAT4   color;
    static const D3D11_INPUT_ELEMENT_DESC   inputLayout[2];
    // 注意是static修饰的变量，不占用类的空间，
    // 我们使用D3D11_INPUT_ELEMENT_DESC 来描述传入结构体中每个成员的具体信息
};

typedef struct D3D11_INPUT_ELEMENT_DESC{
    LPCSTR SemanticNmae;
    UINT SemanticIndex;
    DXGI_FORMAT
} D3D11_INPUT_ELEMENT_DESC;

