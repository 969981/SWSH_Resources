/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0143b920; name: FUN_0143b920
 */


undefined8 * FUN_0143b920(void)

{
  int iVar1;
  
  if (((DAT_02a74198 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_02a74198), iVar1 == 0)) {
    return &DAT_02a74190;
  }
  if (((DAT_02a74168 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02a74168), iVar1 != 0)) {
    if (((*PTR_DAT_027299c0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_027299c0), iVar1 != 0)) {
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
      *(undefined **)PTR_DAT_027299c8 = PTR_DAT_02710b90;
      __cxa_guard_release(PTR_DAT_027299c0);
    }
    DAT_02a74160 = PTR_DAT_027299c8;
    __cxa_guard_release(&DAT_02a74168);
  }
  DAT_02a74190 = &DAT_02a74160;
  __cxa_guard_release(&DAT_02a74198);
  return &DAT_02a74190;
}


