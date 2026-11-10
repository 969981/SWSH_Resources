/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069c6d0; name: FUN_0069c6d0
 */


int FUN_0069c6d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x230);
  if (lVar1 == 0) {
    return 0;
  }
  return (int)((ulong)(*(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10)) >> 4) * -0x11111111;
}


