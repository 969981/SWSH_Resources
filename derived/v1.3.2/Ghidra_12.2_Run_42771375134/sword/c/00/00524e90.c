/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00524e90; name: FUN_00524e90
 */


undefined4 FUN_00524e90(float param_1,long param_2,uint param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139f8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x4aa9);
    FUN_00517ae0((double)param_1,
                 "Frame: %d, View: %d, SetAutoExposureMiddleGray(iEffectViewIndex: %d, eDelayMode: %d, fDelayTime: %f);\n"
                 ,*(undefined4 *)(*(long *)(param_2 + 0x290) + (long)*(int *)(param_2 + 0x298) * 4),
                 (long)*(int *)(param_2 + 0x298),param_3,param_4);
  }
  if (param_3 == 0xffffffff) {
    param_3 = *(uint *)(param_2 + 0x298);
    iVar5 = *(int *)(param_2 + 0x400);
  }
  else {
    iVar5 = *(int *)(param_2 + 0x400);
  }
  if (iVar5 < 1) {
    uVar2 = 0;
  }
  else if (param_3 == 0x7fffffff) {
    lVar3 = 0;
    lVar6 = 0;
    uVar2 = 0;
    do {
      lVar1 = *(long *)(param_2 + 0x2a0) + lVar3;
      lVar3 = lVar3 + 0x78;
      *(undefined4 *)(lVar1 + 0x28) = param_4;
      *(float *)(lVar1 + 0x2c) = param_1;
      lVar6 = lVar6 + 1;
      if (*(long *)(lVar1 + 0x70) == 0) {
        uVar2 = 1;
      }
    } while (lVar6 < *(int *)(param_2 + 0x400));
  }
  else {
    uVar4 = 0;
    uVar2 = 0;
    do {
      if (param_3 == uVar4) {
        lVar3 = *(long *)(param_2 + 0x2a0) + (ulong)param_3 * 0x78;
        *(undefined4 *)(lVar3 + 0x28) = param_4;
        *(float *)(lVar3 + 0x2c) = param_1;
        iVar5 = *(int *)(param_2 + 0x400);
        if (*(long *)(lVar3 + 0x70) == 0) {
          uVar2 = 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)iVar5);
  }
  return uVar2;
}


