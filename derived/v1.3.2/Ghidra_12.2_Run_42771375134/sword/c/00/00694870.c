/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00694870; name: FUN_00694870
 */


undefined * FUN_00694870(void)

{
  int iVar1;
  
  if (((DAT_029ece58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_029ece58), iVar1 != 0)) {
    FUN_006948f0(&DAT_029ece60);
    FUN_001001c0(PTR_LAB_02714e98,&DAT_029ece60,&PTR_LOOP_025db000);
    __cxa_guard_release(&DAT_029ece58);
  }
  return &DAT_029ece60;
}


