/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddf7f0; name: FUN_00ddf7f0
 */


undefined8
FUN_00ddf7f0(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
            undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long local_70 [6];
  
  local_70[4] = *param_3;
  local_70[5] = param_7;
  if (local_70[4] != 0) {
    (**(code **)(*(long *)(local_70[4] + 0x48) + 0x10))();
  }
  local_70[3] = *param_4;
  if (local_70[3] != 0) {
    (**(code **)(*(long *)(local_70[3] + 0x48) + 0x10))();
  }
  local_70[2] = *param_5;
  if (local_70[2] != 0) {
    (**(code **)(*(long *)(local_70[2] + 0x48) + 0x10))();
  }
  uVar1 = FUN_00dbd5f0(param_1,param_2,local_70 + 4,local_70 + 3,local_70 + 2,param_6,param_7);
  if (local_70[2] != 0) {
    (**(code **)(*(long *)(local_70[2] + 0x48) + 0x18))();
    local_70[2] = 0;
  }
  if (local_70[3] != 0) {
    (**(code **)(*(long *)(local_70[3] + 0x48) + 0x18))();
    local_70[3] = 0;
  }
  if (local_70[4] != 0) {
    (**(code **)(*(long *)(local_70[4] + 0x48) + 0x18))();
    local_70[4] = 0;
  }
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    local_70[0] = 0;
    local_70[1] = 0;
    FUN_00db3ef0(*(undefined4 *)(param_1 + 0x548),param_1,local_70,2);
    if (*(long *)(param_1 + 0x550) == 0) {
      lVar2 = FUN_012c49c0(local_70,*(undefined8 *)(param_1 + 8),local_70 + 5);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      local_70[0] = lVar2;
      FUN_006d9640(param_1,local_70);
      if (local_70[0] != 0) {
        (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
        local_70[0] = 0;
      }
      *(long *)(param_1 + 0x550) = lVar2;
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x558) == 2) {
          FUN_00db4990(lVar2,param_1 + 0x560,param_1 + 0x580,param_1 + 0x570);
        }
        else if (*(int *)(param_1 + 0x558) == 1) {
          FUN_00db4750(*(undefined4 *)(param_1 + 0x590),lVar2,param_1 + 0x560);
        }
        FUN_012c4020(*(undefined8 *)(param_1 + 0x550),0x10);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


