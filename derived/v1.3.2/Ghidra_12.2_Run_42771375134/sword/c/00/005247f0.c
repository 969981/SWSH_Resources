/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005247f0; name: FUN_005247f0
 */


undefined4 FUN_005247f0(long param_1,uint param_2,byte param_3)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139f8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x48f6);
    pcVar1 = "true";
    if ((param_3 & 1) == 0) {
      pcVar1 = "false";
    }
    FUN_00517ae0("Frame: %d, View: %d, SetAutoExposureEnable(iEffectViewIndex: %d, bAutoExposureEnable: %s);\n"
                 ,*(undefined4 *)(*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
                 (long)*(int *)(param_1 + 0x298),param_2,pcVar1);
  }
  if (param_2 == 0xffffffff) {
    param_2 = *(uint *)(param_1 + 0x298);
    iVar2 = *(int *)(param_1 + 0x400);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x400);
  }
  if (iVar2 < 1) {
    return 0;
  }
  if (param_2 == 0x7fffffff) {
    lVar5 = 0;
    lVar7 = 0;
    uVar4 = 0;
    do {
      pbVar8 = (byte *)(*(long *)(param_1 + 0x2a0) + lVar5);
      lVar5 = lVar5 + 0x78;
      bVar3 = *(long *)(pbVar8 + 0x70) != 0;
      *pbVar8 = bVar3 & param_3;
      lVar7 = lVar7 + 1;
      if (!bVar3) {
        uVar4 = 1;
      }
    } while (lVar7 < *(int *)(param_1 + 0x400));
  }
  else {
    uVar6 = 0;
    uVar4 = 0;
    do {
      if (param_2 == uVar6) {
        pbVar8 = (byte *)(*(long *)(param_1 + 0x2a0) + (ulong)param_2 * 0x78);
        bVar3 = *(long *)(pbVar8 + 0x70) != 0;
        if (!bVar3) {
          uVar4 = 1;
        }
        *pbVar8 = bVar3 & param_3;
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0x400));
  }
  return uVar4;
}


