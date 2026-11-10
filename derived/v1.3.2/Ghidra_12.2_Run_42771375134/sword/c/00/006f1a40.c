/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f1a40; name: FUN_006f1a40
 */


void FUN_006f1a40(long *param_1)

{
  undefined *puVar1;
  
  FUN_006f8200();
  puVar1 = PTR_DAT_02715780 + 0x70;
  *param_1 = (long)(PTR_DAT_02715780 + 0x10);
  param_1[9] = (long)puVar1;
  return;
}


