/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ecf10; name: FUN_012ecf10
 */


bool FUN_012ecf10(long param_1,uint param_2)

{
  if (4 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return (*(ulong *)(param_1 + 8) & 1L << ((long)(int)param_2 & 0x3fU)) != 0;
}


