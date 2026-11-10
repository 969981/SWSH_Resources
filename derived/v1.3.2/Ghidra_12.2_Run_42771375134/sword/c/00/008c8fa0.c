/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c8fa0; name: FUN_008c8fa0
 */


void FUN_008c8fa0(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_38;
  
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5e0),0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5e0),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5e0),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5e0),3);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5e0),4);
  FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),*param_2);
  lVar1 = *(long *)(local_38 + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (*(long *)(param_2 + 2) != -0x340d631b7bddd9bb) {
    FUN_0077eb10(lVar1,param_2 + 2,*(undefined8 *)(param_1 + 0x5d0));
    uVar2 = *(undefined8 *)(param_1 + 0x5e0);
    local_48 = *(long *)(param_1 + 0x5d0);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar2,3,0,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
  if (*(long *)(param_2 + 4) != -0x340d631b7bddd9bb) {
    FUN_0077eb10(lVar1,param_2 + 4,*(undefined8 *)(param_1 + 0x5d0));
    uVar2 = *(undefined8 *)(param_1 + 0x5e0);
    local_50 = *(long *)(param_1 + 0x5d0);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar2,2,1,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  if (*(long *)(param_2 + 6) != -0x340d631b7bddd9bb) {
    FUN_0077eb10(lVar1,param_2 + 6,*(undefined8 *)(param_1 + 0x5d0));
    uVar2 = *(undefined8 *)(param_1 + 0x5e0);
    local_58 = *(long *)(param_1 + 0x5d0);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar2,0,2,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
  }
  if (*(long *)(param_2 + 8) != -0x340d631b7bddd9bb) {
    FUN_0077eb10(lVar1,param_2 + 8,*(undefined8 *)(param_1 + 0x5d0));
    uVar2 = *(undefined8 *)(param_1 + 0x5e0);
    local_60 = *(long *)(param_1 + 0x5d0);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar2,1,3,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


