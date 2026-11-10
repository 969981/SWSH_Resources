/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007606c0; name: FUN_007606c0
 */


undefined * FUN_007606c0(void)

{
  int iVar1;
  
  if (((DAT_029f4738 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_029f4738), iVar1 != 0)) {
    FUN_006cee90(&DAT_029f4744,1,0);
    DAT_029f4750 = 0;
    FUN_001001c0(PTR_LAB_02715628,&DAT_029f4740,&PTR_LOOP_025db000);
    __cxa_guard_release(&DAT_029f4738);
  }
  return &DAT_029f4740;
}


