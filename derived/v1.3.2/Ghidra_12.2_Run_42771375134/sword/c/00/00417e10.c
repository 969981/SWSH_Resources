/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00417e10; name: FUN_00417e10
 */


void FUN_00417e10(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ushort *puVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  lVar12 = *(long *)(param_2 + 8);
  plVar1 = (long *)(lVar12 + 0x20);
  if (*(uint *)(lVar12 + 0x28) == 0) {
    uVar13 = 0;
  }
  else {
    plVar2 = (long *)*plVar1;
    uVar13 = 0;
    lVar5 = (ulong)*(uint *)(lVar12 + 0x28) << 3;
    do {
      if (*plVar2 == param_2) break;
      uVar13 = uVar13 + 1;
      plVar2 = plVar2 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  lVar5 = *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x18;
  if ((*(uint *)(*(long *)(lVar5 + -0x18) + 0x30) | 2) == 3) {
    lVar5 = FUN_004164b0();
  }
  else {
    lVar5 = *(long *)(lVar5 + -8);
  }
  if (lVar5 == 0) {
    return;
  }
  FUN_00494850(lVar5,uVar13);
  puVar9 = *(ushort **)(lVar5 + 0x18);
  uVar6 = *(uint *)(lVar5 + 0x20);
  uVar7 = (ulong)uVar6;
  puVar8 = puVar9 + uVar7;
  puVar10 = puVar9;
  if (uVar6 != 0) {
    lVar11 = uVar7 << 1;
    puVar3 = puVar9;
    do {
      puVar10 = puVar3;
      if ((uint)*puVar3 == (uVar13 & 0xffff)) break;
      lVar11 = lVar11 + -2;
      puVar3 = puVar3 + 1;
      puVar10 = puVar8;
    } while (lVar11 != 0);
  }
  if (puVar8 != puVar10) {
    if (puVar10 < puVar8 + -1) {
      uVar7 = (long)puVar9 + ~(ulong)puVar10 + uVar7 * 2 + -2;
      uVar6 = ((uint)(uVar7 >> 1) & 0x7fffffff) + 1;
      if ((uVar6 & 3) != 0) {
        lVar11 = -((ulong)uVar6 & 3);
        puVar9 = puVar10;
        do {
          puVar10 = puVar9 + 1;
          *puVar9 = *puVar10;
          lVar11 = lVar11 + 1;
          puVar9 = puVar10;
        } while (lVar11 != 0);
      }
      if (5 < uVar7) {
        do {
          *puVar10 = puVar10[1];
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar10 + 2);
          puVar9 = puVar10 + 4;
          puVar10[3] = *puVar9;
          puVar10 = puVar9;
        } while (puVar9 < puVar8 + -1);
      }
      uVar6 = *(uint *)(lVar5 + 0x20);
    }
    *(uint *)(lVar5 + 0x20) = uVar6 - 1;
  }
  *(short *)(lVar5 + 0x12) = (short)*(undefined4 *)(lVar12 + 0x28);
  FUN_004947e0(lVar5,*(undefined4 *)(lVar12 + 0x28));
  iVar4 = *(int *)(lVar5 + 8);
  uVar6 = *(uint *)(lVar5 + 0x20);
  *(int *)(lVar5 + 0xc) = iVar4;
  if (uVar6 != 0) {
    puVar10 = *(ushort **)(lVar5 + 0x18);
    lVar11 = (ulong)uVar6 * 2 + -2;
    puVar8 = puVar10;
    if (((uint)lVar11 >> 1 & 1) == 0) {
      iVar4 = iVar4 - *(int *)(*(long *)(*plVar1 + (ulong)*puVar10 * 8) + 0x1c);
      *(int *)(lVar5 + 0xc) = iVar4;
      puVar8 = puVar10 + 1;
    }
    if (lVar11 != 0) {
      do {
        iVar4 = iVar4 - *(int *)(*(long *)(*plVar1 + (ulong)*puVar8 * 8) + 0x1c);
        *(int *)(lVar5 + 0xc) = iVar4;
        puVar9 = puVar8 + 1;
        puVar8 = puVar8 + 2;
        iVar4 = iVar4 - *(int *)(*(long *)(*plVar1 + (ulong)*puVar9 * 8) + 0x1c);
        *(int *)(lVar5 + 0xc) = iVar4;
      } while (puVar8 != puVar10 + uVar6);
    }
  }
  *(short *)(lVar5 + 0x10) = *(short *)(lVar5 + 0x10) - (short)uVar6;
  FUN_004182f0(param_1,lVar12,uVar13,plVar1,lVar5);
  return;
}


