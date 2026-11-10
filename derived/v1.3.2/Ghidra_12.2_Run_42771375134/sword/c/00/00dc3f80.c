/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc3f80; name: FUN_00dc3f80
 */


undefined8
FUN_00dc3f80(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
            undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  long local_68;
  long local_60;
  long local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_58 = *param_3;
  uStack_50 = param_7;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  local_60 = *param_4;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  local_68 = *param_5;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  uVar1 = FUN_00db5ea0(param_1,param_2,&local_58,&local_60,&local_68,param_6,param_7);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x3a0) == 2) {
    FUN_00db4000(param_1,param_1 + 0x3b0,param_1 + 0x3d0,param_1 + 0x3c0,0x100);
    lVar2 = *(long *)(param_1 + 0x420);
  }
  else if (*(int *)(param_1 + 0x3a0) == 1) {
    FUN_00db3ef0(*(undefined4 *)(param_1 + 0x3e0),param_1,param_1 + 0x3b0,0x100);
    lVar2 = *(long *)(param_1 + 0x420);
  }
  else {
    local_48 = param_1 + 0x360;
    FUN_00dc4a40(param_1,&local_48);
    *(undefined8 *)(param_1 + 0x360) = 0;
    lVar2 = *(long *)(param_1 + 0x420);
  }
  if (lVar2 == 0) {
    lVar2 = FUN_012c49c0(&local_48,*(undefined8 *)(param_1 + 8),&uStack_50);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_48 = lVar2;
    FUN_006d9640(param_1,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    *(long *)(param_1 + 0x420) = lVar2;
    if (lVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x3a0) == 2) {
    FUN_00db4990(lVar2,param_1 + 0x3b0,param_1 + 0x3f0,param_1 + 0x3c0);
  }
  else if (*(int *)(param_1 + 0x3a0) == 1) {
    FUN_00db4750(*(undefined4 *)(param_1 + 0x400),lVar2,param_1 + 0x3b0);
  }
  FUN_012c4020(*(undefined8 *)(param_1 + 0x420),0x100);
  return 1;
}


