/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a193c0; name: FUN_00a193c0
 */


undefined1 FUN_00a193c0(long param_1,uint param_2)

{
  if (3 < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return *(undefined1 *)
          (*(long *)(param_1 + 0x6f8) + *(long *)(&DAT_01d4dd60 + (long)(int)param_2 * 8) * 0x2e8 +
          0x7d);
}


