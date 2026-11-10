/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00524d40; name: FUN_00524d40
 */


undefined4 FUN_00524d40(float param_1,float param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139f8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x49f5);
    FUN_00517ae0((double)param_1,(double)param_2,
                 "Frame: %d, View: %d, SetAutoExposureMiddleGray(iEffectViewIndex: %d, fMiddleGray: %f, fInfluencedByGlare: %f);\n"
                 ,*(undefined4 *)(*(long *)(param_3 + 0x290) + (long)*(int *)(param_3 + 0x298) * 4),
                 (long)*(int *)(param_3 + 0x298),param_4);
  }
  if (param_4 == 0xffffffff) {
    param_4 = *(uint *)(param_3 + 0x298);
    iVar5 = *(int *)(param_3 + 0x400);
  }
  else {
    iVar5 = *(int *)(param_3 + 0x400);
  }
  if (iVar5 < 1) {
    return 0;
  }
  if (param_4 == 0x7fffffff) {
    lVar3 = 0;
    lVar6 = 0;
    uVar2 = 0;
    do {
      lVar1 = *(long *)(param_3 + 0x2a0) + lVar3;
      lVar3 = lVar3 + 0x78;
      *(float *)(lVar1 + 4) = param_1;
      *(float *)(lVar1 + 8) = param_2;
      lVar6 = lVar6 + 1;
      if (*(long *)(lVar1 + 0x70) == 0) {
        uVar2 = 1;
      }
    } while (lVar6 < *(int *)(param_3 + 0x400));
  }
  else {
    uVar4 = 0;
    uVar2 = 0;
    do {
      if (param_4 == uVar4) {
        lVar3 = *(long *)(param_3 + 0x2a0) + (ulong)param_4 * 0x78;
        *(float *)(lVar3 + 4) = param_1;
        *(float *)(lVar3 + 8) = param_2;
        iVar5 = *(int *)(param_3 + 0x400);
        if (*(long *)(lVar3 + 0x70) == 0) {
          uVar2 = 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)iVar5);
  }
  return uVar2;
}


