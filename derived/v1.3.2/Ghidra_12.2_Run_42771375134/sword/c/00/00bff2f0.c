/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bff2f0; name: FUN_00bff2f0
 */


void FUN_00bff2f0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong local_48;
  
  switch(param_2) {
  case 0:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_48 = 0xcb7f00d1e9ec;
    break;
  case 1:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_48 = 0xce7f00d1ef05;
    break;
  case 2:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_48 = 0xcd7f00d1ed52;
    break;
  case 3:
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar3 == 0) {
      FUN_0077d520(0,param_3);
      lVar3 = *(long *)(param_1 + 0x5f8);
      lVar4 = *(long *)(lVar3 + 0x2e0);
    }
    else {
      plVar6 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0077d520(lVar3,param_3);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      lVar3 = *(long *)(param_1 + 0x5f8);
      lVar4 = *(long *)(lVar3 + 0x2e0);
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar3 = *(long *)(param_1 + 0x5f8);
    }
    lVar3 = *(long *)(lVar3 + 0x2e8);
    plVar6 = (long *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    FUN_014c7a10(lVar4,0,lVar3,0,0);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar6);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_48 = 0xcfa6d07f00d1f26b;
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2f0);
    if (lVar3 == 0) {
      FUN_0077eb10(uVar1,&local_48,0);
      lVar3 = *(long *)(param_1 + 0x5f8);
      lVar4 = *(long *)(lVar3 + 0x2e0);
    }
    else {
      plVar6 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0077eb10(uVar1,&local_48,lVar3);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      lVar3 = *(long *)(param_1 + 0x5f8);
      lVar4 = *(long *)(lVar3 + 0x2e0);
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar3 = *(long *)(param_1 + 0x5f8);
    }
    lVar5 = *(long *)(lVar3 + 0x2e8);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      lVar3 = *(long *)(param_1 + 0x5f8);
    }
    lVar3 = *(long *)(lVar3 + 0x2f0);
    plVar6 = (long *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    FUN_014c62d0(lVar4,lVar5,lVar3);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar6);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    if (lVar4 == 0) goto switchD_00bff32c_default;
    plVar6 = (long *)(lVar4 + 0x48);
    pcVar2 = *(code **)(*plVar6 + 0x18);
    goto LAB_00bff59c;
  default:
    goto switchD_00bff32c_default;
  }
  local_48 = local_48 | 0xcfa6000000000000;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar1,&local_48,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar6 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0077eb10(uVar1,&local_48,lVar3);
    pcVar2 = *(code **)(*plVar6 + 0x18);
LAB_00bff59c:
    (*pcVar2)(plVar6);
switchD_00bff32c_default:
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar3 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,param_4,uVar1,10);
  }
  else {
    plVar6 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar1 = FUN_0077d470(lVar3);
    FUN_00ffd6a0(param_1 + 0x100,param_4,uVar1,10);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  return;
}


