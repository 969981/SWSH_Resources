/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f18b60; name: FUN_00f18b60
 */


void FUN_00f18b60(long param_1)

{
  float *pfVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar46;
  float fVar47;
  undefined1 auVar42 [16];
  float fVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar49;
  float fVar50;
  float fVar52;
  undefined1 auVar51 [16];
  byte bVar53;
  byte bVar59;
  byte bVar60;
  float fVar54;
  float fVar55;
  int iVar56;
  byte bVar61;
  float fVar57;
  int iVar62;
  int iVar63;
  float fVar64;
  int iVar65;
  undefined1 auVar58 [16];
  undefined1 auVar66 [12];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  int iVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar79;
  float fVar80;
  undefined8 local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar12 = *(long *)(*(long *)(param_1 + 0x170) + 0x298);
  if (((lVar12 != 0) && (*(long *)(lVar12 + 0x80) != 0)) &&
     (*(int *)(*(long *)(lVar12 + 0x80) + 0x54) != 0)) {
    lVar12 = *(long *)(lVar12 + 0x80);
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
      piVar2 = (int *)(lVar12 + 0x54);
      iVar56 = *(int *)(lVar12 + 0x54);
      do {
        while( true ) {
          plVar15 = *(long **)(lVar12 + 0x58);
          lVar11 = FUN_006cbb10();
          while( true ) {
            if (plVar15 == (long *)0x0) goto LAB_00f18c28;
            if (plVar15 == (long *)lVar11) break;
            plVar15 = (long *)*plVar15;
          }
          iVar62 = *piVar2;
          if (iVar62 != iVar56) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar56 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = *(long *)(lVar12 + 0x60);
            if (lVar12 != 0) {
              *(undefined1 *)(lVar12 + 0x10) = 1;
              (**(code **)(*(long *)(lVar12 + -8) + 0x18))();
              goto LAB_00f18c34;
            }
            goto LAB_00f18c28;
          }
          iVar56 = iVar62;
          if (iVar62 == 0) goto LAB_00f18c28;
        }
        ClearExclusiveLocal();
        iVar56 = iVar62;
      } while (iVar62 != 0);
    }
LAB_00f18c28:
    DAT_00000060 = 1;
  }
LAB_00f18c34:
  uVar21 = *(undefined8 *)(param_1 + 0x128);
  uVar14 = *(undefined8 *)(param_1 + 0x120);
  fVar20 = (float)uVar14;
  fVar80 = fVar20 * fVar20;
  fVar18 = (float)((ulong)uVar14 >> 0x20);
  fVar19 = fVar18 * fVar18;
  uVar23 = (undefined1)((uint)fVar19 >> 8);
  uVar24 = (undefined1)((uint)fVar19 >> 0x10);
  uVar25 = (undefined1)((uint)fVar19 >> 0x18);
  fVar41 = (float)uVar21;
  fVar54 = fVar41 * fVar41;
  uVar26 = (undefined1)((uint)fVar54 >> 8);
  uVar27 = (undefined1)((uint)fVar54 >> 0x10);
  uVar28 = (undefined1)((uint)fVar54 >> 0x18);
  fVar22 = (float)((ulong)uVar21 >> 0x20);
  fVar46 = fVar22 * fVar22;
  uVar29 = (undefined1)((uint)fVar46 >> 8);
  uVar30 = (undefined1)((uint)fVar46 >> 0x10);
  uVar31 = (undefined1)((uint)fVar46 >> 0x18);
  auVar42[4] = SUB41(fVar19,0);
  auVar42._0_4_ = fVar80;
  auVar42[5] = uVar23;
  auVar42[6] = uVar24;
  auVar42[7] = uVar25;
  auVar42[8] = SUB41(fVar54,0);
  auVar42[9] = uVar26;
  auVar42[10] = uVar27;
  auVar42[0xb] = uVar28;
  auVar42[0xc] = SUB41(fVar46,0);
  auVar42[0xd] = uVar29;
  auVar42[0xe] = uVar30;
  auVar42[0xf] = uVar31;
  auVar77[4] = SUB41(fVar19,0);
  auVar77._0_4_ = fVar80;
  auVar77[5] = uVar23;
  auVar77[6] = uVar24;
  auVar77[7] = uVar25;
  auVar77[8] = SUB41(fVar54,0);
  auVar77[9] = uVar26;
  auVar77[10] = uVar27;
  auVar77[0xb] = uVar28;
  auVar77[0xc] = SUB41(fVar46,0);
  auVar77[0xd] = uVar29;
  auVar77[0xe] = uVar30;
  auVar77[0xf] = uVar31;
  auVar42 = NEON_ext(auVar42,auVar77,8,1);
  fVar80 = SQRT(auVar42._0_4_ + fVar80 + auVar42._4_4_ + fVar19);
  if (0.0 < fVar80) {
    fVar19 = 1.0 / fVar80;
    uVar14 = CONCAT44(fVar18 * fVar19,fVar20 * fVar19);
    uVar21 = CONCAT44(fVar22 * fVar19,fVar41 * fVar19);
  }
  fVar39 = *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0xa8);
  fVar54 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
  fVar19 = *(float *)PTR_FloatDegree180_027194f0;
  uVar13 = (ulong)(*(float *)(param_1 + 0xb0) * (fVar54 / fVar19));
  pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar13 >> 0x18 & 0xff) * 0x10);
  fVar55 = (float)((uint)uVar13 & 0xffffff) * DAT_01d4bc78;
  fVar73 = *pfVar1;
  fVar70 = pfVar1[2];
  fVar49 = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x104) + 0.0;
  fVar52 = -(fVar39 * (pfVar1[1] + pfVar1[3] * fVar55)) + 0.0;
  lVar12 = *(long *)(param_1 + 0x170);
  *(float *)(param_1 + 0x118) = fVar52;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(float *)(param_1 + 0x110) = fVar49;
  *(undefined4 *)(param_1 + 0x114) = 0;
  fVar54 = *(float *)(lVar12 + 0x340);
  fVar46 = *(float *)(lVar12 + 0x344);
  fVar47 = *(float *)(lVar12 + 0x348);
  fVar48 = *(float *)(lVar12 + 0x34c);
  fVar71 = fVar54 * fVar54;
  fVar72 = fVar46 * fVar46;
  auVar7._4_4_ = fVar72;
  auVar7._0_4_ = fVar71;
  auVar7._8_4_ = fVar47 * fVar47;
  auVar7._12_4_ = fVar48 * fVar48;
  auVar8._4_4_ = fVar72;
  auVar8._0_4_ = fVar71;
  auVar8._8_4_ = fVar47 * fVar47;
  auVar8._12_4_ = fVar48 * fVar48;
  auVar42 = NEON_ext(auVar7,auVar8,8,1);
  fVar71 = auVar42._0_4_ + fVar71;
  fVar72 = auVar42._4_4_ + fVar72;
  fVar16 = fVar71 + fVar72;
  fVar71 = fVar71 + fVar72;
  iVar74 = -(uint)(fVar16 == 0.0);
  auVar9._4_4_ = fVar71;
  auVar9._0_4_ = fVar16;
  auVar9._8_4_ = fVar16;
  auVar9._12_4_ = fVar71;
  auVar42 = NEON_frsqrte(auVar9,4);
  iVar56 = -(uint)(fVar16 == 0.0);
  iVar62 = -(uint)(fVar71 == 0.0);
  iVar63 = -(uint)(fVar16 == 0.0);
  iVar65 = -(uint)(fVar71 == 0.0);
  auVar76._0_4_ = auVar42._0_4_ * fVar16;
  auVar76._4_4_ = auVar42._4_4_ * fVar71;
  auVar76._8_4_ = auVar42._8_4_ * fVar16;
  auVar76._12_4_ = auVar42._12_4_ * fVar71;
  auVar77 = NEON_frsqrts(auVar42,auVar76,4);
  auVar75._0_4_ = auVar42._0_4_ * auVar77._0_4_;
  auVar75._4_4_ = auVar42._4_4_ * auVar77._4_4_;
  auVar75._8_4_ = auVar42._8_4_ * auVar77._8_4_;
  auVar75._12_4_ = auVar42._12_4_ * auVar77._12_4_;
  auVar78._0_4_ = fVar16 * auVar75._0_4_;
  auVar78._4_4_ = fVar71 * auVar75._4_4_;
  auVar78._8_4_ = fVar16 * auVar75._8_4_;
  auVar78._12_4_ = fVar71 * auVar75._12_4_;
  auVar42 = NEON_frsqrts(auVar75,auVar78,4);
  fVar54 = fVar54 * auVar75._0_4_ * auVar42._0_4_;
  fVar46 = fVar46 * auVar75._4_4_ * auVar42._4_4_;
  fVar47 = fVar47 * auVar75._8_4_ * auVar42._8_4_;
  fVar48 = fVar48 * auVar75._12_4_ * auVar42._12_4_;
  bVar53 = ~(byte)iVar74;
  bVar59 = ~(byte)((uint)iVar74 >> 8);
  bVar60 = ~(byte)((uint)iVar74 >> 0x10);
  bVar61 = ~(byte)((uint)iVar74 >> 0x18);
  fVar54 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18) & bVar61,
                           CONCAT12((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10) &
                                    bVar60,CONCAT11((byte)((uint)fVar54 >> 8) &
                                                    ~(byte)((uint)iVar56 >> 8) & bVar59,
                                                    SUB41(fVar54,0) & ~(byte)iVar56 & bVar53)));
  auVar66._0_8_ =
       CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18) & bVar61,
                CONCAT16((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10) & bVar60,
                         CONCAT15((byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar62 >> 8) & bVar59,
                                  CONCAT14(SUB41(fVar46,0) & ~(byte)iVar62 & bVar53,fVar54))));
  auVar66[8] = SUB41(fVar47,0) & ~(byte)iVar63 & bVar53;
  auVar66[9] = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar63 >> 8) & bVar59;
  auVar66[10] = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10) & bVar60;
  auVar66[0xb] = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18) & bVar61;
  auVar67[0xc] = SUB41(fVar48,0) & ~(byte)iVar65 & bVar53;
  auVar67._0_12_ = auVar66;
  auVar67[0xd] = (byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar65 >> 8) & bVar59;
  auVar67[0xe] = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10) & bVar60;
  auVar67[0xf] = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18) & bVar61;
  auVar43._0_4_ = fVar54 * fVar54;
  fVar46 = (float)((ulong)auVar66._0_8_ >> 0x20);
  auVar43._4_4_ = fVar46 * fVar46;
  fVar47 = auVar66._8_4_;
  auVar43._8_4_ = fVar47 * fVar47;
  fVar48 = auVar67._12_4_;
  auVar43._12_4_ = fVar48 * fVar48;
  auVar42 = NEON_ext(auVar43,auVar43,8,1);
  fVar16 = (float)uVar14;
  fVar71 = (float)((ulong)uVar14 >> 0x20);
  fVar72 = (float)uVar21;
  fVar79 = (float)((ulong)uVar21 >> 0x20);
  if (DAT_01d4bac8 < auVar42._0_4_ + auVar43._0_4_ + auVar42._4_4_ + auVar43._4_4_) {
    auVar44._0_4_ = fVar16 * fVar54;
    auVar44._4_4_ = fVar71 * fVar46;
    auVar44._8_4_ = fVar72 * fVar47;
    auVar44._12_4_ = fVar79 * fVar48;
    auVar42 = NEON_ext(auVar44,auVar44,8,1);
    fVar17 = auVar42._0_4_ + auVar44._0_4_ + auVar42._4_4_ + auVar44._4_4_;
    fVar17 = fVar17 + fVar17;
    fVar57 = fVar16 - fVar54 * fVar17;
    fVar46 = fVar71 - fVar46 * fVar17;
    fVar64 = fVar72 - fVar47 * fVar17;
    fVar17 = fVar79 - fVar48 * fVar17;
    fVar40 = *(float *)(param_1 + 0xbc);
    auVar42 = NEON_fmov(0x41f00000,4);
    fVar50 = *(float *)PTR_FloatPi_02715160;
    *(float *)(param_1 + 0x118) = fVar52 + fVar64 * fVar40 * fVar80 * auVar42._8_4_;
    *(float *)(param_1 + 0x11c) = fVar17 * fVar40 * fVar80 * auVar42._12_4_ + 0.0;
    *(float *)(param_1 + 0x110) = fVar49 + fVar57 * fVar40 * fVar80 * auVar42._0_4_;
    *(float *)(param_1 + 0x114) = fVar46 * fVar40 * fVar80 * auVar42._4_4_ + 0.0;
    *(ulong *)(param_1 + 0x128) = CONCAT44(fVar22 * 0.0,fVar41 * 0.0);
    *(ulong *)(param_1 + 0x120) = CONCAT44(fVar18 * 0.0,fVar20 * 0.0);
    fVar19 = cosf((fVar50 / fVar19) * 25.0);
    if (DAT_01d4bb8c < fVar80) {
      fVar57 = fVar16 * fVar57;
      fVar46 = fVar71 * fVar46;
      uVar23 = (undefined1)((uint)fVar46 >> 8);
      uVar24 = (undefined1)((uint)fVar46 >> 0x10);
      uVar25 = (undefined1)((uint)fVar46 >> 0x18);
      fVar64 = fVar72 * fVar64;
      uVar26 = (undefined1)((uint)fVar64 >> 8);
      uVar27 = (undefined1)((uint)fVar64 >> 0x10);
      uVar28 = (undefined1)((uint)fVar64 >> 0x18);
      fVar17 = fVar79 * fVar17;
      uVar29 = (undefined1)((uint)fVar17 >> 8);
      uVar30 = (undefined1)((uint)fVar17 >> 0x10);
      uVar31 = (undefined1)((uint)fVar17 >> 0x18);
      auVar5[4] = SUB41(fVar46,0);
      auVar5._0_4_ = fVar57;
      auVar5[5] = uVar23;
      auVar5[6] = uVar24;
      auVar5[7] = uVar25;
      auVar5[8] = SUB41(fVar64,0);
      auVar5[9] = uVar26;
      auVar5[10] = uVar27;
      auVar5[0xb] = uVar28;
      auVar5[0xc] = SUB41(fVar17,0);
      auVar5[0xd] = uVar29;
      auVar5[0xe] = uVar30;
      auVar5[0xf] = uVar31;
      auVar6[4] = SUB41(fVar46,0);
      auVar6._0_4_ = fVar57;
      auVar6[5] = uVar23;
      auVar6[6] = uVar24;
      auVar6[7] = uVar25;
      auVar6[8] = SUB41(fVar64,0);
      auVar6[9] = uVar26;
      auVar6[10] = uVar27;
      auVar6[0xb] = uVar28;
      auVar6[0xc] = SUB41(fVar17,0);
      auVar6[0xd] = uVar29;
      auVar6[0xe] = uVar30;
      auVar6[0xf] = uVar31;
      auVar42 = NEON_ext(auVar5,auVar6,8,1);
      if (auVar42._0_4_ + fVar57 + auVar42._4_4_ + fVar46 < fVar19) {
        lVar12 = *(long *)(param_1 + 0x178);
        fVar80 = -*(float *)(lVar12 + 0x560);
        uStack_48 = CONCAT44(fVar48 * fVar80,fVar47 * fVar80);
        local_50 = CONCAT44(DAT_01d4c47c,fVar54 * fVar80);
        if (*(int *)(lVar12 + 0x594) == 0) {
          uVar14 = 0xb9dd6bd97cfbeb28;
        }
        else {
          uVar14 = 0xd73352b88c8b98c4;
        }
        local_70 = uVar14;
        FUN_00dc0bf0(lVar12,&local_70,&local_50);
        local_70 = uVar14;
        FUN_00dc04c0(*(undefined8 *)(param_1 + 0x178),&local_70,0,0,0);
        local_70 = 0x7caf3047222b04b6;
        pcStack_68 = "Play_Prop_Gimmick_a_t0501_g0102_Disk_Wall_hit";
        local_60 = 0x2d;
        local_58 = 0;
        FUN_00db42e0(*(undefined8 *)(param_1 + 0x170),&local_70,1);
        local_78 = 0xd7bb726457de8db7;
        lVar12 = *(long *)PTR_DAT_02710840;
        uVar10 = FUN_010247a0(lVar12 + 0x390,&local_78);
        FUN_01023770(lVar12 + 0x390,uVar10,0);
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        }
      }
    }
  }
  fVar80 = *(float *)(param_1 + 0xb8);
  fVar20 = fVar39 * (fVar73 + fVar70 * fVar55) * *(float *)(param_1 + 0xb4);
  fVar19 = *(float *)(param_1 + 0x120) +
           ((*(float *)(param_1 + 0x110) - *(float *)(param_1 + 0x120) * fVar80) - fVar16 * fVar20)
           * 0.033333335;
  uVar23 = SUB41(fVar19,0);
  uVar24 = (undefined1)((uint)fVar19 >> 8);
  uVar25 = (undefined1)((uint)fVar19 >> 0x10);
  uVar26 = (undefined1)((uint)fVar19 >> 0x18);
  fVar54 = *(float *)(param_1 + 0x124) +
           ((*(float *)(param_1 + 0x114) - *(float *)(param_1 + 0x124) * fVar80) - fVar71 * fVar20)
           * 0.033333335;
  uVar27 = SUB41(fVar54,0);
  uVar28 = (undefined1)((uint)fVar54 >> 8);
  uVar29 = (undefined1)((uint)fVar54 >> 0x10);
  uVar30 = (undefined1)((uint)fVar54 >> 0x18);
  fVar46 = *(float *)(param_1 + 0x128) +
           ((*(float *)(param_1 + 0x118) - *(float *)(param_1 + 0x128) * fVar80) - fVar72 * fVar20)
           * 0.033333335;
  uVar31 = SUB41(fVar46,0);
  uVar32 = (undefined1)((uint)fVar46 >> 8);
  uVar33 = (undefined1)((uint)fVar46 >> 0x10);
  uVar34 = (undefined1)((uint)fVar46 >> 0x18);
  fVar80 = *(float *)(param_1 + 300) +
           ((*(float *)(param_1 + 0x11c) - *(float *)(param_1 + 300) * fVar80) - fVar79 * fVar20) *
           0.033333335;
  uVar35 = SUB41(fVar80,0);
  uVar36 = (undefined1)((uint)fVar80 >> 8);
  uVar37 = (undefined1)((uint)fVar80 >> 0x10);
  uVar38 = (undefined1)((uint)fVar80 >> 0x18);
  auVar45._0_4_ = fVar19 * fVar19;
  auVar45._4_4_ = fVar54 * fVar54;
  auVar45._8_4_ = fVar46 * fVar46;
  auVar45._12_4_ = fVar80 * fVar80;
  auVar42 = NEON_ext(auVar45,auVar45,8,1);
  *(ulong *)(param_1 + 0x128) =
       CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,fVar46))));
  *(ulong *)(param_1 + 0x120) =
       CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,fVar19))));
  fVar41 = auVar42._0_4_ + auVar45._0_4_;
  fVar20 = auVar42._4_4_ + auVar45._4_4_;
  fVar18 = fVar41 + fVar20;
  fVar41 = fVar41 + fVar20;
  fVar20 = *(float *)(param_1 + 0xa0);
  if (fVar20 * fVar20 < fVar18) {
    auVar51._8_8_ = CONCAT44(fVar41,fVar18);
    auVar51._0_8_ = CONCAT44(fVar41,fVar18);
    auVar42 = NEON_frsqrte(auVar51,4);
    auVar68._0_4_ = fVar18 * auVar42._0_4_;
    auVar68._4_4_ = fVar41 * auVar42._4_4_;
    auVar68._8_4_ = fVar18 * auVar42._8_4_;
    auVar68._12_4_ = fVar41 * auVar42._12_4_;
    auVar77 = NEON_frsqrts(auVar42,auVar68,4);
    auVar58._0_4_ = auVar42._0_4_ * auVar77._0_4_;
    auVar58._4_4_ = auVar42._4_4_ * auVar77._4_4_;
    auVar58._8_4_ = auVar42._8_4_ * auVar77._8_4_;
    auVar58._12_4_ = auVar42._12_4_ * auVar77._12_4_;
    auVar69._0_4_ = fVar18 * auVar58._0_4_;
    auVar69._4_4_ = fVar41 * auVar58._4_4_;
    auVar69._8_4_ = fVar18 * auVar58._8_4_;
    auVar69._12_4_ = fVar41 * auVar58._12_4_;
    iVar56 = -(uint)(fVar18 == 0.0);
    iVar62 = -(uint)(fVar41 == 0.0);
    iVar63 = -(uint)(fVar18 == 0.0);
    iVar65 = -(uint)(fVar41 == 0.0);
    auVar42 = NEON_frsqrts(auVar58,auVar69,4);
    fVar19 = fVar19 * auVar58._0_4_ * auVar42._0_4_;
    fVar54 = fVar54 * auVar58._4_4_ * auVar42._4_4_;
    fVar46 = fVar46 * auVar58._8_4_ * auVar42._8_4_;
    fVar80 = fVar80 * auVar58._12_4_ * auVar42._12_4_;
    fVar19 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18),
                             CONCAT12((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10),
                                      CONCAT11((byte)((uint)fVar19 >> 8) &
                                               ~(byte)((uint)iVar56 >> 8),
                                               SUB41(fVar19,0) & ~(byte)iVar56))) * fVar20;
    uVar23 = SUB41(fVar19,0);
    uVar24 = (undefined1)((uint)fVar19 >> 8);
    uVar25 = (undefined1)((uint)fVar19 >> 0x10);
    uVar26 = (undefined1)((uint)fVar19 >> 0x18);
    fVar54 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                             CONCAT12((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10),
                                      CONCAT11((byte)((uint)fVar54 >> 8) &
                                               ~(byte)((uint)iVar62 >> 8),
                                               SUB41(fVar54,0) & ~(byte)iVar62))) * fVar20;
    uVar27 = SUB41(fVar54,0);
    uVar28 = (undefined1)((uint)fVar54 >> 8);
    uVar29 = (undefined1)((uint)fVar54 >> 0x10);
    uVar30 = (undefined1)((uint)fVar54 >> 0x18);
    fVar54 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                             CONCAT12((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10),
                                      CONCAT11((byte)((uint)fVar46 >> 8) &
                                               ~(byte)((uint)iVar63 >> 8),
                                               SUB41(fVar46,0) & ~(byte)iVar63))) * fVar20;
    uVar31 = SUB41(fVar54,0);
    uVar32 = (undefined1)((uint)fVar54 >> 8);
    uVar33 = (undefined1)((uint)fVar54 >> 0x10);
    uVar34 = (undefined1)((uint)fVar54 >> 0x18);
    fVar20 = (float)CONCAT13((byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                             CONCAT12((byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10),
                                      CONCAT11((byte)((uint)fVar80 >> 8) &
                                               ~(byte)((uint)iVar65 >> 8),
                                               SUB41(fVar80,0) & ~(byte)iVar65))) * fVar20;
    uVar35 = SUB41(fVar20,0);
    uVar36 = (undefined1)((uint)fVar20 >> 8);
    uVar37 = (undefined1)((uint)fVar20 >> 0x10);
    uVar38 = (undefined1)((uint)fVar20 >> 0x18);
    *(ulong *)(param_1 + 0x128) =
         CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,fVar54))));
    *(ulong *)(param_1 + 0x120) =
         CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,fVar19))));
  }
  lVar12 = *(long *)(param_1 + 0x170);
  *(undefined1 *)(lVar12 + 0xc0) = 1;
  *(ulong *)(lVar12 + 0xb8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0xb8) >> 0x20) +
                (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) * 0.033333335,
                (float)*(undefined8 *)(lVar12 + 0xb8) +
                (float)CONCAT13(uVar34,CONCAT12(uVar33,CONCAT11(uVar32,uVar31))) * 0.033333335);
  *(ulong *)(lVar12 + 0xb0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0xb0) >> 0x20) +
                (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) * 0.033333335,
                (float)*(undefined8 *)(lVar12 + 0xb0) +
                (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23))) * 0.033333335);
  return;
}


