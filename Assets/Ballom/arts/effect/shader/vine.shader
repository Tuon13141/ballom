Shader "ASE/vine" {
	Properties {
		_TextureSample0 ("Texture Sample 0", 2D) = "white" {}
		_Color0 ("Color 0", Vector) = (1,1,1,1)
		_TextureSample6 ("溶解贴图2", 2D) = "white" {}
		_Float8 ("软硬溶解", Range(0.5, 1)) = 0.57
		_Float9 ("溶解2", Range(-1, 1)) = 0
		[HideInInspector] _texcoord ("", 2D) = "white" {}
		[HideInInspector] __dirty ("", Float) = 1
	}
	//DummyShaderTextExporter
	SubShader{
		Tags { "RenderType" = "Opaque" }
		LOD 200
		CGPROGRAM
#pragma surface surf Standard
#pragma target 3.0

		struct Input
		{
			float2 uv_MainTex;
		};

		void surf(Input IN, inout SurfaceOutputStandard o)
		{
			o.Albedo = 1;
		}
		ENDCG
	}
	Fallback "Diffuse"
}