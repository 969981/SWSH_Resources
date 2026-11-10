/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108b1e0; name: FUN_0108b1e0
 */


void FUN_0108b1e0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long local_68;
  long local_60;
  long local_58 [4];
  long local_38;
  long local_28;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0);
  FUN_006cf0a0(local_58 + 1,&DAT_0266f170);
  FUN_00ff8620(&local_28,uVar1,local_58 + 1,param_2);
  lVar2 = *(long *)(local_28 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  param_1 = param_1 + 0x100;
  local_58[1] = 0xfbad3fd46f1f1b35;
  local_58[0] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_28 = -0x18177ef4ec38704c;
  FUN_008c4e70(param_1,local_58 + 1,local_58,&local_28,param_2);
  if (local_58[0] != 0) {
    (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
    local_58[0] = 0;
  }
  local_58[1] = 0x4967f5cdf9f8ab7d;
  local_60 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_28 = -0x180d8cf4ec303391;
  FUN_008c4e70(param_1,local_58 + 1,&local_60,&local_28,param_2);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  local_58[1] = 0xfbad3ed46f1f1982;
  local_68 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_28 = -0x180d8df4ec303544;
  FUN_008c4e70(param_1,local_58 + 1,&local_68,&local_28,param_2);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


