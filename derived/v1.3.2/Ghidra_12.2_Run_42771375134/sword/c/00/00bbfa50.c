/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbfa50; name: FUN_00bbfa50
 */


undefined8 FUN_00bbfa50(long param_1)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar5 = FUN_016b8190();
  uVar9 = (uint)((ulong)uVar5 >> 0x20);
  uVar1 = uVar9 - 2;
  if (uVar9 < 2) {
LAB_00bbfb58:
    uVar3 = 0xffffffff;
    iVar11 = 2;
    uVar4 = 0xffffffff;
  }
  else if ((int)uVar5 == 0) {
    if (5 < (int)uVar1) goto LAB_00bbfb58;
    uVar3 = *(undefined4 *)(param_1 + 0x614);
    iVar11 = 1;
    uVar4 = FUN_00bcfb20(1,0,uVar1);
  }
  else {
    if (4 < uVar1) goto LAB_00bbfb58;
    lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar10 == 0) {
      uVar3 = FUN_0150b350(0);
    }
    else {
      plVar13 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      uVar3 = FUN_0150b350(lVar10);
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    uVar4 = FUN_00bcfb20(0,(int)uVar5 + -1,uVar1);
    iVar11 = 0;
  }
  uVar5 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),iVar11,uVar3,uVar4);
  if (*(int *)(param_1 + 0x618) == 2) {
    lVar12 = *(long *)(param_1 + 0x2b0);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    lVar10 = *(long *)(lVar12 + 0x2e0);
    if (lVar10 == 0) {
      FUN_014c7bf0(0,0,uVar5);
    }
    else {
      plVar13 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_014c7bf0(lVar10,0,uVar5);
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    if (iVar11 == 0) {
      uVar6 = FUN_0087d610(uVar5,2);
      if ((uVar6 & 1) == 0) {
        puVar7 = &DAT_02159cd8;
        uVar5 = 5;
        uVar8 = 0xd670b269319411f8;
        goto LAB_00bbff08;
      }
      puVar7 = &DAT_02159ce8;
    }
    else {
      puVar7 = &UNK_02159d28;
    }
    uVar8 = 0xd670b269319411f8;
    uVar5 = 4;
    goto LAB_00bbff08;
  }
  if (*(int *)(param_1 + 0x618) == 0) {
    lVar12 = *(long *)(param_1 + 0x2b0);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    lVar10 = *(long *)(lVar12 + 0x2e0);
    if (lVar10 == 0) {
      FUN_014c7bf0(0,0,uVar5);
    }
    else {
      plVar13 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_014c7bf0(lVar10,0,uVar5);
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    puVar7 = &DAT_02159c78;
    uVar8 = 0xd670b269319411f8;
    uVar5 = 6;
    goto LAB_00bbff08;
  }
  if (iVar11 == 0) {
    lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    uVar6 = FUN_0150aef0(lVar10,uVar3,uVar4);
    if ((uVar6 & 1) != 0) {
      FUN_00bc46a0(param_1,6,0);
joined_r0x00bbfdc8:
      if (lVar10 == 0) {
        return 0;
      }
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      return 0;
    }
    uVar6 = FUN_00bc4bb0(param_1);
    if ((uVar6 & 1) != 0) {
      FUN_00bc46a0(param_1,0xb,0);
      goto joined_r0x00bbfdc8;
    }
    if (lVar10 == 0) goto LAB_00bbfc40;
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    uVar6 = FUN_0087d610(uVar5,2);
  }
  else {
LAB_00bbfc40:
    uVar6 = FUN_0087d610(uVar5,2);
  }
  if ((uVar6 & 1) != 0) {
    FUN_00bc46a0(param_1,0x14,0);
    return 0;
  }
  sVar2 = FUN_008787f0(uVar5);
  if (sVar2 == 0) {
    puVar7 = &DAT_02159d68;
    uVar8 = 0xba83151f4d00be70;
    uVar5 = 2;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x2b0);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    lVar10 = *(long *)(lVar12 + 0x2e0);
    if (lVar10 == 0) {
      FUN_014c9900(0,0,sVar2,1);
    }
    else {
      plVar13 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_014c9900(lVar10,0,sVar2,1);
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    puVar7 = &DAT_02159d88;
    uVar8 = 0x4dbefe37820a8c2f;
    uVar5 = 3;
  }
LAB_00bbff08:
  FUN_00bc4460(param_1,puVar7,uVar5,uVar8,1,1);
  return 1;
}


