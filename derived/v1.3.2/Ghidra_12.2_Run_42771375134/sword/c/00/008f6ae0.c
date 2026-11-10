/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f6ae0; name: FUN_008f6ae0
 */


void FUN_008f6ae0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined1 auStack_38 [8];
  
  plVar4 = &local_60;
  lVar1 = *(long *)(param_1 + 0x88);
  if ((*(uint *)(lVar1 + 0xa70) >> 0xb & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    lVar2 = *(long *)(lVar1 + 0x9e0);
    plVar3 = (long *)(param_1 + 0x1e8);
    if ((*(uint *)(lVar1 + 0xa70) >> 0xc & 1) == 0) {
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      lVar1 = FUN_008ea4d0(auStack_38,uVar5);
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      }
      if (*plVar3 != 0) {
        (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
        *plVar3 = 0;
      }
      *(long *)(param_1 + 0x1e8) = lVar1;
      FUN_01524b60(lVar1,lVar2);
      FUN_008fabc0(param_1,plVar3);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      local_50 = *(long *)(*(long *)(param_1 + 0x88) + 0xa20);
      if (local_50 == 0) {
        FUN_008f4e30(param_1,param_1 + 600,&local_50);
      }
      else {
        plVar3 = (long *)(local_50 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_008f4e30(param_1,param_1 + 600,&local_50);
        (**(code **)(*plVar3 + 0x18))(plVar3);
        local_50 = 0;
      }
      local_58 = *(long *)(*(long *)(param_1 + 0x88) + 0xa28);
      if (local_58 == 0) {
        FUN_008f4e30(param_1,param_1 + 0x2c8,&local_58);
      }
      else {
        plVar3 = (long *)(local_58 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_008f4e30(param_1,param_1 + 0x2c8,&local_58);
        (**(code **)(*plVar3 + 0x18))(plVar3);
        local_58 = 0;
      }
      local_60 = *(long *)(*(long *)(param_1 + 0x88) + 0xa30);
      lVar1 = param_1 + 0x338;
      if (local_60 != 0) {
        plVar4 = (long *)(local_60 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_008f4e30(param_1,lVar1,&local_60);
        (**(code **)(*plVar4 + 0x18))(plVar4);
        return;
      }
      local_60 = 0;
    }
    else {
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      lVar1 = FUN_008ea4d0(auStack_38,uVar5);
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      }
      if (*plVar3 != 0) {
        (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
        *plVar3 = 0;
      }
      *(long *)(param_1 + 0x1e8) = lVar1;
      FUN_01524b60(lVar1,lVar2);
      FUN_008fabc0(param_1,plVar3);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      local_48 = *(long *)(*(long *)(param_1 + 0x88) + 0xa20);
      lVar1 = param_1 + 600;
      if (local_48 != 0) {
        plVar4 = (long *)(local_48 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_008f4e30(param_1,lVar1,&local_48);
        (**(code **)(*plVar4 + 0x18))(plVar4);
        return;
      }
      plVar4 = &local_48;
      local_48 = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    lVar1 = *(long *)(lVar1 + 0x9e0);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    plVar4 = (long *)(param_1 + 0x1e8);
    lVar2 = FUN_008ea4d0(auStack_38,uVar5);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (*plVar4 != 0) {
      (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
      *plVar4 = 0;
    }
    *(long *)(param_1 + 0x1e8) = lVar2;
    FUN_01524b60(lVar2,lVar1);
    FUN_008fabc0(param_1,plVar4);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    local_40 = *(long *)(*(long *)(param_1 + 0x88) + 0xa20);
    lVar1 = param_1 + 600;
    if (local_40 != 0) {
      plVar4 = (long *)(local_40 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_008f4e30(param_1,lVar1,&local_40);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      return;
    }
    plVar4 = &local_40;
    local_40 = 0;
  }
  FUN_008f4e30(param_1,lVar1,plVar4);
  return;
}


