/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01529320; name: FUN_01529320
 */


undefined4 FUN_01529320(uint param_1)

{
  if (0x33 < param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(uint *)(&DAT_026a9210 + (long)(int)param_1 * 0x10) < 3) {
    return *(undefined4 *)
            (&DAT_021728dc + (long)(int)*(uint *)(&DAT_026a9210 + (long)(int)param_1 * 0x10) * 4);
  }
  return 999999999;
}


