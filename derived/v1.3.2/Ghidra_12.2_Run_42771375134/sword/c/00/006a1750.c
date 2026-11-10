/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a1750; name: FUN_006a1750
 */


void FUN_006a1750(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = (long *)FUN_006a1cd0(param_2);
    if (param_4 == 1) {
      plVar3 = (long *)**(long **)(param_1 + 0x10);
      plVar2 = (long *)(*(long **)(param_1 + 0x10))[1];
      if ((plVar3 != plVar2) && (*plVar3 != *plVar1)) {
        do {
          plVar3 = plVar3 + 0x24;
          if (plVar2 == plVar3) {
            return;
          }
        } while (*plVar3 != *plVar1);
      }
      if ((plVar3 != plVar2) &&
         (UNRECOVERED_JUMPTABLE = (code *)plVar3[4], UNRECOVERED_JUMPTABLE != (code *)0x0)) {
        plVar3 = plVar3 + 8;
        goto LAB_006a189c;
      }
    }
    else {
      plVar3 = (long *)**(undefined8 **)(param_1 + 0x10);
      plVar2 = (long *)(*(undefined8 **)(param_1 + 0x10))[1];
      if (param_3 == 1) {
        if ((plVar3 != plVar2) && (*plVar3 != *plVar1)) {
          do {
            plVar3 = plVar3 + 0x24;
            if (plVar2 == plVar3) {
              return;
            }
          } while (*plVar3 != *plVar1);
        }
        if (plVar3 == plVar2) {
          return;
        }
      }
      else {
        if ((plVar3 != plVar2) && (*plVar3 != *plVar1)) {
          do {
            plVar3 = plVar3 + 0x24;
            if (plVar2 == plVar3) {
              return;
            }
          } while (*plVar3 != *plVar1);
        }
        if (plVar3 == plVar2) {
          return;
        }
        if ((code *)plVar3[4] != (code *)0x0) {
          (*(code *)plVar3[4])(plVar3 + 8,param_2);
        }
      }
      UNRECOVERED_JUMPTABLE = (code *)plVar3[0x14];
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        plVar3 = plVar3 + 0x18;
LAB_006a189c:
                    /* WARNING: Could not recover jumptable at 0x006a18ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar3,param_2);
        return;
      }
    }
  }
  return;
}


