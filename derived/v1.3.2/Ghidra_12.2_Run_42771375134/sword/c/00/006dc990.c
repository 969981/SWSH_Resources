/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006dc990; name: FUN_006dc990
 */


void FUN_006dc990(void)

{
  if (*(long *)(*(long *)PTR_DAT_02715490 + 0x58) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *(undefined1 *)(*(long *)PTR_DAT_02715490 + 0x1e8) = 1;
  return;
}


