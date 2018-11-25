#version 450
#define _Irr
#define _EnvCol
#define _Deferred
#define _CSM
#define _SMAA
#define _SSAO
#include "compiled.inc"
#include "std/skinning.glsl"
in vec3 pos;
in vec3 nor;
in vec2 tex;
in vec4 bone;
in vec4 weight;
out vec2 texCoord;
out vec3 wnormal;
uniform mat3 N;
uniform mat4 WVP;
void main() {
    vec4 spos = vec4(pos, 1.0);
texCoord = tex;
vec4 skinA;
vec4 skinB;
getSkinningDualQuat(ivec4(bone), weight, skinA, skinB);
spos.xyz += 2.0 * cross(skinA.xyz, cross(skinA.xyz, spos.xyz) + skinA.w * spos.xyz); // Rotate
spos.xyz += 2.0 * (skinA.w * skinB.xyz - skinB.w * skinA.xyz + cross(skinA.xyz, skinB.xyz)); // Translate
	wnormal = normalize(N * (nor + 2.0 * cross(skinA.xyz, cross(skinA.xyz, nor) + skinA.w * nor)));
	gl_Position = WVP * spos;
}