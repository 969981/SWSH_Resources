/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bf7e0; name: FUN_005bf7e0
 */


undefined * FUN_005bf7e0(void)

{
  int iVar1;
  
  if (((DAT_02764f20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02764f20), iVar1 != 0)) {
    FUN_005bf870(&DAT_02763ec8);
    FUN_001001c0(PTR_FUN_02713e40,&DAT_02763ec8,&PTR_LOOP_025db000);
    __cxa_guard_release(&DAT_02764f20);
  }
  return &DAT_02763ec8;
}


