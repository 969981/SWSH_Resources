/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5d3d0; name: FUN_00e5d3d0
 */


undefined8 FUN_00e5d3d0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_0271fc48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271fc48), iVar1 != 0))
  {
    if (((*PTR_DAT_0271ed68 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ed68), iVar1 != 0)) {
      if (((*PTR_DAT_0271ed78 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ed78), iVar1 != 0)) {
        uVar2 = FUN_01577390();
        *(undefined8 *)PTR_DAT_0271ed80 = uVar2;
        __cxa_guard_release(PTR_DAT_0271ed78);
      }
      *(undefined **)PTR_DAT_0271ed70 = PTR_DAT_0271ed80;
      __cxa_guard_release(PTR_DAT_0271ed68);
    }
    *(undefined **)PTR_DAT_0271fc50 = PTR_DAT_0271ed70;
    __cxa_guard_release(PTR_DAT_0271fc48);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_0271fc50) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


