/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c1b00; name: FUN_012c1b00
 */


undefined * FUN_012c1b00(void)

{
  int iVar1;
  
  if (((*PTR_DAT_027205d0 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_027205d0), iVar1 == 0))
  {
    return PTR_DAT_027205d8;
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
  *(undefined **)PTR_DAT_027205d8 = PTR_DAT_02710b90;
  __cxa_guard_release(PTR_DAT_027205d0);
  return PTR_DAT_027205d8;
}


