/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d46b0; name: FUN_008d46b0
 */


undefined8 FUN_008d46b0(long param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *__s;
  long *plVar3;
  long local_88 [2];
  undefined1 *local_78;
  long local_70;
  long local_68;
  ulong local_58;
  byte *pbStack_50;
  size_t local_48;
  long local_40;
  long local_38;
  
  if ((0xc < param_2) || (*(int *)(param_1 + 0x178) == 1)) {
    return 0;
  }
  __s = (&PTR_s_bin_battle_ai_script_btl_ai_basi_026197e0)[(int)param_2];
  if (*(int *)(param_1 + 0x178) == 2) {
    if (*(uint *)(param_1 + 0x17c) == param_2) {
      return 1;
    }
    local_48 = strlen((char *)__s);
    bVar1 = *__s;
    pbVar2 = __s;
    local_58 = 0xcbf29ce484222645;
    while (bVar1 != 0) {
      pbVar2 = pbVar2 + 1;
      local_58 = (local_58 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
    }
  }
  else {
    local_48 = strlen((char *)__s);
    bVar1 = *__s;
    pbVar2 = __s;
    local_58 = 0xcbf29ce484222645;
    while (bVar1 != 0) {
      pbVar2 = pbVar2 + 1;
      local_58 = (local_58 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
    }
  }
  local_40 = 0;
  pbStack_50 = __s;
  FUN_008d48d0(local_88,&local_58);
  FUN_006dccd0(&local_38,*(undefined8 *)PTR_DAT_02710788,1,local_88,0,
               *(undefined8 *)(param_1 + 0x58),0);
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(long *)(param_1 + 0x68) = local_38;
  if (local_38 != 0) {
    plVar3 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((*(long *)(param_1 + 0x70) != 0) || (*(long *)(param_1 + 0xf0) != 0)) {
      FUN_006e1e70(local_38,param_1 + 0x60,1);
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  *(uint *)(param_1 + 0x17c) = param_2;
  *(undefined4 *)(param_1 + 0x178) = 1;
  if ((local_70 != 0) && (local_88[0] != 0)) {
    (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
  }
  local_88[0] = 0;
  local_88[1] = 0xcbf29ce484222645;
  local_78 = &DAT_01d38550;
  local_70 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return 1;
}


