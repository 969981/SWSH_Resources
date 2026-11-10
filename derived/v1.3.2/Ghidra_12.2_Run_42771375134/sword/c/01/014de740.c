/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014de740; name: FUN_014de740
 */


void FUN_014de740(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  local_50 = 0x25551a9236d38aa3;
  local_48 = "ViewSelectMode";
  local_40 = 0xe;
  local_38 = 0;
  uVar1 = FUN_014df240(param_2,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  local_50 = 0x19cc596b6735c190;
  local_48 = "UploadTeamView";
  local_40 = 0xe;
  local_38 = 0;
  uVar1 = FUN_015fad20(param_2,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  local_50 = 0x34757a223ad28f09;
  local_48 = "DownloadTeamView";
  local_40 = 0x10;
  local_38 = 0;
  uVar1 = FUN_015fad20(param_2,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  local_50 = 0x82e250efa22ca537;
  local_48 = "BattleTeamView";
  local_40 = 0xe;
  local_38 = 0;
  uVar1 = FUN_015fad20(param_2,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  local_50 = 0x450dce9042b6a3f0;
  local_48 = "ViewTeamDetail";
  local_40 = 0xe;
  local_38 = 0;
  uVar1 = FUN_014df390(param_2,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  return;
}


