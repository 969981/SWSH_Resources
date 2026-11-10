/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e19f0; name: FUN_008e19f0
 */


undefined4 FUN_008e19f0(long param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x98) & 7) != 0) {
    return 1;
  }
  if ((*(byte *)(param_1 + 0xa0) & 7) != 0) {
    return 2;
  }
  if ((*(byte *)(param_1 + 0xa8) & 7) != 0) {
    return 3;
  }
  if ((*(byte *)(param_1 + 0xb0) & 7) != 0) {
    return 4;
  }
  uVar1 = 0;
  if ((*(byte *)(param_1 + 0xb8) & 7) != 0) {
    uVar1 = 5;
  }
  return uVar1;
}


