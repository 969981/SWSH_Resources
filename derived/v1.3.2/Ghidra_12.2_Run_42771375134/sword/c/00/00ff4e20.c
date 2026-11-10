/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff4e20; name: FUN_00ff4e20
 */


ulong FUN_00ff4e20(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 local_560 [6];
  undefined1 local_546;
  undefined4 local_544;
  undefined4 uStack_540;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined1 local_1a2;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_60;
  undefined8 uStack_58;
  
  puVar1 = &DAT_02158da8;
  if (*(undefined **)(param_3 + 0x16) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_3 + 0x16);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
  if (lVar4 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_0077cea0(lVar4,puVar1);
  *(long **)(lVar4 + 8) = param_2;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x80;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar5 = nn::swkbd::GetRequiredStringBufferSize();
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar5,0x1000);
  local_60 = lVar3;
  uStack_58 = uVar5;
  nn::swkbd::MakePreset(local_560,0);
  if ((*(long *)(param_3 + 0x18) == 0) || (param_3[0x1a] == 0)) {
    local_88 = nn::swkbd::GetRequiredWorkBufferSize(false);
  }
  else {
    local_88 = nn::swkbd::GetRequiredWorkBufferSize(param_3[0x1a]);
  }
  local_90 = (**(code **)(*param_2 + 0x10))(param_2,local_88,0x1000);
  nn::swkbd::SetUserWordList
            ((ShowKeyboardArg *)local_560,*(UserWord **)(param_3 + 0x18),param_3[0x1a]);
  local_78 = nn::swkbd::GetRequiredTextCheckWorkBufferSize();
  local_80 = (**(code **)(*param_2 + 0x10))(param_2,local_78,0x1000);
  local_560[0] = *param_3;
  local_546 = 0;
  local_544 = param_3[1];
  uStack_540 = 1;
  nn::swkbd::SetHeaderText((KeyboardConfig *)local_560,*(wchar16 **)(param_3 + 2));
  nn::swkbd::SetSubText((KeyboardConfig *)local_560,*(wchar16 **)(param_3 + 4));
  local_1b4 = param_3[6];
  local_1b0 = param_3[7];
  local_1a8 = param_3[8];
  local_1a4 = 0;
  local_1a2 = 1;
  local_180 = param_3[9];
  local_17c = param_3[10];
  local_178 = param_3[0xb];
  local_174 = param_3[0xc];
  local_170 = param_3[0xd];
  local_16c = param_3[0xe];
  local_168 = param_3[0xf];
  local_164 = param_3[0x10];
  DAT_02a61c00 = *(undefined8 *)(param_3 + 0x12);
  DAT_02a61c08 = *(undefined8 *)(param_3 + 0x14);
  nn::swkbd::SetTextCheckCallback
            ((ShowKeyboardArg *)local_560,
             (_func_TextCheckResult_void_ptr_ulong_ptr_String_ptr *)&LAB_00ff5150);
  nn::swkbd::SetInitialText((ShowKeyboardArg *)local_560,*(wchar16 **)(param_3 + 0x16));
  uVar2 = nn::swkbd::ShowKeyboard((String *)&local_60,(ShowKeyboardArg *)local_560);
  (**(code **)(*param_2 + 0x18))(param_2,local_80,local_78,0x1000);
  (**(code **)(*param_2 + 0x18))(param_2,local_90,local_88,0x1000);
  if (uVar2 == 0) {
    FUN_0077d520(param_1,local_60);
    uVar2 = FUN_0077d430(param_1,lVar4);
    uVar7 = 0;
    uVar6 = (ulong)(~uVar2 & 1) << 0x20;
  }
  else {
    uVar6 = 0;
    uVar7 = 0x80000001;
    if ((uVar2 & 0x3fffff) != 0x29f) {
      uVar7 = 0x80000002;
    }
  }
  if (lVar3 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,lVar3,uVar5,0x1000);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return uVar6 | uVar7;
}


