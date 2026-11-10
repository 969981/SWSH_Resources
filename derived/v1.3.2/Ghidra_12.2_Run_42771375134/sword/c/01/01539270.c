/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01539270; name: FUN_01539270
 */


bool FUN_01539270(long param_1)

{
  return (*(byte *)(param_1 + 0x68) & 0x20) == 0;
}


