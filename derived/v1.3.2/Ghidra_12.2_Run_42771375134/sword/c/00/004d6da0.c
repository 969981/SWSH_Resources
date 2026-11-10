/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d6da0; name: FUN_004d6da0
 */


void FUN_004d6da0(long param_1,long param_2,long param_3)

{
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x70) = (param_2 - param_3) + *(long *)(param_1 + 0x70);
  }
  return;
}


