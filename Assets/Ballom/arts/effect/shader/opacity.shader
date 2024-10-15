Shader "ASE/opacity" {
	Properties {
		_TextureSample0 ("Texture Sample 0", 2D) = "white" {}
		_Color ("Color", Vector) = (1,1,1,1)
		_intensity ("intensity", Float) = 1
		_width ("width", Float) = 5
		_width_1 ("width_1", Float) = 1
		_width_2 ("width_2", Float) = 0
		[HideInInspector] _texcoord ("", 2D) = "white" {}
		[HideInInspector] __dirty ("", Float) = 1
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
	Fallback "Diffuse"
}