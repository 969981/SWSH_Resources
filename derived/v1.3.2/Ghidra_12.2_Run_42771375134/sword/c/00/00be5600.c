/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be5600; name: FUN_00be5600
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00be5600(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (*param_1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = *(undefined8 **)(*param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  plVar2 = (long *)(**(code **)*puVar3)(puVar3);
  if (((*PTR_DAT_0271b8a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271b8a0), iVar1 != 0))
  {
    if (((*PTR_DAT_02710ba0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02710ba0), iVar1 != 0)) {
      if (((*PTR_DAT_027107f0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_027107f0), iVar1 != 0)) {
        *(undefined8 *)PTR_DAT_027107f8 = 0;
        __cxa_guard_release(PTR_DAT_027107f0);
      }
      *(undefined **)PTR_DAT_02710b90 = PTR_DAT_027107f8;
      __cxa_guard_release(PTR_DAT_02710ba0);
    }
    *(undefined **)PTR_DAT_0271b8a8 = PTR_DAT_02710b90;
    __cxa_guard_release(PTR_DAT_0271b8a0);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar2 == (long *)PTR_DAT_0271b8a8) break;
    plVar2 = (long *)*plVar2;
  }
  return puVar3 + -10;
}


