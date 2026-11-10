/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004588f0; name: FUN_004588f0
 */


/* WARNING: Removing unreachable block (ram,0x00458a9c) */

undefined8 FUN_004588f0(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (param_1 != *(long *)(param_1 + 0x18)) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  uVar6 = FUN_00459fa0(param_1,*(undefined4 *)(param_2 + 0x20));
  if ((uVar6 & 1) == 0) {
    return 2;
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    lVar9 = 0;
    uVar6 = 0;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x18) + lVar9);
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar9);
      lVar9 = lVar9 + 0x18;
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar2 + 2);
      puVar7[1] = puVar2[1];
      *puVar7 = *puVar2;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_2 + 0x20));
  }
  puVar2 = (undefined8 *)(param_1 + 0x28);
  if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (puVar2 != *(undefined8 **)(param_1 + 0x30)) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  puVar5 = PTR_DAT_02712a90;
  uVar3 = *(uint *)(param_2 + 0x38);
  if ((uVar3 < *(uint *)(param_1 + 0x38)) || (uVar3 <= *(uint *)(param_1 + 0x3c)))
  goto LAB_004589fc;
  uVar1 = *(uint *)(param_1 + 0x3c) + (uVar3 - *(uint *)(param_1 + 0x38));
  if (uVar1 < 2) {
    puVar7 = puVar2;
  }
  else {
    puVar7 = (undefined8 *)FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar1 << 3,8);
    if (puVar7 == (undefined8 *)0x0) {
      return 2;
    }
    puVar8 = *(undefined8 **)(param_1 + 0x30);
    if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar7)) {
      uVar4 = *(uint *)(param_1 + 0x38);
      if (uVar4 != 0) {
        *puVar7 = *puVar8;
        if (uVar4 != 1) {
          if (uVar4 == 2) {
            lVar10 = 1;
          }
          else {
            lVar9 = 0;
            do {
              lVar10 = lVar9;
              puVar7[lVar10 + 1] = *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar10 * 8 + 8);
              puVar7[lVar10 + 2] = *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar10 * 8 + 0x10);
              lVar9 = lVar10 + 2;
            } while (((ulong)uVar4 - 1) - (ulong)(~uVar4 & 1) != lVar10 + 2);
            lVar10 = lVar10 + 3;
            if ((~uVar4 & 1) == 0) goto LAB_00458b14;
          }
          puVar7[lVar10] = *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar10 * 8);
        }
LAB_00458b14:
        puVar8 = *(undefined8 **)(param_1 + 0x30);
      }
      if (puVar2 != puVar8) {
        FUN_004047f0(*(undefined4 *)puVar5);
      }
    }
  }
  *(undefined8 **)(param_1 + 0x30) = puVar7;
  *(uint *)(param_1 + 0x3c) = uVar1;
LAB_004589fc:
  *(uint *)(param_1 + 0x38) = uVar3;
  if (*(int *)(param_2 + 0x38) != 0) {
    uVar6 = 0;
    do {
      lVar9 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar9) =
           *(undefined8 *)(*(long *)(param_2 + 0x30) + lVar9);
    } while (uVar6 < *(uint *)(param_2 + 0x38));
  }
  return 1;
}


