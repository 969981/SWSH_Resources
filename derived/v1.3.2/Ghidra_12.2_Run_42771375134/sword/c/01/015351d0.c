/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015351d0; name: FUN_015351d0
 */


void FUN_015351d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  int local_40;
  ushort local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined8 local_30;
  int local_28;
  
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = -1;
  uVar2 = FUN_014ad910(&local_40);
  if (param_3 == 1) {
    local_30._4_4_ = 0;
  }
  else {
    if (param_3 == 2) {
      uVar3 = FUN_01534550(uVar2,local_40);
      param_3 = 2;
      if ((uVar3 & 1) == 0) {
        param_3 = 0;
      }
    }
    local_30._4_4_ = param_3;
  }
  if ((local_34._1_1_ != '\0') || (uVar3 = FUN_01534d30(param_1,&local_40), (uVar3 & 1) != 0)) {
    return;
  }
  uVar4 = (uint)local_3c * 7 + local_28;
  if (local_40 != 0x365) {
    uVar4 = (uint)local_3c;
  }
  uVar1 = 0;
  if (uVar4 < 0x3f) {
    uVar1 = uVar4;
  }
  FUN_01534180(param_1,local_40,local_38,(undefined1)local_34,uVar1,local_30._4_4_);
  return;
}


