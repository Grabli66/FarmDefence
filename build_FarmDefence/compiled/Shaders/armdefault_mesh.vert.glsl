#version 450
#define _Irr
#define _EnvCol
#define _EnvTransp
#define _EnvCol
#define _LDR
in vec3 pos;
in vec3 nor;
out vec3 wnormal;
out vec3 eyeDir;
out vec4 lightPosition;
out vec3 wposition;
uniform mat3 N;
uniform mat4 WVP;
uniform vec3 eye;
uniform int lightShadow;
uniform mat4 LWVP;
uniform mat4 W;
void main() {
    vec4 spos = vec4(pos, 1.0);
wposition = vec4(W * spos).xyz;
	wnormal = normalize(N * nor);
	gl_Position = WVP * spos;
	eyeDir = eye - wposition;
	if (lightShadow == 1) lightPosition = LWVP * spos;
}
