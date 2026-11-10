/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c98b0; name: FUN_009c98b0
 */


undefined4 FUN_009c98b0(byte param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 6) {
    return 0;
  }
  if (param_1 < 0xc) {
    return 2;
  }
  if (param_1 < 0x12) {
    return 1;
  }
  if (param_1 < 0x18) {
    return 3;
  }
  uVar1 = 0;
  if (param_1 < 0x1e) {
    uVar1 = 4;
  }
  return uVar1;
}


