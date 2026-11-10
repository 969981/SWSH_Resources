/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ddce0; name: FUN_008ddce0
 */


undefined8 FUN_008ddce0(uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 & 0xffff;
  uVar2 = 1;
  if (param_1 < 0x18c) {
    if (param_1 < 0xf7) {
      if ((param_1 - 0x8c < 0x35) &&
         ((1L << ((ulong)(param_1 - 0x8c) & 0x3f) & 0x15000000000001U) != 0)) {
        return uVar2;
      }
      if (param_1 == 0x79) {
        return uVar2;
      }
      return 0;
    }
    if ((param_1 - 0x137 < 0x32) &&
       ((1L << ((ulong)(param_1 - 0x137) & 0x3f) & 0x2008000100001U) != 0)) {
      return uVar2;
    }
    if (0x36 < param_1 - 0xf7) {
      return 0;
    }
    uVar1 = 1L << ((ulong)(param_1 - 0xf7) & 0x3f) & 0x42000000000001;
  }
  else if (param_1 < 0x1e6) {
    if (0x2f < param_1 - 0x18c) {
      return 0;
    }
    uVar1 = 1L << ((ulong)(param_1 - 0x18c) & 0x3f) & 0x880040018041;
  }
  else {
    if (0x2a3 < param_1) {
      if (param_1 == 0x2a4) {
        return uVar2;
      }
      if (param_1 == 0x30c) {
        return uVar2;
      }
      if (param_1 == 0x2b2) {
        return uVar2;
      }
      return 0;
    }
    if (0x3b < param_1 - 0x1e6) {
      return 0;
    }
    uVar1 = 1L << ((ulong)(param_1 - 0x1e6) & 0x3f) & 0x800000000000021;
  }
  if (uVar1 == 0) {
    return 0;
  }
  return uVar2;
}


