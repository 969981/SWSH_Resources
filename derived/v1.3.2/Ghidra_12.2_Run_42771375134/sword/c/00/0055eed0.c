/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055eed0; name: FUN_0055eed0
 */


undefined4 FUN_0055eed0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xd4);
  if (uVar1 < 0x3c && (1L << ((ulong)uVar1 & 0x3f) & 0xf80007800007800U) != 0) {
    return DAT_01d4be28;
  }
  uVar2 = DAT_01d4c1f0;
  if ((uVar1 | 1) != 0x19 || uVar1 == 0) {
    uVar2 = DAT_01d4c4a0;
  }
  return uVar2;
}


