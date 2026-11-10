/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db60a0; name: FUN_00db60a0
 */


void FUN_00db60a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != plVar4) {
    do {
      while (*(char *)(*plVar4 + 0x69) == '\0') {
        plVar4 = plVar4 + 1;
        if (plVar1 == plVar4) goto LAB_00db6180;
      }
      (**(code **)(*(long *)*plVar4 + 0x50))();
      plVar2 = *(long **)(param_1 + 0x10);
      plVar5 = plVar4 + 1;
      if (plVar5 == plVar2) {
        plVar1 = plVar4;
LAB_00db614c:
        do {
          plVar2 = plVar5 + -1;
          if (*plVar2 != 0) {
            (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
            plVar5[-1] = 0;
          }
          plVar5 = plVar2;
        } while (plVar1 != plVar2);
      }
      else {
        plVar5 = plVar4;
        do {
          if (*plVar5 != 0) {
            (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
            *plVar5 = 0;
          }
          plVar1 = plVar5 + 1;
          lVar3 = *plVar1;
          *plVar1 = 0;
          *plVar5 = lVar3;
          plVar5 = plVar1;
        } while (plVar2 + -1 != plVar1);
        plVar5 = *(long **)(param_1 + 0x10);
        if (plVar5 != plVar1) goto LAB_00db614c;
      }
      *(long **)(param_1 + 0x10) = plVar1;
    } while (plVar1 != plVar4);
LAB_00db6180:
    plVar4 = *(long **)(param_1 + 8);
    if (plVar4 != plVar1) {
      plVar5 = plVar4 + 1;
      if (plVar5 != plVar1) {
        do {
          if ((char)((long *)*plVar5)[0xd] == '\0') {
            (**(code **)(*(long *)*plVar5 + 0x60))();
            plVar1 = *(long **)(param_1 + 0x10);
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar1);
      }
      plVar1 = (long *)*plVar4;
      if ((char)plVar1[0xd] != '\0') {
        (**(code **)(*plVar1 + 0x58))();
        plVar1 = (long *)*plVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x00db6210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x40))();
      return;
    }
  }
  return;
}


