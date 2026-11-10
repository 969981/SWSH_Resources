/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007460b0; name: FUN_007460b0
 */


void FUN_007460b0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_1[0x12];
  if (plVar2 != (long *)0x0) {
    if ((long *)param_1[0x13] == plVar2) {
      plVar1 = plVar2;
    }
    else {
      plVar1 = (long *)param_1[0x13];
      do {
        plVar3 = plVar1 + -1;
        if (*plVar3 != 0) {
          (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
          plVar1[-1] = 0;
        }
        plVar1 = plVar3;
      } while (plVar2 != plVar3);
      plVar1 = (long *)param_1[0x12];
    }
    param_1[0x13] = plVar2;
    (**(code **)(*(long *)param_1[0x15] + 0x18))
              ((long *)param_1[0x15],plVar1,param_1[0x14] - (long)plVar1,8);
  }
  plVar2 = (long *)param_1[0xc];
  if (plVar2 != (long *)0x0) {
    if ((long *)param_1[0xd] == plVar2) {
      plVar1 = plVar2;
    }
    else {
      plVar1 = (long *)param_1[0xd];
      do {
        plVar3 = plVar1 + -1;
        if (*plVar3 != 0) {
          (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
          plVar1[-1] = 0;
        }
        plVar1 = plVar3;
      } while (plVar2 != plVar3);
      plVar1 = (long *)param_1[0xc];
    }
    param_1[0xd] = plVar2;
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],plVar1,param_1[0xe] - (long)plVar1,8);
  }
  plVar2 = (long *)param_1[6];
  if (plVar2 != (long *)0x0) {
    if ((long *)param_1[7] == plVar2) {
      plVar1 = plVar2;
    }
    else {
      plVar1 = (long *)param_1[7];
      do {
        plVar3 = plVar1 + -1;
        if (*plVar3 != 0) {
          (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
          plVar1[-1] = 0;
        }
        plVar1 = plVar3;
      } while (plVar2 != plVar3);
      plVar1 = (long *)param_1[6];
    }
    param_1[7] = plVar2;
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],plVar1,param_1[8] - (long)plVar1,8)
    ;
  }
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    return;
  }
  if ((long *)param_1[1] == plVar2) {
    plVar1 = plVar2;
  }
  else {
    plVar1 = (long *)param_1[1];
    do {
      plVar3 = plVar1 + -1;
      if (*plVar3 != 0) {
        (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
        plVar1[-1] = 0;
      }
      plVar1 = plVar3;
    } while (plVar2 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar2;
                    /* WARNING: Could not recover jumptable at 0x0074626c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar1,param_1[2] - (long)plVar1,8);
  return;
}


