/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c6350; name: FUN_012c6350
 */


void FUN_012c6350(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  lVar3 = param_1[0x12];
  if (lVar3 != 0) {
    lVar1 = param_1[0x13];
    if (param_1[0x13] == lVar3) {
      lVar1 = lVar3;
    }
    else {
      do {
        lVar6 = lVar1 + -0x20;
        if (*(long *)(lVar1 + -8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar1 + -8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar1 + -8) = 0;
        }
        lVar1 = lVar6;
      } while (lVar3 != lVar6);
      lVar1 = param_1[0x12];
    }
    param_1[0x13] = lVar3;
    (**(code **)(*(long *)param_1[0x15] + 0x18))
              ((long *)param_1[0x15],lVar1,param_1[0x14] - lVar1,8);
  }
  plVar4 = (long *)param_1[0xc];
  if (plVar4 != (long *)0x0) {
    if ((long *)param_1[0xd] == plVar4) {
      plVar2 = plVar4;
    }
    else {
      plVar2 = (long *)param_1[0xd];
      do {
        plVar5 = plVar2 + -4;
        lVar3 = *plVar5;
        *plVar5 = 0;
        if (lVar3 != 0) {
          (**(code **)(*(long *)plVar2[-3] + 0x18))((long *)plVar2[-3],lVar3,plVar2[-2],plVar2[-1]);
        }
        plVar2 = plVar5;
      } while (plVar4 != plVar5);
      plVar2 = (long *)param_1[0xc];
    }
    param_1[0xd] = plVar4;
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],plVar2,param_1[0xe] - (long)plVar2,8);
  }
  plVar4 = (long *)param_1[6];
  if (plVar4 != (long *)0x0) {
    if ((long *)param_1[7] == plVar4) {
      plVar2 = plVar4;
    }
    else {
      plVar2 = (long *)param_1[7];
      do {
        plVar5 = plVar2 + -4;
        lVar3 = *plVar5;
        *plVar5 = 0;
        if (lVar3 != 0) {
          FUN_012c5900(plVar2 + -3);
        }
        plVar2 = plVar5;
      } while (plVar4 != plVar5);
      plVar2 = (long *)param_1[6];
    }
    param_1[7] = plVar4;
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],plVar2,param_1[8] - (long)plVar2,8)
    ;
  }
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    return;
  }
  if ((long *)param_1[1] == plVar4) {
    plVar2 = plVar4;
  }
  else {
    plVar2 = (long *)param_1[1];
    do {
      plVar5 = plVar2 + -4;
      lVar3 = *plVar5;
      *plVar5 = 0;
      if (lVar3 != 0) {
        (**(code **)(*(long *)plVar2[-3] + 0x18))((long *)plVar2[-3],lVar3,plVar2[-2],plVar2[-1]);
      }
      plVar2 = plVar5;
    } while (plVar4 != plVar5);
    plVar2 = (long *)*param_1;
  }
  param_1[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x012c6518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar2,param_1[2] - (long)plVar2,8);
  return;
}


