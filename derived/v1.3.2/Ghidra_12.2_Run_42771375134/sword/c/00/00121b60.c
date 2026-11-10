/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00121b60; name: FUN_00121b60
 */


undefined1  [16] FUN_00121b60(undefined4 param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined *puVar18;
  undefined8 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_150 [8];
  ushort local_148;
  ushort local_146;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  float local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  float fStack_110;
  float local_10c;
  float fStack_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  
  FUN_00121ff0();
  iVar3 = *(int *)((long)param_2 + 0x54);
  iVar4 = (int)param_2[0xb];
  fVar27 = 0.0;
  lVar1 = param_2[1];
  lVar2 = *param_2;
  lVar14 = param_2[3];
  lVar15 = param_2[2];
  iVar16 = iVar4;
  if (iVar3 <= iVar4) {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar14 = param_2[2];
    lVar15 = param_2[3];
    iVar16 = iVar3;
    iVar3 = iVar4;
  }
  local_c0 = *(undefined4 *)(lVar14 + 0x28);
  local_bc = *(undefined4 *)(lVar14 + 0x2c);
  local_b8 = *(undefined4 *)(lVar14 + 0x30);
  local_b4 = *(undefined4 *)(lVar14 + 0x34);
  fVar6 = *(float *)(lVar14 + 0x38);
  fVar7 = *(float *)(lVar14 + 0x3c);
  fVar8 = *(float *)(lVar14 + 0x40);
  local_100 = *(undefined4 *)(lVar14 + 0xc);
  local_fc = *(undefined4 *)(lVar14 + 0x10);
  local_f8 = *(undefined4 *)(lVar14 + 0x14);
  local_f4 = *(undefined4 *)(lVar14 + 0x18);
  fVar9 = *(float *)(lVar14 + 0x1c);
  fVar10 = *(float *)(lVar14 + 0x20);
  fVar11 = *(float *)(lVar14 + 0x24);
  local_e0 = *(undefined4 *)(lVar15 + 0x28);
  local_dc = *(undefined4 *)(lVar15 + 0x2c);
  local_d8 = *(undefined4 *)(lVar15 + 0x30);
  local_d4 = *(undefined4 *)(lVar15 + 0x34);
  fVar26 = *(float *)(lVar15 + 0x38);
  fVar28 = *(float *)(lVar15 + 0x3c);
  fVar12 = *(float *)(lVar15 + 0x40);
  local_120 = *(undefined4 *)(lVar15 + 0xc);
  local_11c = *(undefined4 *)(lVar15 + 0x10);
  local_118 = *(undefined4 *)(lVar15 + 0x14);
  local_114 = *(undefined4 *)(lVar15 + 0x18);
  fVar25 = *(float *)(lVar15 + 0x1c);
  fVar23 = *(float *)(lVar15 + 0x20);
  fVar5 = *(float *)(lVar15 + 0x24);
  local_130 = 0;
  local_128 = 0.0;
  local_140 = 0;
  local_138 = 0;
  fVar20 = *(float *)(param_2[9] + 0x5c);
  *(undefined4 *)(param_3 + 0x1c20) = param_1;
  *(undefined4 *)(param_3 + 0x1c28) = 0xffffffff;
  fVar31 = *(float *)(lVar14 + 8);
  fVar32 = *(float *)(lVar15 + 8);
  fVar30 = fVar31 + fVar32;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fStack_110 = fVar25;
  local_10c = fVar23;
  fStack_108 = fVar5;
  local_f0 = fVar9;
  local_ec = fVar10;
  local_e8 = fVar11;
  local_d0 = fVar26;
  fStack_cc = fVar28;
  local_c8 = fVar12;
  local_b0 = fVar6;
  local_ac = fVar7;
  local_a8 = fVar8;
  auVar22 = FUN_002d94d0(fVar20,*(undefined4 *)((long)param_2 + 0x2c),fVar30,lVar14,lVar15,&local_c0
                         ,&local_e0,&local_100,&local_120,&local_130,&local_140,
                         (undefined4 *)(param_3 + 0x1c28));
  fVar20 = auVar22._0_4_;
  if (1.0 <= fVar20) {
    *(undefined4 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined8 *)((long)param_2 + 0x2c) = 0x7f7fffff;
  }
  else {
    uVar21 = *(undefined4 *)(param_3 + 0x1c28);
    *(undefined4 *)(param_2 + 0xc) = uVar21;
    fVar24 = -(float)local_130;
    fVar26 = (((fVar6 - fVar9) - (fVar26 - fVar25)) * fVar24 -
             ((fVar7 - fVar10) - (fVar28 - fVar23)) * local_130._4_4_) -
             ((fVar8 - fVar11) - (fVar12 - fVar5)) * local_128;
    if ((int)param_2[0xb] < *(int *)((long)param_2 + 0x54)) {
      fVar23 = local_130._4_4_;
      fVar24 = (float)local_130;
    }
    else {
      fVar23 = -local_130._4_4_;
      local_128 = -local_128;
      local_130 = CONCAT44(fVar23,fVar24);
    }
    *(undefined4 *)(param_2 + 0x10) = 1;
    if (fVar30 <= fVar26) {
      fVar28 = 0.0;
      auVar17 = auVar22;
      if (fVar20 <= 0.0) {
        fVar27 = 1.0;
        if (lVar1 != 0) {
          fVar27 = *(float *)(*(long *)(lVar1 + 0x20) + 0x24);
        }
        fVar28 = 1.0;
        if (lVar2 != 0) {
          fVar28 = *(float *)(*(long *)(lVar2 + 0x20) + 0x24);
        }
        if (fVar28 <= fVar27) {
          fVar27 = fVar28;
        }
        fVar28 = -fVar20;
        auVar17 = ZEXT816(0);
        if (fVar27 == 1.0) {
          fVar25 = 1.0;
          fVar27 = 1.0;
          if (lVar1 != 0) {
            fVar27 = *(float *)(*(long *)(lVar1 + 0x28) + 0x3c);
          }
          if (lVar2 != 0) {
            fVar25 = *(float *)(*(long *)(lVar2 + 0x28) + 0x3c);
          }
          if (fVar25 <= fVar27) {
            fVar27 = fVar25;
          }
          if (lVar2 == 0) {
            fVar32 = DAT_01d4c18c;
          }
          if (fVar32 <= fVar31) {
            fVar31 = fVar32;
          }
          fVar27 = (fVar31 * fVar27) / fVar26;
          auVar17 = ZEXT816(0);
        }
        else {
          fVar27 = 0.0;
        }
      }
      uVar29 = auVar17._8_8_;
      *(float *)(param_2 + 8) = fVar28;
      *(int *)((long)param_2 + 0x2c) = auVar17._0_4_;
      *(float *)(param_2 + 6) = fVar27;
      *(undefined4 *)((long)param_2 + 0x34) = (undefined4)local_140;
      *(undefined4 *)(param_2 + 7) = local_140._4_4_;
      *(float *)(param_2 + 4) = fVar24;
      *(float *)((long)param_2 + 0x24) = fVar23;
      *(undefined4 *)((long)param_2 + 0x3c) = local_138;
      *(float *)(param_2 + 5) = local_128;
      *(undefined4 *)(param_3 + 0x1230) = 1;
      *(float *)(param_3 + 0x230) = fVar24;
      *(float *)(param_3 + 0x234) = fVar23;
      *(float *)(param_3 + 0x238) = local_128;
      *(undefined4 *)(param_3 + 0x240) = *(undefined4 *)((long)param_2 + 0x34);
      *(int *)(param_3 + 0x244) = (int)param_2[7];
      uVar13 = *(undefined4 *)((long)param_2 + 0x3c);
      if (1 < iVar3 - 5U) {
        uVar21 = 0xffffffff;
      }
      *(undefined4 *)(param_3 + 0x23c) = 0;
      *(undefined4 *)(param_3 + 0x264) = uVar21;
      *(undefined4 *)(param_3 + 0x248) = uVar13;
      puVar18 = PTR_PTR_02710c58;
      (**(code **)(PTR_PTR_02710c58 + (long)iVar16 * 8))
                (*(undefined8 *)(lVar14 + 0x60),0,param_3,&local_148);
      (**(code **)(puVar18 + (long)iVar3 * 8))(*(undefined8 *)(lVar15 + 0x60),1,param_3,&local_148);
      lVar1 = **(long **)(param_3 + 0x1c58) + (ulong)local_148 * 0x20;
      lVar2 = **(long **)(param_3 + 0x1c58) + (ulong)local_146 * 0x20;
      uVar21 = FUN_00128a30(lVar1,lVar2);
      FUN_00128a20(0x3f800000,0x3f800000,auStack_150);
      uVar19 = FUN_00128ab0(auStack_150,lVar1,lVar2);
      auVar22._8_8_ = uVar29;
      auVar22._0_8_ = auVar17._0_8_;
      *(ushort *)((long)param_2 + 100) = local_148;
      *(ushort *)((long)param_2 + 0x66) = local_146;
      *(int *)(param_2 + 0xd) = (int)((ulong)uVar19 >> 0x20);
      *(int *)((long)param_2 + 0x6c) = (int)uVar19;
      *(undefined4 *)(param_2 + 0xe) = uVar21;
    }
    else {
      *(undefined4 *)((long)param_2 + 0x2c) = 0x7f7fffff;
      auVar22 = ZEXT416((uint)DAT_01d4c18c);
    }
  }
  return auVar22;
}


