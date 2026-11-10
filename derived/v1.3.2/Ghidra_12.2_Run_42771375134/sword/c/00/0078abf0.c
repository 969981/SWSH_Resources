/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078abf0; name: FUN_0078abf0
 */


void FUN_0078abf0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x70);
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar2 != lVar1) {
    uVar3 = (ulong)(param_2 & 0xff) << 0x25;
    do {
      lVar4 = *(long *)(lVar2 + 8);
      if (lVar4 != 0) {
        *(ulong *)(lVar4 + 0xa0) = *(ulong *)(lVar4 + 0xa0) & 0xffffe01fffffffff | uVar3;
      }
      lVar4 = *(long *)(lVar2 + 0x10);
      if (lVar4 != 0) {
        *(ulong *)(lVar4 + 0xa0) = *(ulong *)(lVar4 + 0xa0) & 0xffffe01fffffffff | uVar3;
      }
      lVar4 = *(long *)(lVar2 + 0x18);
      if (lVar4 != 0) {
        *(ulong *)(lVar4 + 0xa0) = *(ulong *)(lVar4 + 0xa0) & 0xffffe01fffffffff | uVar3;
      }
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 != 0) {
        *(ulong *)(lVar4 + 0xa0) = *(ulong *)(lVar4 + 0xa0) & 0xffffe01fffffffff | uVar3;
      }
      lVar4 = *(long *)(lVar2 + 0x28);
      if (lVar4 != 0) {
        *(ulong *)(lVar4 + 0xa0) = *(ulong *)(lVar4 + 0xa0) & 0xffffe01fffffffff | uVar3;
      }
      lVar4 = *(long *)(lVar2 + 0x30);
      if (lVar4 != 0) {
        *(ulong *)(lVar4 + 0xa0) = *(ulong *)(lVar4 + 0xa0) & 0xffffe01fffffffff | uVar3;
      }
      lVar4 = *(long *)(lVar2 + 0x38);
      if (lVar4 != 0) {
        *(ulong *)(lVar4 + 0xa0) = *(ulong *)(lVar4 + 0xa0) & 0xffffe01fffffffff | uVar3;
      }
      lVar4 = *(long *)(lVar2 + 0x40);
      if (lVar4 != 0) {
        *(ulong *)(lVar4 + 0xa0) = *(ulong *)(lVar4 + 0xa0) & 0xffffe01fffffffff | uVar3;
      }
      lVar4 = *(long *)(lVar2 + 0x48);
      if (lVar4 != 0) {
        *(ulong *)(lVar4 + 0xa0) = *(ulong *)(lVar4 + 0xa0) & 0xffffe01fffffffff | uVar3;
      }
      lVar4 = *(long *)(lVar2 + 0x50);
      if (lVar4 != 0) {
        *(ulong *)(lVar4 + 0xa0) = *(ulong *)(lVar4 + 0xa0) & 0xffffe01fffffffff | uVar3;
      }
      lVar4 = *(long *)(lVar2 + 0x58);
      if (lVar4 != 0) {
        *(ulong *)(lVar4 + 0xa0) = *(ulong *)(lVar4 + 0xa0) & 0xffffe01fffffffff | uVar3;
      }
      lVar2 = lVar2 + 0x60;
    } while (lVar1 != lVar2);
  }
  return;
}


