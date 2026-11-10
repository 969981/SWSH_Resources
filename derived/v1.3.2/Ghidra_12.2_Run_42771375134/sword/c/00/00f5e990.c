/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f5e990; name: FUN_00f5e990
 */


undefined8 FUN_00f5e990(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_02721458 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02721458), iVar2 != 0))
  {
    if (((*PTR_DAT_02721400 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02721400), puVar1 = PTR_DAT_02721408, iVar2 != 0)) {
      FUN_00f5e110(PTR_DAT_02721408);
      FUN_001001c0(PTR__string_02715f58,puVar1,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02721400);
    }
    *(undefined **)PTR_DAT_02721460 = PTR_DAT_02721408;
    __cxa_guard_release(PTR_DAT_02721458);
  }
  return *(undefined8 *)PTR_DAT_02721460;
}


