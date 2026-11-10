/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e8d60; name: FUN_003e8d60
 */


void FUN_003e8d60(long param_1,long param_2,ulong *param_3,undefined8 param_4)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  int *piVar14;
  ulong uVar15;
  ulong *puVar16;
  uint uVar17;
  
  puVar1 = (ulong *)(param_2 + param_3[6]);
  uVar15 = *param_3;
  if ((short)puVar1[1] == 1) {
    puVar16 = puVar1;
LAB_003e8dac:
    uVar6 = *puVar16;
    uVar9 = uVar6 >> 6;
    uVar11 = (uVar6 + ((int)param_3[7] + 0xb0)) - 1 >> 6;
    uVar8 = (1 - uVar9) + uVar11;
    if ((uVar8 & 3) != 0) {
      lVar12 = -(uVar8 & 3);
      do {
        Hint_Prefetch(uVar6,0,0,0);
        uVar6 = uVar6 + 0x40;
        uVar8 = uVar8 - 1;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0);
    }
    if (2 < uVar11 - uVar9) {
      do {
        Hint_Prefetch(uVar6,0,0,0);
        Hint_Prefetch(uVar6 + 0x40,0,0,0);
        uVar8 = uVar8 - 4;
        Hint_Prefetch(uVar6 + 0x80,0,0,0);
        Hint_Prefetch(uVar6 + 0xc0,0,0,0);
        uVar6 = uVar6 + 0x100;
      } while (uVar8 != 0);
    }
  }
  else {
    puVar16 = (ulong *)*puVar1;
    if ((short)puVar1[1] != 0) goto LAB_003e8dac;
  }
  FUN_003bed50(uVar15,param_1,param_2 + param_3[5]);
  piVar7 = *(int **)(param_1 + 0x1148);
  lVar12 = *(long *)(piVar7 + 4);
  iVar2 = piVar7[1];
  uVar6 = (ulong)(uint)piVar7[2];
  plVar13 = (long *)(lVar12 + uVar6 * 0x18 + 8);
  plVar5 = (long *)*plVar13;
  if (plVar5 == (long *)0x0) {
    piVar14 = (int *)(lVar12 + uVar6 * 0x18 + 0x10);
    iVar3 = *piVar14;
    if (iVar3 != *piVar7) {
      *piVar14 = iVar3 + 1;
      plVar5 = (long *)(*(long *)(lVar12 + uVar6 * 0x18) + (ulong)(uint)(iVar3 * iVar2));
      if (plVar5 != (long *)0x0) goto LAB_003e8e98;
    }
    plVar5 = (long *)FUN_003f1aa0(piVar7);
  }
  else {
    *plVar13 = *plVar5;
  }
LAB_003e8e98:
  uVar9 = (long)plVar5 + 0xcfU >> 6;
  uVar8 = (1 - ((ulong)plVar5 >> 6)) + uVar9;
  uVar6 = (ulong)plVar5;
  if ((uVar8 & 3) != 0) {
    lVar12 = -(uVar8 & 3);
    do {
      Hint_Prefetch(uVar6,0,0,0);
      uVar6 = uVar6 + 0x40;
      uVar8 = uVar8 - 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0);
  }
  if (2 < uVar9 - ((ulong)plVar5 >> 6)) {
    do {
      Hint_Prefetch(uVar6,0,0,0);
      Hint_Prefetch(uVar6 + 0x40,0,0,0);
      uVar8 = uVar8 - 4;
      Hint_Prefetch(uVar6 + 0x80,0,0,0);
      Hint_Prefetch(uVar6 + 0xc0,0,0,0);
      uVar6 = uVar6 + 0x100;
    } while (uVar8 != 0);
  }
  *param_3 = (ulong)plVar5;
  bVar4 = *(byte *)(*(long *)(uVar15 + 0x88) + 0x1c);
  if (*(char *)(*(long *)(uVar15 + 0x50) + 0xd) == '\x04') {
    if ((bVar4 >> 5 & 1) == 0) goto LAB_003e8f8c;
    uVar17 = *(uint *)(uVar15 + 0xb0);
    FUN_00190b50(param_1 + 0x1f80,(uVar17 >> 6) + 1);
    lVar12 = *(long *)(param_1 + 0x1f80);
  }
  else {
    if ((bVar4 >> 5 & 1) == 0) goto LAB_003e8f8c;
    uVar17 = *(uint *)(uVar15 + 0xb0);
    FUN_00190b50(param_1 + 0x1f70,(uVar17 >> 6) + 1);
    lVar12 = *(long *)(param_1 + 0x1f70);
  }
  lVar10 = (ulong)(uVar17 >> 0xb) * 4;
  *(uint *)(lVar12 + lVar10) = *(uint *)(lVar12 + lVar10) | 1 << (ulong)(uVar17 >> 6 & 0x1f);
LAB_003e8f8c:
  (**(code **)(**(long **)(param_1 + 0x760) + 0x30))
            (*(long **)(param_1 + 0x760),uVar15 + 0x60,*(uint *)(uVar15 + 0xb0) >> 6);
  FUN_003e88d0(param_1,puVar16,(short)puVar1[1],param_3[7],uVar15,param_3 + 2,param_4);
  *(int *)(param_1 + 0x1294) = *(int *)(param_1 + 0x1294) + 1;
  return;
}


