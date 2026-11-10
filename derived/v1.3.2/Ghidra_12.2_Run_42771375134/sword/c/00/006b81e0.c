/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b81e0; name: FUN_006b81e0
 */


bool FUN_006b81e0(long param_1)

{
  if (*(long *)(param_1 + 0x78) == 0) {
    return *(long *)(param_1 + 0x80) != 0;
  }
  return true;
}


