/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cef20; name: _INIT_288
 */


void _INIT_288(void)

{
  code *pcVar1;
  int local_18 [2];
  
  local_18[0] = nn::os::AllocateTlsSlot(PTR_DAT_02710860,(_func_void_ulong *)0x0);
  if (local_18[0] != 0) {
    nn::diag::detail::AbortImpl("","","",0,(Result *)local_18,"");
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x6cef88);
    (*pcVar1)();
  }
  FUN_001001c0(PTR_LAB_027152f8,PTR_DAT_02710860,&PTR_LOOP_025db000);
  return;
}


