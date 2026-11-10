/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012eac20; name: FUN_012eac20
 */


undefined8 FUN_012eac20(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_02727750 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02727750), iVar1 != 0))
  {
    if (((*PTR_DAT_0271df20 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar1 != 0)) {
      if (((*PTR_DAT_0271df30 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_0271df30), iVar1 != 0)) {
        uVar2 = FUN_00706e40();
        *(undefined8 *)PTR_DAT_0271df38 = uVar2;
        __cxa_guard_release(PTR_DAT_0271df30);
      }
      *(undefined **)PTR_DAT_0271df28 = PTR_DAT_0271df38;
      __cxa_guard_release(PTR_DAT_0271df20);
    }
    *(undefined **)PTR_DAT_02727758 = PTR_DAT_0271df28;
    __cxa_guard_release(PTR_DAT_02727750);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_02727758) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


