/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01075ff0; name: FUN_01075ff0
 */


void FUN_01075ff0(long param_1,ulong param_2)

{
  long lVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_50 [3];
  long local_38;
  
  FUN_006cf0a0(local_50,&DAT_0266d2f0);
  FUN_016d3620(local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if ((param_2 & 1) == 0) {
    uVar3 = FUN_0106f6b0(*(undefined4 *)(param_1 + 0x5dc),
                         *(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x60),
                         *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
  }
  else {
    uVar3 = FUN_0106f990();
  }
  lVar1 = param_1 + 0x100;
  *(undefined4 *)(param_1 + 0x5e0) = uVar3;
  local_50[0] = 0xde84e9d037549cec;
  uVar4 = FUN_00ffdfb0(lVar1,local_50);
  FUN_016b2da0(uVar4,0);
  lVar5 = FUN_0106fc20(*(undefined4 *)(param_1 + 0x5dc),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
  local_50[0] = *(undefined8 *)(lVar5 + 0x10);
  uVar4 = *(undefined8 *)(lVar5 + 0x18);
  FUN_00ffd430(lVar1,local_50);
  local_50[0] = uVar4;
  FUN_00ffd010(lVar1,local_50);
  lVar5 = FUN_0106fc20(*(undefined4 *)(param_1 + 0x5e0),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  local_50[0] = *(undefined8 *)(lVar5 + 0x18);
  FUN_00ffd430(lVar1,local_50);
  local_50[0] = uVar4;
  FUN_00ffd010(lVar1,local_50);
  pcVar2 = "anime_L_tab_right_00_key_select";
  if ((param_2 & 1) == 0) {
    pcVar2 = "anime_L_tab_left_00_key_select";
  }
  FUN_00ffcf80(lVar1,pcVar2);
  *(undefined4 *)(param_1 + 0x5d8) = 2;
  return;
}


