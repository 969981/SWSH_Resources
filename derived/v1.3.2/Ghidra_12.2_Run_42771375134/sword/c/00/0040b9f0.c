/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040b9f0; name: FUN_0040b9f0
 */


void FUN_0040b9f0(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar2 = (long *)(param_1 + 0x10);
  if ((long *)*plVar2 == (long *)0x0) {
    return;
  }
  plVar4 = (long *)0x0;
  plVar3 = (long *)*plVar2;
  do {
    while ((*plVar3 <= param_3 && ((*plVar3 != param_3 || ((int)plVar3[1] != 0))))) {
      plVar5 = (long *)plVar3[3];
      plVar4 = plVar3;
joined_r0x0040ba48:
      plVar3 = plVar5;
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    plVar5 = (long *)plVar3[3];
    plVar1 = plVar2;
    if ((long *)*plVar2 != plVar3) {
      plVar1 = plVar4 + 3;
    }
    *plVar1 = (long)plVar5;
    if (*param_2 != 0) {
      plVar3[3] = *param_2;
      *param_2 = (long)plVar3;
      goto joined_r0x0040ba48;
    }
    *param_2 = (long)plVar3;
    plVar3[3] = 0;
    plVar3 = plVar5;
    if (plVar5 == (long *)0x0) {
      return;
    }
  } while( true );
}


