/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e0af0; name: FUN_014e0af0
 */


void FUN_014e0af0(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x5f8) == 0) {
    return;
  }
  FUN_016b2da0(*(long *)(param_1 + 0x5f8),param_2 & 1);
  return;
}


