/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ce560; name: FUN_001ce560
 */


void FUN_001ce560(long param_1,long param_2)

{
  FUN_001ce5a0(param_1,param_2,param_1 + 0x2130,0);
  *(bool *)(param_2 + 0x44) = *(float *)(param_2 + 0x40) == 0.0;
  return;
}


