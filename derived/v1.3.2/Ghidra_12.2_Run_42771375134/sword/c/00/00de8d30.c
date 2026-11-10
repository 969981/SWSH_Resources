/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de8d30; name: FUN_00de8d30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00de8d30(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar34;
  undefined1 auVar33 [16];
  float fVar35;
  float fVar36;
  int iVar37;
  undefined8 uVar38;
  int iVar43;
  int iVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar42;
  undefined1 auVar41 [16];
  int iVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  float fVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    if (*(float *)(param_1 + 0x78) <= *(float *)(param_1 + 0xa0)) {
      lVar20 = *(long *)(param_1 + 0x88);
      lVar17 = *(long *)(lVar20 + 0x600);
      lVar19 = *(long *)(lVar17 + 0x80);
      if ((lVar19 != 0) && (*(int *)(lVar19 + 0x54) != 0)) {
        lVar17 = *(long *)(lVar17 + 0x80);
        cVar2 = DAT_00000060;
        if ((lVar17 != 0) && (*(int *)(lVar17 + 0x54) != 0)) {
          piVar1 = (int *)(lVar17 + 0x54);
          iVar37 = *(int *)(lVar17 + 0x54);
          do {
            plVar22 = *(long **)(lVar17 + 0x58);
            lVar19 = FUN_006cbb10();
            while( true ) {
              cVar2 = DAT_00000060;
              if (plVar22 == (long *)0x0) goto joined_r0x00de905c;
              if (plVar22 == (long *)lVar19) break;
              plVar22 = (long *)*plVar22;
            }
            iVar43 = *piVar1;
            if (iVar43 == iVar37) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar37 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar17 = *(long *)(lVar17 + 0x60);
                cVar2 = DAT_00000060;
                if (lVar17 != 0) {
                  cVar2 = *(char *)(lVar17 + 0x10);
                  (**(code **)(*(long *)(lVar17 + -8) + 0x18))();
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar37 = iVar43;
            cVar2 = DAT_00000060;
          } while (iVar43 != 0);
        }
joined_r0x00de905c:
        if (cVar2 != '\0') {
          puVar21 = *(undefined8 **)(*(long *)(*(long *)(lVar20 + 0x600) + 0x80) + 0x60);
          plVar22 = (long *)(**(code **)*puVar21)(puVar21);
          lVar17 = FUN_006cbb10();
          for (; plVar22 != (long *)lVar17; plVar22 = (long *)*plVar22) {
          }
          if (puVar21[0x22] != 0) {
            fVar27 = (float)*(undefined8 *)(param_1 + 0x1b8);
            fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x1b8) >> 0x20);
            fVar24 = (float)*(undefined8 *)(param_1 + 0x1b0);
            fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 0x1b0) >> 0x20);
            auVar46._0_4_ = fVar24 * fVar24;
            auVar46._4_4_ = fVar25 * fVar25;
            auVar46._8_4_ = fVar27 * fVar27;
            auVar46._12_4_ = fVar26 * fVar26;
            auVar39 = NEON_ext(auVar46,auVar46,8,1);
            if (auVar39._0_4_ + auVar46._0_4_ + auVar39._4_4_ + auVar46._4_4_ != 0.0) {
              auVar46 = *(undefined1 (*) [16])(param_1 + 0x110);
              fVar35 = auVar46._0_4_;
              fVar28 = fVar35 * (float)_DAT_01d4ae80;
              fVar34 = auVar46._4_4_ * (float)((ulong)_DAT_01d4ae80 >> 0x20);
              uVar50 = SUB41(fVar34,0);
              uVar51 = (undefined1)((uint)fVar34 >> 8);
              uVar52 = (undefined1)((uint)fVar34 >> 0x10);
              uVar53 = (undefined1)((uint)fVar34 >> 0x18);
              fVar23 = auVar46._8_4_ * (float)_UNK_01d4ae88;
              uVar54 = SUB41(fVar23,0);
              uVar55 = (undefined1)((uint)fVar23 >> 8);
              uVar56 = (undefined1)((uint)fVar23 >> 0x10);
              uVar57 = (undefined1)((uint)fVar23 >> 0x18);
              fVar36 = auVar46._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
              uVar58 = SUB41(fVar36,0);
              uVar59 = (undefined1)((uint)fVar36 >> 8);
              uVar60 = (undefined1)((uint)fVar36 >> 0x10);
              uVar61 = (undefined1)((uint)fVar36 >> 0x18);
              uVar63 = (undefined4)_UNK_01d49dc8;
              uVar64 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
              auVar12._8_4_ = uVar63;
              auVar12._0_8_ = _DAT_01d49dc0;
              auVar12._12_4_ = uVar64;
              uVar29 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd4f90);
              auVar13._8_4_ = uVar63;
              auVar13._0_8_ = _DAT_01d49dc0;
              auVar13._12_4_ = uVar64;
              uVar65 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50f8);
              auVar14._8_4_ = uVar63;
              auVar14._0_8_ = _DAT_01d49dc0;
              auVar14._12_4_ = uVar64;
              uVar38 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5418);
              fVar62 = (float)((ulong)uVar38 >> 0x20);
              auVar5[4] = uVar50;
              auVar5._0_4_ = fVar28;
              auVar5[5] = uVar51;
              auVar5[6] = uVar52;
              auVar5[7] = uVar53;
              auVar5[8] = uVar54;
              auVar5[9] = uVar55;
              auVar5[10] = uVar56;
              auVar5[0xb] = uVar57;
              auVar5[0xc] = uVar58;
              auVar5[0xd] = uVar59;
              auVar5[0xe] = uVar60;
              auVar5[0xf] = uVar61;
              uVar73 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5120);
              auVar6[4] = uVar50;
              auVar6._0_4_ = fVar28;
              auVar6[5] = uVar51;
              auVar6[6] = uVar52;
              auVar6[7] = uVar53;
              auVar6[8] = uVar54;
              auVar6[9] = uVar55;
              auVar6[10] = uVar56;
              auVar6[0xb] = uVar57;
              auVar6[0xc] = uVar58;
              auVar6[0xd] = uVar59;
              auVar6[0xe] = uVar60;
              auVar6[0xf] = uVar61;
              uVar75 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5270);
              fVar42 = (float)((ulong)uVar29 >> 0x20);
              auVar7[4] = uVar50;
              auVar7._0_4_ = fVar28;
              auVar7[5] = uVar51;
              auVar7[6] = uVar52;
              auVar7[7] = uVar53;
              auVar7[8] = uVar54;
              auVar7[9] = uVar55;
              auVar7[10] = uVar56;
              auVar7[0xb] = uVar57;
              auVar7[0xc] = uVar58;
              auVar7[0xd] = uVar59;
              auVar7[0xe] = uVar60;
              auVar7[0xf] = uVar61;
              uVar71 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd4f90);
              auVar8[4] = uVar50;
              auVar8._0_4_ = fVar28;
              auVar8[5] = uVar51;
              auVar8[6] = uVar52;
              auVar8[7] = uVar53;
              auVar8[8] = uVar54;
              auVar8[9] = uVar55;
              auVar8[10] = uVar56;
              auVar8[0xb] = uVar57;
              auVar8[0xc] = uVar58;
              auVar8[0xd] = uVar59;
              auVar8[0xe] = uVar60;
              auVar8[0xf] = uVar61;
              uVar74 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5418);
              uVar15 = a64_TBL(ZEXT816(0),auVar46,DAT_01cd50f8);
              fVar66 = (float)((ulong)uVar65 >> 0x20);
              auVar9[4] = uVar50;
              auVar9._0_4_ = fVar28;
              auVar9[5] = uVar51;
              auVar9[6] = uVar52;
              auVar9[7] = uVar53;
              auVar9[8] = uVar54;
              auVar9[9] = uVar55;
              auVar9[10] = uVar56;
              auVar9[0xb] = uVar57;
              auVar9[0xc] = uVar58;
              auVar9[0xd] = uVar59;
              auVar9[0xe] = uVar60;
              auVar9[0xf] = uVar61;
              uVar72 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50f8);
              auVar10[4] = uVar50;
              auVar10._0_4_ = fVar28;
              auVar10[5] = uVar51;
              auVar10[6] = uVar52;
              auVar10[7] = uVar53;
              auVar10[8] = SUB41(fVar28,0);
              auVar10[9] = (char)((uint)fVar28 >> 8);
              auVar10[10] = (char)((uint)fVar28 >> 0x10);
              auVar10[0xb] = (char)((uint)fVar28 >> 0x18);
              auVar10[0xc] = uVar50;
              auVar10[0xd] = uVar51;
              auVar10[0xe] = uVar52;
              auVar10[0xf] = uVar53;
              uVar16 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50b0);
              fVar67 = (float)_DAT_01d4ae90;
              fVar68 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
              fVar69 = (float)_UNK_01d4ae98;
              fVar70 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
              uVar11 = a64_TBL(ZEXT816(0),auVar46,DAT_01cd4f90);
              fVar28 = (fVar28 * (float)uVar29 + fVar67 * (float)uVar71 * 0.0 +
                       fVar67 * (float)uVar38 * (float)uVar72) - (float)uVar65 * (float)uVar74;
              auVar31._0_8_ =
                   CONCAT44((fVar34 * fVar42 + fVar68 * (float)((ulong)uVar71 >> 0x20) * 0.0 +
                            fVar68 * fVar62 * (float)((ulong)uVar72 >> 0x20)) -
                            fVar66 * (float)((ulong)uVar74 >> 0x20),fVar28);
              auVar31._8_4_ =
                   (fVar23 * (float)uVar29 + fVar69 * (float)uVar65 * (float)uVar73 +
                   fVar69 * (float)uVar16 * 0.0) - (float)uVar38 * (float)uVar75;
              auVar31._12_4_ =
                   (fVar36 * fVar42 + fVar70 * fVar66 * (float)((ulong)uVar73 >> 0x20) +
                   fVar70 * (float)((ulong)uVar16 >> 0x20) * 0.0) -
                   fVar62 * (float)((ulong)uVar75 >> 0x20);
              uVar65 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd4f90);
              uVar73 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd5120);
              uVar72 = a64_TBL(ZEXT816(0),auVar46,DAT_01cd5418);
              uVar38 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd50f8);
              uVar29 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd5418);
              uVar71 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd5270);
              auVar32._8_8_ = auVar31._0_8_;
              auVar32._0_8_ = auVar31._0_8_;
              uVar16 = a64_TBL(ZEXT816(0),auVar32,DAT_01cd50b0);
              fVar28 = ((float)uVar11 * fVar28 + fVar67 * fVar35 * (float)uVar65 +
                       fVar67 * (float)uVar72 * (float)uVar38) - (float)uVar15 * (float)uVar29;
              fVar34 = ((float)uVar11 * auVar31._8_4_ + fVar69 * (float)uVar15 * (float)uVar73 +
                       fVar69 * fVar35 * (float)uVar16) - (float)uVar72 * (float)uVar71;
              auVar40._0_4_ = fVar28 * fVar28;
              auVar40._4_4_ = 0;
              auVar40._8_4_ = fVar34 * fVar34;
              auVar40._12_4_ = 0;
              auVar46 = NEON_ext(auVar40,auVar40,8,1);
              fVar36 = auVar46._0_4_ + auVar40._0_4_;
              fVar42 = auVar46._4_4_ + 0.0;
              fVar23 = fVar36 + fVar42;
              fVar36 = fVar36 + fVar42;
              auVar41._8_8_ = CONCAT44(fVar36,fVar23);
              auVar41._0_8_ = CONCAT44(fVar36,fVar23);
              auVar46 = NEON_frsqrte(auVar41,4);
              auVar48._0_4_ = auVar46._0_4_ * fVar23;
              auVar48._4_4_ = auVar46._4_4_ * fVar36;
              auVar48._8_4_ = auVar46._8_4_ * fVar23;
              auVar48._12_4_ = auVar46._12_4_ * fVar36;
              auVar39 = NEON_frsqrts(auVar46,auVar48,4);
              auVar47._0_4_ = auVar46._0_4_ * auVar39._0_4_;
              auVar47._4_4_ = auVar46._4_4_ * auVar39._4_4_;
              auVar47._8_4_ = auVar46._8_4_ * auVar39._8_4_;
              auVar47._12_4_ = auVar46._12_4_ * auVar39._12_4_;
              auVar49._0_4_ = fVar23 * auVar47._0_4_;
              auVar49._4_4_ = fVar36 * auVar47._4_4_;
              auVar49._8_4_ = fVar23 * auVar47._8_4_;
              auVar49._12_4_ = fVar36 * auVar47._12_4_;
              iVar37 = -(uint)(fVar23 == 0.0);
              iVar43 = -(uint)(fVar36 == 0.0);
              iVar44 = -(uint)(fVar23 == 0.0);
              iVar45 = -(uint)(fVar36 == 0.0);
              auVar46 = NEON_frsqrts(auVar47,auVar49,4);
              fVar28 = auVar47._0_4_ * auVar46._0_4_ * fVar28;
              fVar23 = auVar47._4_4_ * auVar46._4_4_ * 0.0;
              fVar34 = auVar47._8_4_ * auVar46._8_4_ * fVar34;
              fVar36 = auVar47._12_4_ * auVar46._12_4_ * 0.0;
              fVar28 = (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                                       CONCAT12((byte)((uint)fVar28 >> 0x10) &
                                                ~(byte)((uint)iVar37 >> 0x10),
                                                CONCAT11((byte)((uint)fVar28 >> 8) &
                                                         ~(byte)((uint)iVar37 >> 8),
                                                         SUB41(fVar28,0) & ~(byte)iVar37)));
              auVar30._0_8_ =
                   CONCAT17((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                            CONCAT16((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                     CONCAT15((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar43 >> 8)
                                              ,CONCAT14(SUB41(fVar23,0) & ~(byte)iVar43,fVar28))));
              auVar30[8] = SUB41(fVar34,0) & ~(byte)iVar44;
              auVar30[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar44 >> 8);
              auVar30[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10);
              auVar30[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18);
              auVar33[0xc] = SUB41(fVar36,0) & ~(byte)iVar45;
              auVar33._0_12_ = auVar30;
              auVar33[0xd] = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar45 >> 8);
              auVar33[0xe] = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
              auVar33[0xf] = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
              fVar28 = (0.0 - fVar24) * fVar28;
              fVar24 = (0.0 - fVar25) * (float)((ulong)auVar30._0_8_ >> 0x20);
              fVar25 = (0.0 - fVar27) * auVar30._8_4_;
              fVar27 = (0.0 - fVar26) * auVar33._12_4_;
              auVar39._4_4_ = fVar24;
              auVar39._0_4_ = fVar28;
              auVar39._8_4_ = fVar25;
              auVar39._12_4_ = fVar27;
              auVar4._4_4_ = fVar24;
              auVar4._0_4_ = fVar28;
              auVar4._8_4_ = fVar25;
              auVar4._12_4_ = fVar27;
              auVar46 = NEON_ext(auVar39,auVar4,8,1);
              fVar25 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
              uVar18 = (ulong)(*(float *)(param_1 + 0xec) *
                              (fVar25 / *(float *)PTR_FloatDegree180_027194f0));
              if (*(float *)(PTR_SinCosSampleTable_02715d20 + (uVar18 >> 0x18 & 0xff) * 0x10) +
                  *(float *)((long)(PTR_SinCosSampleTable_02715d20 + (uVar18 >> 0x18 & 0xff) * 0x10)
                            + 8) * (float)((uint)uVar18 & 0xffffff) * DAT_01d4bc78 <=
                  auVar46._0_4_ + fVar28 + auVar46._4_4_ + fVar24) goto LAB_00de8d4c;
            }
          }
        }
      }
    }
    uVar16 = 1;
  }
  else {
LAB_00de8d4c:
    uVar16 = 0;
  }
  return uVar16;
}


