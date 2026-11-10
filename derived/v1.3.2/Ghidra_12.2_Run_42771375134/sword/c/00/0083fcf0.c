/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083fcf0; name: FUN_0083fcf0
 */


int FUN_0083fcf0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  
  iVar4 = *(int *)(param_1 + 2) << 5;
  plVar5 = (long *)*param_1;
  while (plVar5 != param_1 + 1) {
    iVar1 = FUN_0083fd90(plVar5 + 5);
    iVar4 = iVar1 + iVar4;
    plVar2 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar2 = plVar5 + 2;
      if (*(long **)*plVar2 == plVar5) {
        plVar5 = (long *)*plVar2;
      }
      else {
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x10);
          plVar5 = (long *)*plVar2;
        } while (*plVar5 != lVar3);
      }
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return iVar4;
}


