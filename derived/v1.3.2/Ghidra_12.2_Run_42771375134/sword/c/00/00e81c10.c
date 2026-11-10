/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e81c10; name: FUN_00e81c10
 */


undefined8 FUN_00e81c10(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_18;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*(int *)(*param_1 + 0x54) == 0) {
    return 0;
  }
  FUN_00deff50(&local_18);
  if (*(long **)(local_18 + 0x1f0) == *(long **)(local_18 + 0x1e8)) {
    lVar4 = 0;
  }
  else {
    lVar4 = **(long **)(local_18 + 0x1e8);
  }
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    local_18 = 0;
  }
  puVar5 = (undefined8 *)(lVar4 + 0x50);
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  if (((*PTR_DAT_0271f858 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271f858), iVar1 != 0))
  {
    if (((*PTR_DAT_0271e808 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271e808), iVar1 != 0)) {
      if (((*PTR_DAT_0271e818 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_0271e818), iVar1 != 0)) {
        uVar3 = FUN_00db8eb0();
        *(undefined8 *)PTR_DAT_0271e820 = uVar3;
        __cxa_guard_release(PTR_DAT_0271e818);
      }
      *(undefined **)PTR_DAT_0271e810 = PTR_DAT_0271e820;
      __cxa_guard_release(PTR_DAT_0271e808);
    }
    *(undefined **)PTR_DAT_0271f860 = PTR_DAT_0271e810;
    __cxa_guard_release(PTR_DAT_0271f858);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)(**(code **)*puVar5)(puVar5);
      if (((*PTR_DAT_0271fe40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_0271fe40), iVar1 != 0)) {
        if (((*PTR_DAT_0271e808 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_0271e808), iVar1 != 0)) {
          if (((*PTR_DAT_0271e818 & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(PTR_DAT_0271e818), iVar1 != 0)) {
            uVar3 = FUN_00db8eb0();
            *(undefined8 *)PTR_DAT_0271e820 = uVar3;
            __cxa_guard_release(PTR_DAT_0271e818);
          }
          *(undefined **)PTR_DAT_0271e810 = PTR_DAT_0271e820;
          __cxa_guard_release(PTR_DAT_0271e808);
        }
        *(undefined **)PTR_DAT_0271fe48 = PTR_DAT_0271e810;
        __cxa_guard_release(PTR_DAT_0271fe40);
      }
      while( true ) {
        if (plVar2 == (long *)0x0) {
          return 1;
        }
        if (plVar2 == (long *)PTR_DAT_0271fe48) break;
        plVar2 = (long *)*plVar2;
      }
      return 0;
    }
    if (plVar2 == (long *)PTR_DAT_0271f860) break;
    plVar2 = (long *)*plVar2;
  }
  return 0;
}


