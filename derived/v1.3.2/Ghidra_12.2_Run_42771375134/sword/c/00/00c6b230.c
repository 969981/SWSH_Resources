/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6b230; name: FUN_00c6b230
 */


undefined * FUN_00c6b230(void)

{
  int iVar1;
  
  if (((*PTR_DAT_0271c218 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c218), iVar1 == 0))
  {
    return PTR_DAT_0271c220;
  }
  if (((*PTR_DAT_0271c228 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c228), iVar1 != 0))
  {
    if (((*PTR_DAT_02710ba0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02710ba0), iVar1 != 0)) {
      if (((*PTR_DAT_027107f0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_027107f0), iVar1 != 0)) {
        *(undefined8 *)PTR_DAT_027107f8 = 0;
        __cxa_guard_release(PTR_DAT_027107f0);
      }
      *(undefined **)PTR_DAT_02710b90 = PTR_DAT_027107f8;
      __cxa_guard_release(PTR_DAT_02710ba0);
    }
    *(undefined **)PTR_DAT_0271c230 = PTR_DAT_02710b90;
    __cxa_guard_release(PTR_DAT_0271c228);
  }
  *(undefined **)PTR_DAT_0271c220 = PTR_DAT_0271c230;
  __cxa_guard_release(PTR_DAT_0271c218);
  return PTR_DAT_0271c220;
}


