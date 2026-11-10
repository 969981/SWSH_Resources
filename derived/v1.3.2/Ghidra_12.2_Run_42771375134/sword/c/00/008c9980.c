/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c9980; name: FUN_008c9980
 */


void FUN_008c9980(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x698) == 0) {
    return;
  }
  FUN_016b2d70(*(long *)(param_1 + 0x698),param_2 & 1);
  return;
}


