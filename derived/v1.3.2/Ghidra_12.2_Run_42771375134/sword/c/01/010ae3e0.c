/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ae3e0; name: FUN_010ae3e0
 */


void FUN_010ae3e0(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long local_58;
  long local_50;
  long local_48;
  
  FUN_00ff86a0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar1 = *(long *)(local_48 + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d0),3);
  if ((param_2 & 1) != 0) {
    local_48 = 0x76f6dcf74e4b1c32;
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(lVar2 + 0x2e8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      FUN_0077eb10(lVar1,&local_48,0);
      uVar3 = *(undefined8 *)(param_1 + 0x5d0);
      lVar2 = *(long *)(param_1 + 0x2b0);
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      FUN_0077eb10(lVar1,&local_48,lVar4);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      uVar3 = *(undefined8 *)(param_1 + 0x5d0);
      lVar2 = *(long *)(param_1 + 0x2b0);
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_50 = *(long *)(lVar2 + 0x2e8);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    FUN_016bb930(uVar3,3,0,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d0),2);
  if ((param_3 & 1) != 0) {
    local_48 = 0x76f6d8f74e4b1566;
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(lVar2 + 0x2e8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      FUN_0077eb10(lVar1,&local_48,0);
      uVar3 = *(undefined8 *)(param_1 + 0x5d0);
      lVar2 = *(long *)(param_1 + 0x2b0);
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      FUN_0077eb10(lVar1,&local_48,lVar4);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      uVar3 = *(undefined8 *)(param_1 + 0x5d0);
      lVar2 = *(long *)(param_1 + 0x2b0);
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_58 = *(long *)(lVar2 + 0x2e8);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    FUN_016bb930(uVar3,2,5,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


