Shader "ASE/rongjie" {
	Properties {
		_TextureSample0 ("主纹理", 2D) = "white" {}
		_Color ("Color", Vector) = (1,1,1,1)
		_Tiling ("Tiling", Vector) = (1,1,0,0)
		_dissolve_tex1 ("溶解图", 2D) = "white" {}
		_Vector0 ("中心点", Vector) = (0.5,0.5,0,0)
		_Vector1 ("zaobouv", Vector) = (1,1,0,0)
	}
	//DummyShaderTextExporter
	SubShader{
		Tags { "RenderType"="Opaque" }
		LOD 200
		CGPROGRAM
#pragma surface surf Standard
#pragma target 3.0

		fixed4 _Color;
		struct Input
		{
			float2 uv_MainTex;
		};
		
		void surf(Input IN, inout SurfaceOutputStandard o)
		{
			o.Albedo = _Color.rgb;
			o.Alpha = _Color.a;
		}
		ENDCG
	}
}