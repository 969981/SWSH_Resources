/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00888f20; name: FUN_00888f20
 */


bool FUN_00888f20(undefined4 param_1)

{
  long lVar1;
  
  if (*(long *)PTR_DAT_02717468 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar1 = FUN_00887ec0(*(long *)PTR_DAT_02717468,param_1);
  if (*(char *)(lVar1 + 0x1c) == '\x04') {
    return (*(byte *)(lVar1 + 0x10) & 0x20) == 0;
  }
  return false;
}


