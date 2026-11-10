/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00840070; name: FUN_00840070
 */


undefined8 FUN_00840070(long param_1,int param_2,int param_3,uint param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar4;
  if (plVar1 != (long *)0x0) {
    plVar5 = plVar4;
    do {
      if (param_2 <= (int)plVar1[4]) {
        plVar5 = plVar1;
      }
      plVar1 = (long *)plVar1[(int)plVar1[4] < param_2];
    } while (plVar1 != (long *)0x0);
    if (plVar5 != plVar4) {
      do {
        while( true ) {
          if (param_3 <= (int)plVar5[4]) {
            return param_5;
          }
          param_5 = FUN_00840150(plVar5 + 5,(int)plVar5[4],param_4 & 1,param_5);
          plVar1 = (long *)plVar5[1];
          if ((long *)plVar5[1] == (long *)0x0) break;
          do {
            plVar5 = plVar1;
            plVar1 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
LAB_0084011c:
          if (plVar5 == plVar4) {
            return param_5;
          }
        }
        plVar1 = plVar5 + 2;
        plVar2 = (long *)*plVar1;
        if ((long *)*plVar2 != plVar5) {
          do {
            lVar3 = *plVar1;
            plVar1 = (long *)(lVar3 + 0x10);
            plVar5 = (long *)*plVar1;
          } while (*plVar5 != lVar3);
          goto LAB_0084011c;
        }
        plVar5 = plVar2;
      } while (plVar2 != plVar4);
    }
  }
  return param_5;
}


