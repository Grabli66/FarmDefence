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

vec3 tex_brick(vec3 p, const vec3 c1, const vec3 c2, const vec3 c3) {
    p /= vec3(0.9, 0.49, 0.49) / 2;
    if (fract(p.y * 0.5) > 0.5) p.x += 0.5;   
    p = fract(p);
    vec3 b = step(p, vec3(0.95, 0.9, 0.9));
    return mix(c3, c1, b.x * b.y * b.z);
}
float tex_brick_f(vec3 p) {
    p /= vec3(0.9, 0.49, 0.49) / 2;
    if (fract(p.y * 0.5) > 0.5) p.x += 0.5;   
    p = fract(p);
    vec3 b = step(p, vec3(0.95, 0.9, 0.9));
    return mix(1.0, 0.0, b.x * b.y * b.z);
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
	const float MixShader_fac = 0.009999999776482582;
	const float MixShader_fac_inv = 1.0 - MixShader_fac;
	vec3 BrickTexture_Color_res = tex_brick(bposition * 20.0, vec3(0.800000011920929, 0.800000011920929, 0.800000011920929), vec3(0.20000000298023224, 0.20000000298023224, 0.20000000298023224), vec3(0.0, 0.0, 0.0));
	basecol = (vec3(0.04295617714524269, 0.04355164244771004, 0.0023204933386296034) * MixShader_fac_inv + BrickTexture_Color_res * MixShader_fac);
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
