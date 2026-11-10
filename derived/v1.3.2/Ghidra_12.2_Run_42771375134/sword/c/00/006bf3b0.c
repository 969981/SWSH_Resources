/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bf3b0; name: FUN_006bf3b0
 */


int FUN_006bf3b0(int *param_1,int *param_2)

{
  uint *puVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ushort *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  puVar7 = (ushort *)((long)param_2 - (long)*param_2);
  if (((*puVar7 < 7) || ((ulong)puVar7[3] == 0)) ||
     (iVar4 = *(int *)((long)param_2 + (ulong)puVar7[3]), iVar4 == 0)) {
    iVar4 = 1;
  }
  else {
    if (iVar4 == 1) {
      lVar14 = 0;
      if ((ulong)puVar7[2] != 0) {
        puVar11 = (uint *)((long)param_2 + (ulong)puVar7[2]);
        lVar14 = (long)puVar11 + (ulong)*puVar11;
      }
      uVar12 = (ulong)*(ushort *)((long)param_1 + (6 - (long)*param_1));
      uVar13 = (ulong)*(uint *)((long)param_1 + uVar12);
      puVar1 = (uint *)((long)((long)param_1 + uVar12) + uVar13);
      puVar11 = puVar1 + 1;
      uVar9 = (ulong)*puVar1;
      if (uVar9 != 0) {
        lVar6 = uVar12 + uVar13;
        lVar15 = 0;
        puVar11 = puVar11 + uVar9;
        do {
          uVar8 = (ulong)*(uint *)((long)param_1 + lVar15 + lVar6 + 4);
          lVar2 = lVar15 + (uVar8 - (long)*(int *)((long)param_1 + lVar15 + uVar8 + lVar6 + 4)) +
                           lVar6;
          if ((*(ushort *)((long)param_1 + lVar2 + 4) < 5) ||
             (uVar10 = (ulong)*(ushort *)((long)param_1 + lVar2 + 8), uVar10 == 0)) {
            iVar4 = strcmp((char *)(lVar14 + 4),&DAT_00000004);
          }
          else {
            lVar2 = uVar8 + uVar10;
            iVar4 = strcmp((char *)(lVar14 + 4),
                           (char *)((long)param_1 +
                                   lVar15 + lVar2 + (ulong)*(uint *)((long)param_1 +
                                                                    lVar15 + lVar2 + lVar6 + 4) +
                                   lVar6 + 8));
          }
          if (iVar4 == 0) {
            puVar11 = (uint *)((long)param_1 + lVar15 + uVar13 + uVar12 + 4);
            break;
          }
          lVar15 = lVar15 + 4;
        } while (uVar9 * 4 != lVar15);
      }
      piVar3 = (int *)((long)puVar11 + (ulong)*puVar11);
      uVar9 = (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3));
      puVar1 = (uint *)((long)piVar3 + uVar9);
      uVar12 = (ulong)*puVar1;
      uVar13 = (ulong)*(uint *)((long)puVar1 + uVar12);
      if (uVar13 != 0) {
        lVar15 = *puVar11 + uVar12 + uVar9;
        lVar14 = 0;
        iVar4 = 0;
        do {
          uVar9 = (ulong)*(uint *)((long)puVar11 + lVar14 + lVar15 + 4);
          lVar6 = lVar14 + (uVar9 - (long)*(int *)((long)puVar11 + lVar14 + uVar9 + lVar15 + 4)) +
                           lVar15;
          if ((*(ushort *)((long)puVar11 + lVar6 + 4) < 5) ||
             (uVar12 = (ulong)*(ushort *)((long)puVar11 + lVar6 + 8), uVar12 == 0)) {
            lVar6 = 0;
          }
          else {
            lVar6 = uVar9 + uVar12;
            lVar6 = (long)puVar11 +
                    lVar14 + lVar6 + (ulong)*(uint *)((long)puVar11 + lVar14 + lVar6 + lVar15 + 4) +
                    lVar15 + 4;
          }
          iVar5 = FUN_006bf3b0(param_1,lVar6);
          lVar14 = lVar14 + 4;
          iVar4 = iVar5 + iVar4;
        } while (uVar13 * 4 != lVar14);
        return iVar4;
      }
    }
    iVar4 = 0;
  }
  return iVar4;
}


