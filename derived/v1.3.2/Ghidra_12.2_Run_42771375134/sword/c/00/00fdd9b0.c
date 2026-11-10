/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdd9b0; name: FUN_00fdd9b0
 */


void FUN_00fdd9b0(long param_1,undefined4 *param_2)

{
  long local_48 [2];
  undefined4 local_38;
  long local_28;
  
  local_48[1] = 0x100000003;
  local_38 = 1;
  local_28 = *(long *)(param_1 + 0x5d0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_008cf360(param_1 + 0x100,&DAT_02162160,&local_28,&DAT_02162168,1,*param_2,param_2[1]);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  local_48[0] = *(long *)(param_1 + 0x5d0);
  if (local_48[0] != 0) {
    (**(code **)(*(long *)(local_48[0] + 0x48) + 0x10))();
  }
  FUN_008cf480(param_1 + 0x100,&DAT_02162170,local_48,&DAT_02162178,local_48 + 1,2,param_2[1]);
  if (local_48[0] != 0) {
    (**(code **)(*(long *)(local_48[0] + 0x48) + 0x18))();
  }
  return;
}


