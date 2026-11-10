/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040ad90; name: FUN_0040ad90
 */


void FUN_0040ad90(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_00408790();
  puVar2 = PTR_DAT_02712b58;
  puVar1 = PTR_DAT_02712b58 + 0x10;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = (long)puVar1;
  param_1[3] = (long)(puVar2 + 0x108);
  param_1[5] = (long)(puVar2 + 0x130);
  return;
}


