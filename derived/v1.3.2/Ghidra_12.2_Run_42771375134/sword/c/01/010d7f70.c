/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d7f70; name: FUN_010d7f70
 */


void FUN_010d7f70(long param_1,byte param_2)

{
  FUN_00ffa160(param_1,param_2 & 1,1);
  *(byte *)(param_1 + 0x5d0) = param_2 & 1;
  return;
}


