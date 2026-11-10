/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b2a10; name: FUN_007b2a10
 */


void FUN_007b2a10(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_1[5];
  *param_1 = (long)(PTR_DAT_027169a8 + 0x10);
  if (plVar2 != (long *)0x0) {
    if ((long *)param_1[6] == plVar2) {
      plVar1 = plVar2;
    }
    else {
      plVar1 = (long *)param_1[6];
      do {
        plVar3 = plVar1 + -3;
        if (*plVar3 != 0) {
          plVar1[-2] = *plVar3;
          FUN_017cd7a0();
        }
        plVar1 = plVar3;
      } while (plVar2 != plVar3);
      plVar1 = (long *)param_1[5];
    }
    param_1[6] = (long)plVar2;
    FUN_017cd7a0(plVar1);
  }
  plVar2 = (long *)param_1[2];
  if (plVar2 == (long *)0x0) {
    return;
  }
  if ((long *)param_1[3] == plVar2) {
    plVar1 = plVar2;
  }
  else {
    plVar1 = (long *)param_1[3];
    do {
      plVar3 = plVar1 + -3;
      if (*plVar3 != 0) {
        plVar1[-2] = *plVar3;
        FUN_017cd7a0();
      }
      plVar1 = plVar3;
    } while (plVar2 != plVar3);
    plVar1 = (long *)param_1[2];
  }
  param_1[3] = (long)plVar2;
  FUN_017cd7a0(plVar1);
  return;
}


