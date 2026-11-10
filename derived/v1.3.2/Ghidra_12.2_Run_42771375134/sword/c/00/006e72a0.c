/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e72a0; name: FUN_006e72a0
 */


long FUN_006e72a0(long param_1)

{
  return *(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 3;
}


