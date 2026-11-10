/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ceabd0; name: FUN_00ceabd0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00ceabd0(long param_1,long *param_2)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  ushort *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  puVar8 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
  puVar10 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar10 < 5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar6 = 0;
  if ((ulong)puVar10[2] != 0) {
    puVar2 = (uint *)((long)piVar1 + (ulong)puVar10[2]);
    lVar6 = (long)puVar2 + (ulong)*puVar2;
  }
  puVar2 = (uint *)((long)piVar1 + (ulong)puVar10[2]);
  uVar11 = (ulong)*puVar2;
  lVar4 = 0;
  do {
    while( true ) {
      lVar7 = lVar4;
      if ((long)puVar8 +
          (((ulong)*puVar8 + (ulong)*(uint *)((long)puVar2 + uVar11) * 4 + uVar11 +
           (ulong)puVar10[2]) - lVar6) == lVar7) {
        return;
      }
      uVar9 = (ulong)*(uint *)(lVar6 + lVar7 + 4);
      lVar3 = lVar6 + (uVar9 - (long)*(int *)(lVar6 + uVar9 + lVar7 + 4));
      lVar4 = lVar3 + lVar7;
      uVar5 = *(ushort *)(lVar4 + 4);
      if (4 < uVar5) break;
      lVar4 = lVar7 + 4;
      if (*param_2 == 0) goto LAB_00ceaca0;
    }
    uVar12 = (ulong)*(ushort *)(lVar4 + 8);
    lVar13 = 0;
    if (uVar12 != 0) {
      lVar13 = *(long *)(lVar6 + uVar9 + uVar12 + lVar7 + 4);
    }
    lVar4 = lVar7 + 4;
  } while (*param_2 != lVar13);
LAB_00ceaca0:
  lVar7 = lVar7 + 4;
  if ((uVar5 < 7) || (uVar11 = (ulong)*(ushort *)(lVar3 + lVar7 + 6), uVar11 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar6 + uVar11 + *(uint *)(lVar6 + uVar11 + uVar9 + lVar7) + uVar9 + lVar7;
  }
  *(long *)(param_1 + 0x170) = lVar7;
  return;
}


