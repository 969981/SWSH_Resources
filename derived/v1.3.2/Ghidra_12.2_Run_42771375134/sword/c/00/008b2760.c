/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b2760; name: FUN_008b2760
 */


undefined8 FUN_008b2760(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_02717a40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717a40), iVar1 != 0))
  {
    if (((*PTR_DAT_02717a50 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02717a50), iVar1 != 0)) {
      uVar3 = FUN_008b2850();
      *(undefined8 *)PTR_DAT_02717a58 = uVar3;
      __cxa_guard_release(PTR_DAT_02717a50);
    }
    *(undefined **)PTR_DAT_02717a48 = PTR_DAT_02717a58;
    __cxa_guard_release(PTR_DAT_02717a40);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    if (plVar2 == (long *)PTR_DAT_02717a48) break;
    plVar2 = (long *)*plVar2;
  }
  return 1;
}


