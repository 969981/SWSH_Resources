/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c95a30; name: FUN_00c95a30
 */


undefined8 FUN_00c95a30(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_0271c4b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c4b8), iVar1 != 0))
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
    *(undefined **)PTR_DAT_0271c4c0 = PTR_DAT_0271c298;
    __cxa_guard_release(PTR_DAT_0271c4b8);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_0271c4c0) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


