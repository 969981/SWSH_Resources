/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008177b0; name: FUN_008177b0
 */


long * FUN_008177b0(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  *param_1 = (long)(PTR_DAT_02716fc0 + 0x10);
  for (plVar4 = *(long **)(param_1[3] + 0x10); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    pvVar2 = (void *)plVar4[3];
    if (pvVar2 != (void *)0x0) {
      if (*(long **)((long)pvVar2 + 0x40) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar2 + 0x40) + 8))();
      }
      operator_delete(*(void **)((long)pvVar2 + 0x48));
      if (*(long **)((long)pvVar2 + 0x38) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar2 + 0x38) + 8))();
      }
      if (*(void **)((long)pvVar2 + 0x30) != (void *)0x0) {
        operator_delete__(*(void **)((long)pvVar2 + 0x30));
      }
      operator_delete(pvVar2);
    }
  }
  FUN_008013e0(param_1 + 4);
  puVar3 = (undefined8 *)param_1[3];
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = (void *)puVar3[2];
    while (puVar1 != (void *)0x0) {
      pvVar2 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar2;
    }
    pvVar2 = (void *)*puVar3;
    *puVar3 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    operator_delete(puVar3);
  }
  return param_1;
}


