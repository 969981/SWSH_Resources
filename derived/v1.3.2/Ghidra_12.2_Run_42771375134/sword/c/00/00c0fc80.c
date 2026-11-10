/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c0fc80; name: FUN_00c0fc80
 */


void FUN_00c0fc80(long param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  lVar2 = *(long *)(param_1 + 0x5e0);
  if (lVar2 == 0) {
    return;
  }
  local_48 = 0x2ef20707514d7b4a;
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(lVar2,&local_48,0);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(lVar2,&local_48,lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
  }
  if (lVar2 == 0) {
    FUN_014ca220(0,0,param_2,2,0,1);
    lVar2 = *(long *)(param_1 + 0x5f8);
    lVar4 = *(long *)(lVar2 + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_014ca220(lVar2,0,param_2,2,0,1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar2 = *(long *)(param_1 + 0x5f8);
    lVar4 = *(long *)(lVar2 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar2 = *(long *)(param_1 + 0x5f8);
  }
  lVar3 = *(long *)(lVar2 + 0x2f0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar2 = *(long *)(param_1 + 0x5f8);
  }
  lVar2 = *(long *)(lVar2 + 0x2e8);
  plVar5 = (long *)(lVar2 + 0x48);
  if (lVar2 != 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_014c62d0(lVar4,lVar3,lVar2);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar5);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2f0);
  if (lVar2 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_rankmatch_00",uVar1,10);
  }
  else {
    plVar5 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar1 = FUN_0077d470(lVar2);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_rankmatch_00",uVar1,10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_88 = *param_3;
  local_80 = param_3[1];
  uStack_78 = param_3[2];
  local_70 = param_3[3];
  uStack_68 = param_3[4];
  local_60 = param_3[5];
  uStack_58 = param_3[6];
  uStack_b0 = param_4[2];
  local_c0 = *param_4;
  local_b8 = param_4[1];
  local_a8 = param_4[3];
  uStack_a0 = param_4[4];
  local_98 = param_4[5];
  uStack_90 = param_4[6];
  local_48 = 0xea5aca07624bb702;
  local_c8 = 0x2ef20807514d7cfd;
  local_d0 = 0xea5ac907624bb54f;
  local_d8 = 0x2ef20507514d77e4;
  local_e0 = 0xea5ac807624bb39c;
  local_e8 = 0x2ef20607514d7997;
  FUN_00beff30(param_1,&local_88,&local_c0,&local_48,&local_c8,&local_d0,&local_d8,&local_e0,
               &local_e8);
  return;
}


