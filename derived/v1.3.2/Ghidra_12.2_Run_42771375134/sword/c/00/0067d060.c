/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067d060; name: FUN_0067d060
 */


undefined * FUN_0067d060(void)

{
  int iVar1;
  
  if (((DAT_029ec650 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_029ec650), iVar1 != 0)) {
    FUN_0067d0f0(&DAT_029ec658);
    FUN_001001c0(PTR_LAB_02714df8,&DAT_029ec658,&PTR_LOOP_025db000);
    __cxa_guard_release(&DAT_029ec650);
  }
  return &DAT_029ec658;
}


