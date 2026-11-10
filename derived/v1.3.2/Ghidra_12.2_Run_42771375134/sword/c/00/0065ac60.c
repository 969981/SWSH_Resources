/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0065ac60; name: FUN_0065ac60
 */


void FUN_0065ac60(long *param_1,undefined8 param_2,long param_3)

{
  *param_1 = (long)(PTR_DAT_02714c20 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[3] = param_3;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 4,0,0x214);
}


