/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00480880; name: FUN_00480880
 */


undefined8 FUN_00480880(long *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  plVar8 = (long *)param_1[0x15];
  if (plVar8 == (long *)0x0) {
    puVar5 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10);
    param_1[0x15] = (long)puVar5;
    plVar8 = (long *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      plVar8 = (long *)param_1[0x15];
    }
    if (plVar8 == (long *)0x0) goto LAB_004809a4;
  }
  puVar3 = PTR_DAT_02712a90;
  uVar1 = *(uint *)(plVar8 + 1);
  uVar9 = *(uint *)((long)plVar8 + 0xc);
  if (uVar9 <= uVar1) {
    uVar9 = uVar9 + 4;
    puVar5 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar9 << 3);
    if (puVar5 == (undefined8 *)0x0) goto LAB_004809a4;
    puVar6 = (undefined8 *)*plVar8;
    if ((puVar6 != (undefined8 *)0x0) && (puVar6 != puVar5)) {
      uVar2 = *(uint *)(plVar8 + 1);
      if (uVar2 != 0) {
        *puVar5 = *puVar6;
        if (uVar2 != 1) {
          if (uVar2 == 2) {
            lVar7 = 1;
          }
          else {
            lVar4 = 0;
            do {
              lVar7 = lVar4;
              puVar5[lVar7 + 1] = *(undefined8 *)(*plVar8 + lVar7 * 8 + 8);
              puVar5[lVar7 + 2] = *(undefined8 *)(*plVar8 + lVar7 * 8 + 0x10);
              lVar4 = lVar7 + 2;
            } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar7 + 2);
            lVar7 = lVar7 + 3;
            if ((~uVar2 & 1) == 0) goto LAB_00480950;
          }
          puVar5[lVar7] = *(undefined8 *)(*plVar8 + lVar7 * 8);
        }
LAB_00480950:
        puVar6 = (undefined8 *)*plVar8;
      }
      FUN_00404870(*(undefined4 *)puVar3,puVar6);
    }
    *plVar8 = (long)puVar5;
    *(uint *)((long)plVar8 + 0xc) = uVar9;
  }
  if (uVar1 < uVar9) {
    puVar5 = (undefined8 *)(*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 8);
    *(uint *)(plVar8 + 1) = *(uint *)(plVar8 + 1) + 1;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = param_2;
      (**(code **)(*param_1 + 0x180))(param_1,0);
      return 1;
    }
  }
LAB_004809a4:
  if ((param_1[0x15] != 0) && (*(int *)(param_1[0x15] + 8) == 0)) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x15] = 0;
  }
  return 0x34;
}


