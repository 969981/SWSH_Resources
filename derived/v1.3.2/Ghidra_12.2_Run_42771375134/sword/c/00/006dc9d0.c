/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006dc9d0; name: FUN_006dc9d0
 */


void FUN_006dc9d0(void)

{
  if ((*(char *)(*(long *)PTR_DAT_02715490 + 0x1e8) == '\0') &&
     (*(long *)(*(long *)PTR_DAT_02715490 + 0x58) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


