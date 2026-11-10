/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047e130; name: FUN_0047e130
 */


void FUN_0047e130(long *param_1)

{
  undefined *puVar1;
  
  FUN_00481d50();
  puVar1 = PTR_DAT_02713268;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[6] = (long)(puVar1 + 0x308);
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 199;
  param_1[3] = (long)(puVar1 + 0x270);
  *param_1 = (long)(puVar1 + 0x10);
  *(byte *)((long)param_1 + 0xb1) = *(byte *)((long)param_1 + 0xb1) & 0x80;
  return;
}


