/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d79a0; name: FUN_007d79a0
 */


void FUN_007d79a0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = plVar1;
  if ((long *)param_1[1] != plVar1) {
    plVar3 = (long *)param_1[1];
    do {
      plVar2 = plVar3 + -1;
      if (*plVar2 != 0) {
        (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
        plVar3[-1] = 0;
      }
      plVar3 = plVar2;
    } while (plVar1 != plVar2);
    plVar3 = (long *)*param_1;
  }
  param_1[1] = (long)plVar1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  if (plVar1 == plVar3) {
    plVar1 = plVar3;
  }
  else {
    do {
      plVar2 = plVar1 + -1;
      if (*plVar2 != 0) {
        (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
        plVar1[-1] = 0;
      }
      plVar1 = plVar2;
    } while (plVar3 != plVar2);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = (long)plVar3;
                    /* WARNING: Could not recover jumptable at 0x007d7a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar1,param_1[2] - (long)plVar1,8);
  return;
}


