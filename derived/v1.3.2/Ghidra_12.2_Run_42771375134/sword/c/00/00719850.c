/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00719850; name: FUN_00719850
 */


void FUN_00719850(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  if ((long *)param_1[1] == plVar3) {
    plVar2 = plVar3;
  }
  else {
    do {
      lVar5 = plVar2[-7];
      plVar4 = plVar2 + -8;
      if (lVar5 != 0) {
        lVar1 = plVar2[-6];
        if (plVar2[-6] == lVar5) {
          lVar1 = lVar5;
        }
        else {
          do {
            if (*(long *)(lVar1 + -0x10) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar1 + -0x10) + 0x48) + 0x18))();
              *(undefined8 *)(lVar1 + -0x10) = 0;
            }
            lVar6 = lVar1 + -0x18;
            if (*(long *)(lVar1 + -0x18) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar1 + -0x18) + 0x48) + 0x18))();
              *(undefined8 *)(lVar1 + -0x18) = 0;
            }
            lVar1 = lVar6;
          } while (lVar5 != lVar6);
          lVar1 = plVar2[-7];
        }
        plVar2[-6] = lVar5;
        (**(code **)(*(long *)plVar2[-4] + 0x18))((long *)plVar2[-4],lVar1,plVar2[-5] - lVar1,8);
      }
      if (*plVar4 != 0) {
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
        *plVar4 = 0;
      }
      plVar2 = plVar4;
    } while (plVar4 != plVar3);
    plVar2 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00719974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar2,param_1[2] - (long)plVar2,8);
  return;
}


