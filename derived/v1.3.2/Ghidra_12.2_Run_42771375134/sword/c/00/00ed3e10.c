/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed3e10; name: FUN_00ed3e10
 */


void FUN_00ed3e10(undefined8 param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_100;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined **local_d0 [4];
  undefined ***local_b0;
  undefined **local_a0 [4];
  undefined ***local_80;
  undefined8 local_70;
  long local_58;
  long local_50;
  long local_48;
  long local_38;
  
  lVar3 = *(long *)(param_2 + 0x88);
  lVar5 = *(long *)PTR_DAT_027194d8;
  if (lVar3 == 0) {
    FUN_010672e0(&local_38,0,0);
    lVar3 = *(long *)(param_2 + 0x90);
    if (lVar3 == 0) goto LAB_00ed3ff8;
LAB_00ed3e80:
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_01009f40(&local_48,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(param_2 + 0x88);
    if (lVar3 != 0) goto LAB_00ed3eb8;
LAB_00ed400c:
    FUN_010673a0(&local_50,0);
    lVar3 = *(long *)(param_2 + 0x90);
    if (lVar3 == 0) goto LAB_00ed4020;
LAB_00ed3ef0:
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_01009f60(&local_58,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar2 = *(undefined8 *)(lVar5 + 0x88);
    local_100 = local_58;
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_010672e0(&local_38,lVar3,0);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(param_2 + 0x90);
    if (lVar3 != 0) goto LAB_00ed3e80;
LAB_00ed3ff8:
    FUN_01009f40(&local_48,0);
    lVar3 = *(long *)(param_2 + 0x88);
    if (lVar3 == 0) goto LAB_00ed400c;
LAB_00ed3eb8:
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_010673a0(&local_50,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(param_2 + 0x90);
    if (lVar3 != 0) goto LAB_00ed3ef0;
LAB_00ed4020:
    FUN_01009f60(&local_58,0);
    uVar2 = *(undefined8 *)(lVar5 + 0x88);
    local_100 = local_58;
  }
  local_58 = local_100;
  if (local_100 != 0) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x10))();
  }
  local_f8 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  local_f0 = local_50;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  local_e0 = *(long *)(lVar5 + 0xa0);
  local_e8 = uVar2;
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x10))();
  }
  local_b0 = local_d0;
  local_d0[0] = &PTR_LAB_026603e8;
  local_a0[0] = &PTR_LAB_02660430;
  local_70 = *param_3;
  local_80 = local_a0;
  FUN_00fb1a20(local_48,&local_100);
  if (local_a0 == local_80) {
    pcVar1 = (code *)(*local_80)[4];
LAB_00ed4048:
    (*pcVar1)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar1 = (code *)(*local_80)[5];
    goto LAB_00ed4048;
  }
  if (local_d0 == local_b0) {
    pcVar1 = (code *)(*local_b0)[4];
  }
  else {
    if (local_b0 == (undefined ***)0x0) goto LAB_00ed407c;
    pcVar1 = (code *)(*local_b0)[5];
  }
  (*pcVar1)();
LAB_00ed407c:
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = 0;
  }
  if (local_f0 != 0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = 0;
  }
  if (local_f8 != 0) {
    (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
    local_f8 = 0;
  }
  if (local_100 != 0) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
    local_100 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


