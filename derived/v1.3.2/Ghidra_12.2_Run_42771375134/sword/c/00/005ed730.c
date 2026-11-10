/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ed730; name: FUN_005ed730
 */


undefined8 FUN_005ed730(int param_1,uint param_2)

{
  if (1 < param_1 - 0x1fU) {
    if (param_1 == 0x57) {
      if (param_2 < 4) {
        return 1;
      }
      return 0xffffffff;
    }
    if (param_1 != 0x1c) {
      return 0xffffffff;
    }
  }
  if (param_2 < 4) {
    return 1;
  }
  return 0xffffffff;
}


