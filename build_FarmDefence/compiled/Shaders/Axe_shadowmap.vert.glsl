#version 450
#define _Irr
#define _EnvCol
#define _EnvTransp
#define _EnvCol
#define _LDR
in vec3 pos;
uniform mat4 LWVP;
void main() {
vec4 spos = vec4(pos, 1.0);
	gl_Position = LWVP * spos;
}
