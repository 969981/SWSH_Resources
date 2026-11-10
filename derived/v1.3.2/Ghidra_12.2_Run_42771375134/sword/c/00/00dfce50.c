/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfce50; name: FUN_00dfce50
 */


/* WARNING: Removing unreachable block (ram,0x00dfd104) */

void FUN_00dfce50(long param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  undefined1 uVar11;
  undefined1 extraout_b0;
  undefined1 uVar12;
  undefined1 extraout_var;
  undefined1 uVar13;
  undefined1 extraout_var_00;
  undefined1 uVar14;
  undefined1 extraout_var_01;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [12];
  float fVar33;
  undefined1 auVar30 [16];
  float fVar34;
  float fVar36;
  undefined1 auVar31 [16];
  float fVar35;
  float fVar37;
  undefined1 auVar32 [16];
  int iVar38;
  int iVar42;
  int iVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  int iVar52;
  int iVar56;
  int iVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  int iVar58;
  float fStack_12c;
  float fStack_124;
  undefined *local_120 [2];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  long local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined5 uStack_68;
  undefined3 local_63;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  long local_48;
  long local_38;
  
  FUN_00a658b0(&local_48,param_1 + 0x50);
  if (local_48 == 0) {
    return;
  }
  if (*(int *)(*(long *)(local_48 + 0x4c0) + 0x54) == 3) goto LAB_00dfd164;
  memcpy((void *)((ulong)local_120 | 8),(void *)(param_1 + 0xda8),0x88);
  puVar7 = PTR_DAT_0271ee48;
  local_120[0] = PTR_DAT_0271ee48 + 0x10;
  local_90 = *(long *)(param_1 + 0xe30);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
  }
  local_80 = *(undefined8 *)(param_1 + 0xe40);
  local_78 = *(undefined8 *)(param_1 + 0xe48);
  uStack_60 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xe5d) >> 0x18);
  uStack_5c = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe5d) >> 0x38);
  uStack_68 = (undefined5)*(undefined8 *)(param_1 + 0xe58);
  local_63 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0xe58) >> 0x28);
  uStack_70 = *(undefined8 *)(param_1 + 0xe50);
  lVar9 = *param_2;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if (local_90 != 0) {
    plVar8 = (long *)(local_90 + 0x48);
    local_90 = lVar9;
    (**(code **)(*plVar8 + 0x18))();
    lVar9 = local_90;
  }
  local_90 = lVar9;
  local_108 = *(undefined8 *)(local_48 + 0x608);
  local_f0 = *(undefined8 *)(local_48 + 0x620);
  local_f8 = *(undefined8 *)(local_48 + 0x618);
  uStack_e8 = *(undefined8 *)(local_48 + 0x628);
  local_e0 = *(undefined4 *)(local_48 + 0x630);
  local_110 = *(undefined8 *)(local_48 + 0x600);
  local_100 = *(undefined8 *)(local_48 + 0x610);
  uStack_5c = 1;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  if ((*(long *)(local_48 + 0x3a8) != 0) && (*(int *)(*(long *)(local_48 + 0x3a8) + 0x54) != 0)) {
    FUN_00deff50(&local_38,local_48 + 0x3a8);
    uVar6 = *(undefined8 *)(local_38 + 0xb8);
    uVar19 = (undefined1)uVar6;
    uVar20 = (undefined1)((ulong)uVar6 >> 8);
    uVar21 = (undefined1)((ulong)uVar6 >> 0x10);
    uVar22 = (undefined1)((ulong)uVar6 >> 0x18);
    uVar23 = (undefined1)((ulong)uVar6 >> 0x20);
    uVar24 = (undefined1)((ulong)uVar6 >> 0x28);
    uVar25 = (undefined1)((ulong)uVar6 >> 0x30);
    uVar26 = (undefined1)((ulong)uVar6 >> 0x38);
    uVar6 = *(undefined8 *)(local_38 + 0xb0);
    uVar11 = (undefined1)uVar6;
    uVar12 = (undefined1)((ulong)uVar6 >> 8);
    uVar13 = (undefined1)((ulong)uVar6 >> 0x10);
    uVar14 = (undefined1)((ulong)uVar6 >> 0x18);
    uVar15 = (undefined1)((ulong)uVar6 >> 0x20);
    uVar16 = (undefined1)((ulong)uVar6 >> 0x28);
    uVar17 = (undefined1)((ulong)uVar6 >> 0x30);
    uVar18 = (undefined1)((ulong)uVar6 >> 0x38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  fVar45 = (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
  fVar10 = (float)CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11)));
  FUN_00deff50(&local_38,param_2);
  auVar40 = *(undefined1 (*) [16])(local_38 + 0xb0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  fStack_12c = (float)(CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,fVar10)))) >>
                      0x20);
  fStack_124 = (float)(CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,fVar45)))) >>
                      0x20);
  fVar28 = auVar40._0_4_;
  fVar4 = fStack_12c - auVar40._4_4_;
  fVar35 = auVar40._8_4_;
  fVar37 = auVar40._12_4_;
  fVar3 = (fVar10 - fVar28) * (fVar10 - fVar28);
  fVar4 = fVar4 * fVar4;
  uVar11 = (undefined1)((uint)fVar4 >> 8);
  uVar12 = (undefined1)((uint)fVar4 >> 0x10);
  uVar13 = (undefined1)((uint)fVar4 >> 0x18);
  fVar5 = (fVar45 - fVar35) * (fVar45 - fVar35);
  uVar14 = (undefined1)((uint)fVar5 >> 8);
  uVar15 = (undefined1)((uint)fVar5 >> 0x10);
  uVar16 = (undefined1)((uint)fVar5 >> 0x18);
  fVar27 = (fStack_124 - fVar37) * (fStack_124 - fVar37);
  uVar17 = (undefined1)((uint)fVar27 >> 8);
  uVar18 = (undefined1)((uint)fVar27 >> 0x10);
  uVar19 = (undefined1)((uint)fVar27 >> 0x18);
  auVar30[4] = SUB41(fVar4,0);
  auVar30._0_4_ = fVar3;
  auVar30[5] = uVar11;
  auVar30[6] = uVar12;
  auVar30[7] = uVar13;
  auVar30[8] = SUB41(fVar5,0);
  auVar30[9] = uVar14;
  auVar30[10] = uVar15;
  auVar30[0xb] = uVar16;
  auVar30[0xc] = SUB41(fVar27,0);
  auVar30[0xd] = uVar17;
  auVar30[0xe] = uVar18;
  auVar30[0xf] = uVar19;
  auVar46[4] = SUB41(fVar4,0);
  auVar46._0_4_ = fVar3;
  auVar46[5] = uVar11;
  auVar46[6] = uVar12;
  auVar46[7] = uVar13;
  auVar46[8] = SUB41(fVar5,0);
  auVar46[9] = uVar14;
  auVar46[10] = uVar15;
  auVar46[0xb] = uVar16;
  auVar46[0xc] = SUB41(fVar27,0);
  auVar46[0xd] = uVar17;
  auVar46[0xe] = uVar18;
  auVar46[0xf] = uVar19;
  auVar30 = NEON_ext(auVar30,auVar46,8,1);
  if (*(float *)(param_1 + 0xe70) * *(float *)(param_1 + 0xe70) <=
      auVar30._0_4_ + fVar3 + auVar30._4_4_ + fVar4) {
LAB_00dfd120:
    uStack_70 = CONCAT44(*(undefined4 *)(param_1 + 0xe78),(undefined4)uStack_70);
  }
  else {
    fVar3 = fVar10 - *(float *)(local_48 + 0xb0);
    fStack_12c = fStack_12c - *(float *)(local_48 + 0xb4);
    fVar4 = fVar45 - *(float *)(local_48 + 0xb8);
    fVar5 = fStack_124 - *(float *)(local_48 + 0xbc);
    fVar27 = fVar28 - *(float *)(local_48 + 0xb0);
    fVar33 = auVar40._4_4_ - *(float *)(local_48 + 0xb4);
    fVar34 = fVar35 - *(float *)(local_48 + 0xb8);
    fVar36 = fVar37 - *(float *)(local_48 + 0xbc);
    auVar40._0_4_ = fVar27 * fVar27;
    auVar40._4_4_ = fVar33 * fVar33;
    auVar40._8_4_ = fVar34 * fVar34;
    auVar40._12_4_ = fVar36 * fVar36;
    auVar30 = NEON_ext(auVar40,auVar40,8,1);
    auVar39._0_4_ = fVar3 * fVar3;
    auVar39._4_4_ = fStack_12c * fStack_12c;
    auVar39._8_4_ = fVar4 * fVar4;
    auVar39._12_4_ = fVar5 * fVar5;
    auVar46 = NEON_ext(auVar39,auVar39,8,1);
    if (auVar30._0_4_ + auVar40._0_4_ + auVar30._4_4_ + auVar40._4_4_ <
        auVar46._0_4_ + auVar39._0_4_ + auVar46._4_4_ + auVar39._4_4_) {
      fVar3 = 0.0 - fVar3;
      fVar4 = 0.0 - fVar4;
      fVar5 = 0.0 - fVar5;
      auVar31._0_4_ = fVar3 * fVar3;
      auVar31._4_4_ = 0;
      auVar31._8_4_ = fVar4 * fVar4;
      auVar31._12_4_ = fVar5 * fVar5;
      auVar40 = NEON_ext(auVar31,auVar31,8,1);
      fVar33 = auVar40._0_4_ + auVar31._0_4_;
      fVar34 = auVar40._4_4_ + 0.0;
      fVar27 = fVar33 + fVar34;
      fVar33 = fVar33 + fVar34;
      if (fVar27 != 0.0) {
        fVar28 = fVar28 - fVar10;
        fVar35 = fVar35 - fVar45;
        fVar37 = fVar37 - fStack_124;
        auVar47._0_4_ = fVar28 * fVar28;
        auVar47._4_4_ = 0;
        auVar47._8_4_ = fVar35 * fVar35;
        auVar47._12_4_ = fVar37 * fVar37;
        auVar40 = NEON_ext(auVar47,auVar47,8,1);
        fVar45 = auVar40._0_4_ + auVar47._0_4_;
        fVar34 = auVar40._4_4_ + 0.0;
        fVar10 = fVar45 + fVar34;
        fVar45 = fVar45 + fVar34;
        if (fVar10 != 0.0) {
          auVar41._8_8_ = CONCAT44(fVar33,fVar27);
          auVar41._0_8_ = CONCAT44(fVar33,fVar27);
          auVar48._8_8_ = CONCAT44(fVar45,fVar10);
          auVar48._0_8_ = CONCAT44(fVar45,fVar10);
          auVar40 = NEON_frsqrte(auVar41,4);
          auVar53._0_4_ = auVar40._0_4_ * fVar27;
          auVar53._4_4_ = auVar40._4_4_ * fVar33;
          auVar53._8_4_ = auVar40._8_4_ * fVar27;
          auVar53._12_4_ = auVar40._12_4_ * fVar33;
          auVar30 = NEON_frsqrts(auVar40,auVar53,4);
          auVar50._0_4_ = auVar40._0_4_ * auVar30._0_4_;
          auVar50._4_4_ = auVar40._4_4_ * auVar30._4_4_;
          auVar50._8_4_ = auVar40._8_4_ * auVar30._8_4_;
          auVar50._12_4_ = auVar40._12_4_ * auVar30._12_4_;
          auVar54._0_4_ = fVar27 * auVar50._0_4_;
          auVar54._4_4_ = fVar33 * auVar50._4_4_;
          auVar54._8_4_ = fVar27 * auVar50._8_4_;
          auVar54._12_4_ = fVar33 * auVar50._12_4_;
          iVar38 = -(uint)(fVar27 == 0.0);
          iVar42 = -(uint)(fVar33 == 0.0);
          iVar43 = -(uint)(fVar27 == 0.0);
          iVar44 = -(uint)(fVar33 == 0.0);
          auVar40 = NEON_frsqrts(auVar50,auVar54,4);
          fVar3 = fVar3 * auVar50._0_4_ * auVar40._0_4_;
          fVar27 = auVar50._4_4_ * auVar40._4_4_ * 0.0;
          fVar4 = fVar4 * auVar50._8_4_ * auVar40._8_4_;
          fVar5 = fVar5 * auVar50._12_4_ * auVar40._12_4_;
          auVar40 = NEON_frsqrte(auVar48,4);
          auVar55._0_4_ = auVar40._0_4_ * fVar10;
          auVar55._4_4_ = auVar40._4_4_ * fVar45;
          auVar55._8_4_ = auVar40._8_4_ * fVar10;
          auVar55._12_4_ = auVar40._12_4_ * fVar45;
          auVar30 = NEON_frsqrts(auVar40,auVar55,4);
          auVar51._0_4_ = auVar40._0_4_ * auVar30._0_4_;
          auVar51._4_4_ = auVar40._4_4_ * auVar30._4_4_;
          auVar51._8_4_ = auVar40._8_4_ * auVar30._8_4_;
          auVar51._12_4_ = auVar40._12_4_ * auVar30._12_4_;
          iVar52 = -(uint)(fVar10 == 0.0);
          iVar56 = -(uint)(fVar45 == 0.0);
          iVar57 = -(uint)(fVar10 == 0.0);
          iVar58 = -(uint)(fVar45 == 0.0);
          auVar49._0_4_ = fVar10 * auVar51._0_4_;
          auVar49._4_4_ = fVar45 * auVar51._4_4_;
          auVar49._8_4_ = fVar10 * auVar51._8_4_;
          auVar49._12_4_ = fVar45 * auVar51._12_4_;
          auVar40 = NEON_frsqrts(auVar51,auVar49,4);
          fVar28 = fVar28 * auVar51._0_4_ * auVar40._0_4_;
          fVar45 = auVar51._4_4_ * auVar40._4_4_ * 0.0;
          fVar35 = fVar35 * auVar51._8_4_ * auVar40._8_4_;
          fVar37 = fVar37 * auVar51._12_4_ * auVar40._12_4_;
          fVar10 = (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18),
                                   CONCAT12((byte)((uint)fVar28 >> 0x10) &
                                            ~(byte)((uint)iVar52 >> 0x10),
                                            CONCAT11((byte)((uint)fVar28 >> 8) &
                                                     ~(byte)((uint)iVar52 >> 8),
                                                     SUB41(fVar28,0) & ~(byte)iVar52)));
          auVar29._0_8_ =
               CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18),
                        CONCAT16((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10),
                                 CONCAT15((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar56 >> 8),
                                          CONCAT14(SUB41(fVar45,0) & ~(byte)iVar56,fVar10))));
          auVar29[8] = SUB41(fVar35,0) & ~(byte)iVar57;
          auVar29[9] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar57 >> 8);
          auVar29[10] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
          auVar29[0xb] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
          auVar32[0xc] = SUB41(fVar37,0) & ~(byte)iVar58;
          auVar32._0_12_ = auVar29;
          auVar32[0xd] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar58 >> 8);
          auVar32[0xe] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
          auVar32[0xf] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
          fVar10 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                                   CONCAT12((byte)((uint)fVar3 >> 0x10) &
                                            ~(byte)((uint)iVar38 >> 0x10),
                                            CONCAT11((byte)((uint)fVar3 >> 8) &
                                                     ~(byte)((uint)iVar38 >> 8),
                                                     SUB41(fVar3,0) & ~(byte)iVar38))) * fVar10;
          fVar45 = (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                                   CONCAT12((byte)((uint)fVar27 >> 0x10) &
                                            ~(byte)((uint)iVar42 >> 0x10),
                                            CONCAT11((byte)((uint)fVar27 >> 8) &
                                                     ~(byte)((uint)iVar42 >> 8),
                                                     SUB41(fVar27,0) & ~(byte)iVar42))) *
                   (float)((ulong)auVar29._0_8_ >> 0x20);
          uVar11 = (undefined1)((uint)fVar45 >> 8);
          uVar12 = (undefined1)((uint)fVar45 >> 0x10);
          uVar13 = (undefined1)((uint)fVar45 >> 0x18);
          fVar3 = (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                                  CONCAT12((byte)((uint)fVar4 >> 0x10) &
                                           ~(byte)((uint)iVar43 >> 0x10),
                                           CONCAT11((byte)((uint)fVar4 >> 8) &
                                                    ~(byte)((uint)iVar43 >> 8),
                                                    SUB41(fVar4,0) & ~(byte)iVar43))) *
                  auVar29._8_4_;
          uVar14 = (undefined1)((uint)fVar3 >> 8);
          uVar15 = (undefined1)((uint)fVar3 >> 0x10);
          uVar16 = (undefined1)((uint)fVar3 >> 0x18);
          fVar4 = (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                                  CONCAT12((byte)((uint)fVar5 >> 0x10) &
                                           ~(byte)((uint)iVar44 >> 0x10),
                                           CONCAT11((byte)((uint)fVar5 >> 8) &
                                                    ~(byte)((uint)iVar44 >> 8),
                                                    SUB41(fVar5,0) & ~(byte)iVar44))) *
                  auVar32._12_4_;
          uVar17 = (undefined1)((uint)fVar4 >> 8);
          uVar18 = (undefined1)((uint)fVar4 >> 0x10);
          uVar19 = (undefined1)((uint)fVar4 >> 0x18);
          auVar1[4] = SUB41(fVar45,0);
          auVar1._0_4_ = fVar10;
          auVar1[5] = uVar11;
          auVar1[6] = uVar12;
          auVar1[7] = uVar13;
          auVar1[8] = SUB41(fVar3,0);
          auVar1[9] = uVar14;
          auVar1[10] = uVar15;
          auVar1[0xb] = uVar16;
          auVar1[0xc] = SUB41(fVar4,0);
          auVar1[0xd] = uVar17;
          auVar1[0xe] = uVar18;
          auVar1[0xf] = uVar19;
          auVar2[4] = SUB41(fVar45,0);
          auVar2._0_4_ = fVar10;
          auVar2[5] = uVar11;
          auVar2[6] = uVar12;
          auVar2[7] = uVar13;
          auVar2[8] = SUB41(fVar3,0);
          auVar2[9] = uVar14;
          auVar2[10] = uVar15;
          auVar2[0xb] = uVar16;
          auVar2[0xc] = SUB41(fVar4,0);
          auVar2[0xd] = uVar17;
          auVar2[0xe] = uVar18;
          auVar2[0xf] = uVar19;
          auVar40 = NEON_ext(auVar1,auVar2,8,1);
          fVar10 = auVar40._0_4_ + fVar10 + auVar40._4_4_ + fVar45;
          uVar11 = 0;
          if (-1.0 <= fVar10) {
            uVar11 = SUB41(fVar10,0);
          }
          FUN_01590400(uVar11);
          if ((float)CONCAT13(extraout_var_01,
                              CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) <
              *(float *)(param_1 + 0xe74) ||
              (float)CONCAT13(extraout_var_01,
                              CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) ==
              *(float *)(param_1 + 0xe74)) goto LAB_00dfd120;
        }
      }
    }
  }
  FUN_00e90000(local_48,local_120);
  *(undefined4 *)(param_1 + 0xcb8) = 2;
  local_120[0] = puVar7 + 0x10;
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_48 == 0) {
    return;
  }
LAB_00dfd164:
  (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  return;
}


