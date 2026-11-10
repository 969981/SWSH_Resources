/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cfd2e0; name: FUN_00cfd2e0
 */


void FUN_00cfd2e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long local_48 [2];
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  undefined8 local_30;
  undefined1 local_28;
  
  lVar2 = *(long *)(param_1 + 0x5e0);
  lVar3 = *(long *)(lVar2 + 0xe8);
  if (lVar3 != 0) {
    *(long *)(lVar2 + 0xe8) = lVar3 + (lVar3 * 0x1c >> 2) * -0x6db6db6db6db6db7;
    lVar2 = *(long *)(param_1 + 0x5e0);
  }
  local_48[1] = 4;
  local_36 = 0;
  local_38 = 0;
  local_34 = 5;
  local_28 = 0;
  local_30 = 0;
  FUN_00d00e40(lVar2 + 0xa0,local_48 + 1);
  local_36 = 0;
  local_38 = 0;
  local_34 = 10;
  local_48[1] = 4;
  local_28 = 0;
  local_30 = 0;
  FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,local_48 + 1);
  local_36 = 0;
  local_38 = 0;
  local_34 = 0xf;
  local_48[1] = 4;
  local_28 = 0;
  local_30 = 0;
  FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,local_48 + 1);
  local_36 = 0;
  local_38 = 0;
  local_34 = 0x14;
  local_48[1] = 4;
  local_28 = 0;
  local_30 = 0;
  FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,local_48 + 1);
  local_36 = 0;
  local_38 = 0;
  local_34 = 0x19;
  local_48[1] = 4;
  local_28 = 0;
  local_30 = 0;
  FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,local_48 + 1);
  local_48[1] = 0x970ffa262cc5f8b1;
  uVar1 = FUN_00ffde30(param_1 + 0x100,local_48 + 1);
  local_48[0] = *(long *)(param_1 + 0x5e0);
  if (local_48[0] != 0) {
    (**(code **)(*(long *)(local_48[0] + 0x48) + 0x10))();
  }
  FUN_016c2cb0(uVar1,local_48);
  if (local_48[0] != 0) {
    (**(code **)(*(long *)(local_48[0] + 0x48) + 0x18))();
    local_48[0] = 0;
  }
  FUN_016b2d70(uVar1,1);
  FUN_016c2c80(uVar1,0,0);
  FUN_016c2c90(uVar1,0);
  FUN_016bef00(uVar1);
  return;
}


