/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011074f0; name: FUN_011074f0
 */


void FUN_011074f0(long *param_1,undefined4 param_2)

{
  long local_28;
  
  if (param_1[0x13] == 0) {
    local_28 = 0;
    FUN_010f0db0(0,param_2);
  }
  else {
    FUN_010eb5e0(&local_28);
    FUN_010f0db0(local_28,param_2);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  *(undefined4 *)(param_1 + 0xf) = 10;
  (**(code **)(*param_1 + 0x88))(param_1);
  return;
}


