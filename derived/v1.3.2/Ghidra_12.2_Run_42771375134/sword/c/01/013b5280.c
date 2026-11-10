/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b5280; name: FUN_013b5280
 */


void FUN_013b5280(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  long local_30;
  long local_28;
  
  local_28 = *param_2;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  local_30 = *param_3;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
  }
  FUN_013705b0(param_1,&local_28,&local_30);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  puVar2 = PTR_DAT_02729018;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x78);
  param_1[10] = (long)(puVar2 + 0xb8);
  lVar1 = *(long *)(PTR_DAT_027152c0 + 8);
  param_1[0x18] = *(long *)PTR_DAT_027152c0;
  param_1[0x19] = lVar1;
  return;
}


