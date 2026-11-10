/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01563130; name: FUN_01563130
 */


void FUN_01563130(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_01564b70(param_1,param_2,2);
  puVar1 = PTR_DAT_0272aed8;
  *param_1 = (long)(PTR_DAT_0272aed8 + 0x10);
  param_1[9] = (long)(puVar1 + 0x88);
  param_1[10] = (long)(puVar1 + 200);
  lVar2 = *param_3;
  *param_3 = 0;
  param_1[0x6e] = lVar2;
  return;
}


