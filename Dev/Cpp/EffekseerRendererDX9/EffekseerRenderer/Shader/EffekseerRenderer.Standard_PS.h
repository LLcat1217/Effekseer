#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Zpc /Tps_3_0 /EPS /D __EFFEKSEER_BUILD_VERSION16__=1 /Fh
//    Shader/EffekseerRenderer.Standard_PS.h Shader/standard_renderer_PS.fx
//
//
// Parameters:
//
//   float4 flipbookParameter;
//   sampler2D g_alphaSampler;
//   sampler2D g_sampler;
//
//
// Registers:
//
//   Name              Reg   Size
//   ----------------- ----- ----
//   flipbookParameter c0       1
//   g_sampler         s0       1
//   g_alphaSampler    s1       1
//

    ps_3_0
    def c1, 0, -1, -0, 0
    dcl_color v0
    dcl_texcoord v1.xy
    dcl_texcoord4 v2.xy
    dcl_texcoord5 v3.x
    dcl_texcoord6 v4.xy
    dcl_texcoord7 v5.x
    dcl_2d s0
    dcl_2d s1
    texld r0, v1, s0
    mul r0, r0.wxyz, v0.wxyz
    mov r1.xy, c1
    if_lt -c0.x, r1.x
      texld r2, v4, s0
      add r1.x, r1.y, c0.y
      mad r2, r2, v0, -r0.yzwx
      mad r2, v3.x, r2, r0.yzwx
      cmp r0, -r1_abs.x, r2.wxyz, r0
      mov r1.xyz, r0.yzww
    else
      mov r1.xyz, r0.yzww
    endif
    texld r2, v2, s1
    mul r1.w, r0.x, r2.w
    mad r0.x, r0.x, -r2.w, v5.x
    cmp r0, r0.x, c1.y, c1.z
    texkill r0
    cmp r0, -r1_abs.w, c1.y, c1.z
    texkill r0
    mov oC0, r1

// approximately 23 instruction slots used (3 texture, 20 arithmetic)
#endif

const BYTE g_ps30_PS[] =
{
      0,   3, 255, 255, 254, 255, 
     61,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 191,   0, 
      0,   0,   0,   3, 255, 255, 
      3,   0,   0,   0,  28,   0, 
      0,   0,  16,   1,   0,   0, 
    184,   0,   0,   0,  88,   0, 
      0,   0,   2,   0,   0,   0, 
      1,   0,   0,   0, 108,   0, 
      0,   0,   0,   0,   0,   0, 
    124,   0,   0,   0,   3,   0, 
      1,   0,   1,   0,   6,   0, 
    140,   0,   0,   0,   0,   0, 
      0,   0, 156,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      2,   0, 168,   0,   0,   0, 
      0,   0,   0,   0, 102, 108, 
    105, 112,  98, 111, 111, 107, 
     80,  97, 114,  97, 109, 101, 
    116, 101, 114,   0, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 103,  95, 
     97, 108, 112, 104,  97,  83, 
     97, 109, 112, 108, 101, 114, 
      0, 171,   4,   0,  12,   0, 
      1,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    103,  95, 115,  97, 109, 112, 
    108, 101, 114,   0, 171, 171, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 112, 115, 
     95,  51,  95,  48,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  57,  46, 
     50,  57,  46,  57,  53,  50, 
     46,  51,  49,  49,  49,   0, 
     81,   0,   0,   5,   1,   0, 
     15, 160,   0,   0,   0,   0, 
      0,   0, 128, 191,   0,   0, 
      0, 128,   0,   0,   0,   0, 
     31,   0,   0,   2,  10,   0, 
      0, 128,   0,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      0, 128,   1,   0,   3, 144, 
     31,   0,   0,   2,   5,   0, 
      4, 128,   2,   0,   3, 144, 
     31,   0,   0,   2,   5,   0, 
      5, 128,   3,   0,   1, 144, 
     31,   0,   0,   2,   5,   0, 
      6, 128,   4,   0,   3, 144, 
     31,   0,   0,   2,   5,   0, 
      7, 128,   5,   0,   1, 144, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   0,   8,  15, 160, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   1,   8,  15, 160, 
     66,   0,   0,   3,   0,   0, 
     15, 128,   1,   0, 228, 144, 
      0,   8, 228, 160,   5,   0, 
      0,   3,   0,   0,  15, 128, 
      0,   0, 147, 128,   0,   0, 
    147, 144,   1,   0,   0,   2, 
      1,   0,   3, 128,   1,   0, 
    228, 160,  41,   0,   4,   2, 
      0,   0,   0, 161,   1,   0, 
      0, 128,  66,   0,   0,   3, 
      2,   0,  15, 128,   4,   0, 
    228, 144,   0,   8, 228, 160, 
      2,   0,   0,   3,   1,   0, 
      1, 128,   1,   0,  85, 128, 
      0,   0,  85, 160,   4,   0, 
      0,   4,   2,   0,  15, 128, 
      2,   0, 228, 128,   0,   0, 
    228, 144,   0,   0,  57, 129, 
      4,   0,   0,   4,   2,   0, 
     15, 128,   3,   0,   0, 144, 
      2,   0, 228, 128,   0,   0, 
     57, 128,  88,   0,   0,   4, 
      0,   0,  15, 128,   1,   0, 
      0, 140,   2,   0, 147, 128, 
      0,   0, 228, 128,   1,   0, 
      0,   2,   1,   0,   7, 128, 
      0,   0, 249, 128,  42,   0, 
      0,   0,   1,   0,   0,   2, 
      1,   0,   7, 128,   0,   0, 
    249, 128,  43,   0,   0,   0, 
     66,   0,   0,   3,   2,   0, 
     15, 128,   2,   0, 228, 144, 
      1,   8, 228, 160,   5,   0, 
      0,   3,   1,   0,   8, 128, 
      0,   0,   0, 128,   2,   0, 
    255, 128,   4,   0,   0,   4, 
      0,   0,   1, 128,   0,   0, 
      0, 128,   2,   0, 255, 129, 
      5,   0,   0, 144,  88,   0, 
      0,   4,   0,   0,  15, 128, 
      0,   0,   0, 128,   1,   0, 
     85, 160,   1,   0, 170, 160, 
     65,   0,   0,   1,   0,   0, 
     15, 128,  88,   0,   0,   4, 
      0,   0,  15, 128,   1,   0, 
    255, 140,   1,   0,  85, 160, 
      1,   0, 170, 160,  65,   0, 
      0,   1,   0,   0,  15, 128, 
      1,   0,   0,   2,   0,   8, 
     15, 128,   1,   0, 228, 128, 
    255, 255,   0,   0
};
