/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01113d50; name: FUN_01113d50
 */


void FUN_01113d50(long *param_1,undefined4 param_2)

{
  long local_28;
  
  if (param_1[0x11] == 0) {
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
  *(undefined4 *)(param_1 + 0x10) = 6;
  (**(code **)(*param_1 + 0x88))(param_1,6);
  return;
}


