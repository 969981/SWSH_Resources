/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004518f0; name: FUN_004518f0
 */


void FUN_004518f0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_00481d50();
  puVar2 = PTR_DAT_02713018;
  puVar1 = PTR_DAT_02713018 + 0x10;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = (long)puVar1;
  param_1[3] = (long)(puVar2 + 0x2a8);
  param_1[6] = (long)(puVar2 + 0x340);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xc2c0999a;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x1b,0,0x78);
}


