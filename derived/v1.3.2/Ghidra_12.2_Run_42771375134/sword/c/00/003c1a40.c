/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c1a40; name: FUN_003c1a40
 */


void FUN_003c1a40(long param_1,long param_2)

{
  long local_18;
  
  local_18 = param_2;
  FUN_003c36b0(param_1 + 0x240,&local_18);
  *(byte *)(param_2 + 0x88) = *(byte *)(param_2 + 0x88) & 0xfe;
  return;
}


