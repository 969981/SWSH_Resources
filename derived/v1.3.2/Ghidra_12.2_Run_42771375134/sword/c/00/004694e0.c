/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004694e0; name: FUN_004694e0
 */


long FUN_004694e0(uint *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  if (*param_1 == 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 2);
  uVar6 = 0;
  uVar7 = 0;
  lVar4 = 0;
  do {
    uVar3 = *(int *)(lVar5 + 4) - param_2;
    uVar1 = -uVar3;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    uVar6 = uVar6 + 1;
    lVar2 = lVar5;
    if (lVar4 != 0 && uVar7 <= uVar1) {
      lVar2 = lVar4;
      uVar1 = uVar7;
    }
    uVar7 = uVar1;
    lVar5 = lVar5 + 0x10;
    lVar4 = lVar2;
  } while (uVar6 < *param_1);
  return lVar2;
}


