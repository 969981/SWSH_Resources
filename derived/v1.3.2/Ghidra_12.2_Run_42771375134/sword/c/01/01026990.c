/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01026990; name: FUN_01026990
 */


void FUN_01026990(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_48;
  long *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  local_28 = 0;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x80) == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar1 = PTR_DAT_027237f0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[9] = (long)(puVar1 + 0x48);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = local_28;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_01026ad0(&local_48,local_28,&local_28);
  lVar2 = local_48;
  local_48 = 0;
  lVar3 = param_1[0xb];
  param_1[0xb] = lVar2;
  if (lVar3 == 0) {
    param_1[0xd] = local_38;
    param_1[0xe] = local_30;
    param_1[0xc] = (long)local_40;
    return;
  }
  FUN_010263f0(lVar3);
  (**(code **)(*(long *)param_1[0xc] + 0x18))((long *)param_1[0xc],lVar3,param_1[0xd],param_1[0xe]);
  lVar2 = local_48;
  param_1[0xc] = (long)local_40;
  param_1[0xd] = local_38;
  param_1[0xe] = local_30;
  local_48 = 0;
  if (lVar2 != 0) {
    FUN_010263f0(lVar2);
    (**(code **)(*local_40 + 0x18))(local_40,lVar2,local_38,local_30);
  }
  return;
}


