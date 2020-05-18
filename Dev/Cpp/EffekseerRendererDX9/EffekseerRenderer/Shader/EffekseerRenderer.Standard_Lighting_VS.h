#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Zpc /Tvs_3_0 /EVS /D __EFFEKSEER_BUILD_VERSION16__=1 /Fh
//    Shader/EffekseerRenderer.Standard_Lighting_VS.h
//    Shader/standard_renderer_lighting_VS.fx
//
//
// Parameters:
//
//   float4x4 mCamera;
//   float4x4 mProj;
//   float4 mUVInversed;
//   float4 mflipbookParameter;
//
//
// Registers:
//
//   Name               Reg   Size
//   ------------------ ----- ----
//   mCamera            c0       4
//   mProj              c4       4
//   mUVInversed        c8       1
//   mflipbookParameter c9       1
//

    vs_3_0
    def c10, -0.5, 0, 1, -1
    def c11, -1, -2, 4, 0
    dcl_position v0
    dcl_normal v1
    dcl_normal1 v2
    dcl_normal2 v3
    dcl_texcoord v4
    dcl_texcoord2 v5
    dcl_texcoord3 v6
    dcl_texcoord4 v7
    dcl_position o0
    dcl_color o1
    dcl_texcoord o2.xy
    dcl_texcoord1 o3.xyz
    dcl_texcoord2 o4.xyz
    dcl_texcoord3 o5.xyz
    dcl_texcoord4 o6.xyz
    dcl_texcoord5 o7.xy
    dcl_texcoord6 o8.x
    dcl_texcoord7 o9.xy
    dcl_texcoord8 o10.x
    add r0.xyz, c10.x, v2
    add r0.xyz, r0, r0
    add r1.xyz, c10.x, v3
    add r1.xyz, r1, r1
    mul r2.xyz, r0.zxyw, r1.yzxw
    mad o6.xyz, r0.yzxw, r1.zxyw, -r2
    mad o2.y, c8.y, v4.y, c8.x
    mad o7.y, c8.y, v5.y, c8.x
    mov r2, c9
    if_lt c10.y, r2.x
      frc r0.w, v6.x
      add r3.x, -r0.w, v6.x
      add r1.w, c10.z, v6.x
      abs r2.x, c9.y
      if_ge -r2.x, r2.x
        mul r2.x, c9.w, c9.z
        sge r2.x, r1.w, r2.x
        mad r3.z, r2.z, r2.w, c10.w
        add r3.y, c10.z, v6.x
        lrp r4.xy, r2.x, r3.z, r3.yxzw
        mov r3.x, r4.y
      else
        add r2.xy, r2.y, c11
        mul r3.y, c9.w, c9.z
        mul r3.z, r1.w, r3.y
        sge r3.z, r3.z, -r3.z
        lrp r4.y, r3.z, r3.y, -r3.y
        rcp r3.z, r4.y
        mul r3.z, r1.w, r3.z
        sge r2.xy, -r2_abs, r2_abs
        add r3.w, -r0.w, r1.w
        rcp r4.z, r3.y
        mul r4.z, r3.w, r4.z
        add r4.w, r4.z, r4.z
        sge r4.w, r4.w, -r4.w
        mad r4.w, r4.w, c11.z, c11.y
        rcp r5.x, r4.w
        mul r4.z, r4.z, r5.x
        frc r4.z, r4.z
        mad r4.z, r4.w, r4.z, c10.w
        sge r4.z, -r4_abs.z, r4_abs.z
        slt r4.w, r1.w, -r1.w
        slt r5.x, -r0.w, r0.w
        mad r3.w, r4.w, r5.x, r3.w
        mul r4.w, r3.y, r3.w
        sge r4.w, r4.w, -r4.w
        lrp r5.x, r4.w, r3.y, -r3.y
        rcp r3.y, r5.x
        mul r3.y, r3.y, r3.w
        frc r3.yz, r3
        mul r3.y, r3.y, r5.x
        mad r2.z, r2.z, r2.w, c10.w
        mad r2.z, r3.y, c11.y, r2.z
        mad r2.z, r4.z, r2.z, r3.y
        lrp r3.y, r2.y, r2.z, r1.w
        mad r1.w, r4.y, r3.z, -r3.y
        mad r4.x, r2.x, r1.w, r3.y
      endif
      frc r1.w, r3.x
      add r2.x, r3.x, -r1.w
      slt r2.y, r3.x, -r3.x
      slt r1.w, -r1.w, r1.w
      mad r1.w, r2.y, r1.w, r2.x
      frc r2.xy, c9.zwzw
      add r2.zw, -r2.xyxy, c9
      slt r3.xy, c9.zwzw, -c9.zwzw
      slt r2.xy, -r2, r2
      mad r2.xy, r3, r2, r2.zwzw
      mul r2.z, r1.w, r2.x
      sge r2.z, r2.z, -r2.z
      lrp r3.x, r2.z, r2.x, -r2.x
      rcp r2.z, r3.x
      mul r2.z, r1.w, r2.z
      frc r2.z, r2.z
      mul r2.z, r2.z, r3.x
      frc r2.w, r2.z
      add r3.x, r2.z, -r2.w
      slt r2.z, r2.z, -r2.z
      slt r2.w, -r2.w, r2.w
      mad r3.x, r2.z, r2.w, r3.x
      rcp r2.y, r2.y
      mul r1.w, r1.w, r2.y
      frc r2.z, r1.w
      add r2.w, r1.w, -r2.z
      slt r1.w, r1.w, -r1.w
      slt r2.z, -r2.z, r2.z
      mad r3.y, r1.w, r2.z, r2.w
      rcp r5.x, c9.z
      rcp r5.y, c9.w
      mul r2.zw, r3.xyxy, r5.xyxy
      mul r2.zw, -r2, c9
      frc r1.w, r4.x
      add r3.x, r4.x, -r1.w
      slt r3.y, r4.x, -r4.x
      slt r1.w, -r1.w, r1.w
      mad r1.w, r3.y, r1.w, r3.x
      mul r3.x, r2.x, r1.w
      sge r3.x, r3.x, -r3.x
      lrp r4.x, r3.x, r2.x, -r2.x
      rcp r2.x, r4.x
      mul r2.x, r1.w, r2.x
      frc r2.x, r2.x
      mul r2.x, r2.x, r4.x
      frc r3.x, r2.x
      add r3.y, r2.x, -r3.x
      slt r2.x, r2.x, -r2.x
      slt r3.x, -r3.x, r3.x
      mad r3.x, r2.x, r3.x, r3.y
      mul r1.w, r2.y, r1.w
      frc r2.x, r1.w
      add r2.y, r1.w, -r2.x
      slt r1.w, r1.w, -r1.w
      slt r2.x, -r2.x, r2.x
      mad r3.y, r1.w, r2.x, r2.y
      mul r2.xy, r5, r3
      mad o9.xy, r2.zwzw, r5, r2
      mov o8.x, r0.w
    else
      mov o9.xy, c10.y
      mov o8.x, c10.y
    endif
    mul r2, c1, v0.y
    mad r2, c0, v0.x, r2
    mad r2, c2, v0.z, r2
    add r2, r2, c3
    rcp r0.w, r2.w
    mul r2.xyz, r0.w, r2
    mul r3, r2.y, c5
    mad r3, c4, r2.x, r3
    mad r2, c6, r2.z, r3
    add o0, r2, c7
    mov o1, v1
    mov o2.x, v4.x
    mov o3.xyz, v0
    mov o4.xyz, r0
    mov o5.xyz, r1
    mov o7.x, v5.x
    mov o10.x, v7.x

// approximately 142 instruction slots used
#endif

const BYTE g_vs30_VS[] =
{
      0,   3, 254, 255, 254, 255, 
     62,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 194,   0, 
      0,   0,   0,   3, 254, 255, 
      4,   0,   0,   0,  28,   0, 
      0,   0,  16,   1,   0,   0, 
    187,   0,   0,   0, 108,   0, 
      0,   0,   2,   0,   0,   0, 
      4,   0,   0,   0, 116,   0, 
      0,   0,   0,   0,   0,   0, 
    132,   0,   0,   0,   2,   0, 
      4,   0,   4,   0,   0,   0, 
    116,   0,   0,   0,   0,   0, 
      0,   0, 138,   0,   0,   0, 
      2,   0,   8,   0,   1,   0, 
      0,   0, 152,   0,   0,   0, 
      0,   0,   0,   0, 168,   0, 
      0,   0,   2,   0,   9,   0, 
      1,   0,   0,   0, 152,   0, 
      0,   0,   0,   0,   0,   0, 
    109,  67,  97, 109, 101, 114, 
     97,   0,   3,   0,   3,   0, 
      4,   0,   4,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    109,  80, 114, 111, 106,   0, 
    109,  85,  86,  73, 110, 118, 
    101, 114, 115, 101, 100,   0, 
    171, 171,   1,   0,   3,   0, 
      1,   0,   4,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    109, 102, 108, 105, 112,  98, 
    111, 111, 107,  80,  97, 114, 
     97, 109, 101, 116, 101, 114, 
      0, 118, 115,  95,  51,  95, 
     48,   0,  77, 105,  99, 114, 
    111, 115, 111, 102, 116,  32, 
     40,  82,  41,  32,  72,  76, 
     83,  76,  32,  83, 104,  97, 
    100, 101, 114,  32,  67, 111, 
    109, 112, 105, 108, 101, 114, 
     32,  57,  46,  50,  57,  46, 
     57,  53,  50,  46,  51,  49, 
     49,  49,   0, 171,  81,   0, 
      0,   5,  10,   0,  15, 160, 
      0,   0,   0, 191,   0,   0, 
      0,   0,   0,   0, 128,  63, 
      0,   0, 128, 191,  81,   0, 
      0,   5,  11,   0,  15, 160, 
      0,   0, 128, 191,   0,   0, 
      0, 192,   0,   0, 128,  64, 
      0,   0,   0,   0,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      0,   0,  15, 144,  31,   0, 
      0,   2,   3,   0,   0, 128, 
      1,   0,  15, 144,  31,   0, 
      0,   2,   3,   0,   1, 128, 
      2,   0,  15, 144,  31,   0, 
      0,   2,   3,   0,   2, 128, 
      3,   0,  15, 144,  31,   0, 
      0,   2,   5,   0,   0, 128, 
      4,   0,  15, 144,  31,   0, 
      0,   2,   5,   0,   2, 128, 
      5,   0,  15, 144,  31,   0, 
      0,   2,   5,   0,   3, 128, 
      6,   0,  15, 144,  31,   0, 
      0,   2,   5,   0,   4, 128, 
      7,   0,  15, 144,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      0,   0,  15, 224,  31,   0, 
      0,   2,  10,   0,   0, 128, 
      1,   0,  15, 224,  31,   0, 
      0,   2,   5,   0,   0, 128, 
      2,   0,   3, 224,  31,   0, 
      0,   2,   5,   0,   1, 128, 
      3,   0,   7, 224,  31,   0, 
      0,   2,   5,   0,   2, 128, 
      4,   0,   7, 224,  31,   0, 
      0,   2,   5,   0,   3, 128, 
      5,   0,   7, 224,  31,   0, 
      0,   2,   5,   0,   4, 128, 
      6,   0,   7, 224,  31,   0, 
      0,   2,   5,   0,   5, 128, 
      7,   0,   3, 224,  31,   0, 
      0,   2,   5,   0,   6, 128, 
      8,   0,   1, 224,  31,   0, 
      0,   2,   5,   0,   7, 128, 
      9,   0,   3, 224,  31,   0, 
      0,   2,   5,   0,   8, 128, 
     10,   0,   1, 224,   2,   0, 
      0,   3,   0,   0,   7, 128, 
     10,   0,   0, 160,   2,   0, 
    228, 144,   2,   0,   0,   3, 
      0,   0,   7, 128,   0,   0, 
    228, 128,   0,   0, 228, 128, 
      2,   0,   0,   3,   1,   0, 
      7, 128,  10,   0,   0, 160, 
      3,   0, 228, 144,   2,   0, 
      0,   3,   1,   0,   7, 128, 
      1,   0, 228, 128,   1,   0, 
    228, 128,   5,   0,   0,   3, 
      2,   0,   7, 128,   0,   0, 
    210, 128,   1,   0, 201, 128, 
      4,   0,   0,   4,   6,   0, 
      7, 224,   0,   0, 201, 128, 
      1,   0, 210, 128,   2,   0, 
    228, 129,   4,   0,   0,   4, 
      2,   0,   2, 224,   8,   0, 
     85, 160,   4,   0,  85, 144, 
      8,   0,   0, 160,   4,   0, 
      0,   4,   7,   0,   2, 224, 
      8,   0,  85, 160,   5,   0, 
     85, 144,   8,   0,   0, 160, 
      1,   0,   0,   2,   2,   0, 
     15, 128,   9,   0, 228, 160, 
     41,   0,   4,   2,  10,   0, 
     85, 160,   2,   0,   0, 128, 
     19,   0,   0,   2,   0,   0, 
      8, 128,   6,   0,   0, 144, 
      2,   0,   0,   3,   3,   0, 
      1, 128,   0,   0, 255, 129, 
      6,   0,   0, 144,   2,   0, 
      0,   3,   1,   0,   8, 128, 
     10,   0, 170, 160,   6,   0, 
      0, 144,  35,   0,   0,   2, 
      2,   0,   1, 128,   9,   0, 
     85, 160,  41,   0,   3,   2, 
      2,   0,   0, 129,   2,   0, 
      0, 128,   5,   0,   0,   3, 
      2,   0,   1, 128,   9,   0, 
    255, 160,   9,   0, 170, 160, 
     13,   0,   0,   3,   2,   0, 
      1, 128,   1,   0, 255, 128, 
      2,   0,   0, 128,   4,   0, 
      0,   4,   3,   0,   4, 128, 
      2,   0, 170, 128,   2,   0, 
    255, 128,  10,   0, 255, 160, 
      2,   0,   0,   3,   3,   0, 
      2, 128,  10,   0, 170, 160, 
      6,   0,   0, 144,  18,   0, 
      0,   4,   4,   0,   3, 128, 
      2,   0,   0, 128,   3,   0, 
    170, 128,   3,   0, 225, 128, 
      1,   0,   0,   2,   3,   0, 
      1, 128,   4,   0,  85, 128, 
     42,   0,   0,   0,   2,   0, 
      0,   3,   2,   0,   3, 128, 
      2,   0,  85, 128,  11,   0, 
    228, 160,   5,   0,   0,   3, 
      3,   0,   2, 128,   9,   0, 
    255, 160,   9,   0, 170, 160, 
      5,   0,   0,   3,   3,   0, 
      4, 128,   1,   0, 255, 128, 
      3,   0,  85, 128,  13,   0, 
      0,   3,   3,   0,   4, 128, 
      3,   0, 170, 128,   3,   0, 
    170, 129,  18,   0,   0,   4, 
      4,   0,   2, 128,   3,   0, 
    170, 128,   3,   0,  85, 128, 
      3,   0,  85, 129,   6,   0, 
      0,   2,   3,   0,   4, 128, 
      4,   0,  85, 128,   5,   0, 
      0,   3,   3,   0,   4, 128, 
      1,   0, 255, 128,   3,   0, 
    170, 128,  13,   0,   0,   3, 
      2,   0,   3, 128,   2,   0, 
    228, 140,   2,   0, 228, 139, 
      2,   0,   0,   3,   3,   0, 
      8, 128,   0,   0, 255, 129, 
      1,   0, 255, 128,   6,   0, 
      0,   2,   4,   0,   4, 128, 
      3,   0,  85, 128,   5,   0, 
      0,   3,   4,   0,   4, 128, 
      3,   0, 255, 128,   4,   0, 
    170, 128,   2,   0,   0,   3, 
      4,   0,   8, 128,   4,   0, 
    170, 128,   4,   0, 170, 128, 
     13,   0,   0,   3,   4,   0, 
      8, 128,   4,   0, 255, 128, 
      4,   0, 255, 129,   4,   0, 
      0,   4,   4,   0,   8, 128, 
      4,   0, 255, 128,  11,   0, 
    170, 160,  11,   0,  85, 160, 
      6,   0,   0,   2,   5,   0, 
      1, 128,   4,   0, 255, 128, 
      5,   0,   0,   3,   4,   0, 
      4, 128,   4,   0, 170, 128, 
      5,   0,   0, 128,  19,   0, 
      0,   2,   4,   0,   4, 128, 
      4,   0, 170, 128,   4,   0, 
      0,   4,   4,   0,   4, 128, 
      4,   0, 255, 128,   4,   0, 
    170, 128,  10,   0, 255, 160, 
     13,   0,   0,   3,   4,   0, 
      4, 128,   4,   0, 170, 140, 
      4,   0, 170, 139,  12,   0, 
      0,   3,   4,   0,   8, 128, 
      1,   0, 255, 128,   1,   0, 
    255, 129,  12,   0,   0,   3, 
      5,   0,   1, 128,   0,   0, 
    255, 129,   0,   0, 255, 128, 
      4,   0,   0,   4,   3,   0, 
      8, 128,   4,   0, 255, 128, 
      5,   0,   0, 128,   3,   0, 
    255, 128,   5,   0,   0,   3, 
      4,   0,   8, 128,   3,   0, 
     85, 128,   3,   0, 255, 128, 
     13,   0,   0,   3,   4,   0, 
      8, 128,   4,   0, 255, 128, 
      4,   0, 255, 129,  18,   0, 
      0,   4,   5,   0,   1, 128, 
      4,   0, 255, 128,   3,   0, 
     85, 128,   3,   0,  85, 129, 
      6,   0,   0,   2,   3,   0, 
      2, 128,   5,   0,   0, 128, 
      5,   0,   0,   3,   3,   0, 
      2, 128,   3,   0,  85, 128, 
      3,   0, 255, 128,  19,   0, 
      0,   2,   3,   0,   6, 128, 
      3,   0, 228, 128,   5,   0, 
      0,   3,   3,   0,   2, 128, 
      3,   0,  85, 128,   5,   0, 
      0, 128,   4,   0,   0,   4, 
      2,   0,   4, 128,   2,   0, 
    170, 128,   2,   0, 255, 128, 
     10,   0, 255, 160,   4,   0, 
      0,   4,   2,   0,   4, 128, 
      3,   0,  85, 128,  11,   0, 
     85, 160,   2,   0, 170, 128, 
      4,   0,   0,   4,   2,   0, 
      4, 128,   4,   0, 170, 128, 
      2,   0, 170, 128,   3,   0, 
     85, 128,  18,   0,   0,   4, 
      3,   0,   2, 128,   2,   0, 
     85, 128,   2,   0, 170, 128, 
      1,   0, 255, 128,   4,   0, 
      0,   4,   1,   0,   8, 128, 
      4,   0,  85, 128,   3,   0, 
    170, 128,   3,   0,  85, 129, 
      4,   0,   0,   4,   4,   0, 
      1, 128,   2,   0,   0, 128, 
      1,   0, 255, 128,   3,   0, 
     85, 128,  43,   0,   0,   0, 
     19,   0,   0,   2,   1,   0, 
      8, 128,   3,   0,   0, 128, 
      2,   0,   0,   3,   2,   0, 
      1, 128,   3,   0,   0, 128, 
      1,   0, 255, 129,  12,   0, 
      0,   3,   2,   0,   2, 128, 
      3,   0,   0, 128,   3,   0, 
      0, 129,  12,   0,   0,   3, 
      1,   0,   8, 128,   1,   0, 
    255, 129,   1,   0, 255, 128, 
      4,   0,   0,   4,   1,   0, 
      8, 128,   2,   0,  85, 128, 
      1,   0, 255, 128,   2,   0, 
      0, 128,  19,   0,   0,   2, 
      2,   0,   3, 128,   9,   0, 
    238, 160,   2,   0,   0,   3, 
      2,   0,  12, 128,   2,   0, 
     68, 129,   9,   0, 228, 160, 
     12,   0,   0,   3,   3,   0, 
      3, 128,   9,   0, 238, 160, 
      9,   0, 238, 161,  12,   0, 
      0,   3,   2,   0,   3, 128, 
      2,   0, 228, 129,   2,   0, 
    228, 128,   4,   0,   0,   4, 
      2,   0,   3, 128,   3,   0, 
    228, 128,   2,   0, 228, 128, 
      2,   0, 238, 128,   5,   0, 
      0,   3,   2,   0,   4, 128, 
      1,   0, 255, 128,   2,   0, 
      0, 128,  13,   0,   0,   3, 
      2,   0,   4, 128,   2,   0, 
    170, 128,   2,   0, 170, 129, 
     18,   0,   0,   4,   3,   0, 
      1, 128,   2,   0, 170, 128, 
      2,   0,   0, 128,   2,   0, 
      0, 129,   6,   0,   0,   2, 
      2,   0,   4, 128,   3,   0, 
      0, 128,   5,   0,   0,   3, 
      2,   0,   4, 128,   1,   0, 
    255, 128,   2,   0, 170, 128, 
     19,   0,   0,   2,   2,   0, 
      4, 128,   2,   0, 170, 128, 
      5,   0,   0,   3,   2,   0, 
      4, 128,   2,   0, 170, 128, 
      3,   0,   0, 128,  19,   0, 
      0,   2,   2,   0,   8, 128, 
      2,   0, 170, 128,   2,   0, 
      0,   3,   3,   0,   1, 128, 
      2,   0, 170, 128,   2,   0, 
    255, 129,  12,   0,   0,   3, 
      2,   0,   4, 128,   2,   0, 
    170, 128,   2,   0, 170, 129, 
     12,   0,   0,   3,   2,   0, 
      8, 128,   2,   0, 255, 129, 
      2,   0, 255, 128,   4,   0, 
      0,   4,   3,   0,   1, 128, 
      2,   0, 170, 128,   2,   0, 
    255, 128,   3,   0,   0, 128, 
      6,   0,   0,   2,   2,   0, 
      2, 128,   2,   0,  85, 128, 
      5,   0,   0,   3,   1,   0, 
      8, 128,   1,   0, 255, 128, 
      2,   0,  85, 128,  19,   0, 
      0,   2,   2,   0,   4, 128, 
      1,   0, 255, 128,   2,   0, 
      0,   3,   2,   0,   8, 128, 
      1,   0, 255, 128,   2,   0, 
    170, 129,  12,   0,   0,   3, 
      1,   0,   8, 128,   1,   0, 
    255, 128,   1,   0, 255, 129, 
     12,   0,   0,   3,   2,   0, 
      4, 128,   2,   0, 170, 129, 
      2,   0, 170, 128,   4,   0, 
      0,   4,   3,   0,   2, 128, 
      1,   0, 255, 128,   2,   0, 
    170, 128,   2,   0, 255, 128, 
      6,   0,   0,   2,   5,   0, 
      1, 128,   9,   0, 170, 160, 
      6,   0,   0,   2,   5,   0, 
      2, 128,   9,   0, 255, 160, 
      5,   0,   0,   3,   2,   0, 
     12, 128,   3,   0,  68, 128, 
      5,   0,  68, 128,   5,   0, 
      0,   3,   2,   0,  12, 128, 
      2,   0, 228, 129,   9,   0, 
    228, 160,  19,   0,   0,   2, 
      1,   0,   8, 128,   4,   0, 
      0, 128,   2,   0,   0,   3, 
      3,   0,   1, 128,   4,   0, 
      0, 128,   1,   0, 255, 129, 
     12,   0,   0,   3,   3,   0, 
      2, 128,   4,   0,   0, 128, 
      4,   0,   0, 129,  12,   0, 
      0,   3,   1,   0,   8, 128, 
      1,   0, 255, 129,   1,   0, 
    255, 128,   4,   0,   0,   4, 
      1,   0,   8, 128,   3,   0, 
     85, 128,   1,   0, 255, 128, 
      3,   0,   0, 128,   5,   0, 
      0,   3,   3,   0,   1, 128, 
      2,   0,   0, 128,   1,   0, 
    255, 128,  13,   0,   0,   3, 
      3,   0,   1, 128,   3,   0, 
      0, 128,   3,   0,   0, 129, 
     18,   0,   0,   4,   4,   0, 
      1, 128,   3,   0,   0, 128, 
      2,   0,   0, 128,   2,   0, 
      0, 129,   6,   0,   0,   2, 
      2,   0,   1, 128,   4,   0, 
      0, 128,   5,   0,   0,   3, 
      2,   0,   1, 128,   1,   0, 
    255, 128,   2,   0,   0, 128, 
     19,   0,   0,   2,   2,   0, 
      1, 128,   2,   0,   0, 128, 
      5,   0,   0,   3,   2,   0, 
      1, 128,   2,   0,   0, 128, 
      4,   0,   0, 128,  19,   0, 
      0,   2,   3,   0,   1, 128, 
      2,   0,   0, 128,   2,   0, 
      0,   3,   3,   0,   2, 128, 
      2,   0,   0, 128,   3,   0, 
      0, 129,  12,   0,   0,   3, 
      2,   0,   1, 128,   2,   0, 
      0, 128,   2,   0,   0, 129, 
     12,   0,   0,   3,   3,   0, 
      1, 128,   3,   0,   0, 129, 
      3,   0,   0, 128,   4,   0, 
      0,   4,   3,   0,   1, 128, 
      2,   0,   0, 128,   3,   0, 
      0, 128,   3,   0,  85, 128, 
      5,   0,   0,   3,   1,   0, 
      8, 128,   2,   0,  85, 128, 
      1,   0, 255, 128,  19,   0, 
      0,   2,   2,   0,   1, 128, 
      1,   0, 255, 128,   2,   0, 
      0,   3,   2,   0,   2, 128, 
      1,   0, 255, 128,   2,   0, 
      0, 129,  12,   0,   0,   3, 
      1,   0,   8, 128,   1,   0, 
    255, 128,   1,   0, 255, 129, 
     12,   0,   0,   3,   2,   0, 
      1, 128,   2,   0,   0, 129, 
      2,   0,   0, 128,   4,   0, 
      0,   4,   3,   0,   2, 128, 
      1,   0, 255, 128,   2,   0, 
      0, 128,   2,   0,  85, 128, 
      5,   0,   0,   3,   2,   0, 
      3, 128,   5,   0, 228, 128, 
      3,   0, 228, 128,   4,   0, 
      0,   4,   9,   0,   3, 224, 
      2,   0, 238, 128,   5,   0, 
    228, 128,   2,   0, 228, 128, 
      1,   0,   0,   2,   8,   0, 
      1, 224,   0,   0, 255, 128, 
     42,   0,   0,   0,   1,   0, 
      0,   2,   9,   0,   3, 224, 
     10,   0,  85, 160,   1,   0, 
      0,   2,   8,   0,   1, 224, 
     10,   0,  85, 160,  43,   0, 
      0,   0,   5,   0,   0,   3, 
      2,   0,  15, 128,   1,   0, 
    228, 160,   0,   0,  85, 144, 
      4,   0,   0,   4,   2,   0, 
     15, 128,   0,   0, 228, 160, 
      0,   0,   0, 144,   2,   0, 
    228, 128,   4,   0,   0,   4, 
      2,   0,  15, 128,   2,   0, 
    228, 160,   0,   0, 170, 144, 
      2,   0, 228, 128,   2,   0, 
      0,   3,   2,   0,  15, 128, 
      2,   0, 228, 128,   3,   0, 
    228, 160,   6,   0,   0,   2, 
      0,   0,   8, 128,   2,   0, 
    255, 128,   5,   0,   0,   3, 
      2,   0,   7, 128,   0,   0, 
    255, 128,   2,   0, 228, 128, 
      5,   0,   0,   3,   3,   0, 
     15, 128,   2,   0,  85, 128, 
      5,   0, 228, 160,   4,   0, 
      0,   4,   3,   0,  15, 128, 
      4,   0, 228, 160,   2,   0, 
      0, 128,   3,   0, 228, 128, 
      4,   0,   0,   4,   2,   0, 
     15, 128,   6,   0, 228, 160, 
      2,   0, 170, 128,   3,   0, 
    228, 128,   2,   0,   0,   3, 
      0,   0,  15, 224,   2,   0, 
    228, 128,   7,   0, 228, 160, 
      1,   0,   0,   2,   1,   0, 
     15, 224,   1,   0, 228, 144, 
      1,   0,   0,   2,   2,   0, 
      1, 224,   4,   0,   0, 144, 
      1,   0,   0,   2,   3,   0, 
      7, 224,   0,   0, 228, 144, 
      1,   0,   0,   2,   4,   0, 
      7, 224,   0,   0, 228, 128, 
      1,   0,   0,   2,   5,   0, 
      7, 224,   1,   0, 228, 128, 
      1,   0,   0,   2,   7,   0, 
      1, 224,   5,   0,   0, 144, 
      1,   0,   0,   2,  10,   0, 
      1, 224,   7,   0,   0, 144, 
    255, 255,   0,   0
};
