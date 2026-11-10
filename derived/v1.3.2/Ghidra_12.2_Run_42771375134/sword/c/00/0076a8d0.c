/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076a8d0; name: FUN_0076a8d0
 */


void FUN_0076a8d0(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02715ad0 + 0x50;
  *param_1 = (long)(PTR_DAT_02715ad0 + 0x10);
  param_1[9] = (long)puVar1;
  FUN_006f6670(param_1 + 0x19);
  FUN_006f6670(param_1 + 0xb);
  FUN_006f68a0(param_1);
  return;
}


