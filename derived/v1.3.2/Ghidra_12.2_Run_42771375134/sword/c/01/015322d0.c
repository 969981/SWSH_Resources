/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015322d0; name: FUN_015322d0
 */


undefined * FUN_015322d0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_0271e580 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_0271e580), iVar1 == 0))
  {
    return PTR_DAT_0271e588;
  }
  if (((*PTR_DAT_02710ba0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02710ba0), iVar1 != 0))
  {
    if (((*PTR_DAT_027107f0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_027107f0), iVar1 != 0)) {
      *(undefined8 *)PTR_DAT_027107f8 = 0;
      __cxa_guard_release(PTR_DAT_027107f0);
    }
    *(undefined **)PTR_DAT_02710b90 = PTR_DAT_027107f8;
    __cxa_guard_release(PTR_DAT_02710ba0);
  }
  *(undefined **)PTR_DAT_0271e588 = PTR_DAT_02710b90;
  __cxa_guard_release(PTR_DAT_0271e580);
  return PTR_DAT_0271e588;
}


