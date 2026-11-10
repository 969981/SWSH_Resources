/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fba2d0; name: FUN_00fba2d0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00fba2d0(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*param_1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar4 = *(undefined8 **)(*param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  if (((*PTR_DAT_027201e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_027201e0), iVar1 != 0))
  {
    if (((*PTR_DAT_0271ed78 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ed78), iVar1 != 0)) {
      if (((*PTR_DAT_0271ed88 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ed88), iVar1 != 0)) {
        uVar3 = FUN_0156b190();
        *(undefined8 *)PTR_DAT_0271ed90 = uVar3;
        __cxa_guard_release(PTR_DAT_0271ed88);
      }
      *(undefined **)PTR_DAT_0271ed80 = PTR_DAT_0271ed90;
      __cxa_guard_release(PTR_DAT_0271ed78);
    }
    *(undefined **)PTR_DAT_027201e8 = PTR_DAT_0271ed80;
    __cxa_guard_release(PTR_DAT_027201e0);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar2 == (long *)PTR_DAT_027201e8) break;
    plVar2 = (long *)*plVar2;
  }
  return puVar4 + -10;
}


