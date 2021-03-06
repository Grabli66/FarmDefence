#version 330
#ifdef GL_ARB_shading_language_420pack
#extension GL_ARB_shading_language_420pack : require
#endif

uniform vec4 skinBones[56];
uniform mat4 W;
uniform mat3 N;
uniform mat4 WVP;
uniform vec3 eye;
uniform int lightShadow;
uniform mat4 LWVP;

in vec3 pos;
out vec2 texCoord;
in vec2 tex;
in vec4 bone;
in vec4 weight;
out vec3 wposition;
out vec3 wnormal;
in vec3 nor;
out vec3 eyeDir;
out vec4 lightPosition;

void getSkinningDualQuat(ivec4 bone_1, inout vec4 weight_1, inout vec4 A, inout vec4 B)
{
    ivec4 bonei = bone_1 * ivec4(2);
    mat4 matA = mat4(vec4(skinBones[bonei.x]), vec4(skinBones[bonei.y]), vec4(skinBones[bonei.z]), vec4(skinBones[bonei.w]));
    mat4 matB = mat4(vec4(skinBones[bonei.x + 1]), vec4(skinBones[bonei.y + 1]), vec4(skinBones[bonei.z + 1]), vec4(skinBones[bonei.w + 1]));
    vec3 _129 = weight_1.xyz * sign(matA[3] * matA).xyz;
    weight_1 = vec4(_129.x, _129.y, _129.z, weight_1.w);
    A = matA * weight_1;
    B = matB * weight_1;
    float invNormA = 1.0 / length(A);
    A *= invNormA;
    B *= invNormA;
}

void main()
{
    vec4 spos = vec4(pos, 1.0);
    texCoord = tex;
    vec4 param = weight;
    vec4 skinB;
    vec4 param_2 = skinB;
    vec4 param_1;
    getSkinningDualQuat(ivec4(bone), param, param_1, param_2);
    vec4 skinA = param_1;
    skinB = param_2;
    vec3 _196 = spos.xyz + (cross(skinA.xyz, cross(skinA.xyz, spos.xyz) + (spos.xyz * skinA.w)) * 2.0);
    spos = vec4(_196.x, _196.y, _196.z, spos.w);
    vec3 _219 = spos.xyz + ((((skinB.xyz * skinA.w) - (skinA.xyz * skinB.w)) + cross(skinA.xyz, skinB.xyz)) * 2.0);
    spos = vec4(_219.x, _219.y, _219.z, spos.w);
    wposition = vec4(W * spos).xyz;
    wnormal = normalize(N * (nor + (cross(skinA.xyz, cross(skinA.xyz, nor) + (nor * skinA.w)) * 2.0)));
    gl_Position = WVP * spos;
    eyeDir = eye - wposition;
    if (lightShadow == 1)
    {
        lightPosition = LWVP * spos;
    }
}

