/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c9e520; name: FUN_00c9e520
 */


undefined * FUN_00c9e520(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_0271c538 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c538), iVar1 == 0))
  {
    return PTR_DAT_0271c540;
  }
  if (((*PTR_DAT_0271c548 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c548), iVar1 != 0))
  {
    if (((*PTR_DAT_0271c2a8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c2a8), iVar1 != 0)) {
      if (((*PTR_DAT_0271c2b0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c2b0), iVar1 != 0)) {
        uVar2 = FUN_00c72b60();
        *(undefined8 *)PTR_DAT_0271c2b8 = uVar2;
        __cxa_guard_release(PTR_DAT_0271c2b0);
      }
      *(undefined **)PTR_DAT_0271c298 = PTR_DAT_0271c2b8;
      __cxa_guard_release(PTR_DAT_0271c2a8);
    }
    *(undefined **)PTR_DAT_0271c550 = PTR_DAT_0271c298;
    __cxa_guard_release(PTR_DAT_0271c548);
  }
  *(undefined **)PTR_DAT_0271c540 = PTR_DAT_0271c550;
  __cxa_guard_release(PTR_DAT_0271c538);
  return PTR_DAT_0271c540;
}


