/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01347870; name: FUN_01347870
 */


void FUN_01347870(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_013283c0();
  puVar1 = PTR_DAT_02728250;
  *param_1 = (long)(PTR_DAT_02728250 + 0x10);
  param_1[9] = (long)(puVar1 + 0xe0);
  param_1[10] = (long)(puVar1 + 0x150);
  lVar2 = *param_2;
  param_1[0x17] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  param_1[0x18] = 0;
  return;
}


