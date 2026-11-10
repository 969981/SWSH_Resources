/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c5540; name: FUN_009c5540
 */


void FUN_009c5540(long param_1,byte param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    memset((void *)(param_1 + 0x12),2,(ulong)param_2);
  }
  return;
}


