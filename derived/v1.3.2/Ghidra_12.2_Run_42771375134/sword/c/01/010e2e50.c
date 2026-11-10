/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010e2e50; name: FUN_010e2e50
 */


void FUN_010e2e50(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x58) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_0075f0a0(param_1 + 0x50);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x3c));
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 == (long *)0x0) {
    return;
  }
  if (*(long **)(param_1 + 0x10) == plVar2) {
    plVar1 = plVar2;
  }
  else {
    plVar1 = *(long **)(param_1 + 0x10);
    do {
      plVar3 = plVar1 + -1;
      if (*plVar3 != 0) {
        (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
        plVar1[-1] = 0;
      }
      plVar1 = plVar3;
    } while (plVar2 != plVar3);
    plVar1 = *(long **)(param_1 + 8);
  }
  *(long **)(param_1 + 0x10) = plVar2;
                    /* WARNING: Could not recover jumptable at 0x010e2f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),plVar1,*(long *)(param_1 + 0x18) - (long)plVar1,8);
  return;
}


