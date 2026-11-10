/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f730e0; name: FUN_00f730e0
 */


undefined * FUN_00f730e0(void)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  string *psVar4;
  ulong local_38 [2];
  void *local_28;
  
  if (((*PTR_DAT_02721c10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02721c10), iVar2 != 0))
  {
    local_38[1] = 0;
    local_28 = (void *)0x0;
    local_38[0] = 0x2e6c6f7308;
    if (((*PTR_DAT_02721c00 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02721c00), puVar1 = PTR_DAT_02721c08, iVar2 != 0)) {
      FUN_00f74020(PTR_DAT_02721c08);
      FUN_001001c0(PTR__string_02715f58,puVar1,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02721c00);
    }
    puVar1 = *(undefined **)(PTR_DAT_02721c08 + 0x10);
    if ((*PTR_DAT_02721c08 & 1) == 0) {
      puVar1 = PTR_DAT_02721c08 + 1;
    }
    pcVar3 = (char *)std::string::append((char *)local_38,(ulong)puVar1);
    psVar4 = (string *)std::string::append(pcVar3);
    std::string::string((string *)PTR_DAT_02721c18,psVar4);
    if ((local_38[0] & 1) != 0) {
      operator_delete(local_28);
    }
    FUN_001001c0(PTR__string_02715f58,PTR_DAT_02721c18,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02721c10);
  }
  return PTR_DAT_02721c18;
}


