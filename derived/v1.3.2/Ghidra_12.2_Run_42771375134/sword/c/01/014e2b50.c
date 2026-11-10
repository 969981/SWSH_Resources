/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e2b50; name: FUN_014e2b50
 */


void FUN_014e2b50(long *param_1,long *param_2,long *param_3)

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
  *(undefined4 *)(param_1 + 0xf) = 0;
  puVar1 = PTR_DAT_0272a5d8 + 0x78;
  puVar2 = PTR_DAT_0272a5d8 + 0xb8;
  *param_1 = (long)(PTR_DAT_0272a5d8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_014e1e40(param_1 + 0x12,param_1[1]);
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  FUN_0010d170(&local_28,"StateDownloadMyTeam");
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  param_1[0xe] = local_28;
  return;
}


