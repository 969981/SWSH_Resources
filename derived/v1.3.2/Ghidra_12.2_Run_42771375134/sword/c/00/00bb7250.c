/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb7250; name: FUN_00bb7250
 */


void FUN_00bb7250(long param_1,long param_2,int param_3,ulong param_4)

{
  bool bVar1;
  int param3;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte local_98 [64];
  ulong local_58;
  ulong local_48;
  
  local_58 = 0;
  param3 = param_3 + 6;
  if ((param_4 & 1) == 0) {
    param3 = param_3;
  }
  local_48 = 0;
  uVar7 = 0xcbf29ce484222645;
  snprintf((char *)local_98,0x40,"pane_L_icon_poke_team_%02d_T_poke_lv_00",param3);
  uVar6 = 0xcbf29ce484222645;
  if (local_98[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar4 = (byte *)((ulong)local_98 | 1);
    bVar2 = local_98[0];
    do {
      uVar6 = (uVar6 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  local_48 = uVar6;
  snprintf((char *)local_98,0x40,"pane_L_icon_poke_team_%02d_T_name_poke_00",param3);
  if (local_98[0] != 0) {
    pbVar4 = (byte *)((ulong)local_98 | 1);
    do {
      uVar7 = (uVar7 ^ local_98[0]) * 0x100000001b3;
      local_98[0] = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (local_98[0] != 0);
  }
  lVar5 = *(long *)(param_1 + 0x2b0);
  local_58 = uVar7;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar5 + 0x2e0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if ((param_2 == 0) || (uVar7 = FUN_008787d0(param_2), (uVar7 & 1) != 0)) {
    FUN_0167b9b0(lVar5,&local_48,0);
    FUN_0167b9b0(lVar5,&local_58,0);
  }
  else {
    uVar7 = FUN_0087d610(param_2,2);
    bVar1 = (uVar7 & 1) == 0;
    if (bVar1) {
      uVar3 = FUN_0087a5f0(param_2);
      FUN_014ca220(lVar8,0,uVar3,3,0,1);
      FUN_00bb6fe0(param_1,0xc8f858d01388e617,uVar6);
    }
    FUN_0167b9b0(lVar5,&local_48,bVar1);
    FUN_014c7bf0(lVar8,0,param_2);
    FUN_00bb6fe0(param_1,0xf3a3439af010602,local_58);
    FUN_0167b9b0(lVar5,&local_58,1);
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


