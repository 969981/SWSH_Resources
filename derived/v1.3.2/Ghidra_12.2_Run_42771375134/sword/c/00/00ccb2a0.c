/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ccb2a0; name: FUN_00ccb2a0
 */


undefined8 FUN_00ccb2a0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_0271c798 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c798), iVar1 != 0))
  {
    if (((*PTR_DAT_0271c748 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c748), iVar1 != 0)) {
      uVar3 = FUN_008a4980();
      *(undefined8 *)PTR_DAT_0271c750 = uVar3;
      __cxa_guard_release(PTR_DAT_0271c748);
    }
    *(undefined **)PTR_DAT_0271c7a0 = PTR_DAT_0271c750;
    __cxa_guard_release(PTR_DAT_0271c798);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    if (plVar2 == (long *)PTR_DAT_0271c7a0) break;
    plVar2 = (long *)*plVar2;
  }
  return 1;
}


