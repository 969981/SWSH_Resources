/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043bd70; name: FUN_0043bd70
 */


void FUN_0043bd70(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 != (long *)0x0) {
    plVar5 = (long *)0x0;
    do {
      while (plVar4 = plVar3, lVar2 = plVar4[2], *(int *)(lVar2 + 0x30) == param_2) {
        if (*(int *)(lVar2 + 0x34) != 0) {
          *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + -1;
          break;
        }
        FUN_0043aba0(param_1);
        plVar3 = (long *)*plVar4;
        plVar1 = (long *)(param_1 + 0x50);
        if (*(long **)(param_1 + 0x50) != plVar4) {
          plVar1 = plVar5;
        }
        *plVar1 = (long)plVar3;
        if (*(long **)(param_1 + 0x58) == plVar4) {
          *(long **)(param_1 + 0x58) = plVar5;
        }
        *plVar4 = *(long *)(param_1 + 0x60);
        *(long **)(param_1 + 0x60) = plVar4;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        if (plVar3 == (long *)0x0) {
          return;
        }
      }
      plVar3 = (long *)*plVar4;
      plVar5 = plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  return;
}


