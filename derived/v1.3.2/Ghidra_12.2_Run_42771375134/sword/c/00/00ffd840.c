/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffd840; name: FUN_00ffd840
 */


void FUN_00ffd840(undefined8 param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != (long *)0x0) {
    if (((*PTR_DAT_02718e60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02718e60), iVar1 != 0)) {
      if (((*PTR_DAT_02716318 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02716318), iVar1 != 0)) {
        *(undefined8 *)PTR_DAT_02716320 = 0;
        __cxa_guard_release(PTR_DAT_02716318);
      }
      *(undefined **)PTR_DAT_02718e68 = PTR_DAT_02716320;
      __cxa_guard_release(PTR_DAT_02718e60);
    }
    for (plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2); plVar2 != (long *)0x0;
        plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_02718e68) {
        FUN_019a65b0(param_2);
        break;
      }
    }
    for (plVar2 = (long *)param_2[5]; plVar2 != param_2 + 4; plVar2 = (long *)plVar2[1]) {
      FUN_00ffd840(param_1,plVar2 + -1);
    }
  }
  return;
}


