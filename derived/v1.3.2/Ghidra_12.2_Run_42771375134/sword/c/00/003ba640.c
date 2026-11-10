/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba640; name: FUN_003ba640
 */


void FUN_003ba640(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar4 = 0;
    do {
      lVar3 = lVar2;
      if (lVar3 == param_2) {
        plVar1 = (long *)(param_1 + 0x38);
        if (lVar4 != 0) {
          plVar1 = (long *)(lVar4 + 8);
        }
        *plVar1 = *(long *)(param_2 + 8);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        return;
      }
      lVar2 = *(long *)(lVar3 + 8);
      lVar4 = lVar3;
    } while (*(long *)(lVar3 + 8) != 0);
  }
  return;
}


