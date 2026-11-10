/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00695a10; name: FUN_00695a10
 */


undefined * FUN_00695a10(void)

{
  int iVar1;
  
  if (((DAT_029ed348 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_029ed348), iVar1 != 0)) {
    FUN_00695a90(&DAT_029ed350);
    FUN_001001c0(PTR_LAB_02714fe8,&DAT_029ed350,&PTR_LOOP_025db000);
    __cxa_guard_release(&DAT_029ed348);
  }
  return &DAT_029ed350;
}


