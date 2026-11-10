/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffb950; name: FUN_00ffb950
 */


void FUN_00ffb950(long param_1)

{
  undefined8 local_18;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_00784d00(param_1,&DAT_02162724,PTR_DAT_027162c0);
  local_18 = 0x438078000000000;
  FUN_00784d30(param_1,&local_18);
  return;
}


