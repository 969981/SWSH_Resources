/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01312850; name: FUN_01312850
 */


void FUN_01312850(long *param_1,long *param_2)

{
  long local_18;
  
  (**(code **)(*param_2 + 0x10))(&local_18,param_2);
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  param_1[0x13] = local_18;
  (**(code **)(*param_1 + 0x38))(param_1);
  FUN_013128c0(param_1 + 0xc);
  return;
}


