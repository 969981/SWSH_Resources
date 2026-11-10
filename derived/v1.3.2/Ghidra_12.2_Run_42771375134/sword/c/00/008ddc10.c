/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ddc10; name: FUN_008ddc10
 */


undefined8 FUN_008ddc10(uint param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 & 0xffff;
  uVar1 = 1;
  if (param_1 < 0x93) {
    if (param_1 - 0x4d < 3) {
      return uVar1;
    }
  }
  else if (param_1 < 600) {
    if ((param_1 == 0x93) || (param_1 == 0xb2)) {
      return uVar1;
    }
  }
  else {
    if (param_1 == 0x2ee) {
      return uVar1;
    }
    if (param_1 == 600) {
      return uVar1;
    }
  }
  return 0;
}


