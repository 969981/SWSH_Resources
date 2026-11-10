/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115e100; name: FUN_0115e100
 */


void FUN_0115e100(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong local_58;
  
  if (*param_2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x5d8);
    local_58 = 0x72620f6ba86df0b;
    lVar5 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
    if (lVar5 == 0) {
      FUN_0077eb10(uVar3,&local_58,0);
      lVar5 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e0);
    }
    else {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0077eb10(uVar3,&local_58,lVar5);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      lVar5 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e0);
    }
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      iVar2 = param_2[2];
      uVar3 = 0;
      goto LAB_0115e2a4;
    }
    iVar2 = param_2[2];
    uVar3 = 0;
LAB_0115ead0:
    FUN_014ca220(0,uVar3,iVar2,1,0,1);
    lVar5 = *(long *)(param_1 + 0x5e0);
    lVar4 = *(long *)(lVar5 + 0x2e0);
  }
  else if (*param_2 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x5d8);
    local_58 = 0x72626f6ba86e93d;
    lVar5 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
    plVar6 = (long *)(param_1 + 0x5e0);
    if (lVar5 == 0) {
      FUN_0077eb10(uVar3,&local_58,0);
      lVar5 = *(long *)(*plVar6 + 0x2e0);
      if (lVar5 == 0) goto LAB_0115ea60;
LAB_0115e19c:
      plVar8 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_014ca220(lVar5,0,param_2[2],1,0,1);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      lVar5 = *(long *)(*plVar6 + 0x2e0);
    }
    else {
      plVar8 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar3,&local_58,lVar5);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      lVar5 = *(long *)(*plVar6 + 0x2e0);
      if (lVar5 != 0) goto LAB_0115e19c;
LAB_0115ea60:
      FUN_014ca220(0,0,param_2[2],1,0,1);
      lVar5 = *(long *)(*plVar6 + 0x2e0);
    }
    if (lVar5 == 0) {
      iVar2 = param_2[1];
      uVar3 = 1;
      goto LAB_0115ead0;
    }
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    iVar2 = param_2[1];
    uVar3 = 1;
LAB_0115e2a4:
    FUN_014ca220(lVar5,uVar3,iVar2,1,0,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar5 = *(long *)(param_1 + 0x5e0);
    lVar4 = *(long *)(lVar5 + 0x2e0);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x5e0);
    lVar4 = *(long *)(lVar5 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar5 = *(long *)(param_1 + 0x5e0);
  }
  plVar6 = (long *)(param_1 + 0x5e0);
  lVar7 = *(long *)(lVar5 + 0x2f0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    lVar5 = *plVar6;
  }
  lVar5 = *(long *)(lVar5 + 0x2e8);
  plVar8 = (long *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_014c62d0(lVar4,lVar7,lVar5);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(plVar8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2f0);
  lVar5 = param_1 + 0x100;
  if (lVar4 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar5,"pane_T_select_01",uVar3,10);
    uVar1 = param_2[3];
  }
  else {
    plVar8 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(lVar5,"pane_T_select_01",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    uVar1 = param_2[3];
  }
  if (uVar1 < 6) {
                    /* WARNING: Could not recover jumptable at 0x0115e3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_02165e24 + *(int *)(&DAT_02165e24 + (ulong)uVar1 * 4)))();
    return;
  }
  lVar4 = *plVar6;
  lVar7 = *(long *)(lVar4 + 0x2e0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    lVar4 = *plVar6;
  }
  lVar9 = *(long *)(lVar4 + 0x2f0);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    lVar4 = *plVar6;
  }
  lVar4 = *(long *)(lVar4 + 0x2e8);
  plVar8 = (long *)(lVar4 + 0x48);
  if (lVar4 != 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_014c62d0(lVar7,lVar9,lVar4);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  lVar4 = *(long *)(*plVar6 + 0x2f0);
  if (lVar4 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar5,"pane_T_select_02",uVar3,10);
    iVar2 = param_2[5];
    if (iVar2 == 1) goto LAB_0115e69c;
LAB_0115e658:
    if (iVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x5d8);
      local_58 = 0x23f6ba86e424;
      goto LAB_0115e6ac;
    }
LAB_0115e6f4:
    lVar4 = *(long *)(*plVar6 + 0x2e8);
    if (lVar4 == 0) goto LAB_0115e784;
LAB_0115e700:
    plVar8 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(lVar5,"pane_T_select_04",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    iVar2 = param_2[6];
    if (iVar2 != 1) goto LAB_0115e750;
LAB_0115e7b0:
    uVar3 = *(undefined8 *)(param_1 + 0x5d8);
    local_58 = 0x1af6ba86d4d9;
LAB_0115e7c0:
    local_58 = local_58 | 0x726000000000000;
    lVar4 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
    if (lVar4 != 0) {
      plVar8 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar3,&local_58,lVar4);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      goto LAB_0115e808;
    }
    FUN_0077eb10(uVar3,&local_58,0);
    lVar4 = *(long *)(*plVar6 + 0x2e8);
    if (lVar4 == 0) goto LAB_0115e930;
LAB_0115e814:
    plVar8 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(lVar5,"pane_T_select_06",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    iVar2 = param_2[7];
    if (iVar2 != 1) goto LAB_0115e864;
LAB_0115e95c:
    uVar3 = *(undefined8 *)(param_1 + 0x5d8);
    local_58 = 0x7231cf6ba84a268;
    lVar4 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
joined_r0x0115e888:
    if (lVar4 == 0) {
      FUN_0077eb10(uVar3,&local_58,0);
      lVar4 = *(long *)(*plVar6 + 0x2e8);
      goto joined_r0x0115e998;
    }
    plVar8 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0077eb10(uVar3,&local_58,lVar4);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  else {
    plVar8 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(lVar5,"pane_T_select_02",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    iVar2 = param_2[5];
    if (iVar2 != 1) goto LAB_0115e658;
LAB_0115e69c:
    uVar3 = *(undefined8 *)(param_1 + 0x5d8);
    local_58 = 0x1af6ba86d4d9;
LAB_0115e6ac:
    local_58 = local_58 | 0x726000000000000;
    lVar4 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
    if (lVar4 != 0) {
      plVar8 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar3,&local_58,lVar4);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      goto LAB_0115e6f4;
    }
    FUN_0077eb10(uVar3,&local_58,0);
    lVar4 = *(long *)(*plVar6 + 0x2e8);
    if (lVar4 != 0) goto LAB_0115e700;
LAB_0115e784:
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar5,"pane_T_select_04",uVar3,10);
    iVar2 = param_2[6];
    if (iVar2 == 1) goto LAB_0115e7b0;
LAB_0115e750:
    if (iVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x5d8);
      local_58 = 0x23f6ba86e424;
      goto LAB_0115e7c0;
    }
LAB_0115e808:
    lVar4 = *(long *)(*plVar6 + 0x2e8);
    if (lVar4 != 0) goto LAB_0115e814;
LAB_0115e930:
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar5,"pane_T_select_06",uVar3,10);
    iVar2 = param_2[7];
    if (iVar2 == 1) goto LAB_0115e95c;
LAB_0115e864:
    if (iVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x5d8);
      local_58 = 0x72619f6ba86d326;
      lVar4 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
      goto joined_r0x0115e888;
    }
  }
  lVar4 = *(long *)(*plVar6 + 0x2e8);
joined_r0x0115e998:
  if (lVar4 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar5,"pane_T_select_08",uVar3,10);
  }
  else {
    plVar6 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(lVar5,"pane_T_select_08",uVar3,10);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  return;
}


