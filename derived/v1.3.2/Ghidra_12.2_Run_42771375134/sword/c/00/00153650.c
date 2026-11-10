/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00153650; name: FUN_00153650
 */


void FUN_00153650(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02710e10 + 0x380;
  *param_1 = (long)(PTR_DAT_02710e10 + 0x10);
  param_1[1] = (long)puVar1;
  FUN_001525b0(param_1 + 2,param_2 + -8,param_3 + 0x10);
  return;
}


