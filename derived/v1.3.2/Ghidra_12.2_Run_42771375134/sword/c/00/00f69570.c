/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f69570; name: FUN_00f69570
 */


undefined8 FUN_00f69570(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_02721810 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02721810), iVar2 != 0))
  {
    if (((*PTR_DAT_027217b8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_027217b8), puVar1 = PTR_DAT_027217c0, iVar2 != 0)) {
      FUN_00f68da0(PTR_DAT_027217c0);
      FUN_001001c0(PTR__string_02715f58,puVar1,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_027217b8);
    }
    *(undefined **)PTR_DAT_02721818 = PTR_DAT_027217c0;
    __cxa_guard_release(PTR_DAT_02721810);
  }
  return *(undefined8 *)PTR_DAT_02721818;
}


