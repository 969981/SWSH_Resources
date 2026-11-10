/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba7d0; name: FUN_003ba7d0
 */


void FUN_003ba7d0(long param_1,byte param_2,long param_3,byte param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x28);
    if (param_3 == 0) {
      do {
        lVar1 = *plVar3;
        if (((*(byte *)(lVar1 + 0x25) & param_4) != 0) &&
           (*(byte *)(lVar1 + 0x26) = *(byte *)(lVar1 + 0x26) | param_2,
           (*(byte *)(lVar1 + 0x25) >> 4 & 1) == 0)) {
          FUN_003c6e30(lVar1);
          *(byte *)(lVar1 + 0x25) = *(byte *)(lVar1 + 0x25) | 0x10;
        }
        iVar2 = iVar2 + -1;
        plVar3 = plVar3 + 1;
      } while (iVar2 != 0);
    }
    else {
      do {
        lVar1 = *plVar3;
        if ((((*(long *)(lVar1 + 8) == param_3) || (*(long *)(lVar1 + 0x10) == param_3)) &&
            ((*(byte *)(lVar1 + 0x25) & param_4) != 0)) &&
           (*(byte *)(lVar1 + 0x26) = *(byte *)(lVar1 + 0x26) | param_2,
           (*(byte *)(lVar1 + 0x25) >> 4 & 1) == 0)) {
          FUN_003c6e30(lVar1);
          *(byte *)(lVar1 + 0x25) = *(byte *)(lVar1 + 0x25) | 0x10;
        }
        iVar2 = iVar2 + -1;
        plVar3 = plVar3 + 1;
      } while (iVar2 != 0);
    }
  }
  return;
}


