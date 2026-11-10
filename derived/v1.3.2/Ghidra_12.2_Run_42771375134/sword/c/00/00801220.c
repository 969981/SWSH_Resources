/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00801220; name: FUN_00801220
 */


long FUN_00801220(long param_1,ulong param_2)

{
  char acStack_a0 [127];
  undefined1 local_21;
  
  snprintf(acStack_a0,0x80,"%d",param_2 & 0xffffffff);
  local_21 = 0;
  std::string::append((char *)(param_1 + 0x18));
  return param_1;
}


