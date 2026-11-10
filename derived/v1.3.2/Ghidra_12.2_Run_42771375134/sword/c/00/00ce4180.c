/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce4180; name: FUN_00ce4180
 */


undefined * FUN_00ce4180(void)

{
  int iVar1;
  
  if (((*PTR_DAT_0271c9e0 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c9e0), iVar1 == 0))
  {
    return PTR_DAT_0271c9e8;
  }
  if (((*PTR_DAT_02717588 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717588), iVar1 != 0))
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
    *(undefined **)PTR_DAT_02717590 = PTR_DAT_02710b90;
    __cxa_guard_release(PTR_DAT_02717588);
  }
  *(undefined **)PTR_DAT_0271c9e8 = PTR_DAT_02717590;
  __cxa_guard_release(PTR_DAT_0271c9e0);
  return PTR_DAT_0271c9e8;
}


