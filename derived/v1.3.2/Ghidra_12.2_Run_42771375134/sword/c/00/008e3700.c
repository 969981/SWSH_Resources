/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3700; name: FUN_008e3700
 */


uint FUN_008e3700(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x33f);
  if ((*(byte *)(param_1 + 0x35d) & 2) != 0) {
    uVar1 = *(byte *)(param_1 + 0x33f) + 2;
  }
  if ((*(byte *)(param_1 + 0x1d8) & 7) != 0) {
    uVar1 = uVar1 + 3;
  }
  if (2 < (uVar1 & 0xff)) {
    uVar1 = 3;
  }
  return uVar1;
}


