/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004be0c0; name: FUN_004be0c0
 */


undefined8 FUN_004be0c0(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  puVar3 = PTR_DAT_02712a90;
  plVar6 = *(long **)(param_2 + 0x28);
  uVar1 = *(uint *)(param_2 + 0x30);
  plVar7 = plVar6;
  if (uVar1 != 0) {
    lVar9 = (ulong)uVar1 << 3;
    do {
      if (*plVar7 == param_3) goto LAB_004be114;
      lVar9 = lVar9 + -8;
      plVar7 = plVar7 + 1;
    } while (lVar9 != 0);
    plVar7 = plVar6 + uVar1;
  }
LAB_004be114:
  if ((plVar7 != (long *)0x0) && (plVar6 + uVar1 != plVar7)) {
    return 2;
  }
  uVar10 = *(uint *)(param_2 + 0x34);
  if (uVar1 < uVar10) goto LAB_004be1b0;
  uVar10 = uVar10 + 4;
  puVar4 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar10 << 3);
  if (puVar4 == (undefined8 *)0x0) {
    return 2;
  }
  puVar5 = *(undefined8 **)(param_2 + 0x28);
  if ((puVar5 != (undefined8 *)0x0) && (puVar5 != puVar4)) {
    uVar2 = *(uint *)(param_2 + 0x30);
    if (uVar2 != 0) {
      *puVar4 = *puVar5;
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          lVar8 = 1;
        }
        else {
          lVar9 = 0;
          do {
            lVar8 = lVar9;
            puVar4[lVar8 + 1] = *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar8 * 8 + 8);
            puVar4[lVar8 + 2] = *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar8 * 8 + 0x10);
            lVar9 = lVar8 + 2;
          } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar8 + 2);
          lVar8 = lVar8 + 3;
          if ((~uVar2 & 1) == 0) goto LAB_004be19c;
        }
        puVar4[lVar8] = *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar8 * 8);
      }
LAB_004be19c:
      puVar5 = *(undefined8 **)(param_2 + 0x28);
    }
    FUN_00404870(*(undefined4 *)puVar3,puVar5);
  }
  *(undefined8 **)(param_2 + 0x28) = puVar4;
  *(uint *)(param_2 + 0x34) = uVar10;
LAB_004be1b0:
  if (uVar1 < uVar10) {
    plVar7 = (long *)(*(long *)(param_2 + 0x28) + (ulong)*(uint *)(param_2 + 0x30) * 8);
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) + 1;
    if (plVar7 != (long *)0x0) {
      *plVar7 = param_3;
      return 1;
    }
  }
  return 2;
}


