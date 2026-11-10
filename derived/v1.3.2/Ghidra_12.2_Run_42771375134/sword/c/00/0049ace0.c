/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049ace0; name: FUN_0049ace0
 */


undefined8 FUN_0049ace0(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_02712a90;
  if (*(uint *)(param_1 + 1) != 0) {
    lVar6 = *(long *)*param_1;
    if (lVar6 == 0) {
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
        if (*(uint *)(param_1 + 1) <= uVar3) goto LAB_0049ada8;
        lVar6 = ((long *)*param_1)[uVar3];
      } while (lVar6 == 0);
    }
    else {
      uVar3 = 0;
    }
    do {
      lVar4 = *(long *)(lVar6 + 8);
      lVar7 = lVar4;
      uVar5 = uVar3;
      if (lVar4 == 0) {
        do {
          uVar5 = uVar5 + 1;
          if (*(uint *)(param_1 + 1) <= uVar5) {
            lVar7 = 0;
            break;
          }
          lVar7 = *(long *)(*param_1 + (ulong)uVar5 * 8);
        } while (lVar7 == 0);
      }
      *(long *)(*param_1 + (ulong)uVar3 * 8) = lVar4;
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      uVar1 = *(undefined4 *)puVar2;
      FUN_00499eb0(lVar6);
      FUN_00404870(uVar1,lVar6);
      lVar6 = lVar7;
      uVar3 = uVar5;
    } while (lVar7 != 0);
  }
LAB_0049ada8:
  puVar2 = PTR_DAT_02712a90;
  if (*(uint *)(param_1 + 4) != 0) {
    lVar6 = *(long *)param_1[3];
    if (lVar6 == 0) {
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
        if (*(uint *)(param_1 + 4) <= uVar3) goto LAB_0049ae78;
        lVar6 = ((long *)param_1[3])[uVar3];
      } while (lVar6 == 0);
    }
    else {
      uVar3 = 0;
    }
    do {
      lVar4 = *(long *)(lVar6 + 0x10);
      lVar7 = lVar4;
      uVar5 = uVar3;
      if (lVar4 == 0) {
        do {
          uVar5 = uVar5 + 1;
          if (*(uint *)(param_1 + 4) <= uVar5) {
            lVar7 = 0;
            break;
          }
          lVar7 = *(long *)(param_1[3] + (ulong)uVar5 * 8);
        } while (lVar7 == 0);
      }
      *(long *)(param_1[3] + (ulong)uVar3 * 8) = lVar4;
      *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      FUN_0049b020(param_1,lVar6);
      uVar1 = *(undefined4 *)puVar2;
      if (*(long *)(lVar6 + 0x50) != 0) {
        *(undefined4 *)(lVar6 + 0x58) = 0;
        FUN_00404870(uVar1);
        *(undefined8 *)(lVar6 + 0x50) = 0;
        *(undefined4 *)(lVar6 + 0x5c) = 0;
      }
      FUN_00404870(uVar1,lVar6);
      lVar6 = lVar7;
      uVar3 = uVar5;
    } while (lVar7 != 0);
  }
LAB_0049ae78:
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  }
  if (param_1[10] != 0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
  }
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0xe] = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
  }
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1 + 0x11) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x10] = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
  }
  if (param_1[0x12] != 0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x12] = 0;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
  }
  if (param_1[0x14] != 0) {
    *(undefined4 *)(param_1 + 0x15) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x14] = 0;
    *(undefined4 *)((long)param_1 + 0xac) = 0;
  }
  if (param_1[0x16] != 0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x16] = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0;
  }
  return 1;
}


