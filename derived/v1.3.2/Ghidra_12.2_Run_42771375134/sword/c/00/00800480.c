/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00800480; name: FUN_00800480
 */


uint FUN_00800480(string *param_1,undefined8 param_2)

{
  uint uVar1;
  string local_38 [16];
  void *local_28;
  
  std::string::string(local_38,param_1);
  uVar1 = FUN_008004e0(local_38,param_2);
  if (((byte)local_38[0] & 1) != 0) {
    operator_delete(local_28);
  }
  return uVar1 & 1;
}


