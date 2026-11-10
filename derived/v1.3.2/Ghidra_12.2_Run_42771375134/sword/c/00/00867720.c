/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00867720; name: FUN_00867720
 */


int FUN_00867720(long param_1,uint param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  param_2 = param_2 >> 1;
  uVar9 = (ulong)param_2;
  if (param_2 == 0) {
    return 0;
  }
  if (uVar9 - 1 < 3) {
    lVar8 = 0;
    iVar5 = 0;
  }
  else {
    lVar8 = 0;
    iVar5 = 0;
    puVar6 = (ushort *)(param_1 + 4);
    do {
      puVar2 = puVar6 + -2;
      puVar3 = puVar6 + -1;
      uVar4 = *puVar6;
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 4;
      lVar8 = lVar8 + 4;
      iVar5 = (uint)*puVar1 + (uint)uVar4 + (uint)*puVar3 + (uint)*puVar2 + iVar5;
    } while (uVar9 - (uVar9 & 3) != lVar8);
  }
  if ((param_2 & 3) != 0) {
    lVar7 = -(uVar9 & 3);
    puVar6 = (ushort *)(param_1 + lVar8 * 2);
    do {
      iVar5 = (uint)*puVar6 + iVar5;
      lVar7 = lVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  return iVar5;
}


