/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f19000; name: FUN_00f19000
 */


void FUN_00f19000(long param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  byte bVar18;
  byte bVar24;
  byte bVar25;
  float fVar19;
  int iVar20;
  byte bVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  float fVar34;
  undefined1 auVar35 [12];
  float fVar42;
  undefined1 auVar36 [16];
  float fVar45;
  float fVar47;
  undefined1 auVar37 [16];
  float fVar43;
  undefined1 auVar38 [16];
  int iVar44;
  int iVar46;
  int iVar48;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar49;
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x168) == '\0') {
    fVar27 = 1.0;
    if (*(float *)(param_1 + 0x164) < 1.25) {
      fVar27 = *(float *)(param_1 + 0x164) / 1.25;
    }
    uVar13 = *(undefined8 *)(param_1 + 0x128);
    uVar8 = *(undefined8 *)(param_1 + 0x120);
    fVar15 = (float)uVar8;
    auVar52._0_4_ = fVar15 * fVar15;
    fVar10 = (float)((ulong)uVar8 >> 0x20);
    auVar52._4_4_ = fVar10 * fVar10;
    fVar11 = (float)uVar13;
    auVar52._8_4_ = fVar11 * fVar11;
    fVar12 = (float)((ulong)uVar13 >> 0x20);
    auVar52._12_4_ = fVar12 * fVar12;
    auVar36 = NEON_ext(auVar52,auVar52,8,1);
    fVar55 = SQRT(auVar36._0_4_ + auVar52._0_4_ + auVar36._4_4_ + auVar52._4_4_);
    if (0.0 < fVar55) {
      fVar19 = 1.0 / fVar55;
      uVar8 = CONCAT44(fVar10 * fVar19,fVar15 * fVar19);
      uVar13 = CONCAT44(fVar12 * fVar19,fVar11 * fVar19);
    }
    lVar7 = *(long *)(param_1 + 0x170);
    fVar19 = *(float *)(param_1 + 0x150) - *(float *)(lVar7 + 0xb0);
    fVar45 = *(float *)(param_1 + 0x158) - *(float *)(lVar7 + 0xb8);
    fVar47 = *(float *)(param_1 + 0x15c) - *(float *)(lVar7 + 0xbc);
    fVar42 = 0.0;
    auVar36._0_4_ = fVar19 * fVar19;
    auVar36._4_4_ = 0;
    auVar36._8_4_ = fVar45 * fVar45;
    auVar36._12_4_ = fVar47 * fVar47;
    auVar52 = NEON_ext(auVar36,auVar36,8,1);
    fVar49 = SQRT(auVar52._0_4_ + auVar36._0_4_ + auVar52._4_4_ + 0.0);
    if (fVar49 != 0.0) {
      fVar51 = 1.0 / fVar49;
      fVar19 = fVar19 * fVar51;
      fVar42 = fVar51 * 0.0;
      fVar45 = fVar45 * fVar51;
      fVar47 = fVar47 * fVar51;
    }
    puVar1 = (undefined8 *)(param_1 + 0x120);
    if (14.0 <= fVar49) {
      fVar51 = fVar55;
      if (fVar55 <= *(float *)(param_1 + 0xc0)) {
        fVar51 = *(float *)(param_1 + 0xc0);
      }
      fVar14 = 1.0 - fVar27;
      fVar19 = fVar15 * fVar14 + fVar19 * fVar51 * fVar27;
      fVar42 = fVar10 * fVar14 + fVar42 * fVar51 * fVar27;
      fVar45 = fVar11 * fVar14 + fVar45 * fVar51 * fVar27;
      fVar27 = fVar12 * fVar14 + fVar47 * fVar51 * fVar27;
      *(ulong *)(param_1 + 0x118) = CONCAT44(fVar27,fVar45);
      *(ulong *)(param_1 + 0x110) = CONCAT44(fVar42,fVar19);
      if (fVar49 < *(float *)(param_1 + 200)) {
        fVar47 = (1.0 - fVar49 / *(float *)(param_1 + 200)) * 0.25 + 0.0;
        fVar19 = fVar19 - fVar19 * fVar47;
        fVar42 = fVar42 - fVar42 * fVar47;
        fVar45 = fVar45 - fVar45 * fVar47;
        fVar27 = fVar27 - fVar27 * fVar47;
        *(ulong *)(param_1 + 0x118) = CONCAT44(fVar27,fVar45);
        *(ulong *)(param_1 + 0x110) = CONCAT44(fVar42,fVar19);
      }
      fVar47 = *(float *)(lVar7 + 0x340);
      fVar49 = *(float *)(lVar7 + 0x344);
      fVar51 = *(float *)(lVar7 + 0x348);
      fVar14 = *(float *)(lVar7 + 0x34c);
      auVar37._0_4_ = fVar47 * fVar47;
      auVar37._4_4_ = fVar49 * fVar49;
      auVar37._8_4_ = fVar51 * fVar51;
      auVar37._12_4_ = fVar14 * fVar14;
      auVar52 = NEON_ext(auVar37,auVar37,8,1);
      fVar34 = auVar52._0_4_ + auVar37._0_4_;
      fVar43 = auVar52._4_4_ + auVar37._4_4_;
      fVar9 = fVar34 + fVar43;
      fVar34 = fVar34 + fVar43;
      iVar20 = -(uint)(fVar9 == 0.0);
      bVar18 = ~(byte)iVar20;
      bVar24 = ~(byte)((uint)iVar20 >> 8);
      bVar25 = ~(byte)((uint)iVar20 >> 0x10);
      bVar26 = ~(byte)((uint)iVar20 >> 0x18);
      auVar38._8_8_ = CONCAT44(fVar34,fVar9);
      auVar38._0_8_ = CONCAT44(fVar34,fVar9);
      auVar52 = NEON_frsqrte(auVar38,4);
      auVar53._0_4_ = auVar52._0_4_ * fVar9;
      auVar53._4_4_ = auVar52._4_4_ * fVar34;
      auVar53._8_4_ = auVar52._8_4_ * fVar9;
      auVar53._12_4_ = auVar52._12_4_ * fVar34;
      auVar36 = NEON_frsqrts(auVar52,auVar53,4);
      auVar50._0_4_ = auVar52._0_4_ * auVar36._0_4_;
      auVar50._4_4_ = auVar52._4_4_ * auVar36._4_4_;
      auVar50._8_4_ = auVar52._8_4_ * auVar36._8_4_;
      auVar50._12_4_ = auVar52._12_4_ * auVar36._12_4_;
      auVar54._0_4_ = fVar9 * auVar50._0_4_;
      auVar54._4_4_ = fVar34 * auVar50._4_4_;
      auVar54._8_4_ = fVar9 * auVar50._8_4_;
      auVar54._12_4_ = fVar34 * auVar50._12_4_;
      iVar20 = -(uint)(fVar9 == 0.0);
      iVar44 = -(uint)(fVar34 == 0.0);
      iVar46 = -(uint)(fVar9 == 0.0);
      iVar48 = -(uint)(fVar34 == 0.0);
      auVar52 = NEON_frsqrts(auVar50,auVar54,4);
      fVar47 = fVar47 * auVar50._0_4_ * auVar52._0_4_;
      fVar49 = fVar49 * auVar50._4_4_ * auVar52._4_4_;
      fVar51 = fVar51 * auVar50._8_4_ * auVar52._8_4_;
      fVar14 = fVar14 * auVar50._12_4_ * auVar52._12_4_;
      fVar47 = (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18) & bVar26
                               ,CONCAT12((byte)((uint)fVar47 >> 0x10) &
                                         ~(byte)((uint)iVar20 >> 0x10) & bVar25,
                                         CONCAT11((byte)((uint)fVar47 >> 8) &
                                                  ~(byte)((uint)iVar20 >> 8) & bVar24,
                                                  SUB41(fVar47,0) & ~(byte)iVar20 & bVar18)));
      auVar35._0_8_ =
           CONCAT17((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18) & bVar26,
                    CONCAT16((byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10) & bVar25,
                             CONCAT15((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar44 >> 8) &
                                      bVar24,CONCAT14(SUB41(fVar49,0) & ~(byte)iVar44 & bVar18,
                                                      fVar47))));
      auVar35[8] = SUB41(fVar51,0) & ~(byte)iVar46 & bVar18;
      auVar35[9] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar46 >> 8) & bVar24;
      auVar35[10] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10) & bVar25;
      auVar35[0xb] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18) & bVar26;
      auVar39[0xc] = SUB41(fVar14,0) & ~(byte)iVar48 & bVar18;
      auVar39._0_12_ = auVar35;
      auVar39[0xd] = (byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar48 >> 8) & bVar24;
      auVar39[0xe] = (byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10) & bVar25;
      auVar39[0xf] = (byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18) & bVar26;
      auVar21._0_4_ = fVar47 * fVar47;
      fVar49 = (float)((ulong)auVar35._0_8_ >> 0x20);
      auVar21._4_4_ = fVar49 * fVar49;
      fVar51 = auVar35._8_4_;
      auVar21._8_4_ = fVar51 * fVar51;
      fVar14 = auVar39._12_4_;
      auVar21._12_4_ = fVar14 * fVar14;
      auVar52 = NEON_ext(auVar21,auVar21,8,1);
      if (DAT_01d4bac8 < auVar52._0_4_ + auVar21._0_4_ + auVar52._4_4_ + auVar21._4_4_) {
        fVar34 = (float)uVar8;
        auVar22._0_4_ = fVar34 * fVar47;
        fVar43 = (float)((ulong)uVar8 >> 0x20);
        auVar22._4_4_ = fVar43 * fVar49;
        fVar16 = (float)uVar13;
        auVar22._8_4_ = fVar16 * fVar51;
        fVar17 = (float)((ulong)uVar13 >> 0x20);
        auVar22._12_4_ = fVar17 * fVar14;
        auVar52 = NEON_ext(auVar22,auVar22,8,1);
        fVar9 = auVar52._0_4_ + auVar22._0_4_ + auVar52._4_4_ + auVar22._4_4_;
        fVar9 = fVar9 + fVar9;
        fVar28 = fVar34 - fVar47 * fVar9;
        fVar31 = fVar43 - fVar49 * fVar9;
        fVar32 = fVar16 - fVar51 * fVar9;
        fVar33 = fVar17 - fVar14 * fVar9;
        fVar49 = *(float *)(param_1 + 0xbc);
        auVar52 = NEON_fmov(0x41f00000,4);
        fVar29 = *(float *)PTR_FloatPi_02715160;
        fVar9 = *(float *)PTR_FloatDegree180_027194f0;
        *(ulong *)(param_1 + 0x118) =
             CONCAT44(fVar27 + fVar33 * fVar49 * fVar55 * auVar52._12_4_,
                      fVar45 + fVar32 * fVar49 * fVar55 * auVar52._8_4_);
        *(ulong *)(param_1 + 0x110) =
             CONCAT44(fVar42 + fVar31 * fVar49 * fVar55 * auVar52._4_4_,
                      fVar19 + fVar28 * fVar49 * fVar55 * auVar52._0_4_);
        *(ulong *)(param_1 + 0x128) = CONCAT44(fVar12 * 0.0,fVar11 * 0.0);
        *(ulong *)(param_1 + 0x120) = CONCAT44(fVar10 * 0.0,fVar15 * 0.0);
        fVar27 = cosf((fVar29 / fVar9) * 25.0);
        if (DAT_01d4bb8c < fVar55) {
          fVar34 = fVar34 * fVar28;
          fVar43 = fVar43 * fVar31;
          fVar16 = fVar16 * fVar32;
          fVar17 = fVar17 * fVar33;
          auVar2._4_4_ = fVar43;
          auVar2._0_4_ = fVar34;
          auVar2._8_4_ = fVar16;
          auVar2._12_4_ = fVar17;
          auVar3._4_4_ = fVar43;
          auVar3._0_4_ = fVar34;
          auVar3._8_4_ = fVar16;
          auVar3._12_4_ = fVar17;
          auVar52 = NEON_ext(auVar2,auVar3,8,1);
          if (auVar52._0_4_ + fVar34 + auVar52._4_4_ + fVar43 < fVar27) {
            lVar7 = *(long *)(param_1 + 0x178);
            fVar27 = -*(float *)(lVar7 + 0x560);
            uStack_38 = CONCAT44(fVar14 * fVar27,fVar51 * fVar27);
            local_40 = CONCAT44(DAT_01d4c47c,fVar47 * fVar27);
            if (*(int *)(lVar7 + 0x594) == 0) {
              uVar8 = 0xb9dd6bd97cfbeb28;
            }
            else {
              uVar8 = 0xd73352b88c8b98c4;
            }
            local_60 = uVar8;
            FUN_00dc0bf0(lVar7,&local_60,&local_40);
            local_60 = uVar8;
            FUN_00dc04c0(*(undefined8 *)(param_1 + 0x178),&local_60,0,0,0);
            local_60 = 0x7caf3047222b04b6;
            pcStack_58 = "Play_Prop_Gimmick_a_t0501_g0102_Disk_Wall_hit";
            local_50 = 0x2d;
            local_48 = 0;
            FUN_00db42e0(*(undefined8 *)(param_1 + 0x170),&local_60,1);
            local_28 = 0xd7bb726457de8db7;
            lVar7 = *(long *)PTR_DAT_02710840;
            uVar6 = FUN_010247a0(lVar7 + 0x390,&local_28);
            FUN_01023770(lVar7 + 0x390,uVar6,0);
            if (local_48 != 0) {
              (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x118);
      *puVar1 = *(undefined8 *)(param_1 + 0x110);
      uVar13 = *(undefined8 *)(param_1 + 0x128);
      uVar8 = *(undefined8 *)(param_1 + 0x120);
      fVar10 = (float)uVar8;
      fVar15 = fVar10 * fVar10;
      fVar11 = (float)((ulong)uVar8 >> 0x20);
      fVar19 = fVar11 * fVar11;
      fVar12 = (float)uVar13;
      fVar55 = (float)((ulong)uVar13 >> 0x20);
      auVar4._4_4_ = fVar19;
      auVar4._0_4_ = fVar15;
      auVar4._8_4_ = fVar12 * fVar12;
      auVar4._12_4_ = fVar55 * fVar55;
      auVar5._4_4_ = fVar19;
      auVar5._0_4_ = fVar15;
      auVar5._8_4_ = fVar12 * fVar12;
      auVar5._12_4_ = fVar55 * fVar55;
      auVar52 = NEON_ext(auVar4,auVar5,8,1);
      fVar15 = auVar52._0_4_ + fVar15;
      fVar19 = auVar52._4_4_ + fVar19;
      fVar27 = fVar15 + fVar19;
      fVar15 = fVar15 + fVar19;
      fVar19 = *(float *)(param_1 + 0xa0);
      if (fVar19 * fVar19 < fVar27) {
        auVar23._8_8_ = CONCAT44(fVar15,fVar27);
        auVar23._0_8_ = CONCAT44(fVar15,fVar27);
        auVar52 = NEON_frsqrte(auVar23,4);
        auVar40._0_4_ = fVar27 * auVar52._0_4_;
        auVar40._4_4_ = fVar15 * auVar52._4_4_;
        auVar40._8_4_ = fVar27 * auVar52._8_4_;
        auVar40._12_4_ = fVar15 * auVar52._12_4_;
        auVar36 = NEON_frsqrts(auVar52,auVar40,4);
        auVar30._0_4_ = auVar52._0_4_ * auVar36._0_4_;
        auVar30._4_4_ = auVar52._4_4_ * auVar36._4_4_;
        auVar30._8_4_ = auVar52._8_4_ * auVar36._8_4_;
        auVar30._12_4_ = auVar52._12_4_ * auVar36._12_4_;
        auVar41._0_4_ = fVar27 * auVar30._0_4_;
        auVar41._4_4_ = fVar15 * auVar30._4_4_;
        auVar41._8_4_ = fVar27 * auVar30._8_4_;
        auVar41._12_4_ = fVar15 * auVar30._12_4_;
        iVar20 = -(uint)(fVar27 == 0.0);
        iVar44 = -(uint)(fVar15 == 0.0);
        iVar46 = -(uint)(fVar27 == 0.0);
        iVar48 = -(uint)(fVar15 == 0.0);
        auVar52 = NEON_frsqrts(auVar30,auVar41,4);
        fVar10 = fVar10 * auVar30._0_4_ * auVar52._0_4_;
        fVar11 = fVar11 * auVar30._4_4_ * auVar52._4_4_;
        fVar12 = fVar12 * auVar30._8_4_ * auVar52._8_4_;
        fVar55 = fVar55 * auVar30._12_4_ * auVar52._12_4_;
        fVar27 = (float)CONCAT13((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                 CONCAT12((byte)((uint)fVar10 >> 0x10) &
                                          ~(byte)((uint)iVar20 >> 0x10),
                                          CONCAT11((byte)((uint)fVar10 >> 8) &
                                                   ~(byte)((uint)iVar20 >> 8),
                                                   SUB41(fVar10,0) & ~(byte)iVar20)));
        fVar15 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                                 CONCAT12((byte)((uint)fVar12 >> 0x10) &
                                          ~(byte)((uint)iVar46 >> 0x10),
                                          CONCAT11((byte)((uint)fVar12 >> 8) &
                                                   ~(byte)((uint)iVar46 >> 8),
                                                   SUB41(fVar12,0) & ~(byte)iVar46)));
        uVar8 = CONCAT44((float)(CONCAT17((byte)((uint)fVar11 >> 0x18) &
                                          ~(byte)((uint)iVar44 >> 0x18),
                                          CONCAT16((byte)((uint)fVar11 >> 0x10) &
                                                   ~(byte)((uint)iVar44 >> 0x10),
                                                   CONCAT15((byte)((uint)fVar11 >> 8) &
                                                            ~(byte)((uint)iVar44 >> 8),
                                                            CONCAT14(SUB41(fVar11,0) & ~(byte)iVar44
                                                                     ,fVar27)))) >> 0x20) * fVar19,
                         fVar27 * fVar19);
        uVar13 = CONCAT44((float)(CONCAT17((byte)((uint)fVar55 >> 0x18) &
                                           ~(byte)((uint)iVar48 >> 0x18),
                                           CONCAT16((byte)((uint)fVar55 >> 0x10) &
                                                    ~(byte)((uint)iVar48 >> 0x10),
                                                    CONCAT15((byte)((uint)fVar55 >> 8) &
                                                             ~(byte)((uint)iVar48 >> 8),
                                                             CONCAT14(SUB41(fVar55,0) &
                                                                      ~(byte)iVar48,fVar15)))) >>
                                 0x20) * fVar19,fVar15 * fVar19);
        *(undefined8 *)(param_1 + 0x128) = uVar13;
        *puVar1 = uVar8;
      }
      lVar7 = *(long *)(param_1 + 0x170);
      *(undefined1 *)(lVar7 + 0xc0) = 1;
      *(ulong *)(lVar7 + 0xb8) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0xb8) >> 0x20) +
                    (float)((ulong)uVar13 >> 0x20) * 0.033333335,
                    (float)*(undefined8 *)(lVar7 + 0xb8) + (float)uVar13 * 0.033333335);
      *(ulong *)(lVar7 + 0xb0) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0xb0) >> 0x20) +
                    (float)((ulong)uVar8 >> 0x20) * 0.033333335,
                    (float)*(undefined8 *)(lVar7 + 0xb0) + (float)uVar8 * 0.033333335);
    }
    else {
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined1 *)(param_1 + 0x168) = 1;
    }
  }
  return;
}


