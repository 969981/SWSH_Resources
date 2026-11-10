/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00880cd0; name: FUN_00880cd0
 */


undefined8 FUN_00880cd0(int param_1)

{
  if (param_1 < 0xf1) {
    if (param_1 == 0xc9) {
      return 4;
    }
    if (param_1 == 0xf0) {
      return 2;
    }
  }
  else {
    if (param_1 == 0x102) {
      return 3;
    }
    if (param_1 == 0xf1) {
      return 1;
    }
  }
  return 0;
}


