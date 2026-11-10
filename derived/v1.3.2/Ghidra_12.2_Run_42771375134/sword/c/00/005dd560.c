/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005dd560; name: FUN_005dd560
 */


void FUN_005dd560(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_005dc7e0();
  puVar2 = PTR_DAT_02714208;
  puVar1 = PTR_DAT_02714208 + 0xb0;
  *param_1 = (long)(PTR_DAT_02714208 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = (long)(puVar2 + 0xe8);
  param_1[3] = (long)(puVar2 + 0x118);
  puVar1 = PTR_DAT_027141b8;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x17] = (long)(puVar1 + 0x10);
  param_1[0x18] = param_2;
  param_1[0x1b] = 8;
  param_1[0x1c] = 0;
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[0x18] = lVar3;
  }
  lVar3 = *(long *)PTR_DAT_02713ff0;
  param_1[4] = (long)param_1;
  param_1[5] = lVar3;
  return;
}


