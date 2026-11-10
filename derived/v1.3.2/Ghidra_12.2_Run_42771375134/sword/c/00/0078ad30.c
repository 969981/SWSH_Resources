/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078ad30; name: FUN_0078ad30
 */


void FUN_0078ad30(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x70);
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar2 != lVar1) {
    param_2 = param_2 & 1;
    do {
      if (*(long *)(lVar2 + 8) != 0) {
        *(byte *)(*(long *)(lVar2 + 8) + 0xcc) = param_2;
      }
      if (*(long *)(lVar2 + 0x10) != 0) {
        *(byte *)(*(long *)(lVar2 + 0x10) + 0xcc) = param_2;
      }
      if (*(long *)(lVar2 + 0x18) != 0) {
        *(byte *)(*(long *)(lVar2 + 0x18) + 0xcc) = param_2;
      }
      if (*(long *)(lVar2 + 0x20) != 0) {
        *(byte *)(*(long *)(lVar2 + 0x20) + 0xcc) = param_2;
      }
      if (*(long *)(lVar2 + 0x28) != 0) {
        *(byte *)(*(long *)(lVar2 + 0x28) + 0xcc) = param_2;
      }
      if (*(long *)(lVar2 + 0x30) != 0) {
        *(byte *)(*(long *)(lVar2 + 0x30) + 0xcc) = param_2;
      }
      if (*(long *)(lVar2 + 0x38) != 0) {
        *(byte *)(*(long *)(lVar2 + 0x38) + 0xcc) = param_2;
      }
      if (*(long *)(lVar2 + 0x40) != 0) {
        *(byte *)(*(long *)(lVar2 + 0x40) + 0xcc) = param_2;
      }
      if (*(long *)(lVar2 + 0x48) != 0) {
        *(byte *)(*(long *)(lVar2 + 0x48) + 0xcc) = param_2;
      }
      if (*(long *)(lVar2 + 0x50) != 0) {
        *(byte *)(*(long *)(lVar2 + 0x50) + 0xcc) = param_2;
      }
      if (*(long *)(lVar2 + 0x58) != 0) {
        *(byte *)(*(long *)(lVar2 + 0x58) + 0xcc) = param_2;
      }
      lVar2 = lVar2 + 0x60;
    } while (lVar1 != lVar2);
  }
  return;
}


