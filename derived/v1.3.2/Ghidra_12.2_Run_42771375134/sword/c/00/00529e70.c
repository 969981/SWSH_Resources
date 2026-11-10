/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00529e70; name: FUN_00529e70
 */


float FUN_00529e70(long param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = param_2;
  if (param_2 == -1) {
    iVar1 = *(int *)(param_1 + 0x298);
  }
  fVar2 = *(float *)(*(long *)(param_1 + 0x2a0) + (long)iVar1 * 0x78 + 0x60);
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139f8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x4894);
    FUN_00517ae0((double)fVar2,
                 "Frame: %d, View: %d, %f GetAutoExposureAdjustedApi(iEffectViewIndex: %d);\n",
                 *(undefined4 *)(*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
                 (long)*(int *)(param_1 + 0x298),param_2);
  }
  return fVar2;
}


