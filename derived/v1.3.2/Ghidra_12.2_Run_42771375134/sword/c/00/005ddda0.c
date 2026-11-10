/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ddda0; name: FUN_005ddda0
 */


void FUN_005ddda0(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_005dc7e0();
  puVar1 = PTR_DAT_02714218;
  *(undefined4 *)(param_1 + 0x17) = 1;
  puVar2 = PTR_DAT_02714220;
  param_1[0x1a] = param_2;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0xa0);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[2] = (long)(puVar1 + 0xd8);
  param_1[3] = (long)(puVar1 + 0x108);
  param_1[0x18] = param_3;
  param_1[0x19] = (long)(puVar2 + 0x10);
  param_1[0x1c] = 0;
  param_1[0x1d] = 8;
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[0x1a] = lVar3;
  }
  lVar3 = *(long *)PTR_DAT_02714020;
  param_1[4] = (long)param_1;
  param_1[5] = lVar3;
  return;
}


