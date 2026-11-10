/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d99390; name: FUN_00d99390
 */


void FUN_00d99390(long param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 local_170 [2];
  long local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  char local_150;
  undefined6 uStack_14f;
  char cStack_149;
  char acStack_148 [7];
  undefined8 local_141;
  undefined8 local_139;
  undefined8 local_131;
  undefined8 local_129;
  undefined8 local_121;
  undefined8 local_119;
  undefined8 local_111;
  undefined8 local_109;
  undefined8 local_101;
  undefined5 uStack_f9;
  undefined3 local_f4;
  undefined5 uStack_f1;
  undefined4 local_ec;
  undefined8 local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_68;
  
  lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if (param_2 == 2) {
    uVar12 = CONCAT17(s_L_navi_flag_02_01d15055[7],s_L_navi_flag_02_01d15055._0_7_);
    uVar10 = 2;
    local_ec = 0x40000000;
    acStack_148 = (char  [7])s_L_navi_flag_02_01d15055._8_7_;
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 3;
      }
      local_ec = 0;
      acStack_148[0] = s_L_navi_flag_00_01d30947[8];
      acStack_148[1] = s_L_navi_flag_00_01d30947[9];
      acStack_148[2] = s_L_navi_flag_00_01d30947[10];
      acStack_148[3] = s_L_navi_flag_00_01d30947[0xb];
      acStack_148[4] = s_L_navi_flag_00_01d30947[0xc];
      acStack_148[5] = s_L_navi_flag_00_01d30947[0xd];
      acStack_148[6] = s_L_navi_flag_00_01d30947[0xe];
      local_150 = s_L_navi_flag_00_01d30947[0];
      uStack_14f = s_L_navi_flag_00_01d30947._1_6_;
      cStack_149 = s_L_navi_flag_00_01d30947[7];
      goto LAB_00d99580;
    }
    uVar12 = CONCAT17(s_L_navi_flag_01_01d0728c[7],s_L_navi_flag_01_01d0728c._0_7_);
    uVar10 = 1;
    local_ec = 0x3f800000;
    acStack_148 = (char  [7])s_L_navi_flag_01_01d0728c._8_7_;
  }
  local_150 = (char)uVar12;
  uStack_14f = (undefined6)((ulong)uVar12 >> 8);
  cStack_149 = (char)((ulong)uVar12 >> 0x38);
LAB_00d99580:
  local_68 = 0xc2728d771b2df8b8;
  local_e8 = 0x6d9df8717a38076a;
  uStack_f1 = 0;
  local_f4 = 0;
  uStack_f9 = 0;
  local_101 = 0;
  local_109 = 0;
  local_111 = 0;
  local_119 = 0;
  local_121 = 0;
  local_129 = 0;
  local_131 = 0;
  local_139 = 0;
  local_141 = 0;
  uVar14 = 0xcbf29ce484222645;
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 400),&local_68);
  uVar12 = *(undefined8 *)(param_1 + 400);
  local_80 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  snprintf((char *)&local_e0,100,"pane_%s",&local_150);
  uVar6 = local_e0 & 0xff;
  uVar8 = 0xcbf29ce484222645;
  if ((byte)local_e0 != '\0') {
    uVar8 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_e0 | 1);
    do {
      uVar8 = (uVar8 ^ uVar6) * 0x100000001b3;
      bVar1 = *pbVar7;
      uVar6 = (ulong)bVar1;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
  }
  local_e0 = uVar8;
  lVar5 = FUN_0167b6b0(uVar12,&local_e0);
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  puVar3 = PTR_DAT_0271e680;
  local_170[0] = 0xffffffff;
  local_168 = *(long *)PTR_DAT_0271e680;
  uStack_160 = 0xcbf29ce484222645;
  local_158 = 0xffffffffffffffff;
  uVar6 = FUN_01610640(*(undefined8 *)(param_1 + 0x4c0),uVar10,local_170);
  if ((uVar6 & 1) != 0) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x4c8) + 0x60);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    lVar13 = *(long *)(*(long *)(param_1 + 400) + 0x2e8);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    FUN_0077eb10(lVar11,&uStack_160,lVar13);
    FUN_0167cce0(*(undefined8 *)(param_1 + 400),&local_e8,10);
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
    if (local_168 != *(long *)puVar3) {
      uVar12 = *(undefined8 *)(param_1 + 400);
      local_e0 = FUN_00d98f60();
      lVar4 = FUN_0167b6b0(uVar12,&local_e0);
      bVar1 = *(byte *)(lVar5 + 0x58);
      *(byte *)(lVar5 + 0x58) = bVar1 | 1;
      uVar12 = *(undefined8 *)(lVar4 + 0x30);
      *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(lVar4 + 0x38);
      *(undefined8 *)(lVar5 + 0x30) = uVar12;
      *(byte *)(lVar5 + 0x58) = bVar1 | 0x11;
      *(long *)(param_1 + 0x4d0) = local_168;
    }
    uVar2 = local_ec;
    local_e0 = 0x13e5807d960cc345;
    FUN_0167ba30(*(undefined8 *)(param_1 + 400),&local_e0);
    FUN_0167bdb0(uVar2,*(undefined8 *)(param_1 + 400),&local_e0);
    local_80 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    if (local_150 == '\0') {
      snprintf((char *)&local_e0,100,"anime_%s","ptn_flag");
      uVar2 = local_ec;
    }
    else {
      snprintf((char *)&local_e0,100,"anime_%s_%s",&local_150,"ptn_flag");
      uVar2 = local_ec;
    }
    if ((byte)local_e0 != 0) {
      pbVar7 = (byte *)((ulong)&local_e0 | 1);
      do {
        uVar14 = (uVar14 ^ (byte)local_e0) * 0x100000001b3;
        local_e0._0_1_ = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while ((byte)local_e0 != 0);
    }
    local_ec = uVar2;
    local_e0 = uVar14;
    FUN_0167ba30(*(undefined8 *)(param_1 + 400),&local_e0);
    FUN_0167bdb0(uVar2,*(undefined8 *)(param_1 + 400),&local_e0);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


