/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c5900; name: FUN_012c5900
 */


void FUN_012c5900(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)param_2[6];
  if (plVar4 != (long *)0x0) {
    if ((long *)param_2[7] == plVar4) {
      plVar2 = plVar4;
    }
    else {
      plVar2 = (long *)param_2[7];
      do {
        plVar5 = plVar2 + -4;
        lVar3 = *plVar5;
        *plVar5 = 0;
        if (lVar3 != 0) {
          lVar1 = *(long *)(lVar3 + 8);
          if (lVar1 != 0) {
            *(long *)(lVar3 + 0x10) = lVar1;
            (**(code **)(**(long **)(lVar3 + 0x20) + 0x18))
                      (*(long **)(lVar3 + 0x20),lVar1,*(long *)(lVar3 + 0x18) - lVar1,2);
          }
          (**(code **)(*(long *)plVar2[-3] + 0x18))((long *)plVar2[-3],lVar3,plVar2[-2],plVar2[-1]);
        }
        plVar2 = plVar5;
      } while (plVar4 != plVar5);
      plVar2 = (long *)param_2[6];
    }
    param_2[7] = (long)plVar4;
    (**(code **)(*(long *)param_2[9] + 0x18))((long *)param_2[9],plVar2,param_2[8] - (long)plVar2,8)
    ;
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    param_2[1] = lVar3;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],lVar3,param_2[2] - lVar3,4);
  }
                    /* WARNING: Could not recover jumptable at 0x012c59f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


