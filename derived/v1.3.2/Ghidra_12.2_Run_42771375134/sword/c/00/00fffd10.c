/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fffd10; name: FUN_00fffd10
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00fffd10(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_02723408 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02723408), iVar1 != 0))
  {
    if (((*PTR_DAT_02723418 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02723418), iVar1 != 0)) {
      if (((*PTR_DAT_02723428 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02723428), iVar1 != 0)) {
        uVar3 = FUN_00fffe40();
        *(undefined8 *)PTR_DAT_02723430 = uVar3;
        __cxa_guard_release(PTR_DAT_02723428);
      }
      *(undefined **)PTR_DAT_02723420 = PTR_DAT_02723430;
      __cxa_guard_release(PTR_DAT_02723418);
    }
    *(undefined **)PTR_DAT_02723410 = PTR_DAT_02723420;
    __cxa_guard_release(PTR_DAT_02723408);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar2 == (long *)PTR_DAT_02723410) break;
    plVar2 = (long *)*plVar2;
  }
  return param_1 + -10;
}


