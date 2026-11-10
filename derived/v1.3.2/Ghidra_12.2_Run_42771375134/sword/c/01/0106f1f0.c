/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106f1f0; name: FUN_0106f1f0
 */


byte FUN_0106f1f0(long param_1)

{
  if (*(long *)(param_1 + 0x5d0) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return *(byte *)(*(long *)(param_1 + 0x5d0) + 0x58) & 1;
}


