/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e21d0; name: FUN_005e21d0
 */


void FUN_005e21d0(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar1 = 0;
    plVar2 = param_1 + 4;
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 0x18))();
        *plVar2 = 0;
      }
      if ((long *)plVar2[-1] != (long *)0x0) {
        (**(code **)(*(long *)plVar2[-1] + 0x18))();
        plVar2[-1] = 0;
      }
      lVar1 = lVar1 + 1;
      plVar2 = plVar2 + 2;
    } while (lVar1 < *(int *)((long)param_1 + 0x14));
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
    param_1[1] = 0;
  }
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x18))();
    *param_1 = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 0x18))();
    param_1[10] = 0;
  }
  if ((long *)param_1[9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[9] + 0x18))();
    param_1[9] = 0;
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x18))();
    param_1[8] = 0;
  }
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0x18))();
    param_1[7] = 0;
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x18))();
    param_1[6] = 0;
  }
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 0x18))();
    param_1[5] = 0;
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[4] = 0;
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0x18))();
    param_1[3] = 0;
  }
  return;
}


