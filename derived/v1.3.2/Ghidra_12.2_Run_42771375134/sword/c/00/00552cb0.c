/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00552cb0; name: FUN_00552cb0
 */


int * FUN_00552cb0(int *param_1,uint *param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  
  if (0 < *param_1) {
    uVar3 = *param_2;
    if (0 < (int)uVar3) {
      uVar6 = (ulong)uVar3 & 3;
      uVar5 = 1;
      do {
        cVar4 = *(char *)(*(long *)(param_1 + 2) + uVar5 + -1);
        lVar7 = 1;
        bVar1 = true;
        if (2 < (ulong)(uVar3 + 1) - 2) {
          do {
            pcVar8 = (char *)(*(long *)(param_2 + 2) + lVar7);
            lVar7 = lVar7 + 4;
            bVar1 = (bool)(bVar1 & cVar4 != pcVar8[-1] & cVar4 != *pcVar8 & cVar4 != pcVar8[1] &
                          cVar4 != pcVar8[2]);
          } while ((uVar3 + 1) - uVar6 != lVar7);
        }
        if ((int)uVar6 != 0) {
          pcVar8 = (char *)(*(long *)(param_2 + 2) + -1 + lVar7);
          lVar7 = -uVar6;
          do {
            lVar7 = lVar7 + 1;
            bVar1 = (bool)(bVar1 & cVar4 != *pcVar8);
            pcVar8 = pcVar8 + 1;
          } while (lVar7 != 0);
        }
        if (bVar1) {
          if ((uint)uVar5 < 2) {
            return param_1;
          }
          goto LAB_00552dac;
        }
        uVar2 = uVar5 + 1;
        bVar1 = (long)uVar5 < (long)*param_1;
        uVar5 = uVar2;
      } while (bVar1);
      uVar5 = uVar2 & 0xffffffff;
LAB_00552dac:
      FUN_00551eb0(param_1,uVar5);
    }
  }
  return param_1;
}


