/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013262a0; name: FUN_013262a0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_013262a0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_02727a78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02727a78), iVar1 != 0))
  {
    if (((*PTR_DAT_02727a88 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02727a88), iVar1 != 0)) {
      if (((*PTR_DAT_027278c0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_027278c0), iVar1 != 0)) {
        uVar3 = FUN_00d3ff90();
        *(undefined8 *)PTR_DAT_027278c8 = uVar3;
        __cxa_guard_release(PTR_DAT_027278c0);
      }
      *(undefined **)PTR_DAT_02727a90 = PTR_DAT_027278c8;
      __cxa_guard_release(PTR_DAT_02727a88);
    }
    *(undefined **)PTR_DAT_02727a80 = PTR_DAT_02727a90;
    __cxa_guard_release(PTR_DAT_02727a78);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar2 == (long *)PTR_DAT_02727a80) break;
    plVar2 = (long *)*plVar2;
  }
  return param_1 + -10;
}


