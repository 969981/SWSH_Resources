/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003adf90; name: FUN_003adf90
 */


void FUN_003adf90(long param_1,byte param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  
  if (*(ushort *)(param_1 + 0x4a) != 0) {
    iVar3 = -(uint)*(ushort *)(param_1 + 0x4a);
    plVar2 = *(long **)(param_1 + 0x40);
    do {
      lVar1 = *plVar2;
      *(byte *)(lVar1 + 0x26) = *(byte *)(lVar1 + 0x26) | param_2;
      if ((*(byte *)(lVar1 + 0x25) >> 4 & 1) == 0) {
        FUN_003c6e30(lVar1);
        *(byte *)(lVar1 + 0x25) = *(byte *)(lVar1 + 0x25) | 0x10;
      }
      iVar3 = iVar3 + 1;
      plVar2 = plVar2 + 1;
    } while (iVar3 != 0);
  }
  return;
}


