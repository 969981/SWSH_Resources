/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a3af50; name: FUN_00a3af50
 */


void FUN_00a3af50(long param_1,uint param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  uint local_48;
  undefined8 local_44;
  uint local_3c;
  byte local_38 [8];
  
  local_98 = 0;
  uStack_90 = 0x100000002;
  local_88 = 0x200000000;
  local_80 = 2;
  local_78 = 0x300000002;
  uStack_70 = 0x200000000;
  local_68 = 4;
  local_60 = 0x500000002;
  uStack_58 = 0x200000000;
  pbVar1 = local_38;
  if (param_3 != (byte *)0x0) {
    pbVar1 = param_3;
  }
  local_38[2] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_50 = 0x200000006;
  local_48 = *pbVar1 ^ 1;
  local_44 = 0x200000007;
  local_3c = (uint)pbVar1[1];
  bVar7 = pbVar1[2];
  FUN_00ffd510((float)(param_2 & 1),param_1 + 0x100,&DAT_021548c8);
  uVar6 = NEON_ucvtf((uint)bVar7);
  FUN_00ffd510(uVar6,param_1 + 0x100,param_1 + 0x5e0);
  if ((param_2 & 1) == 0) {
    FUN_00a3b1d0(param_1,0,0,0);
    FUN_00a3b1d0(param_1,uStack_90._4_4_,local_88 & 0xffffffff,0);
    FUN_00a3b1d0(param_1,local_80 & 0xffffffff,local_80._4_4_,0);
    FUN_00a3b1d0(param_1,local_78._4_4_,uStack_70 & 0xffffffff,0);
    FUN_00a3b1d0(param_1,local_68 & 0xffffffff,local_68._4_4_,0);
    FUN_00a3b1d0(param_1,local_60._4_4_,uStack_58 & 0xffffffff,0);
    FUN_00a3b1d0(param_1,local_50 & 0xffffffff,local_50._4_4_,0);
    uVar2 = local_44._4_4_;
  }
  else {
    FUN_00a3b1d0(param_1,0,2,0);
    FUN_00a3b1d0(param_1,uStack_90._4_4_,local_88._4_4_,0);
    FUN_00a3b1d0(param_1,local_80 & 0xffffffff,local_78 & 0xffffffff,0);
    FUN_00a3b1d0(param_1,local_78._4_4_,uStack_70._4_4_,0);
    FUN_00a3b1d0(param_1,local_68 & 0xffffffff,local_60 & 0xffffffff,0);
    FUN_00a3b1d0(param_1,local_60._4_4_,uStack_58._4_4_,0);
    FUN_00a3b1d0(param_1,local_50 & 0xffffffff,local_48,0);
    uVar2 = local_3c;
  }
  FUN_00a3b1d0(param_1,(undefined4)local_44,uVar2,0);
  lVar5 = *(long *)(param_1 + 0x618);
  *(undefined8 *)(lVar5 + 0xf8) = 0x2000000000000;
  thunk_FUN_00a1fb60(&local_b8,0xb);
  lVar3 = local_a0;
  *(undefined8 *)(lVar5 + 0x120) = local_b8;
  *(undefined8 *)(lVar5 + 0x128) = local_b0;
  *(undefined8 *)(lVar5 + 0x130) = local_a8;
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar5 + 0x138);
  *(long *)(lVar5 + 0x138) = lVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
  }
  return;
}


