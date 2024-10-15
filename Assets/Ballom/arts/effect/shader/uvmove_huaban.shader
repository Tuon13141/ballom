Shader "ASE/huabanuv" {
	Properties {
		_TextureSample0 ("主纹理", 2D) = "white" {}
		_noise_tex ("遮罩", 2D) = "white" {}
		_Color0 ("颜色", Vector) = (1,1,1,0)
		_TexTiling ("tex", Vector) = (0,0,0,0)
		[HideInInspector] _texcoord ("", 2D) = "white" {}
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
}