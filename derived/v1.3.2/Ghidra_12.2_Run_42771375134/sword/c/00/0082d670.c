/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0082d670; name: FUN_0082d670
 */


void FUN_0082d670(long param_1,int param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar3;
  if (plVar1 != (long *)0x0) {
    plVar4 = plVar3;
    do {
      if (param_2 <= (int)plVar1[4]) {
        plVar4 = plVar1;
      }
      plVar1 = (long *)plVar1[(int)plVar1[4] < param_2];
    } while (plVar1 != (long *)0x0);
    while ((plVar4 != plVar3 && ((int)plVar4[4] < param_3))) {
      FUN_0082d730(plVar4 + 5,(int)plVar4[4],param_4);
      plVar1 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar1 = plVar4 + 2;
        if (*(long **)*plVar1 == plVar4) {
          plVar4 = (long *)*plVar1;
        }
        else {
          do {
            lVar2 = *plVar1;
            plVar1 = (long *)(lVar2 + 0x10);
            plVar4 = (long *)*plVar1;
          } while (*plVar4 != lVar2);
        }
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
    }
  }
  return;
}


