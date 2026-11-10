/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00680600; name: FUN_00680600
 */


void FUN_00680600(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02714e38 + 0x10);
  FUN_005bf710(param_1 + 1);
  *(undefined8 *)((long)param_1 + 0x35) = 0;
  param_1[8] = 0x100000001;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


