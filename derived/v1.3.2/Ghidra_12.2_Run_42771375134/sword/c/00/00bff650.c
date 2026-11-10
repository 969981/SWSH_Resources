/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bff650; name: FUN_00bff650
 */


void FUN_00bff650(long param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong local_48;
  
  switch(param_2) {
  case 0:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_48 = 0x627f00cf01aa;
    break;
  case 1:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_48 = 0x637f00cf035d;
    break;
  case 2:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_48 = 0x607f00cefe44;
    break;
  case 3:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_48 = 0x617f00cefff7;
    break;
  case 4:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_48 = 0x5e7f00cefade;
    break;
  case 5:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_48 = 0x5f7f00cefc91;
    break;
  default:
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
    goto joined_r0x00bff8f4;
  }
  local_48 = local_48 | 0xcfa3000000000000;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar1,&local_48,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar1,&local_48,lVar3);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
  }
joined_r0x00bff8f4:
  if (lVar3 == 0) {
    FUN_014ca220(0,0,param_3,3,0,1);
    lVar3 = *(long *)(param_1 + 0x5f8);
    lVar2 = *(long *)(lVar3 + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_014ca220(lVar3,0,param_3,3,0,1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar3 = *(long *)(param_1 + 0x5f8);
    lVar2 = *(long *)(lVar3 + 0x2e0);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar3 = *(long *)(param_1 + 0x5f8);
  }
  lVar4 = *(long *)(lVar3 + 0x2f0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar3 = *(long *)(param_1 + 0x5f8);
  }
  lVar3 = *(long *)(lVar3 + 0x2e8);
  plVar5 = (long *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_014c62d0(lVar2,lVar4,lVar3);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar5);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2f0);
  if (lVar3 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,param_4,uVar1,10);
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar1 = FUN_0077d470(lVar3);
    FUN_00ffd6a0(param_1 + 0x100,param_4,uVar1,10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  return;
}


