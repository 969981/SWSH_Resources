/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c9e3f0; name: FUN_00c9e3f0
 */


undefined * FUN_00c9e3f0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_0271c528 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c528), iVar1 == 0))
  {
    return PTR_DAT_0271c530;
  }
  if (((*PTR_DAT_0271c2e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c2e8), iVar1 != 0))
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
    *(undefined **)PTR_DAT_0271c2f0 = PTR_DAT_0271c298;
    __cxa_guard_release(PTR_DAT_0271c2e8);
  }
  *(undefined **)PTR_DAT_0271c530 = PTR_DAT_0271c2f0;
  __cxa_guard_release(PTR_DAT_0271c528);
  return PTR_DAT_0271c530;
}


