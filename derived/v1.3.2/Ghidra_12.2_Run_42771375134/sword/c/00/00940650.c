/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940650; name: FUN_00940650
 */


undefined8 FUN_00940650(uint param_1,uint param_2)

{
  ulong uVar1;
  
  if ((param_2 & 0xffff) == 0) {
    return 0;
  }
  param_1 = param_1 & 0xffff;
  if (param_1 < 0x289) {
    if (param_1 - 0x17e < 2) {
      return 0;
    }
    if (param_1 == 0x1e7) {
      if ((param_2 & 0xffff) == 0x70) {
        return 1;
      }
      return 0;
    }
    if (param_1 == 0x1ed) {
      uVar1 = FUN_008dd650(param_2);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  else if (param_1 < 0x378) {
    if (param_1 == 0x289) {
      uVar1 = FUN_008dd690(param_2);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    if (param_1 == 0x305) {
      uVar1 = FUN_008dd670(param_2);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  else {
    if (param_1 == 0x378) {
      if ((param_2 & 0xffff) == 0x44f) {
        return 1;
      }
      return 0;
    }
    if (param_1 == 0x379) {
      if ((param_2 & 0xffff) == 0x450) {
        return 1;
      }
      return 0;
    }
  }
  uVar1 = FUN_008890f0(param_2);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return 1;
}


