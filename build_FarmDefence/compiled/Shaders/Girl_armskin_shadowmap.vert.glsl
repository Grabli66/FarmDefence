#version 450
#define _Irr
#define _EnvCol
#define _EnvTransp
#define _EnvCol
#define _LDR
#include "compiled.inc"
#include "std/skinning.glsl"
in vec3 pos;
in vec4 bone;
in vec4 weight;
uniform mat4 LWVP;
void main() {
vec4 spos = vec4(pos, 1.0);
vec4 skinA;
vec4 skinB;
getSkinningDualQuat(ivec4(bone), weight, skinA, skinB);
spos.xyz += 2.0 * cross(skinA.xyz, cross(skinA.xyz, spos.xyz) + skinA.w * spos.xyz); // Rotate
spos.xyz += 2.0 * (skinA.w * skinB.xyz - skinB.w * skinA.xyz + cross(skinA.xyz, skinB.xyz)); // Translate
	gl_Position = LWVP * spos;
}
