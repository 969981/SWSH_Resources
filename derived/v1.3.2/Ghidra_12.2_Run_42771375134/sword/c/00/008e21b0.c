/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e21b0; name: FUN_008e21b0
 */


/* WARNING: Removing unreachable block (ram,0x008e21d0) */

int FUN_008e21b0(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  
  bVar1 = *(byte *)(param_1 + 0x33c);
  uVar5 = (ulong)bVar1;
  if (uVar5 == 0) {
    return 0;
  }
  if (bVar1 == 1) {
    lVar3 = 0;
    iVar2 = 0;
  }
  else {
    lVar3 = 0;
    iVar2 = 0;
    pbVar4 = (byte *)(param_1 + 0x2f7);
    do {
      if ((pbVar4[-0x1c] & 0xf) != 0) {
        iVar2 = iVar2 + 1;
      }
      lVar3 = lVar3 + 2;
      if ((*pbVar4 & 0xf) != 0) {
        iVar2 = iVar2 + 1;
      }
      pbVar4 = pbVar4 + 0x38;
    } while (uVar5 - (uVar5 & 1) != lVar3);
    if ((bVar1 & 1) == 0) {
      return iVar2;
    }
  }
  if ((*(byte *)(param_1 + lVar3 * 0x1c + 0x2db) & 0xf) != 0) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


