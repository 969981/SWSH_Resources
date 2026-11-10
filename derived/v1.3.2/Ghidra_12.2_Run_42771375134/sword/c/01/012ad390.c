/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ad390; name: FUN_012ad390
 */


void FUN_012ad390(long *param_1,byte param_2,byte param_3)

{
  undefined *puVar1;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_02727390 + 0x10;
  *(byte *)(param_1 + 3) = param_2 & 1;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  *(byte *)((long)param_1 + 0x19) = param_3 & 1;
  return;
}


