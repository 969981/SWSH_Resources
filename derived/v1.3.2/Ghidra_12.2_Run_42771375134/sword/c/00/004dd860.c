/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004dd860; name: FUN_004dd860
 */


void FUN_004dd860(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_027135c0;
  param_1[3] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc;
  return;
}


