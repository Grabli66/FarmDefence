#version 450
#define _Irr
#define _EnvCol
#define _EnvTransp
#define _EnvCol
#define _LDR
#include "compiled.inc"
#include "std/brdf.glsl"
#include "std/math.glsl"
#include "std/shirr.glsl"
#include "std/shadows.glsl"
#include "std/tonemap.glsl"
in vec3 wnormal;
in vec3 eyeDir;
in vec4 lightPosition;
in vec3 wposition;
in vec3 bposition;
out vec4 fragColor;
uniform sampler2D snoise256;
uniform vec3 lightColor;
uniform vec3 lightDir;
uniform vec3 lightPos;
uniform int lightType;
uniform vec2 spotlightData;
uniform float envmapStrength;
uniform sampler2D shadowMap;
uniform samplerCube shadowMapCube;
uniform bool receiveShadow;
uniform float shadowsBias;
uniform int lightShadow;
uniform vec2 lightProj;
uniform vec3 backgroundCol;

float tex_noise_f(const vec3 x) {   
    vec3 p = floor(x);
    vec3 f = fract(x);
    f = f * f * (3.0 - 2.0 * f);
    vec2 uv = (p.xy + vec2(37.0, 17.0) * p.z) + f.xy;
    vec2 rg = texture(snoise256, (uv + 0.5) / 256.0).yx;
    return mix(rg.x, rg.y, f.z);
}
float tex_noise(vec3 p) {
    p *= 1.25;
    float f  = 0.5 * tex_noise_f(p); p *= 2.01;
    f += 0.25 * tex_noise_f(p); p *= 2.02;
    f += 0.125 * tex_noise_f(p); p *= 2.03;
    f += 0.0625 * tex_noise_f(p); p *= 2.01;
    return 1.0 - f;
}
void main() {
vec3 n = normalize(wnormal);

    vec3 vVec = normalize(eyeDir);
    float dotNV = max(dot(n, vVec), 0.0);

	vec3 basecol;
	float roughness;
	float metallic;
	float occlusion;
	float specular;
	const float MixShader_fac = 0.013000000268220901;
	const float MixShader_fac_inv = 1.0 - MixShader_fac;
	vec3 NoiseTexture_Color_res = vec3(tex_noise(bposition * 20.0), tex_noise(bposition * 20.0 + 0.33), tex_noise(bposition * 20.0 + 0.66));
	basecol = (vec3(0.005091015249490738, 0.032871875911951065, 0.0026095330249518156) * MixShader_fac_inv + NoiseTexture_Color_res * MixShader_fac);
	roughness = (0.0 * MixShader_fac_inv + 0.0 * MixShader_fac);
	metallic = (0.0 * MixShader_fac_inv + 0.0 * MixShader_fac);
	occlusion = (1.0 * MixShader_fac_inv + 1.0 * MixShader_fac);
	specular = (0.0 * MixShader_fac_inv + 0.0 * MixShader_fac);
	float visibility = 1.0;
	vec3 lp = lightPos - wposition;
	vec3 l;
	if (lightType == 0) l = lightDir;
	else { l = normalize(lp); visibility *= attenuate(distance(wposition, lightPos)); }
	vec3 h = normalize(vVec + l);
	float dotNL = dot(n, l);
	float dotNH = dot(n, h);
	float dotVH = dot(vVec, h);
	if (receiveShadow) {
	    if (lightShadow == 1) {
	    vec3 lPos = lightPosition.xyz / lightPosition.w;
	    const vec2 smSize = shadowmapSize;
	    visibility *= PCF(shadowMap, lPos.xy, lPos.z - shadowsBias, smSize);
	    }
	    else if (lightShadow == 2) visibility *= PCFCube(shadowMapCube, lp, -l, shadowsBias, lightProj, n);
	}
	if (lightType == 2) {
	    float spotEffect = dot(lightDir, l);
	    if (spotEffect < spotlightData.x) {
	        visibility *= smoothstep(spotlightData.y, spotlightData.x, spotEffect);
	    }
	}
	vec3 albedo = surfaceAlbedo(basecol, metallic);
	vec3 f0 = surfaceF0(basecol, metallic);
	vec3 direct;
	direct = lambertDiffuseBRDF(albedo, dotNL);
	direct += specularBRDF(f0, roughness, dotNL, dotNH, dotNV, dotVH) * specular;
	vec3 indirect = shIrradiance(n);
	indirect *= albedo;
	indirect += backgroundCol * f0;
	indirect *= envmapStrength;
	fragColor = vec4(direct * lightColor * visibility + indirect * occlusion, 1.0);
	fragColor.rgb = tonemapFilmic(fragColor.rgb);
}
