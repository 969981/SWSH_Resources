/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ef3e0; name: FUN_008ef3e0
 */


bool FUN_008ef3e0(byte param_1,byte param_2)

{
  if (param_1 < 2) {
    if (param_1 == param_2) {
      return true;
    }
    if (param_2 == 3) {
      return true;
    }
    if (param_2 == 5) {
      return param_1 != 1;
    }
    if (param_2 == 4) {
      return param_1 != 0;
    }
  }
  return false;
}


