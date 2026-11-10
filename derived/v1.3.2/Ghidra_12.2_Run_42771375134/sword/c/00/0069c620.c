/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069c620; name: FUN_0069c620
 */


void FUN_0069c620(undefined4 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(long *)(param_2 + 0x230) != 0) {
    FUN_006acd40(*(long *)(param_2 + 0x230),0);
    lVar1 = *(long *)(param_2 + 0x230);
    if ((int)((ulong)(*(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10)) >> 4) * -0x11111111 != 0) {
      uVar2 = 0;
      lVar3 = 0xd4;
      do {
        *(undefined4 *)(*(long *)(lVar1 + 0x10) + lVar3) = param_1;
        lVar1 = *(long *)(param_2 + 0x230);
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0xf0;
      } while (uVar2 < (uint)((int)((ulong)(*(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10)) >> 4)
                             * -0x11111111));
    }
  }
  return;
}


