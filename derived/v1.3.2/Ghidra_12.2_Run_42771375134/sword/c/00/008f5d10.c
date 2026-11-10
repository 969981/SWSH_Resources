/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f5d10; name: FUN_008f5d10
 */


void FUN_008f5d10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined4 local_b8;
  undefined1 local_b4;
  uint local_b0;
  byte local_ac;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_138 = 0;
  local_130 = 0;
  local_148 = 0;
  local_140 = 0;
  local_180 = 0;
  local_158 = 0;
  local_150 = 0;
  local_168 = 0;
  local_160 = 0;
  local_178 = 0;
  local_170 = 0;
  local_c8 = *(undefined8 *)(param_1 + 0x440);
  local_c0 = *(undefined4 *)(param_4 + 4);
  local_bb = *(undefined1 *)(param_4 + 0x3b9);
  local_bc = *(undefined1 *)(param_4 + 0x3b8);
  local_b8 = 0;
  local_b4 = *(char *)(*(long *)(param_1 + 0x88) + 0x3bb) == '\x01';
  local_b0 = (uint)*(byte *)(param_1 + 0x174);
  local_128 = param_2;
  uStack_120 = param_3;
  if (*(long *)(param_1 + 0x750) == 0) {
    local_ac = 1;
  }
  else {
    local_ac = FUN_009b1990();
  }
  local_ac = local_ac & 1;
  local_a8 = *(undefined8 *)(param_1 + 0xb8);
  local_90 = *(undefined8 *)(param_1 + 0x5f0);
  local_98 = *(undefined8 *)(param_1 + 0x610);
  lStack_a0 = param_1;
  local_88 = FUN_009e05d0();
  local_118 = FUN_009e48d0(*(undefined8 *)(param_1 + 0x58),0);
  local_f0 = FUN_009e4910(*(undefined8 *)(param_1 + 0x58),0);
  local_80 = FUN_009e05e0(0);
  local_58 = FUN_009e0600(0);
  local_110 = FUN_009e48d0(*(undefined8 *)(param_1 + 0x58),1);
  local_e8 = FUN_009e4910(*(undefined8 *)(param_1 + 0x58),1);
  local_78 = FUN_009e05e0(1);
  local_50 = FUN_009e0600(1);
  local_108 = FUN_009e48d0(*(undefined8 *)(param_1 + 0x58),2);
  local_e0 = FUN_009e4910(*(undefined8 *)(param_1 + 0x58),2);
  local_70 = FUN_009e05e0(2);
  local_48 = FUN_009e0600(2);
  local_100 = FUN_009e48d0(*(undefined8 *)(param_1 + 0x58),3);
  local_d8 = FUN_009e4910(*(undefined8 *)(param_1 + 0x58),3);
  local_68 = FUN_009e05e0(3);
  local_40 = FUN_009e0600(3);
  local_f8 = FUN_009e48d0(*(undefined8 *)(param_1 + 0x58),4);
  local_d0 = FUN_009e4910(*(undefined8 *)(param_1 + 0x58),4);
  local_60 = FUN_009e05e0(4);
  local_38 = FUN_009e0600(4);
  FUN_009df2b0(&local_128,&local_180);
  lVar1 = local_178;
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x198);
  *(long *)(param_1 + 0x198) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar1 = local_150;
  if (local_150 != 0) {
    (**(code **)(*(long *)(local_150 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x1c0);
  *(long *)(param_1 + 0x1c0) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar1 = local_170;
  if (local_170 != 0) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x1a0);
  *(long *)(param_1 + 0x1a0) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar1 = local_148;
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x1c8);
  *(long *)(param_1 + 0x1c8) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar1 = local_168;
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x1a8);
  *(long *)(param_1 + 0x1a8) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar1 = local_140;
  if (local_140 != 0) {
    (**(code **)(*(long *)(local_140 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x1d0);
  *(long *)(param_1 + 0x1d0) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar1 = local_160;
  if (local_160 != 0) {
    (**(code **)(*(long *)(local_160 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x1b0);
  *(long *)(param_1 + 0x1b0) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar1 = local_138;
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x1d8);
  *(long *)(param_1 + 0x1d8) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar1 = local_158;
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x1b8);
  *(long *)(param_1 + 0x1b8) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar1 = local_130;
  if (local_130 != 0) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x1e0);
  *(long *)(param_1 + 0x1e0) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (((*(char *)(*(long *)(param_1 + 0x88) + 0x3bb) == '\x01') || (*(long *)(param_1 + 0x750) == 0)
      ) || (uVar3 = FUN_009b1990(), lVar1 = local_180, (uVar3 & 1) != 0)) {
    lVar1 = local_180;
    if (local_180 != 0) {
      (**(code **)(*(long *)(local_180 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(param_1 + 0x188);
    *(long *)(param_1 + 0x188) = lVar1;
  }
  else {
    if (local_180 != 0) {
      (**(code **)(*(long *)(local_180 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(param_1 + 400);
    *(long *)(param_1 + 400) = lVar1;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (local_130 != 0) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
    local_130 = 0;
  }
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
    local_138 = 0;
  }
  if (local_140 != 0) {
    (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    local_140 = 0;
  }
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    local_148 = 0;
  }
  if (local_150 != 0) {
    (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
    local_150 = 0;
  }
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
    local_158 = 0;
  }
  if (local_160 != 0) {
    (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
    local_160 = 0;
  }
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
    local_168 = 0;
  }
  if (local_170 != 0) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
    local_170 = 0;
  }
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    local_178 = 0;
  }
  if (local_180 != 0) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
  }
  return;
}


