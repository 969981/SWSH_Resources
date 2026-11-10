/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00415150; name: FUN_00415150
 */


void FUN_00415150(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_00409800();
  puVar2 = PTR_DAT_02712bc0;
  puVar1 = PTR_DAT_02712bc0 + 0x10;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *param_1 = (long)puVar1;
  param_1[3] = (long)(puVar2 + 0x2b8);
  param_1[6] = (long)(puVar2 + 0x350);
  return;
}


