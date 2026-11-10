/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005396e0; name: FUN_005396e0
 */


uint FUN_005396e0(char *param_1,undefined4 param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_02713970;
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139f8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x8585);
    FUN_00517ae0("Frame: %d, View: %d, ApplyEffects(uiEffectFlags: %08x);\n",
                 *(undefined4 *)(*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
                 (long)*(int *)(param_1 + 0x298),param_2);
  }
  if (*param_1 != '\0') {
    if (*(int *)puVar1 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return 0xffffffff;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x858d);
    pcVar3 = 
    "CPostEffect::ApplyEffects(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
    ;
LAB_005397bc:
    FUN_00517ae0(pcVar3);
    return 0xffffffff;
  }
  if (param_1[0x1d3] == '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x6b0);
    param_1[0x6b0] = '\x03';
    param_1[0x6b1] = '\0';
    param_1[0x6b2] = '\0';
    param_1[0x6b3] = '\0';
    uVar2 = (uint)(*(long *)(*(long *)(param_1 + 400) + 0x58) != 0);
    *(uint *)(param_1 + 0x6b4) = uVar2;
    *(uint *)(*(long *)(param_1 + 400) + 0x94) = uVar2;
  }
  else {
    if (*(long *)(param_1 + 0x70) == 0) {
      if (*(int *)puVar1 == 0) {
        return 0xffffffff;
      }
      if (*(int *)PTR_DAT_02713980 == 0) {
        return 0xffffffff;
      }
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x85a6);
      pcVar3 = 
      "CPostEffect::ApplyEffects(): At least SetEffectSource() must be called if initialized with PFXINIT_RENDERSCENE_EXTERNAL flag.\n"
      ;
      goto LAB_005397bc;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x6b0);
    param_1[0x6b0] = '\x03';
    param_1[0x6b1] = '\0';
    param_1[0x6b2] = '\0';
    param_1[0x6b3] = '\0';
    param_1[0x6b4] = '\0';
    param_1[0x6b5] = '\0';
    param_1[0x6b6] = '\0';
    param_1[0x6b7] = '\0';
  }
  FUN_005267b0(DAT_01d4c5a8,param_1,0,0,0,0xffffffff);
  uVar2 = FUN_005347a0(param_1,param_2,0);
  FUN_005252f0(param_1,uVar4);
  return uVar2 & (int)uVar2 >> 0x1f;
}


