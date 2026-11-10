/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddd100; name: FUN_00ddd100
 */


undefined8
FUN_00ddd100(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
            undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long local_68;
  long local_60;
  long local_58;
  long local_48;
  
  local_58 = *param_3;
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
  uVar1 = FUN_00dbd5f0(param_1,param_2,&local_58,&local_60,&local_68,param_6,param_7);
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
    uVar3 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x4d8) != 0) && (*(char *)(*(long *)(param_1 + 0x4d8) + 0x170) != '\0')
       ) {
      lVar2 = FUN_00add530(&local_48,param_2,param_4);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      local_48 = lVar2;
      FUN_006d9640(param_1,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      *(long *)(param_1 + 0x5e0) = lVar2;
      FUN_00794370(lVar2,param_1 + 0x4d0);
      FUN_00794790(*(undefined8 *)(param_1 + 0x5e0),*param_3);
      FUN_007947e0(*(undefined8 *)(param_1 + 0x5e0),1);
      if (*(char *)(param_1 + 0x5e8) != '\0') {
        FUN_007946a0(*(undefined8 *)(param_1 + 0x5e0),1);
      }
      if (*(int *)(param_1 + 0x5ec) != 0) {
        lVar2 = *(long *)PTR_DAT_027105c8;
        uVar3 = FUN_00794780(*(undefined8 *)(param_1 + 0x5e0));
        FUN_00790fe0(*(undefined8 *)(lVar2 + 0x238),uVar3,*(undefined4 *)(param_1 + 0x5ec));
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


