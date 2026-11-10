/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d815f0; name: FUN_00d815f0
 */


void FUN_00d815f0(long param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 local_54 [4];
  uint local_50 [6];
  long local_38;
  
  FUN_006cf0a0(local_50,&DAT_0264d278);
  FUN_016d3620(local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  local_50[0] = 0xb;
  iVar3 = FUN_00d756f0(*(long *)(param_1 + 0x5d0) + 0x60,local_50);
  local_54[0] = iVar3 != 0;
  lVar5 = *(long *)(param_1 + 0x5d0);
  lVar1 = param_1 + 0x5dc;
  if (*param_2 == '\0') {
    local_50[0] = CONCAT31(local_50[0]._1_3_,*(undefined1 *)(*(long *)(lVar5 + 0x278) + 0x58));
    uVar4 = FUN_00d70680(lVar1,*(undefined8 *)(lVar5 + 0x280),local_50,local_54);
  }
  else {
    local_50[0] = CONCAT31(local_50[0]._1_3_,*(undefined1 *)(*(long *)(lVar5 + 0x278) + 0x58));
    uVar4 = FUN_00d70700(lVar1,*(undefined8 *)(lVar5 + 0x280),local_50,local_54);
  }
  *(undefined4 *)(param_1 + 0x5e0) = uVar4;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00d7d400(param_1,local_50);
  local_50[0] = 1;
  FUN_00d7e4e0(param_1,lVar1,local_50);
  local_50[0] = 0;
  FUN_00d7e4e0(param_1,param_1 + 0x5e0,local_50);
  pcVar2 = "anime_L_tab_left_00_key_select";
  if (*param_2 != '\0') {
    pcVar2 = "anime_L_tab_right_00_key_select";
  }
  FUN_00ffcf80(param_1 + 0x100,pcVar2);
  *(undefined4 *)(param_1 + 0x5d8) = 2;
  return;
}


