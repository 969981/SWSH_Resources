/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c9e20; name: FUN_013c9e20
 */


void FUN_013c9e20(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
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
  FUN_00ff5fc0(param_1,&local_28,&local_30);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  puVar1 = PTR_DAT_027291d8;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x18] = 0;
  param_1[0xf] = (long)(puVar1 + 0xf8);
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[10] = (long)(puVar1 + 0xd0);
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1b] = param_1[1];
  param_1[0x1c] = 0;
  param_1[0x20] = param_1[1];
  param_1[0x21] = 0;
  FUN_013d0db0(param_1 + 0x17,0x5a);
  return;
}


