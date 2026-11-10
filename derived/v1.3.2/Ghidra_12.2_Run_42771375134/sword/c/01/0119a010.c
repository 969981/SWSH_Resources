/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119a010; name: FUN_0119a010
 */


bool FUN_0119a010(long param_1)

{
  if (*(long *)(param_1 + 0x110) == 0) {
    return false;
  }
  return *(long *)(param_1 + 0x110) == *(long *)(param_1 + 0xa8);
}


