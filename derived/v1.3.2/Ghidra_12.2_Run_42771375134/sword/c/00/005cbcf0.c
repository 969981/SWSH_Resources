/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cbcf0; name: FUN_005cbcf0
 */


ulong FUN_005cbcf0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  if (param_1 < param_5) {
    return 0xffffffff;
  }
  if (param_5 < param_1) {
    return 1;
  }
  if (param_2 < param_6) {
    return 0xffffffff;
  }
  if (param_6 < param_2) {
    return 1;
  }
  if (param_3 < param_7) {
    return 0xffffffff;
  }
  if (param_7 < param_3) {
    return 1;
  }
  if (param_4 < param_8) {
    return 0xffffffff;
  }
  return (ulong)(param_8 < param_4);
}


