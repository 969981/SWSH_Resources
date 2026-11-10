/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00481d50; name: FUN_00481d50
 */


void FUN_00481d50(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_004635c0();
  *param_1 = (long)(PTR_DAT_02713270 + 0x10);
  FUN_00489130(param_1 + 3);
  FUN_004a46a0(param_1 + 6);
  puVar1 = PTR_DAT_02713278 + 600;
  puVar2 = PTR_DAT_02713278 + 0x2f0;
  *param_1 = (long)(PTR_DAT_02713278 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[6] = (long)puVar2;
  FUN_004a46a0(param_1 + 8);
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 10,0,0x4c);
}


