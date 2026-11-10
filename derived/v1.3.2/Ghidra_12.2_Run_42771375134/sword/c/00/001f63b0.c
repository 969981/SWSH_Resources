/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f63b0; name: FUN_001f63b0
 */


void FUN_001f63b0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_02711188;
  puVar1 = PTR_DAT_02710c20;
  param_1[0x4a5] = 0;
  param_1[0x49e] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x4a3] = (long)(puVar1 + 0x10);
  param_1[0x49c] = (long)(puVar1 + 0x10);
  FUN_0039a640(param_1 + 0x486);
  FUN_001f5160(param_1 + 2);
  return;
}


