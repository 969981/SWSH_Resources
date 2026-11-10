/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cfc3b0; name: FUN_00cfc3b0
 */


void FUN_00cfc3b0(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = param_1 + 0x100;
  local_38 = 0xe82c915b1d8e649a;
  uVar2 = FUN_00ffdd70(lVar1,&local_38);
  *(undefined8 *)(param_1 + 0x5e0) = uVar2;
  if (*(int *)(param_1 + 0x770) != param_2) {
    *(int *)(param_1 + 0x770) = param_2;
    if (param_2 == 1) {
      local_38 = 0x2b7e21090f2ceb65;
      FUN_016b76f0(uVar2,&local_38);
      local_38 = 0x2b7e1b090f2ce133;
      FUN_016b76f0(*(undefined8 *)(param_1 + 0x5e0),&local_38);
      uVar2 = 0x3f800000;
    }
    else {
      if (param_2 != 0) goto LAB_00cfc4fc;
      local_40 = 0x200000000;
      local_38 = 0x2b7e21090f2ceb65;
      local_48 = 0x100000001;
      FUN_016b7620(uVar2,&local_38,&local_40,&local_48);
      local_38 = 0x2b7e1b090f2ce133;
      local_48 = 0x100000001;
      local_40 = 0x400000000;
      FUN_016b7620(*(undefined8 *)(param_1 + 0x5e0),&local_38,&local_40,&local_48);
      uVar2 = 0;
    }
    FUN_00ffd450(uVar2,lVar1,"anime_detail_switch");
    local_38 = 0x4fb9bc345a2ce967;
    FUN_00ffd510(uVar2,lVar1,&local_38);
  }
LAB_00cfc4fc:
  local_38 = 0;
  FUN_016b7990(*(undefined8 *)(param_1 + 0x5e0),&local_38,1,0);
  return;
}


