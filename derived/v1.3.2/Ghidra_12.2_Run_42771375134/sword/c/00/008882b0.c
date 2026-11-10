/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008882b0; name: FUN_008882b0
 */


undefined2 FUN_008882b0(long param_1,ushort param_2)

{
  if (0xf < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return *(undefined2 *)(*(long *)(param_1 + 0x160) + (ulong)param_2 * 2 + 0x20);
}


