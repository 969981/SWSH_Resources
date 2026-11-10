/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108aaf0; name: FUN_0108aaf0
 */


void FUN_0108aaf0(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80 [4];
  long local_60;
  long local_58;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0);
  FUN_006cf0a0(local_80 + 1,&DAT_0266f058);
  FUN_00ff8620(&local_58,uVar2,local_80 + 1,param_2);
  lVar3 = *(long *)(local_58 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (*(long *)(param_1 + 0x5e0) != 0) {
    FUN_019a65b0();
  }
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar4 + 0x2e0);
  lVar1 = param_1 + 0x100;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_80[1] = 0x97f43350a5b34401;
  local_80[0] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_58 = -0x18147af4ec3633a9;
  FUN_008c4e70(lVar1,local_80 + 1,local_80,&local_58,param_2);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar6 == 0) {
    FUN_014c9030(lVar5,0,0);
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_014c9030(lVar5,0,lVar6);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  local_80[1] = 0xe7eb840b13c9caa4;
  lVar6 = *(long *)(lVar4 + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(lVar3,local_80 + 1,0);
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0077eb10(lVar3,local_80 + 1,lVar6);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  local_80[1] = 0x3cc08dd753ae9575;
  FUN_0167cce0(lVar4,local_80 + 1,param_2);
  local_80[1] = 0x97f43250a5b3424e;
  local_88 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_58 = -0x718b944f4a8d2a79;
  FUN_008c4e70(lVar1,local_80 + 1,&local_88,&local_58,param_2);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  local_80[1] = 0x97f43150a5b3409b;
  local_90 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_58 = -0x718b954f4a8d2c2c;
  FUN_008c4e70(lVar1,local_80 + 1,&local_90,&local_58,param_2);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  local_80[1] = 0x7ee420298fcfd199;
  local_98 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_58 = 0x470c8cd3fd212f80;
  FUN_008c4e70(lVar1,local_80 + 1,&local_98,&local_58,param_2);
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  local_80[1] = 0x179629f477baf300;
  local_a0 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_58 = -0x16efd7f4eb3d4276;
  FUN_008c4e70(lVar1,local_80 + 1,&local_a0,&local_58,param_2);
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  local_80[1] = 0x97f43150a5b3409b;
  lVar4 = FUN_0103bca0(*(undefined8 *)(param_1 + 0x2b0),local_80 + 1);
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | param_2 < 2;
  }
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5d0),0);
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5d8),0);
  local_80[1] = 0x9cdab70b0d0f73aa;
  lVar4 = FUN_00ffdd70(lVar1,local_80 + 1);
  if (lVar4 != 0) {
    local_80[1] = 0;
    FUN_016b7990(lVar4,local_80 + 1,0,1);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


