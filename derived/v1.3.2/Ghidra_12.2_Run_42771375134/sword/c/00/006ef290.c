/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ef290; name: FUN_006ef290
 */


undefined * FUN_006ef290(void)

{
  int iVar1;
  
  if (((*PTR_DAT_02715718 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_02715718), iVar1 == 0))
  {
    return PTR_DAT_02715720;
  }
  if (((*PTR_DAT_02715728 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02715728), iVar1 != 0))
  {
    if (((*PTR_DAT_02715738 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715738), iVar1 != 0)) {
      if (((*PTR_DAT_027107f0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_027107f0), iVar1 != 0)) {
        *(undefined8 *)PTR_DAT_027107f8 = 0;
        __cxa_guard_release(PTR_DAT_027107f0);
      }
      *(undefined **)PTR_DAT_02715740 = PTR_DAT_027107f8;
      __cxa_guard_release(PTR_DAT_02715738);
    }
    *(undefined **)PTR_DAT_02715730 = PTR_DAT_02715740;
    __cxa_guard_release(PTR_DAT_02715728);
  }
  *(undefined **)PTR_DAT_02715720 = PTR_DAT_02715730;
  __cxa_guard_release(PTR_DAT_02715718);
  return PTR_DAT_02715720;
}


