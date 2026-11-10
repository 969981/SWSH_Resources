/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bfe8c0; name: FUN_00bfe8c0
 */


void FUN_00bfe8c0(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_48 = 0xcfaa507f00d501c2;
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(uVar3,&local_48,0);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar4 == 0) goto LAB_00bfe9b0;
LAB_00bfe948:
    plVar6 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_detail_t_22",uVar3,10);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  else {
    plVar6 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0077eb10(uVar3,&local_48,lVar4);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar4 != 0) goto LAB_00bfe948;
LAB_00bfe9b0:
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_detail_t_22",uVar3,10);
  }
  lVar4 = param_1 + 0x100;
  FUN_00bf0790(param_1,*(undefined4 *)(param_2 + 0x210),"pane_T_detail_t_23");
  FUN_00bff2f0(param_1,*(undefined4 *)(param_2 + 0x214),param_2 + 0x218,"pane_T_detail_t_24");
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_48 = 0xcfaa517f00d50375;
  lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar7 == 0) {
    FUN_0077eb10(uVar3,&local_48,0);
    lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar7 == 0) goto LAB_00bfeb60;
LAB_00bfea60:
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = FUN_0077d470(lVar7);
    FUN_00ffd6a0(lVar4,"pane_T_detail_t_25",uVar3,10);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    iVar2 = *(int *)(param_2 + 0x27c);
    if (iVar2 != 1) goto LAB_00bfeab0;
LAB_00bfeb8c:
    uVar3 = *(undefined8 *)(param_1 + 0x5e0);
    local_48 = 0xcf9fe07f00cbeeed;
    lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar7 != 0) {
      plVar6 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0077eb10(uVar3,&local_48,lVar7);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
      if (lVar7 != 0) goto LAB_00bfebf0;
LAB_00bff290:
      FUN_014ca220(0,0,*(undefined4 *)(param_2 + 0x284),1,0,1);
      lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
      if (lVar7 == 0) goto LAB_00bff2b8;
LAB_00bfec3c:
      plVar6 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      uVar1 = *(undefined4 *)(param_2 + 0x288);
      uVar3 = 1;
      goto LAB_00bfec64;
    }
    FUN_0077eb10(uVar3,&local_48,0);
    lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
    if (lVar7 == 0) goto LAB_00bff290;
LAB_00bfebf0:
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_014ca220(lVar7,0,*(undefined4 *)(param_2 + 0x284),1,0,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
    if (lVar7 != 0) goto LAB_00bfec3c;
LAB_00bff2b8:
    uVar1 = *(undefined4 *)(param_2 + 0x288);
    uVar3 = 1;
LAB_00bff2cc:
    FUN_014ca220(0,uVar3,uVar1,1,0,1);
    lVar7 = *(long *)(param_1 + 0x5f8);
    lVar5 = *(long *)(lVar7 + 0x2e0);
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0077eb10(uVar3,&local_48,lVar7);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar7 != 0) goto LAB_00bfea60;
LAB_00bfeb60:
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_detail_t_25",uVar3,10);
    iVar2 = *(int *)(param_2 + 0x27c);
    if (iVar2 == 1) goto LAB_00bfeb8c;
LAB_00bfeab0:
    if (iVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x5e0);
      local_48 = 0xcfa6cf7f00d1f0b8;
      lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
      if (lVar7 == 0) {
        FUN_0077eb10(uVar3,&local_48,0);
        lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
      }
      else {
        plVar6 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0077eb10(uVar3,&local_48,lVar7);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
      }
      if (lVar7 == 0) {
        uVar1 = *(undefined4 *)(param_2 + 0x280);
        uVar3 = 0;
        goto LAB_00bff2cc;
      }
      plVar6 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      uVar1 = *(undefined4 *)(param_2 + 0x280);
      uVar3 = 0;
LAB_00bfec64:
      FUN_014ca220(lVar7,uVar3,uVar1,1,0,1);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    lVar7 = *(long *)(param_1 + 0x5f8);
    lVar5 = *(long *)(lVar7 + 0x2e0);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    lVar7 = *(long *)(param_1 + 0x5f8);
  }
  lVar8 = *(long *)(lVar7 + 0x2f0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    lVar7 = *(long *)(param_1 + 0x5f8);
  }
  lVar7 = *(long *)(lVar7 + 0x2e8);
  plVar6 = (long *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  FUN_014c62d0(lVar5,lVar8,lVar7);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))(plVar6);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2f0);
  if (lVar7 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_detail_t_26",uVar3,10);
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = FUN_0077d470(lVar7);
    FUN_00ffd6a0(lVar4,"pane_T_detail_t_26",uVar3,10);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_48 = 0xcfaa4a7f00d4f790;
  lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar7 == 0) {
    FUN_0077eb10(uVar3,&local_48,0);
    lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0077eb10(uVar3,&local_48,lVar7);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar7 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_detail_t_27",uVar3,10);
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = FUN_0077d470(lVar7);
    FUN_00ffd6a0(lVar4,"pane_T_detail_t_27",uVar3,10);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_00bff650(param_1,*(undefined4 *)(param_2 + 0x28c),*(undefined1 *)(param_2 + 0x290),
               "pane_T_detail_t_28");
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_48 = 0xcfaa4b7f00d4f943;
  lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar7 == 0) {
    FUN_0077eb10(uVar3,&local_48,0);
    lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0077eb10(uVar3,&local_48,lVar7);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar7 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_detail_t_29",uVar3,10);
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = FUN_0077d470(lVar7);
    FUN_00ffd6a0(lVar4,"pane_T_detail_t_29",uVar3,10);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_00bff930(param_1,*(undefined1 *)(param_2 + 0x291),"pane_T_detail_t_30");
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_48 = 0xcfaa4c7f00d4faf6;
  lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar7 == 0) {
    FUN_0077eb10(uVar3,&local_48,0);
    lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0077eb10(uVar3,&local_48,lVar7);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar7 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_detail_t_31",uVar3,10);
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = FUN_0077d470(lVar7);
    FUN_00ffd6a0(lVar4,"pane_T_detail_t_31",uVar3,10);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_00bff930(param_1,*(undefined1 *)(param_2 + 0x292),"pane_T_detail_t_32");
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_48 = 0xcfaa4d7f00d4fca9;
  lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar7 == 0) {
    FUN_0077eb10(uVar3,&local_48,0);
    lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0077eb10(uVar3,&local_48,lVar7);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar7 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar7 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_detail_t_33",uVar3,10);
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = FUN_0077d470(lVar7);
    FUN_00ffd6a0(lVar4,"pane_T_detail_t_33",uVar3,10);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_00bffa60(param_1,*(undefined1 *)(param_2 + 0x293),"pane_T_detail_t_34");
  local_48 = 0x7e249b32c3a86a3c;
  local_60 = 0x7e249c32c3a86bef;
  uStack_58 = 0xcfad547f00d73e65;
  local_68 = 0xcfad537f00d73cb2;
  local_70 = 0x7e249d32c3a86da2;
  local_78 = 0xcfad527f00d73aff;
  FUN_00bf1160(param_1,2,2,&local_48,&uStack_58,&local_60,&local_68,&local_70,&local_78);
  return;
}


