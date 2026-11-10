/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c76f0; name: FUN_013c76f0
 */


void FUN_013c76f0(long *param_1,long *param_2,long *param_3)

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
  }
  puVar1 = PTR_DAT_02729188;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 200);
  param_1[10] = (long)(puVar1 + 0x108);
  param_1[0x11] = (long)(puVar1 + 400);
  param_1[0xf] = (long)(puVar1 + 0x130);
  param_1[0x10] = (long)(puVar1 + 0x178);
  return;
}


