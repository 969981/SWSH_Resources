/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00829c80; name: FUN_00829c80
 */


void FUN_00829c80(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  while (plVar3 != param_1 + 1) {
    FUN_00825830(plVar3 + 5);
    plVar1 = (long *)plVar3[1];
    if ((long *)plVar3[1] == (long *)0x0) {
      plVar1 = plVar3 + 2;
      if (*(long **)*plVar1 == plVar3) {
        plVar3 = (long *)*plVar1;
      }
      else {
        do {
          lVar2 = *plVar1;
          plVar1 = (long *)(lVar2 + 0x10);
          plVar3 = (long *)*plVar1;
        } while (*plVar3 != lVar2);
      }
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}


