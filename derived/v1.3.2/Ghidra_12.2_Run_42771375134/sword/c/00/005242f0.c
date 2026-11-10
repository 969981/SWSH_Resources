/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005242f0; name: FUN_005242f0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_005242f0(float param_1,float param_2,float param_3,float param_4,char *param_5,byte param_6)

{
  float fVar1;
  
  if (*param_5 != '\0') {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return 0xffffffff;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x9575);
    FUN_00517ae0(
                "CPostEffect::SetRenderSceneViewportScale(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
                );
    return 0xffffffff;
  }
  if ((param_3 != 0.0) || (param_4 != 0.0)) {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return 0xfffffffc;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x957d);
    FUN_00517ae0(
                "CPostEffect::SetRenderSceneViewportScale(): Not supported. Both of fOffsetX and fOffsetY must be zero.\n"
                );
    return 0xfffffffc;
  }
  if (0.0 <= param_1) {
    *(float *)(param_5 + 0x800) = param_1;
  }
  if (0.0 <= param_2) {
    *(float *)(param_5 + 0x804) = param_2;
  }
  if (0.0 <= param_3) {
    *(float *)(param_5 + 0x808) = param_3;
  }
  if (0.0 <= param_4) {
    *(float *)(param_5 + 0x80c) = param_4;
    fVar1 = *(float *)(param_5 + 0x800);
  }
  else {
    fVar1 = *(float *)(param_5 + 0x800);
  }
  if (fVar1 == 0.0) {
    param_5[0x800] = '\0';
    param_5[0x801] = '\0';
    param_5[0x802] = -0x80;
    param_5[0x803] = '?';
  }
  if (*(float *)(param_5 + 0x804) == 0.0) {
    param_5[0x804] = '\0';
    param_5[0x805] = '\0';
    param_5[0x806] = -0x80;
    param_5[0x807] = '?';
  }
  param_5[0x810] = param_6 & 1;
  return 0;
}


