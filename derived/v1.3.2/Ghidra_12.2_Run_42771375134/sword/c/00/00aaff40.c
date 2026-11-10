/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aaff40; name: FUN_00aaff40
 */


void FUN_00aaff40(long *param_1,long *param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_015f5d10();
  puVar1 = PTR_DAT_027197e8;
  *param_1 = (long)(PTR_DAT_027197e8 + 0x10);
  param_1[9] = (long)(puVar1 + 0x60);
  param_1[10] = (long)(puVar1 + 0xa0);
  lVar2 = *param_2;
  param_1[0x10] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x11) = param_3;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  return;
}


