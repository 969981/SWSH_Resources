/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab3f60; name: FUN_00ab3f60
 */


void FUN_00ab3f60(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_015f5d10();
  puVar1 = PTR_DAT_027198b8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x60);
  param_1[10] = (long)(puVar1 + 0xa0);
  lVar2 = *param_2;
  param_1[0x11] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  param_1[0x12] = 0x300000000;
  return;
}


