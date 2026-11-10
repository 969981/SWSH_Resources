/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e6aa90; name: FUN_00e6aa90
 */


undefined * FUN_00e6aa90(void)

{
  int iVar1;
  
  if (((*PTR_DAT_0271fd68 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_0271fd68), iVar1 == 0))
  {
    return PTR_DAT_0271fd70;
  }
  if (((*PTR_DAT_0271e828 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271e828), iVar1 != 0))
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
    *(undefined **)PTR_DAT_0271e830 = PTR_DAT_02710b90;
    __cxa_guard_release(PTR_DAT_0271e828);
  }
  *(undefined **)PTR_DAT_0271fd70 = PTR_DAT_0271e830;
  __cxa_guard_release(PTR_DAT_0271fd68);
  return PTR_DAT_0271fd70;
}


