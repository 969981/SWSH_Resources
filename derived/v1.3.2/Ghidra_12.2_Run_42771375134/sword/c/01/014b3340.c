/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b3340; name: FUN_014b3340
 */


undefined4 FUN_014b3340(byte param_1)

{
  undefined4 uVar1;
  
  if ((byte)(param_1 - 0x18) < 6) {
    return 0;
  }
  if ((byte)(param_1 - 0x1e) < 4) {
    return 1;
  }
  if (param_1 == 0x22) {
    return 4;
  }
  if ((byte)(param_1 - 0x23) < 7) {
    return 3;
  }
  if ((param_1 & 0xfe) == 0x2c) {
    return 6;
  }
  uVar1 = 5;
  if ((param_1 & 0xfe) != 0x2a) {
    uVar1 = 2;
  }
  return uVar1;
}


