/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dde10; name: FUN_008dde10
 */


undefined8 FUN_008dde10(uint param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 & 0xffff;
  uVar1 = 1;
  if (param_1 < 0x1ef) {
    if (param_1 < 0x110) {
      if ((((param_1 - 0xc3 < 0x36) &&
           ((1L << ((ulong)(param_1 - 0xc3) & 0x3f) & 0x20000000120001U) != 0)) || (param_1 == 0x2e)
          ) || (param_1 == 0xae)) {
        return uVar1;
      }
    }
    else {
      if ((param_1 - 0x150 < 0x30) &&
         ((1L << ((ulong)(param_1 - 0x150) & 0x3f) & 0x880090000001U) != 0)) {
        return uVar1;
      }
      if (param_1 == 0x110) {
        return uVar1;
      }
      if (param_1 == 0x138) {
        return uVar1;
      }
    }
  }
  else if (param_1 < 0x2cb) {
    if ((param_1 - 0x24d < 0x13) && ((1 << (ulong)(param_1 - 0x24d & 0x1f) & 0x40103U) != 0)) {
      return uVar1;
    }
    if (param_1 == 0x1ef) {
      return uVar1;
    }
    if (param_1 == 0x1f6) {
      return uVar1;
    }
  }
  else {
    if ((param_1 - 0x309 < 0x28) && ((1L << ((ulong)(param_1 - 0x309) & 0x3f) & 0x8400004001U) != 0)
       ) {
      return uVar1;
    }
    if (param_1 == 0x2cb) {
      return uVar1;
    }
  }
  return 0;
}


