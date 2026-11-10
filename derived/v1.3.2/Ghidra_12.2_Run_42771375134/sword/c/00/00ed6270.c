/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed6270; name: FUN_00ed6270
 */


void FUN_00ed6270(long param_1)

{
  if (*(long *)(param_1 + 0x6d0) != *(long *)(param_1 + 0x6d8)) {
    *(long *)(param_1 + 0x6d8) = *(long *)(param_1 + 0x6d8) + -0x30;
  }
  return;
}


