/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00794690; name: FUN_00794690
 */


void FUN_00794690(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x27b) = param_2 & 1;
  return;
}


