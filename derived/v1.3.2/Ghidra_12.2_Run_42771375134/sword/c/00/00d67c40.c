/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d67c40; name: FUN_00d67c40
 */


bool FUN_00d67c40(long param_1,long param_2)

{
  if ((((*(long *)(param_1 + 0x7a8) == param_2) || (*(long *)(param_1 + 0x7b0) == param_2)) ||
      (*(long *)(param_1 + 0x7b8) == param_2)) || (*(long *)(param_1 + 0x7c0) == param_2)) {
    return true;
  }
  return *(long *)(param_1 + 0x7c8) == param_2;
}


