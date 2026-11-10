/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0151dd30; name: FUN_0151dd30
 */


bool FUN_0151dd30(long param_1,byte param_2)

{
  if (0x11 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return 4 < *(uint *)(param_1 + (ulong)param_2 * 0x5c + 0x60);
}


