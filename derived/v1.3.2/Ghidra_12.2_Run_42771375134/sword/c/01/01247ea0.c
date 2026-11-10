/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01247ea0; name: FUN_01247ea0
 */


void FUN_01247ea0(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  lVar2 = *(long *)(param_1 + 0xf8);
  if (lVar2 == 0) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0xf0);
  if (lVar2 == 1) {
    plVar5 = plVar4 + 1;
    lVar1 = *plVar4;
    if (lVar1 == 0) {
      lVar2 = 1;
      plVar3 = plVar4;
    }
    else {
LAB_01247f2c:
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      plVar5[-1] = 0;
      plVar3 = *(long **)(param_1 + 0xf0);
      lVar2 = *(long *)(param_1 + 0xf8);
    }
  }
  else {
    lVar2 = lVar2 * 8 + -8;
    plVar5 = plVar4;
    do {
      if (*plVar5 != 0) {
        (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
        *plVar5 = 0;
      }
      plVar3 = plVar5 + 1;
      lVar1 = *plVar3;
      *plVar3 = 0;
      *plVar5 = lVar1;
      lVar2 = lVar2 + -8;
      plVar5 = plVar3;
    } while (lVar2 != 0);
    plVar3 = *(long **)(param_1 + 0xf0);
    lVar2 = *(long *)(param_1 + 0xf8);
    plVar5 = plVar3 + lVar2;
    lVar1 = plVar5[-1];
    if (lVar1 != 0) goto LAB_01247f2c;
  }
  *(long *)(param_1 + 0xf8) = lVar2 + -1;
  if (plVar4 == plVar3 + lVar2 + -1) {
    FUN_007dce30(param_1);
    FUN_007dcc70(param_1,3);
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      (**(code **)(param_1 + 0x120))(param_1 + 0x140);
    }
  }
  else {
    if ((long *)*plVar4 == (long *)0x0) {
      return;
    }
    lVar2 = (**(code **)(*(long *)*plVar4 + 0x38))();
    if (lVar2 != 0) {
      return;
    }
    FUN_007dce30(param_1);
    FUN_007dcc70(param_1,4);
    if (*(code **)(param_1 + 0x220) != (code *)0x0) {
      (**(code **)(param_1 + 0x220))(param_1 + 0x240,param_1 + 800);
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x1a0);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return;
      }
      goto LAB_01247fcc;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x1a0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
LAB_01247fcc:
                    /* WARNING: Could not recover jumptable at 0x01247fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0x1c0);
  return;
}


