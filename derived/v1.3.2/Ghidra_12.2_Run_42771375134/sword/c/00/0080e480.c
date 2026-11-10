/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080e480; name: FUN_0080e480
 */


undefined4 FUN_0080e480(ulong param_1)

{
  undefined4 uVar1;
  
  if (param_1 >> 0x23 != 0) {
    if (param_1 >> 0x2a == 0) {
      return 6;
    }
    if (param_1 >> 0x31 == 0) {
      return 7;
    }
    if (param_1 >> 0x38 == 0) {
      return 8;
    }
    uVar1 = 9;
    if ((long)param_1 < 0) {
      uVar1 = 10;
    }
    return uVar1;
  }
  if (param_1 < 0x80) {
    return 1;
  }
  if (param_1 < 0x4000) {
    return 2;
  }
  if (param_1 < 0x200000) {
    return 3;
  }
  uVar1 = 4;
  if (param_1 >> 0x1c != 0) {
    uVar1 = 5;
  }
  return uVar1;
}


