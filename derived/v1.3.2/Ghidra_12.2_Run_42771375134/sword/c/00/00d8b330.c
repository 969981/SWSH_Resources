/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d8b330; name: FUN_00d8b330
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00d8b330(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_02717ba0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717ba0), iVar1 != 0))
  {
    if (((*PTR_DAT_02717bb0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02717bb0), iVar1 != 0)) {
      if (((*PTR_DAT_027107f0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_027107f0), iVar1 != 0)) {
        *(undefined8 *)PTR_DAT_027107f8 = 0;
        __cxa_guard_release(PTR_DAT_027107f0);
      }
      *(undefined **)PTR_DAT_02717bb8 = PTR_DAT_027107f8;
      __cxa_guard_release(PTR_DAT_02717bb0);
    }
    *(undefined **)PTR_DAT_02717ba8 = PTR_DAT_02717bb8;
    __cxa_guard_release(PTR_DAT_02717ba0);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar2 == (long *)PTR_DAT_02717ba8) break;
    plVar2 = (long *)*plVar2;
  }
  return param_1 + -0xb;
}


