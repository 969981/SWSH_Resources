/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcd150; name: FUN_00dcd150
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00dcd150(long param_1)

{
  bool bVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x340) == 0) {
    return;
  }
  FUN_00dcfd20(&local_50);
  pcVar7 = strstr(local_48,"/a_t0101_i0101/");
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (pcVar7 == (char *)0x0) {
    return;
  }
  local_28 = 0;
  local_58 = 0;
  local_5c = 0x20;
  uVar5 = nn::hid::GetNpadStyleSet(&local_5c);
  if ((uVar5 >> 1 & 1) != 0) {
    nn::hid::GetNpadControllerColor
              ((NpadControllerColor *)&local_28,(NpadControllerColor *)&local_58,&local_5c);
  }
  local_5c = 0;
  uVar5 = nn::hid::GetNpadStyleSet(&local_5c);
  if (((uVar5 >> 2 & 1) != 0) &&
     (iVar6 = nn::hid::GetNpadControllerColor
                        ((NpadControllerColor *)&local_50,(NpadControllerColor *)&local_a0,&local_5c
                        ), iVar6 == 0)) {
    if (local_28._3_1_ == '\0') {
      local_28 = local_50;
    }
    if (local_58._3_1_ == '\0') {
      local_58 = local_a0;
    }
  }
  uVar4 = local_28;
  if ((uVar5 >> 3 & 1) != 0) {
    nn::hid::GetNpadControllerColor((NpadControllerColor *)&local_28,&local_5c);
    uVar4 = local_28;
  }
  if ((uVar5 >> 4 & 1) == 0) {
    local_28._3_1_ = (char)((ulong)uVar4 >> 0x18);
    fVar2 = DAT_01d4c154;
    uVar3 = local_58;
  }
  else {
    local_28 = uVar4;
    nn::hid::GetNpadControllerColor((NpadControllerColor *)&local_58,&local_5c);
    fVar2 = DAT_01d4c154;
    uVar3 = local_58;
    uVar4 = local_28;
  }
  local_58._3_1_ = (char)((ulong)uVar3 >> 0x18);
  if ((local_28._3_1_ == '\0') ||
     (local_28._7_1_ = (char)((ulong)uVar4 >> 0x38), bVar1 = local_28._7_1_ == '\0',
     local_28 = uVar4, bVar1)) {
    local_28 = 0xff0f0f0fff828282;
  }
  if ((local_58._3_1_ == '\0') ||
     (local_58._7_1_ = (char)((ulong)uVar3 >> 0x38), bVar1 = local_58._7_1_ == '\0',
     local_58 = uVar3, bVar1)) {
    local_58 = 0xff0f0f0fff828282;
  }
  fVar8 = (float)NEON_ucvtf((uint)(byte)local_28._0_1_);
  local_50 = 0xd1db30a37f00ddd4;
  local_48 = "a_t0101_i0101_gamemachine02_bld";
  local_40 = 0x1f;
  local_38 = 0;
  DAT_01d4c154 = fVar2;
  uVar9 = FUN_00795bb0(fVar8 / fVar2);
  fVar8 = (float)NEON_ucvtf((uint)local_28._1_1_);
  uVar10 = FUN_00795bb0(fVar8 / fVar2);
  fVar8 = (float)NEON_ucvtf((uint)local_28._2_1_);
  uVar5 = FUN_00795bb0(fVar8 / fVar2);
  local_70 = CONCAT44(uVar10,uVar9);
  uStack_68 = (ulong)uVar5;
  fVar8 = (float)NEON_ucvtf((uint)local_28._4_1_);
  uVar9 = FUN_00795bb0(fVar8 / fVar2);
  fVar8 = (float)NEON_ucvtf((uint)local_28._5_1_);
  uVar10 = FUN_00795bb0(fVar8 / fVar2);
  fVar8 = (float)NEON_ucvtf((uint)local_28._6_1_);
  uVar5 = FUN_00795bb0(fVar8 / fVar2);
  local_80 = CONCAT44(uVar10,uVar9);
  uStack_78 = (ulong)uVar5;
  FUN_00dcfe90(*(undefined8 *)(param_1 + 0x340),&local_50,&local_70,&local_80);
  fVar8 = (float)NEON_ucvtf((uint)(byte)local_58._0_1_);
  local_a0 = 0x98518ad0ce790c1f;
  pcStack_98 = "a_t0101_i0101_gamemachine02_bld1";
  local_90 = 0x20;
  local_88 = 0;
  uVar9 = FUN_00795bb0(fVar8 / fVar2);
  fVar8 = (float)NEON_ucvtf((uint)local_58._1_1_);
  uVar10 = FUN_00795bb0(fVar8 / fVar2);
  fVar8 = (float)NEON_ucvtf((uint)local_58._2_1_);
  uVar5 = FUN_00795bb0(fVar8 / fVar2);
  local_b0 = CONCAT44(uVar10,uVar9);
  uStack_a8 = (ulong)uVar5;
  fVar8 = (float)NEON_ucvtf((uint)local_58._4_1_);
  uVar9 = FUN_00795bb0(fVar8 / fVar2);
  fVar8 = (float)NEON_ucvtf((uint)local_58._5_1_);
  uVar10 = FUN_00795bb0(fVar8 / fVar2);
  fVar8 = (float)NEON_ucvtf((uint)local_58._6_1_);
  uVar5 = FUN_00795bb0(fVar8 / fVar2);
  local_c0 = CONCAT44(uVar10,uVar9);
  uStack_b8 = (ulong)uVar5;
  FUN_00dcfe90(*(undefined8 *)(param_1 + 0x340),&local_a0,&local_b0,&local_c0);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


