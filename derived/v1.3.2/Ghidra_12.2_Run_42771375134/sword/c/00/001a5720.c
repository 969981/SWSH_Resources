/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001a5720; name: FUN_001a5720
 */


void FUN_001a5720(long param_1,long param_2,long param_3,long param_4,long param_5,uint param_6,
                 long param_7,undefined8 *param_8)

{
  float *pfVar1;
  undefined1 (*pauVar2) [12];
  undefined1 (*pauVar3) [12];
  undefined1 (*pauVar4) [12];
  uint uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  undefined1 (*pauVar21) [12];
  undefined1 (*pauVar22) [12];
  undefined1 (*pauVar23) [12];
  undefined1 (*pauVar24) [12];
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
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
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  
  if (param_6 != 0) {
    uVar20 = 0;
    do {
      while( true ) {
        uVar13 = (ulong)*(uint *)(param_5 + uVar20 * 4);
        iVar18 = (int)uVar20;
        uVar5 = *(uint *)(param_5 + (ulong)(iVar18 + 1) * 4);
        pfVar1 = (float *)(param_3 + uVar13 * 0x20);
        uVar19 = iVar18 + 2;
        uVar16 = uVar5 >> 2;
        if (uVar16 != 0) break;
        if ((uVar5 & 3) != 0) goto LAB_001a5ac8;
LAB_001a5aac:
        uVar20 = (ulong)uVar19;
        if (param_6 <= uVar19) {
          return;
        }
      }
      fVar84 = 0.0;
      fVar85 = 0.0;
      fVar82 = 0.0;
      fVar83 = 0.0;
      fVar88 = pfVar1[3];
      auVar67._4_4_ = fVar88;
      auVar67._0_4_ = fVar88;
      auVar67._8_4_ = fVar88;
      auVar67._12_4_ = fVar88;
      fVar55 = (float)param_8[0xf];
      fVar34 = (float)((ulong)param_8[0xf] >> 0x20);
      fVar46 = (float)param_8[0xe];
      fVar51 = (float)((ulong)param_8[0xe] >> 0x20);
      fVar40 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
      fVar35 = (float)*(undefined8 *)pfVar1;
      auVar68 = NEON_frecpe(auVar67,4);
      fVar37 = (float)*(undefined8 *)(pfVar1 + 2);
      fVar36 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
      fVar88 = (float)((ulong)*(undefined8 *)(pfVar1 + 2) >> 0x20);
      fVar38 = (float)*(undefined8 *)(pfVar1 + 4);
      uVar81 = param_8[7];
      uVar80 = param_8[6];
      uVar87 = param_8[0xb];
      uVar86 = param_8[10];
      uVar93 = param_8[0xd];
      uVar92 = param_8[0xc];
      auVar66 = NEON_frecps(auVar68,auVar67,4);
      fVar42 = (float)*(undefined8 *)(pfVar1 + 6);
      fVar76 = (float)param_8[4];
      fVar77 = (float)((ulong)param_8[4] >> 0x20);
      fVar78 = (float)param_8[5];
      fVar79 = (float)((ulong)param_8[5] >> 0x20);
      fVar39 = auVar68._0_4_ * auVar66._0_4_;
      fVar41 = auVar68._4_4_ * auVar66._4_4_;
      fVar43 = auVar68._8_4_ * auVar66._8_4_;
      fVar44 = auVar68._12_4_ * auVar66._12_4_;
      auVar66._4_4_ = fVar88 - fVar51;
      auVar66._0_4_ = fVar88 - fVar46;
      auVar66._8_4_ = fVar88 - fVar55;
      auVar66._12_4_ = fVar88 - fVar34;
      auVar67 = NEON_fmax(auVar66,ZEXT816(0),4);
      fVar72 = (float)param_8[1];
      fVar73 = (float)((ulong)param_8[1] >> 0x20);
      fVar70 = (float)*param_8;
      fVar71 = (float)((ulong)*param_8 >> 0x20);
      uVar75 = param_8[3];
      uVar74 = param_8[2];
      uVar17 = iVar18 + 5;
      auVar66 = ZEXT816(0);
      fVar88 = fVar82;
      fVar89 = fVar83;
      fVar90 = fVar84;
      fVar91 = fVar85;
      do {
        uVar20 = (ulong)*(uint *)(param_5 + (ulong)(uVar17 - 3) * 4);
        pauVar21 = (undefined1 (*) [12])(param_2 + uVar20 * 0xc);
        uVar12 = (ulong)*(uint *)(param_5 + (ulong)(uVar17 - 2) * 4);
        pauVar22 = (undefined1 (*) [12])(param_2 + uVar12 * 0xc);
        uVar25 = (ulong)*(uint *)(param_5 + (ulong)(uVar17 - 1) * 4);
        pauVar23 = (undefined1 (*) [12])(param_2 + uVar25 * 0xc);
        auVar6 = *pauVar22;
        pfVar15 = (float *)(param_4 + uVar20 * 0x20);
        uVar20 = (ulong)*(uint *)(param_5 + (ulong)uVar17 * 4);
        pauVar24 = (undefined1 (*) [12])(param_2 + uVar20 * 0xc);
        pauVar2 = (undefined1 (*) [12])(param_4 + uVar12 * 0x20);
        pauVar3 = (undefined1 (*) [12])(param_4 + uVar25 * 0x20);
        pauVar4 = (undefined1 (*) [12])(param_4 + uVar20 * 0x20);
        auVar7 = *pauVar23;
        auVar8 = *(undefined1 (*) [12])(pfVar15 + 4);
        fVar27 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
        fVar29 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
        auVar9 = *(undefined1 (*) [12])(pauVar3[1] + 4);
        fVar31 = (float)((ulong)*(undefined8 *)(*pauVar4 + 8) >> 0x20);
        uVar16 = uVar16 - 1;
        uVar17 = uVar17 + 4;
        auVar11 = *pauVar24;
        auVar10 = *pauVar24;
        fVar62 = fVar35 - *pfVar15;
        fVar63 = fVar35 - SUB124(*pauVar2,0);
        fVar64 = fVar35 - SUB124(*pauVar3,0);
        fVar65 = fVar35 - SUB124(*pauVar4,0);
        fVar58 = fVar37 - pfVar15[2];
        fVar59 = fVar37 - SUB124(*pauVar2,8);
        fVar60 = fVar37 - SUB124(*pauVar3,8);
        fVar61 = fVar37 - SUB124(*pauVar4,8);
        fVar45 = fVar36 - pfVar15[1];
        fVar47 = fVar36 - SUB124(*pauVar2,4);
        fVar48 = fVar36 - SUB124(*pauVar3,4);
        fVar49 = fVar36 - SUB124(*pauVar4,4);
        auVar98._4_4_ = fVar27;
        auVar98._0_4_ = pfVar15[3];
        auVar98._8_4_ = fVar29;
        auVar98._12_4_ = fVar31;
        fVar26 = (float)uVar74 * (fVar58 * fVar58 + fVar45 * fVar45 + fVar62 * fVar62);
        fVar28 = (float)((ulong)uVar74 >> 0x20) *
                 (fVar59 * fVar59 + fVar47 * fVar47 + fVar63 * fVar63);
        fVar30 = (float)uVar75 * (fVar60 * fVar60 + fVar48 * fVar48 + fVar64 * fVar64);
        fVar32 = (float)((ulong)uVar75 >> 0x20) *
                 (fVar61 * fVar61 + fVar49 * fVar49 + fVar65 * fVar65);
        auVar68._4_4_ = fVar28;
        auVar68._0_4_ = fVar26;
        auVar68._8_4_ = fVar30;
        auVar68._12_4_ = fVar32;
        auVar68 = NEON_frsqrte(auVar68,4);
        fVar94 = auVar68._0_4_;
        auVar56._0_4_ = fVar94 * fVar94;
        fVar95 = auVar68._4_4_;
        auVar56._4_4_ = fVar95 * fVar95;
        fVar96 = auVar68._8_4_;
        auVar56._8_4_ = fVar96 * fVar96;
        fVar97 = auVar68._12_4_;
        auVar56._12_4_ = fVar97 * fVar97;
        auVar57._4_4_ = fVar28;
        auVar57._0_4_ = fVar26;
        auVar57._8_4_ = fVar30;
        auVar57._12_4_ = fVar32;
        auVar68 = NEON_frsqrts(auVar56,auVar57,4);
        auVar57 = NEON_frecpe(auVar98,4);
        fVar94 = fVar94 * auVar68._0_4_;
        fVar95 = fVar95 * auVar68._4_4_;
        fVar96 = fVar96 * auVar68._8_4_;
        fVar97 = fVar97 * auVar68._12_4_;
        auVar68 = NEON_frecps(auVar57,auVar98,4);
        auVar99._0_4_ = pfVar15[3] - fVar46;
        auVar99._4_4_ = fVar27 - fVar51;
        auVar99._8_4_ = fVar29 - fVar55;
        auVar99._12_4_ = fVar31 - fVar34;
        fVar26 = fVar94 * fVar26;
        fVar28 = fVar95 * fVar28;
        fVar30 = fVar96 * fVar30;
        fVar32 = fVar97 * fVar32;
        fVar50 = auVar57._0_4_ * auVar68._0_4_;
        fVar52 = auVar57._4_4_ * auVar68._4_4_;
        fVar53 = auVar57._8_4_ * auVar68._8_4_;
        fVar54 = auVar57._12_4_ * auVar68._12_4_;
        auVar68 = NEON_fmax(auVar99,ZEXT816(0),4);
        fVar27 = fVar70 * (fVar76 - fVar26) * (float)uVar92;
        fVar29 = fVar71 * (fVar77 - fVar28) * (float)((ulong)uVar92 >> 0x20);
        fVar31 = fVar72 * (fVar78 - fVar30) * (float)uVar93;
        fVar33 = fVar73 * (fVar79 - fVar32) * (float)((ulong)uVar93 >> 0x20);
        fVar26 = fVar70 * (auVar67._0_4_ + auVar68._0_4_) *
                          (float)uVar86 * ((fVar26 + fVar94 * (float)uVar80) - (fVar76 + fVar76));
        fVar28 = fVar71 * (auVar67._4_4_ + auVar68._4_4_) *
                          (float)((ulong)uVar86 >> 0x20) *
                          ((fVar28 + fVar95 * (float)((ulong)uVar80 >> 0x20)) - (fVar77 + fVar77));
        fVar94 = fVar72 * (auVar67._8_4_ + auVar68._8_4_) *
                          (float)uVar87 * ((fVar30 + fVar96 * (float)uVar81) - (fVar78 + fVar78));
        fVar95 = fVar73 * (auVar67._12_4_ + auVar68._12_4_) *
                          (float)((ulong)uVar87 >> 0x20) *
                          ((fVar32 + fVar97 * (float)((ulong)uVar81 >> 0x20)) - (fVar79 + fVar79));
        fVar96 = (auVar8._0_4_ - fVar38) * fVar27 + fVar62 * fVar26;
        fVar97 = (*(float *)(pauVar2[1] + 4) - fVar38) * fVar29 + fVar63 * fVar28;
        fVar62 = (auVar9._0_4_ - fVar38) * fVar31 + fVar64 * fVar94;
        fVar63 = (*(float *)(pauVar4[1] + 4) - fVar38) * fVar33 + fVar65 * fVar95;
        fVar30 = (auVar8._4_4_ - fVar40) * fVar27 + fVar45 * fVar26;
        fVar32 = (*(float *)(pauVar2[1] + 8) - fVar40) * fVar29 + fVar47 * fVar28;
        fVar45 = (auVar9._4_4_ - fVar40) * fVar31 + fVar48 * fVar94;
        fVar47 = (*(float *)(pauVar4[1] + 8) - fVar40) * fVar33 + fVar49 * fVar95;
        fVar26 = (SUB124(*(undefined1 (*) [12])(pfVar15 + 4),8) - fVar42) * fVar27 + fVar58 * fVar26
        ;
        fVar27 = (*(float *)pauVar2[2] - fVar42) * fVar29 + fVar59 * fVar28;
        fVar28 = (SUB124(*(undefined1 (*) [12])(pauVar3[1] + 4),8) - fVar42) * fVar31 +
                 fVar60 * fVar94;
        fVar29 = (*(float *)pauVar4[2] - fVar42) * fVar33 + fVar61 * fVar95;
        auVar69._0_4_ = auVar66._0_4_ + fVar50 * fVar30;
        auVar69._4_4_ = auVar66._4_4_ + fVar52 * fVar32;
        auVar69._8_4_ = auVar66._8_4_ + fVar53 * fVar45;
        auVar69._12_4_ = auVar66._12_4_ + fVar54 * fVar47;
        fVar82 = fVar82 + fVar50 * fVar26;
        fVar83 = fVar83 + fVar52 * fVar27;
        fVar84 = fVar84 + fVar53 * fVar28;
        fVar85 = fVar85 + fVar54 * fVar29;
        *(ulong *)*pauVar21 =
             CONCAT44(SUB124(*pauVar21,4) - fVar39 * fVar30,SUB124(*pauVar21,0) - fVar39 * fVar96);
        *(float *)(*pauVar21 + 8) = SUB124(*pauVar21,8) - fVar39 * fVar26;
        fVar88 = fVar88 + fVar50 * fVar96;
        fVar89 = fVar89 + fVar52 * fVar97;
        fVar90 = fVar90 + fVar53 * fVar62;
        fVar91 = fVar91 + fVar54 * fVar63;
        *(ulong *)*pauVar22 =
             CONCAT44(auVar6._4_4_ - fVar41 * fVar32,auVar6._0_4_ - fVar41 * fVar97);
        *(float *)(*pauVar22 + 8) = auVar6._8_4_ - fVar41 * fVar27;
        *(ulong *)*pauVar23 =
             CONCAT44(auVar7._4_4_ - fVar43 * fVar45,auVar7._0_4_ - fVar43 * fVar62);
        *(float *)(*pauVar23 + 8) = auVar7._8_4_ - fVar43 * fVar28;
        *(ulong *)*pauVar24 =
             CONCAT44(auVar10._4_4_ - fVar44 * fVar47,auVar10._0_4_ - fVar44 * fVar63);
        *(float *)(*pauVar24 + 8) = auVar11._8_4_ - fVar44 * fVar29;
        auVar66 = auVar69;
      } while (uVar16 != 0);
      uVar19 = uVar19 + (uVar5 & 0xfffffffc);
      pfVar15 = (float *)(param_1 + uVar13 * 0xc);
      *pfVar15 = fVar88 + fVar89 + fVar90 + fVar91 + *pfVar15;
      pfVar15[1] = auVar69._0_4_ + auVar69._4_4_ + auVar69._8_4_ + auVar69._12_4_ + pfVar15[1];
      pfVar15[2] = fVar82 + fVar83 + fVar84 + fVar85 + pfVar15[2];
      if ((uVar5 & 3) == 0) goto LAB_001a5aac;
LAB_001a5ac8:
      pfVar15 = (float *)(param_1 + uVar13 * 0xc);
      fVar88 = pfVar1[2];
      uVar17 = uVar5 & 3;
      uVar16 = uVar19;
      do {
        uVar20 = (ulong)*(uint *)(param_5 + (ulong)uVar16 * 4);
        pfVar14 = (float *)(param_4 + uVar20 * 0x20);
        uVar16 = uVar16 + 1;
        fVar46 = *pfVar1 - *pfVar14;
        fVar51 = pfVar1[1] - pfVar14[1];
        fVar55 = fVar88 - pfVar14[2];
        fVar91 = *(float *)(param_7 + 0x34) * (fVar46 * fVar46 + fVar51 * fVar51 + fVar55 * fVar55);
        fVar82 = sqrtf(fVar91);
        fVar89 = *(float *)(param_7 + 0x30);
        fVar91 = (1.0 / fVar82) * fVar91;
        fVar90 = pfVar1[3] - *(float *)(param_7 + 0x2c);
        fVar83 = pfVar14[3] - *(float *)(param_7 + 0x2c);
        if (fVar90 <= 0.0) {
          fVar90 = 0.0;
        }
        if (fVar83 <= 0.0) {
          fVar83 = 0.0;
        }
        fVar34 = *(float *)(param_7 + 0x18);
        fVar35 = (fVar34 - fVar91) * *(float *)(param_7 + 0x28);
        fVar82 = (fVar90 + fVar83) *
                 *(float *)(param_7 + 0x24) *
                 (fVar91 + ((1.0 / fVar82) * *(float *)(param_7 + 0x1c) - (fVar34 + fVar34)));
        fVar83 = fVar89 * fVar55 * fVar82 + fVar35 * fVar89 * (pfVar14[6] - pfVar1[6]);
        fVar91 = 1.0 / pfVar14[3];
        fVar90 = fVar89 * fVar46 * fVar82 + fVar35 * fVar89 * (pfVar14[4] - pfVar1[4]);
        fVar89 = fVar89 * fVar51 * fVar82 + fVar35 * fVar89 * (pfVar14[5] - pfVar1[5]);
        fVar82 = 1.0 / pfVar1[3];
        uVar17 = uVar17 - 1;
        *pfVar15 = fVar91 * fVar90 + *pfVar15;
        pfVar15[1] = fVar91 * fVar89 + pfVar15[1];
        pfVar14 = (float *)(param_2 + uVar20 * 0xc);
        pfVar14[1] = pfVar14[1] - fVar82 * fVar89;
        *pfVar14 = *pfVar14 - fVar82 * fVar90;
        fVar89 = pfVar14[2];
        pfVar15[2] = fVar91 * fVar83 + pfVar15[2];
        pfVar14[2] = fVar89 - fVar82 * fVar83;
      } while (uVar17 != 0);
      uVar19 = uVar19 + (uVar5 & 3);
      uVar20 = (ulong)uVar19;
    } while (uVar19 < param_6);
  }
  return;
}


