/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00888ce0; name: FUN_00888ce0
 */


bool FUN_00888ce0(uint param_1)

{
  long lVar1;
  
  if (0x647 < param_1) {
    return false;
  }
  if (*(long *)PTR_DAT_02717468 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar1 = FUN_00887ec0(*(long *)PTR_DAT_02717468,param_1);
  return *(char *)(lVar1 + 0x16) == '\t';
}


