/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0140e5c0; name: FUN_0140e5c0
 */


void FUN_0140e5c0(long param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  local_48 = 0;
  local_140 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  if (param_2 == 0) {
    param_3 = param_3 + 1;
  }
  else {
    iVar3 = FUN_00888c50(param_2,0x15);
    iVar1 = 0;
    if (param_2 != 0x4f0) {
      iVar1 = param_3;
    }
    param_3 = iVar1 + iVar3 * 6 + 7;
  }
  uVar5 = 0xcbf29ce484222645;
  snprintf((char *)&local_140,0x100,"msg_ui_pokecamp_cookname_01_%02d",param_3);
  if ((byte)local_140 != 0) {
    pbVar4 = (byte *)((ulong)&local_140 | 1);
    bVar2 = (byte)local_140;
    do {
      uVar5 = (uVar5 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x610) = uVar5;
  FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),3);
  lVar6 = *(long *)(local_38 + 0x60);
  if (lVar6 == 0) {
    FUN_0077eb10(0,param_1 + 0x610,*(undefined8 *)(param_1 + 0x618));
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0077eb10(lVar6,param_1 + 0x610,*(undefined8 *)(param_1 + 0x618));
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


