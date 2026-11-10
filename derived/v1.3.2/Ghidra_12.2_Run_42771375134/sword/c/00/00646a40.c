/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00646a40; name: FUN_00646a40
 */


void FUN_00646a40(long *param_1,undefined8 param_2)

{
  *param_1 = (long)(PTR_DAT_027149f0 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[0x92] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = (long)(PTR_DAT_027149b8 + 0x10);
  FUN_005bf710(param_1 + 0x15e,param_2);
  param_1[0x15d] = (long)(PTR_DAT_027149f8 + 0x10);
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x2c,0,0x330);
}


