/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dde520; name: FUN_00dde520
 */


undefined8
FUN_00dde520(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
            undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  long local_58;
  long local_50;
  long local_48;
  
  local_48 = *param_3;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  local_50 = *param_4;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  local_58 = *param_5;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  uVar1 = FUN_00db5ea0(param_1,param_2,&local_48,&local_50,&local_58,param_6,param_7);
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
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x3a0) == 2) {
      FUN_00db4000(param_1,param_1 + 0x3b0,param_1 + 0x3c0,param_1 + 0x3d0,0x20);
    }
    else if (*(int *)(param_1 + 0x3a0) == 1) {
      FUN_00db3ef0(*(undefined4 *)(param_1 + 0x3a4),param_1,param_1 + 0x3b0,0x20);
    }
    uVar2 = 1;
  }
  return uVar2;
}


