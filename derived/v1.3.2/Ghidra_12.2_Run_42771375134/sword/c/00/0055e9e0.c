/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055e9e0; name: FUN_0055e9e0
 */


undefined8 FUN_0055e9e0(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x368) = param_2 & 1;
  return 0;
}


