/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003be9f0; name: FUN_003be9f0
 */


byte FUN_003be9f0(long param_1,byte param_2)

{
  return (*(char *)(*(long *)(param_1 + 0xb0) + 0x1f) == '\x01' ^ param_2 ^ 0xff) & 1;
}


