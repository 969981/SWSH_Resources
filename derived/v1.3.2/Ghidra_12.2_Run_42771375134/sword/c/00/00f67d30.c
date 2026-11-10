/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f67d30; name: FUN_00f67d30
 */


undefined * FUN_00f67d30(void)

{
  undefined *puVar1;
  int iVar2;
  string *psVar3;
  ulong local_38 [2];
  void *local_28;
  
  if (((*PTR_DAT_027217a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_027217a8), iVar2 != 0))
  {
    local_38[1] = 0;
    local_28 = (void *)0x0;
    local_38[0] = 0x2e6c6f7308;
    if (((*PTR_DAT_027217b8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_027217b8), puVar1 = PTR_DAT_027217c0, iVar2 != 0)) {
      FUN_00f68da0(PTR_DAT_027217c0);
      FUN_001001c0(PTR__string_02715f58,puVar1,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_027217b8);
    }
    puVar1 = *(undefined **)(PTR_DAT_027217c0 + 0x10);
    if ((*PTR_DAT_027217c0 & 1) == 0) {
      puVar1 = PTR_DAT_027217c0 + 1;
    }
    psVar3 = (string *)std::string::append((char *)local_38,(ulong)puVar1);
    std::string::string((string *)PTR_DAT_027217b0,psVar3);
    if ((local_38[0] & 1) != 0) {
      operator_delete(local_28);
    }
    FUN_001001c0(PTR__string_02715f58,PTR_DAT_027217b0,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_027217a8);
  }
  return PTR_DAT_027217b0;
}


