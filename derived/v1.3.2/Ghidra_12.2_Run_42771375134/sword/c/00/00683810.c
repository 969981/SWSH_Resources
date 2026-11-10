/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00683810; name: FUN_00683810
 */


void FUN_00683810(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_02714e40 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  if (param_2 == 0) {
    lVar1 = FUN_005bc6f0();
    param_1[3] = lVar1;
    return;
  }
  return;
}


