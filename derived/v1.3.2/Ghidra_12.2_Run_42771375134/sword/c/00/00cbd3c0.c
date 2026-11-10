/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cbd3c0; name: FUN_00cbd3c0
 */


undefined8 * FUN_00cbd3c0(void)

{
  int iVar1;
  
  if (((DAT_02a57868 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02a57868), iVar1 != 0)) {
    DAT_02a57870 = 0xae652fb65c121b9b;
    DAT_02a57878 = &DAT_01cec104;
    DAT_02a57880 = 4;
    DAT_02a57888 = 0;
    FUN_001001c0(PTR_LAB_027151a8,&DAT_02a57870,&PTR_LOOP_025db000);
    __cxa_guard_release(&DAT_02a57868);
  }
  return &DAT_02a57870;
}


