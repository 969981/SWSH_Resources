/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008cf210; name: FUN_008cf210
 */


void FUN_008cf210(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long local_58;
  long local_50;
  long local_48 [2];
  undefined4 local_38;
  
  local_48[1] = 0x100000003;
  local_38 = 1;
  lVar1 = param_1 + 0x100;
  local_48[0] = *(long *)(param_1 + 0x5e0);
  if (local_48[0] != 0) {
    (**(code **)(*(long *)(local_48[0] + 0x48) + 0x10))();
  }
  FUN_008cf360(lVar1,&DAT_021469f8,local_48,&DAT_02146a00,0,param_2,param_3);
  if (local_48[0] != 0) {
    (**(code **)(*(long *)(local_48[0] + 0x48) + 0x18))();
    local_48[0] = 0;
  }
  local_50 = *(long *)(param_1 + 0x5e0);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  FUN_008c4e70(lVar1,&DAT_02146a08,&local_50,&DAT_02146a10,10);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  local_58 = *(long *)(param_1 + 0x5e0);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_008cf480(lVar1,&DAT_02146a18,&local_58,&DAT_02146a20,local_48 + 1,0,param_3);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


