/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005efbc0; name: FUN_005efbc0
 */


void FUN_005efbc0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_0067a450();
  *param_1 = (long)(PTR_DAT_02714338 + 0x10);
  FUN_005efc30(param_1 + 0x17,param_2);
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x8e] = 0;
  puVar2 = PTR_DAT_02713fb0;
  param_1[0x8d] = 0;
  lVar1 = *(long *)(puVar2 + 8);
  param_1[5] = *(long *)puVar2;
  param_1[6] = lVar1;
  param_1[7] = 3;
  param_1[8] = 0xb00000000;
  return;
}


