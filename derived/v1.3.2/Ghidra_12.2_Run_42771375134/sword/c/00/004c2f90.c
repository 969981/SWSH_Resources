/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c2f90; name: FUN_004c2f90
 */


void FUN_004c2f90(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar4 = lVar2;
    if (lVar2 != param_2) {
      do {
        lVar3 = lVar4;
        lVar4 = *(long *)(lVar3 + 8);
      } while (lVar4 != 0 && lVar4 != param_2);
    }
    if (lVar4 != 0) {
      plVar1 = (long *)(param_1 + 8);
      if (lVar4 != lVar2) {
        plVar1 = (long *)(lVar3 + 8);
      }
      *plVar1 = *(long *)(lVar4 + 8);
    }
  }
  return;
}


