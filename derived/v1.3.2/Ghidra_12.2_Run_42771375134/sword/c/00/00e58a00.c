/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e58a00; name: FUN_00e58a00
 */


void FUN_00e58a00(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_00e36b10();
  puVar1 = PTR_DAT_0271fbc8 + 0x250;
  puVar2 = PTR_DAT_0271fbc8 + 0x290;
  *param_1 = (long)(PTR_DAT_0271fbc8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  return;
}


