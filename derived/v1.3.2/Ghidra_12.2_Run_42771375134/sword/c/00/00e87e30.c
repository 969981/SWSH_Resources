/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e87e30; name: FUN_00e87e30
 */


undefined8 FUN_00e87e30(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_0271fb90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271fb90), iVar1 != 0))
  {
    if (((*PTR_DAT_0271fba0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271fba0), iVar1 != 0)) {
      uVar3 = FUN_0156b190();
      *(undefined8 *)PTR_DAT_0271fba8 = uVar3;
      __cxa_guard_release(PTR_DAT_0271fba0);
    }
    *(undefined **)PTR_DAT_0271fb98 = PTR_DAT_0271fba8;
    __cxa_guard_release(PTR_DAT_0271fb90);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    if (plVar2 == (long *)PTR_DAT_0271fb98) break;
    plVar2 = (long *)*plVar2;
  }
  return 1;
}


