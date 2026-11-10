/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c5440; name: FUN_008c5440
 */


void FUN_008c5440(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [13];
  long local_38;
  
  if ((*(long *)(param_1 + 0x4c0) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58), lVar3 == 0)) {
    *(undefined8 *)(param_1 + 0x5e0) = 0;
    return;
  }
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_c0 = &local_38;
  local_38 = 0;
  local_b8 = (code *)0xe2c06acab97c29c2;
  FUN_01037340(lVar3,&local_c0,0);
  lVar1 = local_38;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  *(long *)(param_1 + 0x5e0) = lVar1;
  if (lVar1 == 0) {
    return;
  }
  FUN_016bbde0(lVar1,0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5e0),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5e0),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5e0),3);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5e0),4);
  lVar3 = *(long *)(param_1 + 0x5e0);
  pcVar2 = *(code **)(lVar3 + 0x168);
  local_c0 = (long *)&LAB_008cc6c0;
  local_b8 = FUN_008cc770;
  local_b0 = FUN_008cc780;
  local_a8 = &LAB_008cc790;
  alStack_a0[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0x170) = 0;
    *(undefined8 *)(lVar3 + 0x178) = 0;
    *(undefined8 *)(lVar3 + 0x160) = 0;
    *(undefined8 *)(lVar3 + 0x168) = 0;
    (*pcVar2)(lVar3 + 0x180);
    if (local_b0 == (code *)0x0) goto LAB_008c55d8;
  }
  (*local_b0)(alStack_a0,lVar3 + 0x180);
  *(undefined1 **)(lVar3 + 0x178) = local_a8;
  *(code **)(lVar3 + 0x168) = local_b8;
  *(code **)(lVar3 + 0x170) = local_b0;
  *(undefined8 *)(lVar3 + 0x160) = local_c0;
LAB_008c55d8:
  FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_38 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_38 = -0x66eac26da4a18e5d;
  FUN_0077eb10(lVar3,&local_38,*(undefined8 *)(param_1 + 0x5d0));
  uVar5 = *(undefined8 *)(param_1 + 0x5e0);
  local_c8 = *(long *)(param_1 + 0x5d0);
  if (local_c8 != 0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar5,2,1,&local_c8);
  if (local_c8 != 0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
    local_c8 = 0;
  }
  local_38 = 0x34ecf4b93e7611b7;
  FUN_0077eb10(lVar3,&local_38,*(undefined8 *)(param_1 + 0x5d0));
  uVar5 = *(undefined8 *)(param_1 + 0x5e0);
  local_d0 = *(long *)(param_1 + 0x5d0);
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar5,3,0,&local_d0);
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
  local_38 = -0xcb48c1882f9c317;
  FUN_0077eb10(lVar3,&local_38,*(undefined8 *)(param_1 + 0x5d0));
  uVar5 = *(undefined8 *)(param_1 + 0x5e0);
  local_d8 = *(long *)(param_1 + 0x5d0);
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar5,1,3,&local_d8);
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
    local_d8 = 0;
  }
  local_38 = 0x1aeb0c926f1fa755;
  FUN_0077eb10(lVar3,&local_38,*(undefined8 *)(param_1 + 0x5d0));
  uVar5 = *(undefined8 *)(param_1 + 0x5e0);
  local_e0 = *(long *)(param_1 + 0x5d0);
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar5,0,2,&local_e0);
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (long *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(alStack_a0);
  }
  return;
}


