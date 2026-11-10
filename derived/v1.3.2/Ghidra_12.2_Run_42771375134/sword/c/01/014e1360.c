/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e1360; name: FUN_014e1360
 */


void FUN_014e1360(long param_1,uint param_2)

{
  if (param_2 < 5) {
                    /* WARNING: Subroutine does not return */
    memset((void *)(param_1 + (ulong)param_2 * 0x880 + 0x910),0,0x87f);
  }
  return;
}


