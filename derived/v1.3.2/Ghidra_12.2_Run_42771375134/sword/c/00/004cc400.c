/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cc400; name: FUN_004cc400
 */


void FUN_004cc400(long *param_1)

{
  undefined *puVar1;
  
  FUN_004cbce0();
  *(undefined2 *)(param_1 + 0x10) = 0;
  puVar1 = PTR_DAT_02713540;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xb] = 0;
  *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xe0;
  return;
}


