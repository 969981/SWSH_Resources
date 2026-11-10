/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048aa30; name: FUN_0048aa30
 */


undefined8 FUN_0048aa30(undefined8 param_1,long param_2,long param_3)

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
  float fVar11;
  float fVar12;
  
  puVar3 = PTR_DAT_02712a90;
  plVar6 = *(long **)(param_2 + 0x30);
  uVar1 = *(uint *)(param_2 + 0x38);
  plVar7 = plVar6;
  if (uVar1 != 0) {
    lVar9 = (ulong)uVar1 << 3;
    do {
      if (*plVar7 == param_3) goto LAB_0048aa84;
      lVar9 = lVar9 + -8;
      plVar7 = plVar7 + 1;
    } while (lVar9 != 0);
    plVar7 = plVar6 + uVar1;
  }
LAB_0048aa84:
  if ((plVar7 != (long *)0x0) && (plVar6 + uVar1 != plVar7)) {
    return 0x28;
  }
  uVar10 = *(uint *)(param_2 + 0x3c);
  if (uVar1 < uVar10) goto LAB_0048ab28;
  uVar10 = uVar10 + 4;
  puVar4 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar10 << 3);
  if (puVar4 == (undefined8 *)0x0) {
    return 2;
  }
  puVar5 = *(undefined8 **)(param_2 + 0x30);
  if ((puVar5 != (undefined8 *)0x0) && (puVar5 != puVar4)) {
    uVar2 = *(uint *)(param_2 + 0x38);
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
            puVar4[lVar8 + 1] = *(undefined8 *)(*(long *)(param_2 + 0x30) + lVar8 * 8 + 8);
            puVar4[lVar8 + 2] = *(undefined8 *)(*(long *)(param_2 + 0x30) + lVar8 * 8 + 0x10);
            lVar9 = lVar8 + 2;
          } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar8 + 2);
          lVar8 = lVar8 + 3;
          if ((~uVar2 & 1) == 0) goto LAB_0048ab14;
        }
        puVar4[lVar8] = *(undefined8 *)(*(long *)(param_2 + 0x30) + lVar8 * 8);
      }
LAB_0048ab14:
      puVar5 = *(undefined8 **)(param_2 + 0x30);
    }
    FUN_00404870(*(undefined4 *)puVar3,puVar5);
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(uint *)(param_2 + 0x3c) = uVar10;
LAB_0048ab28:
  if (uVar1 < uVar10) {
    plVar7 = (long *)(*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 8);
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) + 1;
    if (plVar7 != (long *)0x0) {
      *plVar7 = param_3;
      *(char *)(param_2 + 0x41) = *(char *)(param_2 + 0x41) + '\x01';
      if (*(char *)(param_2 + 0x2c) != '\0') {
        lVar9 = *(long *)(param_3 + 0x140);
        fVar11 = *(float *)(param_2 + 0x78);
        fVar12 = *(float *)(param_2 + 0x7c);
        *(float *)(lVar9 + 0x1c) = *(float *)(param_2 + 0x74) + *(float *)(lVar9 + 0x1c);
        *(float *)(lVar9 + 0x20) = fVar11 + *(float *)(lVar9 + 0x20);
        *(float *)(lVar9 + 0x24) = fVar12 + *(float *)(lVar9 + 0x24);
        FUN_00489f80(param_2,*(int *)(*(long *)PTR_DAT_02712de0 + 0x78) + 1);
      }
      return 1;
    }
  }
  return 2;
}


