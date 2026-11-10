/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001a5d00; name: FUN_001a5d00
 */


void FUN_001a5d00(long param_1,long param_2,long param_3,long param_4,uint param_5,long param_6,
                 undefined8 *param_7)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 (*pauVar3) [12];
  undefined1 (*pauVar4) [16];
  float *pfVar5;
  undefined1 auVar6 [12];
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  float *pfVar15;
  ulong uVar16;
  float *pfVar17;
  int iVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar75;
  float fVar76;
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar84 [16];
  float fVar89;
  float fVar90;
  
  if (param_5 != 0) {
    uVar19 = 0;
    do {
      while( true ) {
        fVar51 = 0.0;
        fVar50 = 0.0;
        uVar16 = (ulong)*(uint *)(param_4 + uVar19 * 4);
        iVar18 = (int)uVar19;
        uVar7 = *(uint *)(param_4 + (ulong)(iVar18 + 1) * 4);
        pfVar11 = (float *)(param_2 + uVar16 * 0x20);
        uVar10 = uVar7 >> 2;
        if (uVar10 != 0) break;
        uVar19 = (ulong)(iVar18 + 2U);
        if ((uVar7 & 3) != 0) goto LAB_001a5fa0;
LAB_001a5f88:
        if (param_5 <= (uint)uVar19) {
          return;
        }
      }
      fVar47 = (float)((ulong)*(undefined8 *)(pfVar11 + 4) >> 0x20);
      fVar20 = (float)*(undefined8 *)pfVar11;
      fVar23 = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
      fVar25 = (float)*(undefined8 *)(pfVar11 + 2);
      fVar58 = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20);
      fVar54 = (float)param_7[4];
      fVar55 = (float)((ulong)param_7[4] >> 0x20);
      fVar56 = (float)param_7[5];
      fVar57 = (float)((ulong)param_7[5] >> 0x20);
      fVar21 = (float)param_7[0xe];
      auVar28._0_4_ = fVar58 - fVar21;
      fVar24 = (float)((ulong)param_7[0xe] >> 0x20);
      auVar28._4_4_ = fVar58 - fVar24;
      fVar26 = (float)param_7[0xf];
      auVar28._8_4_ = fVar58 - fVar26;
      fVar27 = (float)((ulong)param_7[0xf] >> 0x20);
      auVar28._12_4_ = fVar58 - fVar27;
      fVar43 = (float)*(undefined8 *)(pfVar11 + 4);
      auVar28 = NEON_fmax(auVar28,ZEXT816(0),4);
      fVar22 = (float)*(undefined8 *)(pfVar11 + 6);
      fVar52 = 0.0;
      fVar53 = 0.0;
      uVar13 = iVar18 + 5;
      fVar58 = fVar50;
      fVar59 = fVar51;
      fVar60 = fVar52;
      fVar61 = fVar53;
      fVar62 = fVar50;
      fVar63 = fVar51;
      fVar64 = fVar52;
      fVar65 = fVar53;
      do {
        pauVar1 = (undefined1 (*) [12])
                  (param_3 + (ulong)*(uint *)(param_4 + (ulong)(uVar13 - 3) * 4) * 0x20);
        pauVar2 = (undefined1 (*) [12])
                  (param_3 + (ulong)*(uint *)(param_4 + (ulong)(uVar13 - 2) * 4) * 0x20);
        pauVar3 = (undefined1 (*) [12])
                  (param_3 + (ulong)*(uint *)(param_4 + (ulong)(uVar13 - 1) * 4) * 0x20);
        pauVar4 = (undefined1 (*) [16])
                  (param_3 + (ulong)*(uint *)(param_4 + (ulong)uVar13 * 4) * 0x20);
        auVar74 = *pauVar4;
        fVar35 = (float)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
        auVar6 = *(undefined1 (*) [12])(pauVar1[1] + 4);
        fVar36 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
        uVar13 = uVar13 + 4;
        uVar10 = uVar10 - 1;
        fVar33 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
        fVar39 = SUB124(*pauVar2,8);
        auVar84._4_12_ = auVar74._4_12_;
        auVar84._0_4_ = fVar39;
        auVar68._12_4_ = auVar74._12_4_;
        auVar68._0_8_ = auVar84._0_8_;
        auVar68._8_4_ = fVar36;
        auVar67._8_8_ = auVar68._8_8_;
        auVar67._4_4_ = auVar74._8_4_;
        auVar67._0_4_ = fVar39;
        auVar69._0_12_ = auVar67._0_12_;
        auVar69._12_4_ = auVar68._12_4_;
        auVar70._4_12_ = auVar69._4_12_;
        auVar70._0_4_ = fVar35;
        auVar72._0_8_ = auVar70._0_8_;
        auVar72._8_4_ = fVar33;
        auVar72._12_4_ = auVar68._12_4_;
        auVar71._8_8_ = auVar72._8_8_;
        auVar71._4_4_ = fVar36;
        auVar71._0_4_ = fVar35;
        auVar73._0_12_ = auVar71._0_12_;
        auVar73._12_4_ = auVar68._12_4_;
        fVar78 = fVar20 - SUB124(*pauVar1,0);
        fVar79 = fVar20 - SUB124(*pauVar2,0);
        fVar80 = fVar20 - SUB124(*pauVar3,0);
        fVar81 = fVar20 - auVar74._0_4_;
        fVar29 = fVar23 - SUB124(*pauVar1,4);
        fVar30 = fVar23 - SUB124(*pauVar2,4);
        fVar31 = fVar23 - SUB124(*pauVar3,4);
        fVar32 = fVar23 - auVar74._4_4_;
        fVar38 = fVar25 - SUB124(*pauVar1,8);
        fVar39 = fVar25 - fVar39;
        fVar40 = fVar25 - SUB124(*pauVar3,8);
        fVar41 = fVar25 - auVar74._8_4_;
        auVar49 = NEON_frecpe(auVar73,4);
        auVar34._0_4_ = fVar35 - fVar21;
        auVar34._4_4_ = fVar36 - fVar24;
        auVar34._8_4_ = fVar33 - fVar26;
        auVar34._12_4_ = auVar68._12_4_ - fVar27;
        fVar42 = (float)param_7[2] * (fVar38 * fVar38 + fVar29 * fVar29 + fVar78 * fVar78);
        fVar44 = (float)((ulong)param_7[2] >> 0x20) *
                 (fVar39 * fVar39 + fVar30 * fVar30 + fVar79 * fVar79);
        fVar45 = (float)param_7[3] * (fVar40 * fVar40 + fVar31 * fVar31 + fVar80 * fVar80);
        fVar46 = (float)((ulong)param_7[3] >> 0x20) *
                 (fVar41 * fVar41 + fVar32 * fVar32 + fVar81 * fVar81);
        auVar34 = NEON_fmax(auVar34,ZEXT816(0),4);
        auVar74._4_4_ = fVar44;
        auVar74._0_4_ = fVar42;
        auVar74._8_4_ = fVar45;
        auVar74._12_4_ = fVar46;
        auVar84 = NEON_frsqrte(auVar74,4);
        auVar74 = NEON_frecps(auVar49,auVar73,4);
        fVar66 = auVar49._0_4_ * auVar74._0_4_;
        fVar75 = auVar49._4_4_ * auVar74._4_4_;
        fVar76 = auVar49._8_4_ * auVar74._8_4_;
        fVar77 = auVar49._12_4_ * auVar74._12_4_;
        fVar82 = auVar84._0_4_;
        auVar48._0_4_ = fVar82 * fVar82;
        fVar85 = auVar84._4_4_;
        auVar48._4_4_ = fVar85 * fVar85;
        fVar87 = auVar84._8_4_;
        auVar48._8_4_ = fVar87 * fVar87;
        fVar89 = auVar84._12_4_;
        auVar48._12_4_ = fVar89 * fVar89;
        auVar49._4_4_ = fVar44;
        auVar49._0_4_ = fVar42;
        auVar49._8_4_ = fVar45;
        auVar49._12_4_ = fVar46;
        auVar74 = NEON_frsqrts(auVar48,auVar49,4);
        fVar82 = fVar82 * auVar74._0_4_;
        fVar85 = fVar85 * auVar74._4_4_;
        fVar87 = fVar87 * auVar74._8_4_;
        fVar89 = fVar89 * auVar74._12_4_;
        fVar42 = fVar82 * fVar42;
        fVar44 = fVar85 * fVar44;
        fVar45 = fVar87 * fVar45;
        fVar46 = fVar89 * fVar46;
        fVar33 = (float)*param_7;
        fVar83 = fVar33 * (fVar54 - fVar42) * (float)param_7[0xc];
        fVar35 = (float)((ulong)*param_7 >> 0x20);
        fVar86 = fVar35 * (fVar55 - fVar44) * (float)((ulong)param_7[0xc] >> 0x20);
        fVar36 = (float)param_7[1];
        fVar88 = fVar36 * (fVar56 - fVar45) * (float)param_7[0xd];
        fVar37 = (float)((ulong)param_7[1] >> 0x20);
        fVar90 = fVar37 * (fVar57 - fVar46) * (float)((ulong)param_7[0xd] >> 0x20);
        fVar33 = fVar33 * (auVar28._0_4_ + auVar34._0_4_) *
                          (float)param_7[10] *
                          ((fVar42 + fVar82 * (float)param_7[6]) - (fVar54 + fVar54));
        fVar35 = fVar35 * (auVar28._4_4_ + auVar34._4_4_) *
                          (float)((ulong)param_7[10] >> 0x20) *
                          ((fVar44 + fVar85 * (float)((ulong)param_7[6] >> 0x20)) -
                          (fVar55 + fVar55));
        fVar36 = fVar36 * (auVar28._8_4_ + auVar34._8_4_) *
                          (float)param_7[0xb] *
                          ((fVar45 + fVar87 * (float)param_7[7]) - (fVar56 + fVar56));
        fVar37 = fVar37 * (auVar28._12_4_ + auVar34._12_4_) *
                          (float)((ulong)param_7[0xb] >> 0x20) *
                          ((fVar46 + fVar89 * (float)((ulong)param_7[7] >> 0x20)) -
                          (fVar57 + fVar57));
        fVar62 = fVar62 + fVar66 * ((auVar6._0_4_ - fVar43) * fVar83 + fVar78 * fVar33);
        fVar63 = fVar63 + fVar75 * ((*(float *)(pauVar2[1] + 4) - fVar43) * fVar86 + fVar79 * fVar35
                                   );
        fVar64 = fVar64 + fVar76 * ((*(float *)(pauVar3[1] + 4) - fVar43) * fVar88 + fVar80 * fVar36
                                   );
        fVar65 = fVar65 + fVar77 * ((*(float *)pauVar4[1] - fVar43) * fVar90 + fVar81 * fVar37);
        fVar50 = fVar50 + fVar66 * ((auVar6._4_4_ - fVar47) * fVar83 + fVar29 * fVar33);
        fVar51 = fVar51 + fVar75 * ((*(float *)(pauVar2[1] + 8) - fVar47) * fVar86 + fVar30 * fVar35
                                   );
        fVar52 = fVar52 + fVar76 * ((*(float *)(pauVar3[1] + 8) - fVar47) * fVar88 + fVar31 * fVar36
                                   );
        fVar53 = fVar53 + fVar77 * ((*(float *)(pauVar4[1] + 4) - fVar47) * fVar90 + fVar32 * fVar37
                                   );
        fVar58 = fVar58 + fVar66 * ((SUB124(*(undefined1 (*) [12])(pauVar1[1] + 4),8) - fVar22) *
                                    fVar83 + fVar38 * fVar33);
        fVar59 = fVar59 + fVar75 * ((*(float *)pauVar2[2] - fVar22) * fVar86 + fVar39 * fVar35);
        fVar60 = fVar60 + fVar76 * ((*(float *)pauVar3[2] - fVar22) * fVar88 + fVar40 * fVar36);
        fVar61 = fVar61 + fVar77 * ((*(float *)(pauVar4[1] + 8) - fVar22) * fVar90 + fVar41 * fVar37
                                   );
      } while (uVar10 != 0);
      uVar19 = (ulong)(iVar18 + 2U + (uVar7 & 0xfffffffc));
      pfVar8 = (float *)(param_1 + uVar16 * 0xc);
      *pfVar8 = fVar62 + fVar63 + fVar64 + fVar65 + *pfVar8;
      pfVar8[1] = fVar50 + fVar51 + fVar52 + fVar53 + pfVar8[1];
      pfVar8[2] = fVar58 + fVar59 + fVar60 + fVar61 + pfVar8[2];
      if ((uVar7 & 3) == 0) goto LAB_001a5f88;
LAB_001a5fa0:
      uVar7 = uVar7 & 3;
      pfVar8 = (float *)(param_3 + (ulong)*(uint *)(param_4 + uVar19 * 4) * 0x20);
      fVar64 = *pfVar11;
      fVar65 = pfVar11[1];
      fVar43 = pfVar11[2];
      fVar63 = fVar65 - pfVar8[1];
      fVar50 = fVar64 - *pfVar8;
      auVar28 = ZEXT416((uint)fVar50);
      fVar47 = fVar43 - pfVar8[2];
      fVar60 = *(float *)(param_6 + 0x34) * (fVar50 * fVar50 + fVar63 * fVar63 + fVar47 * fVar47);
      fVar50 = sqrtf(fVar60);
      pfVar15 = pfVar11 + 6;
      fVar51 = *pfVar15;
      fVar60 = (1.0 / fVar50) * fVar60;
      pfVar12 = pfVar11 + 3;
      pfVar9 = pfVar11 + 4;
      pfVar14 = (float *)(param_1 + uVar16 * 0xc);
      pfVar11 = pfVar11 + 5;
      fVar59 = *pfVar11;
      fVar62 = *(float *)(param_6 + 0x30);
      fVar58 = *pfVar12 - *(float *)(param_6 + 0x2c);
      fVar61 = pfVar8[3] - *(float *)(param_6 + 0x2c);
      if (fVar58 <= 0.0) {
        fVar58 = 0.0;
      }
      if (fVar61 <= 0.0) {
        fVar61 = 0.0;
      }
      fVar22 = *(float *)(param_6 + 0x18);
      fVar50 = (fVar58 + fVar61) *
               *(float *)(param_6 + 0x24) *
               (fVar60 + ((1.0 / fVar50) * *(float *)(param_6 + 0x1c) - (fVar22 + fVar22)));
      fVar60 = (fVar22 - fVar60) * *(float *)(param_6 + 0x28);
      fVar58 = 1.0 / pfVar8[3];
      pfVar17 = pfVar14 + 1;
      *pfVar14 = fVar58 * (fVar62 * auVar28._0_4_ * fVar50 + fVar60 * fVar62 * (pfVar8[4] - *pfVar9)
                          ) + *pfVar14;
      fVar61 = pfVar8[6];
      *pfVar17 = fVar58 * (fVar62 * fVar63 * fVar50 + fVar60 * fVar62 * (pfVar8[5] - fVar59)) +
                 *pfVar17;
      pfVar8 = pfVar14 + 2;
      *pfVar8 = fVar58 * (fVar62 * fVar47 * fVar50 + fVar60 * fVar62 * (fVar61 - fVar51)) + *pfVar8;
      iVar18 = (int)uVar19;
      if (uVar7 != 1) {
        pfVar5 = (float *)(param_3 + (ulong)*(uint *)(param_4 + (ulong)(iVar18 + 1) * 4) * 0x20);
        fVar62 = fVar65 - pfVar5[1];
        fVar61 = fVar64 - *pfVar5;
        fVar50 = fVar43 - pfVar5[2];
        auVar28 = ZEXT416((uint)fVar50);
        fVar51 = *(float *)(param_6 + 0x34) * (fVar61 * fVar61 + fVar62 * fVar62 + fVar50 * fVar50);
        fVar50 = sqrtf(fVar51);
        fVar60 = *(float *)(param_6 + 0x30);
        fVar58 = *pfVar12 - *(float *)(param_6 + 0x2c);
        fVar59 = pfVar5[3] - *(float *)(param_6 + 0x2c);
        if (fVar58 <= 0.0) {
          fVar58 = 0.0;
        }
        if (fVar59 <= 0.0) {
          fVar59 = 0.0;
        }
        fVar63 = *(float *)(param_6 + 0x18);
        fVar51 = (1.0 / fVar50) * fVar51;
        fVar47 = (fVar63 - fVar51) * *(float *)(param_6 + 0x28);
        fVar22 = *pfVar11;
        fVar50 = (fVar58 + fVar59) *
                 *(float *)(param_6 + 0x24) *
                 (fVar51 + ((1.0 / fVar50) * *(float *)(param_6 + 0x1c) - (fVar63 + fVar63)));
        fVar58 = pfVar5[5];
        fVar63 = pfVar5[6];
        fVar59 = *pfVar15;
        fVar51 = 1.0 / pfVar5[3];
        *pfVar14 = fVar51 * (fVar60 * fVar61 * fVar50 + fVar47 * fVar60 * (pfVar5[4] - *pfVar9)) +
                   *pfVar14;
        *pfVar17 = fVar51 * (fVar60 * fVar62 * fVar50 + fVar47 * fVar60 * (fVar58 - fVar22)) +
                   *pfVar17;
        *pfVar8 = fVar51 * (fVar60 * auVar28._0_4_ * fVar50 + fVar47 * fVar60 * (fVar63 - fVar59)) +
                  *pfVar8;
        if (uVar7 != 2) {
          pfVar5 = (float *)(param_3 + (ulong)*(uint *)(param_4 + (ulong)(iVar18 + 2) * 4) * 0x20);
          fVar64 = fVar64 - *pfVar5;
          fVar65 = fVar65 - pfVar5[1];
          fVar43 = fVar43 - pfVar5[2];
          fVar51 = *(float *)(param_6 + 0x34) *
                   (fVar64 * fVar64 + fVar65 * fVar65 + fVar43 * fVar43);
          fVar50 = sqrtf(fVar51);
          fVar60 = *(float *)(param_6 + 0x30);
          fVar58 = *pfVar12 - *(float *)(param_6 + 0x2c);
          fVar59 = pfVar5[3] - *(float *)(param_6 + 0x2c);
          if (fVar58 <= 0.0) {
            fVar58 = 0.0;
          }
          if (fVar59 <= 0.0) {
            fVar59 = 0.0;
          }
          fVar61 = *(float *)(param_6 + 0x18);
          fVar51 = (1.0 / fVar50) * fVar51;
          fVar62 = (fVar61 - fVar51) * *(float *)(param_6 + 0x28);
          fVar50 = (fVar58 + fVar59) *
                   *(float *)(param_6 + 0x24) *
                   (fVar51 + ((1.0 / fVar50) * *(float *)(param_6 + 0x1c) - (fVar61 + fVar61)));
          fVar59 = pfVar5[5];
          fVar63 = pfVar5[6];
          fVar58 = *pfVar11;
          fVar61 = *pfVar15;
          fVar51 = 1.0 / pfVar5[3];
          *pfVar14 = fVar51 * (fVar60 * fVar64 * fVar50 + fVar62 * fVar60 * (pfVar5[4] - *pfVar9)) +
                     *pfVar14;
          *pfVar17 = fVar51 * (fVar60 * fVar65 * fVar50 + fVar62 * fVar60 * (fVar59 - fVar58)) +
                     *pfVar17;
          *pfVar8 = fVar51 * (fVar60 * fVar43 * fVar50 + fVar62 * fVar60 * (fVar63 - fVar61)) +
                    *pfVar8;
        }
      }
      uVar19 = (ulong)(iVar18 + uVar7);
    } while (iVar18 + uVar7 < param_5);
  }
  return;
}


