/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015638c0; name: FUN_015638c0
 */


undefined * FUN_015638c0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_0272aef0 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_0272aef0), iVar1 == 0))
  {
    return PTR_DAT_0272aef8;
  }
  if (((*PTR_DAT_02716108 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02716108), iVar1 != 0))
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
    *(undefined **)PTR_DAT_02716110 = PTR_DAT_02710b90;
    __cxa_guard_release(PTR_DAT_02716108);
  }
  *(undefined **)PTR_DAT_0272aef8 = PTR_DAT_02716110;
  __cxa_guard_release(PTR_DAT_0272aef0);
  return PTR_DAT_0272aef8;
}


