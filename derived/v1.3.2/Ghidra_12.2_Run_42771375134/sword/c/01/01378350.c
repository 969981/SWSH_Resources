/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01378350; name: FUN_01378350
 */


undefined8 FUN_01378350(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_02728a88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02728a88), iVar1 != 0))
  {
    if (((*PTR_DAT_0271df30 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271df30), iVar1 != 0)) {
      uVar3 = FUN_00706e40();
      *(undefined8 *)PTR_DAT_0271df38 = uVar3;
      __cxa_guard_release(PTR_DAT_0271df30);
    }
    *(undefined **)PTR_DAT_02728a90 = PTR_DAT_0271df38;
    __cxa_guard_release(PTR_DAT_02728a88);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    if (plVar2 == (long *)PTR_DAT_02728a90) break;
    plVar2 = (long *)*plVar2;
  }
  return 1;
}


