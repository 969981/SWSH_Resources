/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ddc70; name: FUN_008ddc70
 */


undefined8 FUN_008ddc70(uint param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 & 0xffff;
  uVar1 = 1;
  if (param_1 < 0x131) {
    if (param_1 == 0x2c) {
      return uVar1;
    }
    if (param_1 == 0x9e) {
      return uVar1;
    }
    if (param_1 == 0xf2) {
      return uVar1;
    }
  }
  else if ((param_1 - 0x1a6 < 3) ||
          (((param_1 - 0x2c2 < 0x32 &&
            ((1L << ((ulong)(param_1 - 0x2c2) & 0x3f) & 0x2010000000001U) != 0)) ||
           (param_1 == 0x131)))) {
    return uVar1;
  }
  return 0;
}


