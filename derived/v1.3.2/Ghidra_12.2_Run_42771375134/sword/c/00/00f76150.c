/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f76150; name: FUN_00f76150
 */


undefined8 FUN_00f76150(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_02721ca8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02721ca8), iVar2 != 0))
  {
    if (((*PTR_DAT_02721c00 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02721c00), puVar1 = PTR_DAT_02721c08, iVar2 != 0)) {
      FUN_00f74020(PTR_DAT_02721c08);
      FUN_001001c0(PTR__string_02715f58,puVar1,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02721c00);
    }
    *(undefined **)PTR_DAT_02721cb0 = PTR_DAT_02721c08;
    __cxa_guard_release(PTR_DAT_02721ca8);
  }
  return *(undefined8 *)PTR_DAT_02721cb0;
}


