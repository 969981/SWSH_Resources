/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7b880; name: FUN_00e7b880
 */


void FUN_00e7b880(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*param_2 != 0) && (*(int *)(*param_2 + 0x54) != 0)) {
    puVar5 = *(undefined8 **)(*param_2 + 0x60);
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_0156b190();
    for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
    }
    if ((((long *)puVar5[0x79] != (long *)puVar5[0x7a]) &&
        (lVar3 = *(long *)puVar5[0x79], lVar3 != 0)) &&
       (puVar5 = *(undefined8 **)(lVar3 + 0x60), puVar5 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar5)(puVar5);
      if (((*PTR_DAT_027150a8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar1 != 0)) {
        uVar4 = FUN_00706e40();
        *(undefined8 *)PTR_DAT_027150b0 = uVar4;
        __cxa_guard_release(PTR_DAT_027150a8);
      }
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)PTR_DAT_027150b0) {
          lVar3 = puVar5[1];
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
          }
          *param_1 = lVar3;
          return;
        }
      }
    }
  }
  *param_1 = 0;
  return;
}


