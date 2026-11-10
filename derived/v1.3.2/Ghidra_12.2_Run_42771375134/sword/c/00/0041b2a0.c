/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041b2a0; name: FUN_0041b2a0
 */


void FUN_0041b2a0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = (long *)(param_1 + 0x10);
  if (*plVar2 != 0) {
    lVar1 = *plVar2;
    lVar5 = 0;
    do {
      lVar4 = lVar1;
      if (*(int *)(param_2 + 0x10) < *(int *)(lVar4 + 0x10)) {
        if (lVar5 != 0) {
          plVar2 = (long *)(lVar5 + 8);
        }
        *(long *)(param_2 + 8) = lVar4;
        *plVar2 = param_2;
        return;
      }
      lVar1 = *(long *)(lVar4 + 8);
      lVar5 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
  }
  *(undefined8 *)(param_2 + 8) = 0;
  plVar3 = (long *)(param_1 + 8);
  if (*plVar2 == 0) {
    *plVar2 = param_2;
    *plVar3 = param_2;
    return;
  }
  *(long *)(*plVar3 + 8) = param_2;
  *plVar3 = param_2;
  return;
}


