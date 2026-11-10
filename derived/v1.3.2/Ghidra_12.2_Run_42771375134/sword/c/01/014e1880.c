/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e1880; name: FUN_014e1880
 */


void FUN_014e1880(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_00ff5da0();
  puVar2 = PTR_DAT_0272a5d0;
  puVar1 = PTR_DAT_0272a5d0 + 0x10;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (long)puVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[9] = (long)(puVar2 + 0x58);
  param_1[10] = (long)(puVar2 + 0x98);
  return;
}


