/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00786b30; name: FUN_00786b30
 */


long * FUN_00786b30(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(*(long *)(param_2 + 0xe8) + 0x18);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,param_3,1);
  if (plVar2 != (long *)0x0) {
    if (((*PTR_DAT_02716328 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02716328), iVar1 != 0)) {
      if (((*PTR_DAT_02716318 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02716318), iVar1 != 0)) {
        *(undefined8 *)PTR_DAT_02716320 = 0;
        __cxa_guard_release(PTR_DAT_02716318);
      }
      *(undefined **)PTR_DAT_02716330 = PTR_DAT_02716320;
      __cxa_guard_release(PTR_DAT_02716328);
    }
    for (plVar3 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2); plVar3 != (long *)0x0;
        plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_02716330) {
        return plVar2;
      }
    }
  }
  return (long *)0x0;
}


