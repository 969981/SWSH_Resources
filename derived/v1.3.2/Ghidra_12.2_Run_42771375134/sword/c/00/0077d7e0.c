/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077d7e0; name: FUN_0077d7e0
 */


int FUN_0077d7e0(ushort *param_1,ushort *param_2,uint param_3)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  long lVar11;
  int iVar12;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar6 = 0;
  do {
    while( true ) {
      uVar3 = *param_2;
      *param_1 = uVar3;
      if (uVar3 == 0x10) break;
      if (uVar3 == 0) {
        return iVar6;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar6 = iVar6 + 1;
      param_3 = param_3 - 1;
      if (param_3 == 0) goto LAB_0077d904;
    }
    puVar7 = param_2 + 1;
    uVar3 = *puVar7;
    uVar2 = uVar3 + 2;
    bVar5 = param_3 < uVar2;
    param_3 = param_3 - uVar2;
    if (bVar5 || param_3 == 0) {
      *param_1 = 0;
      return iVar6;
    }
    uVar9 = uVar3 + 1;
    puVar8 = param_1 + 1;
    *puVar8 = uVar3;
    puVar10 = puVar8;
    if ((uVar9 & 7) != 0) {
      iVar12 = -(uVar9 & 7);
      lVar4 = 0;
      do {
        lVar11 = lVar4;
        uVar9 = uVar9 - 1;
        iVar12 = iVar12 + 1;
        *(undefined2 *)((long)param_1 + lVar11 + 4) = *(undefined2 *)((long)param_2 + lVar11 + 4);
        lVar4 = lVar11 + 2;
      } while (iVar12 != 0);
      param_2 = (ushort *)((long)param_2 + lVar11 + 2);
      puVar10 = (ushort *)((long)param_1 + lVar11 + 4);
    }
    if (6 < uVar3) {
      param_2 = param_2 + 5;
      puVar10 = puVar10 + 4;
      do {
        puVar10[-3] = param_2[-3];
        puVar10[-2] = param_2[-2];
        puVar10[-1] = param_2[-1];
        *puVar10 = *param_2;
        puVar10[1] = param_2[1];
        puVar10[2] = param_2[2];
        puVar10[3] = param_2[3];
        puVar1 = param_2 + 4;
        uVar9 = uVar9 - 8;
        param_2 = param_2 + 8;
        puVar10[4] = *puVar1;
        puVar10 = puVar10 + 8;
      } while (uVar9 != 0);
    }
    iVar6 = uVar2 + iVar6;
    param_2 = puVar7 + (ulong)uVar3 + 1;
    param_1 = puVar8 + (ulong)uVar3 + 1;
  } while (param_3 != 0);
LAB_0077d904:
  if (iVar6 == 0) {
    return 0;
  }
  param_1[-1] = 0;
  return iVar6 + -1;
}


