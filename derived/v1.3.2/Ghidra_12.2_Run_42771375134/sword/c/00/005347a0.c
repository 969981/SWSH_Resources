/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005347a0; name: FUN_005347a0
 */


uint FUN_005347a0(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_02713970;
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139f8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x7529);
    FUN_00517ae0("Frame: %d, View: %d, EndPostEffectScene(uiEffectFlags: %08x, nManualMultisamples: %d);\n"
                 ,*(undefined4 *)(*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
                 (long)*(int *)(param_1 + 0x298),param_2,param_3);
  }
  iVar2 = FUN_00534890(param_1,param_2,param_3);
  if ((iVar2 < 0) && (*(int *)puVar1 != 0 && *(int *)PTR_DAT_02713980 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x7533);
    uVar4 = FUN_00546ea0(iVar2);
    FUN_00517ae0("CPostEffect::EndPostEffectScene(): EndPostEffectScene_Process() failed (0x%x: %s).\n"
                 ,iVar2,uVar4);
  }
  uVar3 = FUN_005262c0(param_1);
  return uVar3 & (int)uVar3 >> 0x1f;
}


