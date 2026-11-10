/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ed6e0; name: FUN_005ed6e0
 */


uint FUN_005ed6e0(int param_1,uint param_2)

{
  if (param_1 - 0x1fU < 2) {
LAB_005ed6fc:
    if (3 < param_2) {
      param_2 = 1;
    }
    return param_2;
  }
  if (param_1 == 0x57) {
    if (param_2 < 4) {
      return *(uint *)(&DAT_01d4ada0 + (long)(int)param_2 * 4);
    }
  }
  else if (param_1 == 0x1c) goto LAB_005ed6fc;
  return 1;
}


