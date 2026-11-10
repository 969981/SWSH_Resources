/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103bbd0; name: FUN_0103bbd0
 */


bool FUN_0103bbd0(long param_1)

{
  if (*(long *)(param_1 + 0x6a8) == 0) {
    return true;
  }
  return (*(byte *)(*(long *)(param_1 + 0x6a8) + 0x58) & 1) == 0;
}


