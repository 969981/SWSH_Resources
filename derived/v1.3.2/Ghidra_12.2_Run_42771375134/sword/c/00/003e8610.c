/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e8610; name: FUN_003e8610
 */


void FUN_003e8610(long param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  
  piVar4 = *(int **)(param_1 + 0x1138);
  lVar6 = *(long *)(piVar4 + 4);
  iVar1 = piVar4[1];
  uVar7 = (ulong)(uint)piVar4[2];
  plVar9 = (long *)(lVar6 + uVar7 * 0x18 + 8);
  plVar3 = (long *)*plVar9;
  if (plVar3 == (long *)0x0) {
    piVar10 = (int *)(lVar6 + uVar7 * 0x18 + 0x10);
    iVar2 = *piVar10;
    if (iVar2 != *piVar4) {
      *piVar10 = iVar2 + 1;
      plVar3 = (long *)(*(long *)(lVar6 + uVar7 * 0x18) + (ulong)(uint)(iVar2 * iVar1));
      if (plVar3 != (long *)0x0) goto LAB_003e868c;
    }
    plVar3 = (long *)FUN_003f1aa0(piVar4);
  }
  else {
    *plVar9 = *plVar3;
  }
LAB_003e868c:
  uVar8 = (long)plVar3 + 0x4fU >> 6;
  uVar5 = (1 - ((ulong)plVar3 >> 6)) + uVar8;
  uVar7 = (ulong)plVar3;
  if ((uVar5 & 3) != 0) {
    lVar6 = -(uVar5 & 3);
    do {
      Hint_Prefetch(uVar7,0,0,0);
      uVar7 = uVar7 + 0x40;
      uVar5 = uVar5 - 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0);
  }
  if (2 < uVar8 - ((ulong)plVar3 >> 6)) {
    do {
      Hint_Prefetch(uVar7,0,0,0);
      Hint_Prefetch(uVar7 + 0x40,0,0,0);
      uVar5 = uVar5 - 4;
      Hint_Prefetch(uVar7 + 0x80,0,0,0);
      Hint_Prefetch(uVar7 + 0xc0,0,0,0);
      uVar7 = uVar7 + 0x100;
    } while (uVar5 != 0);
  }
  param_2[2] = (ulong)plVar3;
  piVar4 = *(int **)(param_1 + 0x1140);
  lVar6 = *(long *)(piVar4 + 4);
  iVar1 = piVar4[1];
  uVar7 = (ulong)(uint)piVar4[2];
  plVar9 = (long *)(lVar6 + uVar7 * 0x18 + 8);
  plVar3 = (long *)*plVar9;
  if (plVar3 == (long *)0x0) {
    piVar10 = (int *)(lVar6 + uVar7 * 0x18 + 0x10);
    iVar2 = *piVar10;
    if (iVar2 != *piVar4) {
      *piVar10 = iVar2 + 1;
      plVar3 = (long *)(*(long *)(lVar6 + uVar7 * 0x18) + (ulong)(uint)(iVar2 * iVar1));
      if (plVar3 != (long *)0x0) goto LAB_003e876c;
    }
    plVar3 = (long *)FUN_003f1aa0(piVar4);
  }
  else {
    *plVar9 = *plVar3;
  }
LAB_003e876c:
  uVar8 = (long)plVar3 + 0x5fU >> 6;
  uVar5 = (1 - ((ulong)plVar3 >> 6)) + uVar8;
  uVar7 = (ulong)plVar3;
  if ((uVar5 & 3) != 0) {
    lVar6 = -(uVar5 & 3);
    do {
      Hint_Prefetch(uVar7,0,0,0);
      uVar7 = uVar7 + 0x40;
      uVar5 = uVar5 - 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0);
  }
  if (2 < uVar8 - ((ulong)plVar3 >> 6)) {
    do {
      Hint_Prefetch(uVar7,0,0,0);
      Hint_Prefetch(uVar7 + 0x40,0,0,0);
      uVar5 = uVar5 - 4;
      Hint_Prefetch(uVar7 + 0x80,0,0,0);
      Hint_Prefetch(uVar7 + 0xc0,0,0,0);
      uVar7 = uVar7 + 0x100;
    } while (uVar5 != 0);
  }
  param_2[1] = (ulong)plVar3;
  piVar4 = *(int **)(param_1 + 0x1148);
  lVar6 = *(long *)(piVar4 + 4);
  iVar1 = piVar4[1];
  uVar7 = (ulong)(uint)piVar4[2];
  plVar9 = (long *)(lVar6 + uVar7 * 0x18 + 8);
  plVar3 = (long *)*plVar9;
  if (plVar3 == (long *)0x0) {
    piVar10 = (int *)(lVar6 + uVar7 * 0x18 + 0x10);
    iVar2 = *piVar10;
    if (iVar2 != *piVar4) {
      *piVar10 = iVar2 + 1;
      plVar3 = (long *)(*(long *)(lVar6 + uVar7 * 0x18) + (ulong)(uint)(iVar2 * iVar1));
      if (plVar3 != (long *)0x0) goto LAB_003e884c;
    }
    plVar3 = (long *)FUN_003f1aa0(piVar4);
  }
  else {
    *plVar9 = *plVar3;
  }
LAB_003e884c:
  uVar8 = (long)plVar3 + 0xcfU >> 6;
  uVar5 = (1 - ((ulong)plVar3 >> 6)) + uVar8;
  uVar7 = (ulong)plVar3;
  if ((uVar5 & 3) != 0) {
    lVar6 = -(uVar5 & 3);
    do {
      Hint_Prefetch(uVar7,0,0,0);
      uVar7 = uVar7 + 0x40;
      uVar5 = uVar5 - 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0);
  }
  if (2 < uVar8 - ((ulong)plVar3 >> 6)) {
    do {
      Hint_Prefetch(uVar7,0,0,0);
      Hint_Prefetch(uVar7 + 0x40,0,0,0);
      uVar5 = uVar5 - 4;
      Hint_Prefetch(uVar7 + 0x80,0,0,0);
      Hint_Prefetch(uVar7 + 0xc0,0,0,0);
      uVar7 = uVar7 + 0x100;
    } while (uVar5 != 0);
  }
  *param_2 = (ulong)plVar3;
  return;
}


