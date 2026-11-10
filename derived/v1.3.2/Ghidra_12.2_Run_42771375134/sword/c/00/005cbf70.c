/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cbf70; name: FUN_005cbf70
 */


undefined * FUN_005cbf70(void)

{
  int iVar1;
  
  if (((DAT_029e8ff8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_029e8ff8), iVar1 != 0)) {
    FUN_005cc000(&DAT_029e9000);
    FUN_001001c0(PTR_FUN_02713f80,&DAT_029e9000,&PTR_LOOP_025db000);
    __cxa_guard_release(&DAT_029e8ff8);
  }
  return &DAT_029e9000;
}


