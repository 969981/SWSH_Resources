/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f6d90; name: FUN_012f6d90
 */


void FUN_012f6d90(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    return;
  }
  if (*(long **)(param_1 + 0x28) == plVar2) {
    plVar1 = plVar2;
  }
  else {
    plVar1 = *(long **)(param_1 + 0x28);
    do {
      plVar3 = plVar1 + -1;
      if (*plVar3 != 0) {
        (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
        plVar1[-1] = 0;
      }
      plVar1 = plVar3;
    } while (plVar2 != plVar3);
    plVar1 = *(long **)(param_1 + 0x20);
  }
  *(long **)(param_1 + 0x28) = plVar2;
                    /* WARNING: Could not recover jumptable at 0x012f6e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
            (*(long **)(param_1 + 0x38),plVar1,*(long *)(param_1 + 0x30) - (long)plVar1,8);
  return;
}


