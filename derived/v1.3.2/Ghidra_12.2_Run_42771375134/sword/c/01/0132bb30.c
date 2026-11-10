/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132bb30; name: FUN_0132bb30
 */


bool FUN_0132bb30(long param_1,long param_2)

{
  if ((((*(long *)(param_1 + 0x60) == param_2) || (*(long *)(param_1 + 0x68) == param_2)) ||
      (*(long *)(param_1 + 0x70) == param_2)) ||
     (((*(long *)(param_1 + 0x78) == param_2 || (*(long *)(param_1 + 0x80) == param_2)) ||
      ((*(long *)(param_1 + 0x88) == param_2 || (*(long *)(param_1 + 0x90) == param_2)))))) {
    return true;
  }
  return *(long *)(param_1 + 0x98) == param_2;
}


