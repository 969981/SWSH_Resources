/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013eae90; name: FUN_013eae90
 */


undefined8 * FUN_013eae90(void)

{
  int iVar1;
  
  if (((DAT_02a72b38 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_02a72b38), iVar1 == 0)) {
    return &DAT_02a72b30;
  }
  if (((DAT_02a72ac8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02a72ac8), iVar1 != 0)) {
    if (((*PTR_DAT_027291b8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_027291b8), iVar1 != 0)) {
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
      *(undefined **)PTR_DAT_027291c0 = PTR_DAT_02710b90;
      __cxa_guard_release(PTR_DAT_027291b8);
    }
    DAT_02a72ac0 = PTR_DAT_027291c0;
    __cxa_guard_release(&DAT_02a72ac8);
  }
  DAT_02a72b30 = &DAT_02a72ac0;
  __cxa_guard_release(&DAT_02a72b38);
  return &DAT_02a72b30;
}


