/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cfdef0; name: FUN_00cfdef0
 */


void FUN_00cfdef0(long param_1)

{
  CalendarTime *pCVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined5 uStack_44;
  undefined3 local_3f;
  undefined5 uStack_3c;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x5e0) + 0xe8);
  if (lVar4 != 0) {
    *(long *)(*(long *)(param_1 + 0x5e0) + 0xe8) = lVar4 + (lVar4 * 0x1c >> 2) * -0x6db6db6db6db6db7
    ;
  }
  pCVar1 = (CalendarTime *)(param_1 + 0x5e8);
  local_50 = 0x914f0000;
  uStack_4c = 0x4e94;
  uVar2 = nn::time::operator+(pCVar1,(TimeSpan *)&local_50);
  uStack_4c = (undefined4)uVar2;
  uStack_48 = (undefined4)((ulong)uVar2 >> 0x20);
  local_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  local_3f = 0;
  FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,&local_50);
  local_50 = 0x229e0000;
  uStack_4c = 0x9d29;
  uVar2 = nn::time::operator+(pCVar1,(TimeSpan *)&local_50);
  uStack_4c = (undefined4)uVar2;
  uStack_48 = (undefined4)((ulong)uVar2 >> 0x20);
  local_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  local_3f = 0;
  FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,&local_50);
  local_50 = 0xb3ed0000;
  uStack_4c = 0xebbd;
  uVar2 = nn::time::operator+(pCVar1,(TimeSpan *)&local_50);
  uStack_4c = (undefined4)uVar2;
  uStack_48 = (undefined4)((ulong)uVar2 >> 0x20);
  local_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  local_3f = 0;
  FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,&local_50);
  local_50 = 0x453c0000;
  uStack_4c = 0x13a52;
  uVar2 = nn::time::operator+(pCVar1,(TimeSpan *)&local_50);
  uStack_4c = (undefined4)uVar2;
  uStack_48 = (undefined4)((ulong)uVar2 >> 0x20);
  local_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  local_3f = 0;
  FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,&local_50);
  local_50 = 0xd68b0000;
  uStack_4c = 0x188e6;
  uVar2 = nn::time::operator+(pCVar1,(TimeSpan *)&local_50);
  uStack_4c = (undefined4)uVar2;
  uStack_48 = (undefined4)((ulong)uVar2 >> 0x20);
  local_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  local_3f = 0;
  FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,&local_50);
  local_50 = 0x67da0000;
  uStack_4c = 0x1d77b;
  uVar2 = nn::time::operator+(pCVar1,(TimeSpan *)&local_50);
  uStack_4c = (undefined4)uVar2;
  uStack_48 = (undefined4)((ulong)uVar2 >> 0x20);
  local_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  local_3f = 0;
  FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,&local_50);
  local_50 = 0xf9290000;
  uStack_4c = 0x2260f;
  uVar2 = nn::time::operator+(pCVar1,(TimeSpan *)&local_50);
  uStack_4c = (undefined4)uVar2;
  uStack_48 = (undefined4)((ulong)uVar2 >> 0x20);
  local_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  local_3f = 0;
  FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,&local_50);
  local_50 = 0x8a780000;
  uStack_4c = 0x274a4;
  uVar2 = nn::time::operator+(pCVar1,(TimeSpan *)&local_50);
  uStack_4c = (undefined4)uVar2;
  uStack_48 = (undefined4)((ulong)uVar2 >> 0x20);
  local_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  local_3f = 0;
  FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,&local_50);
  local_50 = 0x1bc70000;
  uStack_4c = 0x2c339;
  uVar2 = nn::time::operator+(pCVar1,(TimeSpan *)&local_50);
  uStack_4c = (undefined4)uVar2;
  uStack_48 = (undefined4)((ulong)uVar2 >> 0x20);
  local_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  local_3f = 0;
  FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,&local_50);
  local_50 = 0xad160000;
  uStack_4c = 0x311cd;
  uVar2 = nn::time::operator+(pCVar1,(TimeSpan *)&local_50);
  uStack_4c = (undefined4)uVar2;
  uStack_48 = (undefined4)((ulong)uVar2 >> 0x20);
  local_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  local_3f = 0;
  FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,&local_50);
  local_50 = 0x2cc5f8b1;
  uStack_4c = 0x970ffa26;
  uVar2 = FUN_00ffde30(param_1 + 0x100,&local_50);
  local_58 = *(long *)(param_1 + 0x5e0);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_016c2cb0(uVar2,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_016b2d70(uVar2,1);
  local_50 = 0x2cc5f8b1;
  uStack_4c = 0x970ffa26;
  uVar3 = FUN_00ffde30(param_1 + 0x100,&local_50);
  FUN_016c2c90(uVar3,*(undefined4 *)(param_1 + 0x800));
  FUN_016c2c80(uVar3,*(undefined4 *)(param_1 + 0x80c),0);
  FUN_016bef00(uVar2);
  FUN_00cfe280(param_1,*(int *)(param_1 + 0x800) + *(int *)(param_1 + 0x80c));
  return;
}


