/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00653230; name: FUN_00653230
 */


void FUN_00653230(long *param_1,undefined8 param_2,long param_3)

{
  *param_1 = (long)(PTR_DAT_02714b20 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[0xd9] = 0;
  param_1[3] = param_3;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0xda) = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 5,0,0x530);
}


