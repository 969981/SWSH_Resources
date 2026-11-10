/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00552dd0; name: FUN_00552dd0
 */


int * FUN_00552dd0(int *param_1,char *param_2,uint param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("szDefSpace","C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",0x8a8,
                  "CutLeft");
  }
  if ((int)param_3 < 0) {
    sVar5 = strlen(param_2);
    param_3 = (uint)sVar5;
  }
  if ((0 < *param_1) && (0 < (int)param_3)) {
    uVar3 = param_3 & 3;
    uVar6 = 1;
    do {
      cVar4 = *(char *)(*(long *)(param_1 + 2) + uVar6 + -1);
      lVar7 = 1;
      bVar1 = true;
      if (2 < (ulong)(param_3 + 1) - 2) {
        do {
          pcVar8 = param_2 + lVar7;
          lVar7 = lVar7 + 4;
          bVar1 = (bool)(bVar1 & cVar4 != pcVar8[-1] & cVar4 != *pcVar8 & cVar4 != pcVar8[1] &
                        cVar4 != pcVar8[2]);
        } while ((ulong)(param_3 + 1) - (ulong)uVar3 != lVar7);
      }
      if (uVar3 != 0) {
        pcVar8 = param_2 + lVar7 + -1;
        lVar7 = -(ulong)uVar3;
        do {
          lVar7 = lVar7 + 1;
          bVar1 = (bool)(bVar1 & cVar4 != *pcVar8);
          pcVar8 = pcVar8 + 1;
        } while (lVar7 != 0);
      }
      if (bVar1) {
        if ((uint)uVar6 < 2) {
          return param_1;
        }
        goto LAB_00552ee0;
      }
      uVar2 = uVar6 + 1;
      bVar1 = (long)uVar6 < (long)*param_1;
      uVar6 = uVar2;
    } while (bVar1);
    uVar6 = uVar2 & 0xffffffff;
LAB_00552ee0:
    FUN_00551eb0(param_1,uVar6);
  }
  return param_1;
}


