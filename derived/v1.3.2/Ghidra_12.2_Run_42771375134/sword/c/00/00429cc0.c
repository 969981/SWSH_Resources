/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00429cc0; name: FUN_00429cc0
 */


void FUN_00429cc0(uint *param_1,float *param_2,uint param_3,long *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float *pfVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar51;
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 in_q17 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  
  auVar22._0_4_ = (float)param_1[0x18];
  fVar23 = (float)param_1[0x19];
  auVar22._4_4_ = (float)param_1[0x1b];
  fVar27 = -(float)param_1[0x1a];
  fVar28 = -(float)param_1[0x1d];
  fVar30 = -(float)param_1[0x20];
  fVar24 = (float)param_1[0x1c];
  auVar22._8_4_ = (float)param_1[0x1e];
  fVar29 = -(float)param_1[0x23];
  auVar22._12_4_ = (float)param_1[0x21];
  fVar25 = (float)param_1[0x1f];
  uVar9 = *param_1;
  fVar26 = (float)param_1[0x22];
  uVar10 = param_1[4];
  uVar11 = param_1[6];
  uVar13 = param_1[10];
  uVar14 = param_1[0xc];
  uVar15 = param_1[0x10];
  uVar16 = param_1[0x12];
  uVar17 = param_1[0x16];
  do {
    while( true ) {
      uVar1 = param_3;
      if (uVar9 - uVar10 <= param_3) {
        uVar1 = uVar9 - uVar10;
      }
      if (uVar11 - uVar13 <= uVar1) {
        uVar1 = uVar11 - uVar13;
      }
      if (uVar14 - uVar15 <= uVar1) {
        uVar1 = uVar14 - uVar15;
      }
      if (uVar16 - uVar17 <= uVar1) {
        uVar1 = uVar16 - uVar17;
      }
      uVar18 = uVar17;
      if (uVar1 >> 2 == 0) break;
      uVar5 = (ulong)((uVar1 >> 2) - 1);
      uVar6 = uVar5;
      pfVar7 = param_2;
      uVar8 = uVar15;
      uVar20 = uVar13;
      uVar21 = uVar10;
      while( true ) {
        auVar61 = *(undefined1 (*) [16])(*(long *)(param_1 + 2) + (ulong)uVar21 * 4);
        auVar35 = *(undefined1 (*) [16])(*(long *)(param_1 + 8) + (ulong)uVar20 * 4);
        auVar34 = *(undefined1 (*) [16])(*(long *)(param_1 + 0xe) + (ulong)uVar8 * 4);
        fVar74 = auVar61._0_4_;
        auVar67._4_12_ = in_q17._4_12_;
        auVar67._0_4_ = fVar74;
        auVar69._12_4_ = in_q17._12_4_;
        auVar69._0_8_ = auVar67._0_8_;
        auVar69._8_4_ = auVar61._8_4_;
        auVar68._8_8_ = auVar69._8_8_;
        auVar68._4_4_ = auVar35._0_4_;
        auVar68._0_4_ = fVar74;
        auVar70._0_12_ = auVar68._0_12_;
        auVar70._12_4_ = auVar35._8_4_;
        pfVar12 = (float *)(*(long *)(param_1 + 0x14) + (ulong)uVar18 * 4);
        fVar41 = auVar61._4_4_;
        auVar56._4_12_ = auVar61._4_12_;
        auVar56._0_4_ = fVar41;
        auVar62._0_8_ = auVar56._0_8_;
        auVar62._8_4_ = auVar61._12_4_;
        auVar62._12_4_ = auVar61._12_4_;
        auVar61._8_8_ = auVar62._8_8_;
        auVar61._4_4_ = auVar35._4_4_;
        auVar61._0_4_ = fVar41;
        auVar33._0_12_ = auVar61._0_12_;
        auVar33._12_4_ = auVar35._12_4_;
        fVar75 = auVar34._0_4_;
        auVar42._4_12_ = auVar35._4_12_;
        auVar42._0_4_ = fVar75;
        auVar44._0_8_ = auVar42._0_8_;
        auVar44._8_4_ = auVar34._8_4_;
        auVar44._12_4_ = auVar35._12_4_;
        auVar43._8_8_ = auVar44._8_8_;
        auVar43._4_4_ = *pfVar12;
        auVar43._0_4_ = fVar75;
        auVar45._0_12_ = auVar43._0_12_;
        auVar45._12_4_ = pfVar12[2];
        fVar31 = auVar34._4_4_;
        auVar52._4_12_ = auVar34._4_12_;
        auVar52._0_4_ = fVar31;
        auVar54._0_8_ = auVar52._0_8_;
        auVar54._8_4_ = auVar34._12_4_;
        auVar54._12_4_ = auVar34._12_4_;
        auVar53._8_8_ = auVar54._8_8_;
        auVar53._4_4_ = pfVar12[1];
        auVar53._0_4_ = fVar31;
        auVar55._0_12_ = auVar53._0_12_;
        auVar55._12_4_ = pfVar12[3];
        auVar61 = NEON_ext(auVar45,auVar70,8,1);
        auVar62 = NEON_ext(auVar70,auVar61,8,1);
        auVar56 = NEON_ext(auVar55,auVar33,8,1);
        auVar61 = NEON_ext(auVar33,auVar56,8,1);
        fVar72 = auVar22._0_4_ * fVar27 + fVar74 * fVar23;
        fVar73 = auVar22._4_4_ * fVar28 + auVar35._0_4_ * fVar24;
        fVar74 = auVar22._8_4_ * fVar30 + fVar75 * fVar25;
        fVar75 = auVar22._12_4_ * fVar29 + *pfVar12 * fVar26;
        pfVar19 = (float *)*param_4;
        auVar34._0_4_ = fVar41 * fVar23 + fVar72 * fVar27;
        auVar34._4_4_ = auVar35._4_4_ * fVar24 + fVar73 * fVar28;
        auVar34._8_4_ = fVar31 * fVar25 + fVar74 * fVar30;
        auVar34._12_4_ = pfVar12[1] * fVar26 + fVar75 * fVar29;
        auVar65._12_4_ = auVar62._12_4_;
        auVar46._0_4_ = auVar62._0_4_ * fVar23 + auVar34._0_4_ * fVar27;
        auVar46._4_4_ = auVar62._4_4_ * fVar24 + auVar34._4_4_ * fVar28;
        auVar46._8_4_ = auVar62._8_4_ * fVar25 + auVar34._8_4_ * fVar30;
        auVar46._12_4_ = auVar65._12_4_ * fVar26 + auVar34._12_4_ * fVar29;
        auVar22._0_4_ = auVar61._0_4_ * fVar23 + auVar46._0_4_ * fVar27;
        auVar22._4_4_ = auVar61._4_4_ * fVar24 + auVar46._4_4_ * fVar28;
        auVar22._8_4_ = auVar61._8_4_ * fVar25 + auVar46._8_4_ * fVar30;
        auVar22._12_4_ = auVar61._12_4_ * fVar26 + auVar46._12_4_ * fVar29;
        auVar57._4_12_ = auVar56._4_12_;
        auVar57._0_4_ = fVar72;
        auVar59._12_4_ = auVar56._12_4_;
        auVar59._0_8_ = auVar57._0_8_;
        auVar59._8_4_ = fVar74;
        auVar58._8_8_ = auVar59._8_8_;
        auVar58._4_4_ = auVar34._0_4_;
        auVar58._0_4_ = fVar72;
        auVar60._0_12_ = auVar58._0_12_;
        auVar60._12_4_ = auVar34._8_4_;
        auVar35._4_12_ = auVar34._4_12_;
        auVar35._0_4_ = fVar73;
        auVar37._0_8_ = auVar35._0_8_;
        auVar37._8_4_ = fVar75;
        auVar37._12_4_ = auVar34._12_4_;
        auVar36._8_8_ = auVar37._8_8_;
        auVar36._4_4_ = auVar34._4_4_;
        auVar36._0_4_ = fVar73;
        auVar38._0_12_ = auVar36._0_12_;
        auVar38._12_4_ = auVar34._12_4_;
        uVar4 = *(undefined8 *)(pfVar19 + 2);
        uVar3 = *(undefined8 *)pfVar19;
        auVar63._4_12_ = auVar62._4_12_;
        auVar63._0_4_ = auVar46._0_4_;
        auVar65._0_8_ = auVar63._0_8_;
        auVar65._8_4_ = auVar46._8_4_;
        auVar64._8_8_ = auVar65._8_8_;
        auVar64._4_4_ = auVar22._0_4_;
        auVar64._0_4_ = auVar46._0_4_;
        auVar66._0_12_ = auVar64._0_12_;
        auVar66._12_4_ = auVar22._8_4_;
        auVar47._4_12_ = auVar46._4_12_;
        auVar47._0_4_ = auVar46._4_4_;
        auVar49._0_8_ = auVar47._0_8_;
        auVar49._8_4_ = auVar46._12_4_;
        auVar49._12_4_ = auVar46._12_4_;
        auVar48._8_8_ = auVar49._8_8_;
        auVar48._4_4_ = auVar22._4_4_;
        auVar48._0_4_ = auVar46._4_4_;
        auVar50._0_12_ = auVar48._0_12_;
        auVar50._12_4_ = auVar22._12_4_;
        auVar61 = NEON_ext(auVar66,auVar60,8,1);
        in_q17 = NEON_ext(auVar60,auVar61,8,1);
        fVar32 = in_q17._0_4_;
        fVar40 = in_q17._4_4_;
        fVar51 = in_q17._8_4_;
        fVar71 = in_q17._12_4_;
        auVar61 = NEON_ext(auVar50,auVar38,8,1);
        auVar61 = NEON_ext(auVar38,auVar61,8,1);
        fVar74 = auVar61._0_4_;
        fVar75 = auVar61._4_4_;
        fVar41 = auVar61._8_4_;
        fVar31 = auVar61._12_4_;
        pfVar19[2] = ((auVar46._0_4_ + fVar51 + (float)uVar4) - auVar46._4_4_) - fVar41;
        pfVar19[3] = ((auVar22._0_4_ + fVar71 + (float)((ulong)uVar4 >> 0x20)) - auVar22._4_4_) -
                     fVar31;
        *pfVar19 = ((fVar72 + fVar32 + (float)uVar3) - fVar73) - fVar74;
        pfVar19[1] = ((auVar34._0_4_ + fVar40 + (float)((ulong)uVar3 >> 0x20)) - auVar34._4_4_) -
                     fVar75;
        puVar2 = (undefined8 *)param_4[1];
        *param_4 = *param_4 + 0x10;
        puVar2[1] = CONCAT44(((auVar22._4_4_ + auVar22._0_4_ + (float)((ulong)puVar2[1] >> 0x20)) -
                             fVar71) - fVar31,
                             ((auVar46._4_4_ + auVar46._0_4_ + (float)puVar2[1]) - fVar51) - fVar41)
        ;
        *puVar2 = CONCAT44(((auVar34._4_4_ + auVar34._0_4_ + (float)((ulong)*puVar2 >> 0x20)) -
                           fVar40) - fVar75,((fVar73 + fVar72 + (float)*puVar2) - fVar32) - fVar74);
        puVar2 = (undefined8 *)param_4[2];
        param_4[1] = param_4[1] + 0x10;
        puVar2[1] = CONCAT44(((auVar22._0_4_ + fVar31 + (float)((ulong)puVar2[1] >> 0x20)) -
                             auVar22._4_4_) - fVar71,
                             ((auVar46._0_4_ + fVar41 + (float)puVar2[1]) - auVar46._4_4_) - fVar51)
        ;
        *puVar2 = CONCAT44(((auVar34._0_4_ + fVar75 + (float)((ulong)*puVar2 >> 0x20)) -
                           auVar34._4_4_) - fVar40,
                           ((fVar72 + fVar74 + (float)*puVar2) - fVar73) - fVar32);
        param_4[2] = param_4[2] + 0x10;
        fVar76 = (float)*(undefined8 *)pfVar7 + (fVar73 + fVar72 + fVar32 + fVar74) * -0.5;
        fVar77 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20) +
                 (auVar34._4_4_ + auVar34._0_4_ + fVar40 + fVar75) * -0.5;
        fVar78 = (float)*(undefined8 *)(pfVar7 + 2) +
                 (auVar46._4_4_ + auVar46._0_4_ + fVar51 + fVar41) * -0.5;
        fVar79 = (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) +
                 (auVar22._4_4_ + auVar22._0_4_ + fVar71 + fVar31) * -0.5;
        pfVar12 = (float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4);
        pfVar12[2] = fVar78 + auVar46._4_4_;
        pfVar12[3] = fVar79 + auVar22._4_4_;
        *pfVar12 = fVar76 + fVar73;
        pfVar12[1] = fVar77 + auVar34._4_4_;
        param_1[4] = param_1[4] + 4;
        pfVar12 = (float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4);
        pfVar12[2] = fVar78 + fVar51;
        pfVar12[3] = fVar79 + fVar71;
        *pfVar12 = fVar76 + fVar32;
        pfVar12[1] = fVar77 + fVar40;
        param_1[10] = param_1[10] + 4;
        pfVar12 = (float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4);
        pfVar12[2] = fVar78 + fVar41;
        pfVar12[3] = fVar79 + fVar31;
        *pfVar12 = fVar76 + fVar74;
        pfVar12[1] = fVar77 + fVar75;
        param_1[0x10] = param_1[0x10] + 4;
        pfVar12 = (float *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4);
        pfVar12[2] = fVar78 + auVar46._0_4_;
        pfVar12[3] = fVar79 + auVar22._0_4_;
        *pfVar12 = fVar76 + fVar72;
        pfVar12[1] = fVar77 + auVar34._0_4_;
        uVar18 = param_1[0x16] + 4;
        param_1[0x16] = uVar18;
        if ((int)uVar6 == 0) break;
        uVar21 = param_1[4];
        uVar20 = param_1[10];
        pfVar7 = pfVar7 + 4;
        uVar8 = param_1[0x10];
        uVar6 = (ulong)((int)uVar6 - 1);
      }
      param_2 = param_2 + uVar5 * 4 + 4;
      if ((uVar1 & 0xfffffffc) < uVar1) goto LAB_00429fec;
LAB_00429f90:
      uVar10 = param_1[4];
      uVar9 = *param_1;
      if (uVar10 == uVar9) goto LAB_0042a190;
LAB_00429fa0:
      uVar13 = param_1[10];
      uVar11 = param_1[6];
      if (uVar13 == uVar11) goto LAB_0042a1a8;
LAB_00429fb0:
      uVar15 = param_1[0x10];
      uVar14 = param_1[0xc];
      if (uVar15 == uVar14) goto LAB_0042a1c0;
LAB_00429fc0:
      uVar16 = param_1[0x12];
      uVar17 = uVar18;
      if (uVar18 == uVar16) goto LAB_0042a1d4;
LAB_00429fcc:
      param_3 = param_3 - uVar1;
      if (param_3 == 0) goto LAB_0042a1e8;
    }
    if (uVar1 <= (uVar1 & 0xfffffffc)) goto LAB_00429f90;
LAB_00429fec:
    uVar21 = uVar1 & 0xfffffffc;
    uVar9 = (uVar10 - 1) - uVar9;
    uVar11 = (uVar13 - 1) - uVar11;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    uVar14 = (uVar15 - 1) - uVar14;
    if (uVar9 <= uVar14) {
      uVar9 = uVar14;
    }
    uVar16 = (uVar17 - 1) - uVar16;
    if (uVar9 <= uVar16) {
      uVar9 = uVar16;
    }
    if (uVar9 <= ~param_3) {
      uVar9 = ~param_3;
    }
    uVar9 = (-2 - uVar9) - uVar21;
    pfVar7 = param_2;
    do {
      uVar21 = uVar21 + 1;
      fVar74 = auVar22._4_4_;
      fVar75 = auVar22._8_4_;
      fVar41 = auVar22._12_4_;
      fVar40 = *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4);
      fVar31 = *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4);
      fVar51 = *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4);
      fVar32 = *(float *)(*(long *)(param_1 + 0x14) + (ulong)uVar18 * 4);
      pfVar12 = (float *)*param_4;
      *param_4 = (long)(pfVar12 + 1);
      auVar22._0_4_ = auVar22._0_4_ * fVar27 + fVar40 * fVar23;
      auVar22._4_4_ = fVar74 * fVar28 + fVar51 * fVar24;
      auVar22._8_4_ = fVar75 * fVar30 + fVar31 * fVar25;
      auVar22._12_4_ = fVar41 * fVar29 + fVar32 * fVar26;
      auVar61 = NEON_ext(auVar22,auVar22,8,1);
      fVar41 = auVar61._0_4_ + auVar22._0_4_;
      fVar31 = auVar61._4_4_ + auVar22._4_4_;
      fVar74 = auVar22._0_4_ - auVar61._0_4_;
      fVar75 = auVar22._4_4_ - auVar61._4_4_;
      *pfVar12 = (*pfVar12 - fVar31) + fVar41;
      pfVar12 = (float *)param_4[1];
      param_4[1] = (long)(pfVar12 + 1);
      in_q17 = ZEXT416((uint)*pfVar12);
      *pfVar12 = fVar74 + fVar75 + *pfVar12;
      pfVar12 = (float *)param_4[2];
      param_4[2] = (long)(pfVar12 + 1);
      *pfVar12 = (fVar74 - fVar75) + *pfVar12;
      fVar75 = (fVar41 + fVar31) * -0.5;
      fVar74 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      auVar39._0_4_ = fVar75 + auVar22._0_4_;
      auVar39._4_4_ = fVar75 + auVar22._4_4_;
      auVar39._8_4_ = fVar75 + auVar22._8_4_;
      auVar39._12_4_ = fVar75 + auVar22._12_4_;
      auVar61 = NEON_ext(auVar39,auVar39,4,1);
      *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4) = fVar74 + auVar61._0_4_;
      param_1[4] = param_1[4] + 1;
      *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4) = fVar74 + auVar61._4_4_;
      param_1[10] = param_1[10] + 1;
      *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4) = fVar74 + auVar61._8_4_;
      param_1[0x10] = param_1[0x10] + 1;
      *(float *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4) = fVar74 + auVar61._12_4_;
      uVar18 = param_1[0x16] + 1;
      param_1[0x16] = uVar18;
    } while (uVar21 < uVar1);
    param_2 = param_2 + (ulong)uVar9 + 1;
    uVar10 = param_1[4];
    uVar9 = *param_1;
    if (uVar10 != uVar9) goto LAB_00429fa0;
LAB_0042a190:
    uVar10 = 0;
    param_1[4] = 0;
    uVar13 = param_1[10];
    uVar11 = param_1[6];
    if (uVar13 != uVar11) goto LAB_00429fb0;
LAB_0042a1a8:
    uVar13 = 0;
    param_1[10] = 0;
    uVar15 = param_1[0x10];
    uVar14 = param_1[0xc];
    if (uVar15 != uVar14) goto LAB_00429fc0;
LAB_0042a1c0:
    uVar15 = 0;
    param_1[0x10] = 0;
    uVar16 = param_1[0x12];
    uVar17 = uVar18;
    if (uVar18 != uVar16) goto LAB_00429fcc;
LAB_0042a1d4:
    param_1[0x16] = 0;
    param_3 = param_3 - uVar1;
    uVar17 = 0;
  } while (param_3 != 0);
LAB_0042a1e8:
  param_1[0x18] = auVar22._0_4_;
  param_1[0x1b] = auVar22._4_4_;
  param_1[0x1e] = auVar22._8_4_;
  param_1[0x21] = auVar22._12_4_;
  return;
}


