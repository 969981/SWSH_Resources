/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e0100; name: FUN_005e0100
 */


void FUN_005e0100(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_005e04a0();
  puVar2 = PTR_DAT_02714268;
  puVar1 = PTR_DAT_02714268 + 0xb0;
  *param_1 = (long)(PTR_DAT_02714268 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = (long)(puVar2 + 0xe8);
  param_1[3] = (long)(puVar2 + 0x118);
  lVar3 = *(long *)PTR_DAT_02714270;
  param_1[4] = (long)param_1;
  param_1[5] = lVar3;
  return;
}


