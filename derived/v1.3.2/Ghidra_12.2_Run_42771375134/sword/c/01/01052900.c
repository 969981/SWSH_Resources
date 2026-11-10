/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052900; name: FUN_01052900
 */


void FUN_01052900(long param_1,uint param_2)

{
  if (((int)param_2 < 1) ||
     (*(uint *)(*(long *)(*(long *)(param_1 + 0x148) + 0x148) + 0x2e8) < param_2)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *(uint *)(*(long *)(param_1 + 0x148) + 0xe8) = param_2;
  return;
}


