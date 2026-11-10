/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01348020; name: FUN_01348020
 */


undefined * FUN_01348020(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_02728268 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_02728268), iVar1 == 0))
  {
    return PTR_DAT_02728270;
  }
  if (((*PTR_DAT_02727b18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02727b18), iVar1 != 0))
  {
    if (((*PTR_DAT_027278c0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_027278c0), iVar1 != 0)) {
      if (((*PTR_DAT_0271df30 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_0271df30), iVar1 != 0)) {
        uVar2 = FUN_00706e40();
        *(undefined8 *)PTR_DAT_0271df38 = uVar2;
        __cxa_guard_release(PTR_DAT_0271df30);
      }
      *(undefined **)PTR_DAT_027278c8 = PTR_DAT_0271df38;
      __cxa_guard_release(PTR_DAT_027278c0);
    }
    *(undefined **)PTR_DAT_02727b20 = PTR_DAT_027278c8;
    __cxa_guard_release(PTR_DAT_02727b18);
  }
  *(undefined **)PTR_DAT_02728270 = PTR_DAT_02727b20;
  __cxa_guard_release(PTR_DAT_02728268);
  return PTR_DAT_02728270;
}


