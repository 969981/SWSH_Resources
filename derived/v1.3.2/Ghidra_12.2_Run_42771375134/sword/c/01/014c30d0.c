/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c30d0; name: FUN_014c30d0
 */


undefined8 FUN_014c30d0(undefined8 param_1,int param_2)

{
  if (param_2 < 0x36) {
    if (param_2 == 0x20) {
      return 0;
    }
  }
  else {
    if (param_2 == 0x36) {
      return 2;
    }
    if (param_2 == 100) {
      return 3;
    }
  }
  return 1;
}


