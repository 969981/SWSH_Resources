/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f52ef0; name: FUN_00f52ef0
 */


undefined8 FUN_00f52ef0(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_02720bf8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02720bf8), iVar2 != 0))
  {
    if (((*PTR_DAT_02720c08 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02720c08), puVar1 = PTR_DAT_02720c10, iVar2 != 0)) {
      FUN_00f530f0(PTR_DAT_02720c10);
      FUN_001001c0(PTR__string_02715f58,puVar1,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02720c08);
    }
    *(undefined **)PTR_DAT_02720c00 = PTR_DAT_02720c10;
    __cxa_guard_release(PTR_DAT_02720bf8);
  }
  return *(undefined8 *)PTR_DAT_02720c00;
}


