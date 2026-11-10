/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01135620; name: FUN_01135620
 */


void FUN_01135620(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
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
  puVar1 = PTR_DAT_02724bf8 + 0x78;
  puVar2 = PTR_DAT_02724bf8 + 0xb8;
  *param_1 = (long)(PTR_DAT_02724bf8 + 0x10);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  param_1[0xf] = 0x200000000;
  param_1[0x10] = 0;
  FUN_01134830(param_1 + 0x14,param_1[1]);
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  FUN_0010d170(&local_28,"StateGuestTop");
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  param_1[0xe] = local_28;
  return;
}


