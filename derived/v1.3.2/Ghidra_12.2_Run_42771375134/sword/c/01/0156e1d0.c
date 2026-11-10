/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0156e1d0; name: FUN_0156e1d0
 */


void FUN_0156e1d0(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long local_28;
  
  lVar2 = *param_1;
  local_60 = 0xfc086ed38f4d2636;
  local_58 = "FrameType";
  local_50 = 9;
  local_48 = 0;
  uVar1 = FUN_00782340(param_2,&local_60);
  FUN_007825c0(auStack_40,param_2,uVar1);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  local_80 = 0xda67c6bb223226b;
  local_78 = "FadeType";
  local_70 = 8;
  local_68 = 0;
  uVar1 = FUN_00782340(param_2,&local_80);
  FUN_007825c0(&local_60,param_2,uVar1);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_0076dc30(*(long *)(lVar2 + 0x90) + 0x60,0,0,local_58,0,0);
  FUN_0076dc30(*(long *)(lVar2 + 0x90) + 0x60,0,0,local_38,0,0);
  local_80 = 0xb49d587e88e5ee2d;
  local_78 = "CS_FadeIn";
  local_70 = 9;
  local_68 = 0;
  FUN_0156d360(lVar2,&local_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


