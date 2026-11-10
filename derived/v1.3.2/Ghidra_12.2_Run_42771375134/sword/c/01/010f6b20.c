/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f6b20; name: FUN_010f6b20
 */


void FUN_010f6b20(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = *param_2;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
  }
  local_38 = *param_3;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00ff5fc0(param_1,&local_30,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar1 = PTR_DAT_02724898;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xf] = (long)(puVar1 + 0xf0);
  param_1[9] = (long)(puVar1 + 0x88);
  param_1[10] = (long)(puVar1 + 200);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_0010d170(&local_28,"StateConfirmGift");
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  param_1[0xe] = local_28;
  return;
}


