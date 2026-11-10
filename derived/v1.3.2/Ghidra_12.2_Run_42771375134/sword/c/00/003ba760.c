/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba760; name: FUN_003ba760
 */


void FUN_003ba760(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x28);
    do {
      lVar1 = *plVar3;
      iVar2 = iVar2 + -1;
      if (((*(byte *)(lVar1 + 0x25) & 3) != 0) &&
         (*(byte *)(lVar1 + 0x26) = *(byte *)(lVar1 + 0x26) | 8,
         (*(byte *)(lVar1 + 0x25) >> 4 & 1) == 0)) {
        FUN_003c6e30(lVar1);
        *(byte *)(lVar1 + 0x25) = *(byte *)(lVar1 + 0x25) | 0x10;
      }
      plVar3 = plVar3 + 1;
    } while (iVar2 != 0);
  }
  return;
}


