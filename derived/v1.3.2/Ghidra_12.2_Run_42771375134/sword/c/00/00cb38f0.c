/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb38f0; name: FUN_00cb38f0
 */


void FUN_00cb38f0(long param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ushort *puVar13;
  long lVar14;
  long lVar15;
  
  puVar7 = *(uint **)(*(long *)(*(long *)(&DAT_00001588 + param_1) + 0x138) + 400);
  piVar8 = (int *)((long)puVar7 + (ulong)*puVar7);
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
     (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar9 == 0)) {
    piVar8 = (int *)0x0;
  }
  else {
    puVar7 = (uint *)((long)piVar8 + uVar9);
    piVar8 = (int *)((long)puVar7 + (ulong)*puVar7);
  }
  puVar13 = (ushort *)((long)piVar8 - (long)*piVar8);
  uVar9 = (ulong)puVar13[3];
  uVar11 = (ulong)*(uint *)((long)piVar8 + uVar9);
  lVar12 = *(long *)PTR_DAT_0271c2f8;
  uVar1 = *(uint *)((long)((long)piVar8 + uVar9) + uVar11);
  if (uVar1 != 0) {
    lVar10 = *param_4;
    lVar14 = uVar11 + uVar9;
    lVar15 = 0;
    do {
      uVar5 = (ulong)*(uint *)((long)piVar8 + lVar15 + lVar14 + 4);
      lVar3 = lVar15 + (uVar5 - (long)*(int *)((long)piVar8 + lVar15 + uVar5 + lVar14 + 4)) + lVar14
      ;
      uVar2 = *(ushort *)((long)piVar8 + lVar3 + 4);
      if ((uVar2 < 5) || (uVar6 = (ulong)*(ushort *)((long)piVar8 + lVar3 + 8), uVar6 == 0)) {
        bVar4 = lVar10 == 0;
      }
      else {
        bVar4 = *(long *)((long)piVar8 + lVar15 + uVar5 + uVar6 + lVar14 + 4) == lVar10;
      }
      if (bVar4) {
        if ((uVar2 < 7) || (uVar6 = (ulong)*(ushort *)((long)piVar8 + lVar3 + 10), uVar6 == 0)) {
          lVar15 = 0;
          if (lVar12 == 0) break;
        }
        else {
          lVar15 = *(long *)((long)piVar8 + lVar15 + uVar6 + uVar5 + uVar9 + uVar11 + 4);
          if (lVar15 == lVar12) break;
        }
        *param_2 = lVar10;
        *param_3 = lVar15;
        return;
      }
      lVar15 = lVar15 + 4;
    } while ((ulong)uVar1 * 4 != lVar15);
  }
  if (*puVar13 < 5) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if ((ulong)puVar13[2] != 0) {
      lVar15 = *(long *)((long)piVar8 + (ulong)puVar13[2]);
    }
  }
  if (uVar1 == 0) {
    *param_2 = lVar15;
    *param_3 = lVar12;
    return;
  }
  lVar10 = uVar11 + uVar9;
  lVar14 = 0;
  while( true ) {
    uVar5 = (ulong)*(uint *)((long)piVar8 + lVar14 + lVar10 + 4);
    lVar3 = lVar14 + (uVar5 - (long)*(int *)((long)piVar8 + lVar14 + uVar5 + lVar10 + 4)) + lVar10;
    uVar2 = *(ushort *)((long)piVar8 + lVar3 + 4);
    if ((uVar2 < 5) || (uVar6 = (ulong)*(ushort *)((long)piVar8 + lVar3 + 8), uVar6 == 0)) {
      bVar4 = lVar15 == 0;
    }
    else {
      bVar4 = *(long *)((long)piVar8 + lVar14 + uVar5 + uVar6 + lVar10 + 4) == lVar15;
    }
    if (bVar4) break;
    lVar14 = lVar14 + 4;
    if ((ulong)uVar1 * 4 == lVar14) {
      *param_2 = lVar15;
      *param_3 = lVar12;
      return;
    }
  }
  if (uVar2 < 7) {
    *param_2 = lVar15;
    *param_3 = 0;
    return;
  }
  uVar6 = (ulong)*(ushort *)((long)piVar8 + lVar3 + 10);
  if (uVar6 == 0) {
    *param_2 = lVar15;
    *param_3 = 0;
    return;
  }
  lVar12 = *(long *)((long)piVar8 + lVar14 + uVar6 + uVar5 + uVar9 + uVar11 + 4);
  *param_2 = lVar15;
  *param_3 = lVar12;
  return;
}


