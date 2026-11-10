/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee5880; name: FUN_00ee5880
 */


void FUN_00ee5880(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x13e) = param_2 & 1;
  return;
}


