/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa74a0; name: FUN_00fa74a0
 */


void FUN_00fa74a0(long param_1,uint param_2)

{
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(param_1 + (long)(int)param_2 * 8 + 0x60) == 0) {
    return;
  }
  FUN_00fa6e40();
  return;
}


