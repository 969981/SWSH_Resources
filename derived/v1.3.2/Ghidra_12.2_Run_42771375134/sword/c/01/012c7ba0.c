/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c7ba0; name: FUN_012c7ba0
 */


void FUN_012c7ba0(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *local_28;
  
  iVar2 = FUN_00774010();
  if ((iVar2 == 2) && (FUN_00774040(&local_28,param_1), plVar1 = local_28, local_28 != (long *)0x0))
  {
    puVar3 = (undefined8 *)(**(code **)local_28[10])(local_28 + 10);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02717528), iVar2 != 0)) {
      uVar5 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar5;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    plVar4 = (long *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      do {
        if (puVar3 == (undefined8 *)PTR_DAT_02717530) {
          plVar4 = plVar1;
          goto LAB_012c7c18;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      plVar4 = (long *)0x0;
    }
LAB_012c7c18:
    (**(code **)(*plVar4 + 0x80))(plVar4,*(undefined8 *)(param_1 + 0x120));
    if (local_28 != (long *)0x0) {
      (**(code **)(local_28[9] + 0x18))();
    }
  }
  return;
}


