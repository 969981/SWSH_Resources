/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e4080; name: FUN_014e4080
 */


void FUN_014e4080(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  *(undefined1 *)(param_1 + 0xf) = 0;
  puVar1 = PTR_DAT_0272a5f0 + 0x10;
  puVar2 = PTR_DAT_0272a5f0 + 0x78;
  puVar3 = PTR_DAT_0272a5f0 + 0xb8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = (long)puVar1;
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_014e1e40(param_1 + 0x16,param_1[1]);
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)((long)param_1 + 0x2dc) = 0;
  FUN_0010d170(&local_28,"StateUploadTeamMenu");
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  param_1[0xe] = local_28;
  return;
}


