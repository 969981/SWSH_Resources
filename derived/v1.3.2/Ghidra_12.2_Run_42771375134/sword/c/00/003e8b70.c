/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e8b70; name: FUN_003e8b70
 */


void FUN_003e8b70(long param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  undefined8 uVar13;
  ulong *puVar14;
  
  puVar1 = (ulong *)(param_2 + *(long *)(param_3 + 0x20));
  uVar13 = *(undefined8 *)(param_3 + 8);
  if ((short)puVar1[1] == 1) {
    puVar14 = puVar1;
LAB_003e8bb8:
    uVar5 = *puVar14;
    uVar8 = uVar5 >> 6;
    uVar9 = (uVar5 + (*(int *)(param_3 + 0x38) + 0xb0)) - 1 >> 6;
    uVar7 = (1 - uVar8) + uVar9;
    if ((uVar7 & 3) != 0) {
      lVar10 = -(uVar7 & 3);
      do {
        Hint_Prefetch(uVar5,0,0,0);
        uVar5 = uVar5 + 0x40;
        uVar7 = uVar7 - 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0);
    }
    if (2 < uVar9 - uVar8) {
      do {
        Hint_Prefetch(uVar5,0,0,0);
        Hint_Prefetch(uVar5 + 0x40,0,0,0);
        uVar7 = uVar7 - 4;
        Hint_Prefetch(uVar5 + 0x80,0,0,0);
        Hint_Prefetch(uVar5 + 0xc0,0,0,0);
        uVar5 = uVar5 + 0x100;
      } while (uVar7 != 0);
    }
  }
  else {
    puVar14 = (ulong *)*puVar1;
    if ((short)puVar1[1] != 0) goto LAB_003e8bb8;
  }
  FUN_003ff020(uVar13,param_1,param_2 + *(long *)(param_3 + 0x18));
  piVar6 = *(int **)(param_1 + 0x1140);
  lVar10 = *(long *)(piVar6 + 4);
  iVar2 = piVar6[1];
  uVar5 = (ulong)(uint)piVar6[2];
  plVar11 = (long *)(lVar10 + uVar5 * 0x18 + 8);
  plVar4 = (long *)*plVar11;
  if (plVar4 == (long *)0x0) {
    piVar12 = (int *)(lVar10 + uVar5 * 0x18 + 0x10);
    iVar3 = *piVar12;
    if (iVar3 != *piVar6) {
      *piVar12 = iVar3 + 1;
      plVar4 = (long *)(*(long *)(lVar10 + uVar5 * 0x18) + (ulong)(uint)(iVar3 * iVar2));
      if (plVar4 != (long *)0x0) goto LAB_003e8ca4;
    }
    plVar4 = (long *)FUN_003f1aa0(piVar6);
  }
  else {
    *plVar11 = *plVar4;
  }
LAB_003e8ca4:
  uVar8 = (long)plVar4 + 0x5fU >> 6;
  uVar7 = (1 - ((ulong)plVar4 >> 6)) + uVar8;
  uVar5 = (ulong)plVar4;
  if ((uVar7 & 3) != 0) {
    lVar10 = -(uVar7 & 3);
    do {
      Hint_Prefetch(uVar5,0,0,0);
      uVar5 = uVar5 + 0x40;
      uVar7 = uVar7 - 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0);
  }
  if (2 < uVar8 - ((ulong)plVar4 >> 6)) {
    do {
      Hint_Prefetch(uVar5,0,0,0);
      Hint_Prefetch(uVar5 + 0x40,0,0,0);
      uVar7 = uVar7 - 4;
      Hint_Prefetch(uVar5 + 0x80,0,0,0);
      Hint_Prefetch(uVar5 + 0xc0,0,0,0);
      uVar5 = uVar5 + 0x100;
    } while (uVar7 != 0);
  }
  *(long **)(param_3 + 8) = plVar4;
  FUN_003e88d0(param_1,puVar14,(short)puVar1[1],*(undefined8 *)(param_3 + 0x38),uVar13,
               param_3 + 0x10,param_4);
  *(int *)(param_1 + 0x1290) = *(int *)(param_1 + 0x1290) + 1;
  return;
}


