/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c8a00; name: FUN_006c8a00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006c8a00(ulong param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long param_5,
                ulong param_6,long param_7,ulong param_8,int *param_9,undefined8 *param_10,
                byte param_11)

{
  ushort *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [12];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  uint uVar28;
  undefined8 *puVar29;
  ulong uVar30;
  float *pfVar31;
  undefined8 *puVar32;
  long lVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar40;
  undefined8 uVar41;
  int iVar47;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int iVar46;
  int iVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  undefined8 uVar61;
  float fVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  float fVar68;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar69;
  float fVar70;
  undefined8 uVar71;
  float fVar76;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar75;
  float fVar77;
  undefined1 auVar74 [16];
  undefined8 uVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  undefined8 uVar82;
  float fVar83;
  undefined8 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  int local_14c;
  byte local_e0;
  byte bStack_df;
  byte bStack_de;
  byte bStack_dd;
  byte bStack_dc;
  byte bStack_db;
  byte bStack_da;
  byte bStack_d9;
  byte bStack_d8;
  byte bStack_d7;
  byte bStack_d6;
  byte bStack_d5;
  byte bStack_d4;
  byte bStack_d3;
  byte bStack_d2;
  byte bStack_d1;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_78;
  
  uVar20 = _UNK_01d4b588;
  uVar19 = _DAT_01d4b580;
  uVar18 = _UNK_01d4ae58;
  uVar17 = _DAT_01d4ae50;
  uVar16 = _UNK_01d49dc8;
  uVar15 = _DAT_01d49dc0;
  uStack_98 = 0;
  local_a0 = 0;
  puVar32 = *(undefined8 **)(param_4 + 0x60);
  puVar4 = *(undefined8 **)(param_4 + 0x68);
  if (puVar32 == puVar4) {
    local_78 = 0;
  }
  else {
    local_78 = 0;
    local_14c = 0;
    fVar69 = DAT_01d4c18c;
    do {
      fVar21 = DAT_01d4c708;
      puVar29 = (undefined8 *)*puVar32;
      fVar37 = (float)puVar29[1];
      fVar70 = (float)*puVar29;
      fVar60 = (float)((ulong)*puVar29 >> 0x20);
      auVar44._0_4_ = (fVar70 + *(float *)(puVar29 + 2)) * 0.5;
      auVar44._4_4_ = (fVar60 + *(float *)((long)puVar29 + 0x14)) * 0.5;
      auVar44._8_4_ = (fVar37 + *(float *)(puVar29 + 3)) * 0.5;
      auVar44._12_4_ = ((float)((ulong)puVar29[1] >> 0x20) + *(float *)((long)puVar29 + 0x1c)) * 0.5
      ;
      auVar63 = NEON_ext(auVar44,auVar44,8,1);
      fVar34 = (*(float *)(puVar29 + 2) - fVar70) * 0.5;
      fVar70 = (float)*param_3;
      fVar75 = (float)((ulong)*param_3 >> 0x20);
      fVar76 = (float)param_3[1];
      fVar77 = (float)((ulong)param_3[1] >> 0x20);
      fVar35 = (*(float *)((long)puVar29 + 0x14) - fVar60) * 0.5;
      fVar60 = ((float)*param_2 + fVar70) * 0.5;
      fVar66 = ((float)((ulong)*param_2 >> 0x20) + fVar75) * 0.5;
      fVar67 = ((float)param_2[1] + fVar76) * 0.5;
      fVar68 = ((float)((ulong)param_2[1] >> 0x20) + fVar77) * 0.5;
      fVar70 = fVar70 - fVar60;
      fVar75 = fVar75 - fVar66;
      fVar76 = fVar76 - fVar67;
      fVar77 = fVar77 - fVar68;
      fVar37 = (*(float *)(puVar29 + 3) - fVar37) * 0.5;
      fVar60 = fVar60 - auVar44._0_4_;
      fVar66 = fVar66 - auVar44._4_4_;
      fVar67 = fVar67 - auVar63._0_4_;
      fVar68 = fVar68 - 0.0;
      fVar85 = (float)uVar17;
      auVar39._0_4_ = fVar60 * fVar85;
      fVar81 = (float)((ulong)uVar17 >> 0x20);
      auVar39._4_4_ = fVar66 * fVar81;
      fVar83 = (float)uVar18;
      auVar39._8_4_ = fVar67 * fVar83;
      fVar86 = (float)((ulong)uVar18 >> 0x20);
      auVar39._12_4_ = fVar68 * fVar86;
      auVar44 = NEON_ext(auVar39,auVar39,8,1);
      fVar87 = (float)uVar19;
      auVar45._0_4_ = fVar60 * fVar87;
      fVar88 = (float)((ulong)uVar19 >> 0x20);
      auVar45._4_4_ = fVar66 * fVar88;
      fVar89 = (float)uVar20;
      auVar45._8_4_ = fVar67 * fVar89;
      fVar90 = (float)((ulong)uVar20 >> 0x20);
      auVar45._12_4_ = fVar68 * fVar90;
      fVar91 = (float)uVar15;
      fVar60 = fVar60 * fVar91;
      fVar92 = (float)((ulong)uVar15 >> 0x20);
      fVar66 = fVar66 * fVar92;
      uVar49 = (undefined1)((uint)fVar66 >> 8);
      uVar50 = (undefined1)((uint)fVar66 >> 0x10);
      uVar51 = (undefined1)((uint)fVar66 >> 0x18);
      fVar93 = (float)uVar16;
      fVar67 = fVar67 * fVar93;
      uVar52 = (undefined1)((uint)fVar67 >> 8);
      uVar53 = (undefined1)((uint)fVar67 >> 0x10);
      uVar54 = (undefined1)((uint)fVar67 >> 0x18);
      fVar94 = (float)((ulong)uVar16 >> 0x20);
      fVar68 = fVar68 * fVar94;
      uVar55 = (undefined1)((uint)fVar68 >> 8);
      uVar56 = (undefined1)((uint)fVar68 >> 0x10);
      uVar57 = (undefined1)((uint)fVar68 >> 0x18);
      auVar58 = NEON_ext(auVar45,auVar45,8,1);
      auVar63[4] = SUB41(fVar66,0);
      auVar63._0_4_ = fVar60;
      auVar63[5] = uVar49;
      auVar63[6] = uVar50;
      auVar63[7] = uVar51;
      auVar63[8] = SUB41(fVar67,0);
      auVar63[9] = uVar52;
      auVar63[10] = uVar53;
      auVar63[0xb] = uVar54;
      auVar63[0xc] = SUB41(fVar68,0);
      auVar63[0xd] = uVar55;
      auVar63[0xe] = uVar56;
      auVar63[0xf] = uVar57;
      auVar64[4] = SUB41(fVar66,0);
      auVar64._0_4_ = fVar60;
      auVar64[5] = uVar49;
      auVar64[6] = uVar50;
      auVar64[7] = uVar51;
      auVar64[8] = SUB41(fVar67,0);
      auVar64[9] = uVar52;
      auVar64[10] = uVar53;
      auVar64[0xb] = uVar54;
      auVar64[0xc] = SUB41(fVar68,0);
      auVar64[0xd] = uVar55;
      auVar64[0xe] = uVar56;
      auVar64[0xf] = uVar57;
      auVar63 = NEON_ext(auVar63,auVar64,8,1);
      auVar59._0_4_ = fVar70 * fVar85;
      auVar59._4_4_ = fVar75 * fVar81;
      auVar59._8_4_ = fVar76 * fVar83;
      auVar59._12_4_ = fVar77 * fVar86;
      auVar64 = NEON_ext(auVar59,auVar59,8,1);
      auVar65._0_4_ = fVar70 * fVar87;
      auVar65._4_4_ = fVar75 * fVar88;
      auVar65._8_4_ = fVar76 * fVar89;
      auVar65._12_4_ = fVar77 * fVar90;
      auVar74._0_4_ = fVar70 * fVar91;
      auVar74._4_4_ = fVar75 * fVar92;
      auVar74._8_4_ = fVar76 * fVar93;
      auVar74._12_4_ = fVar77 * fVar94;
      auVar80 = NEON_ext(auVar65,auVar65,8,1);
      fVar70 = auVar64._0_4_ + auVar59._0_4_ + auVar64._4_4_ + auVar59._4_4_;
      auVar64 = NEON_ext(auVar74,auVar74,8,1);
      fVar75 = auVar44._0_4_ + auVar39._0_4_ + auVar44._4_4_ + auVar39._4_4_;
      fVar76 = auVar80._0_4_ + auVar65._0_4_ + auVar80._4_4_ + auVar65._4_4_;
      fVar77 = auVar58._0_4_ + auVar45._0_4_ + auVar58._4_4_ + auVar45._4_4_;
      fVar67 = auVar64._0_4_ + auVar74._0_4_ + auVar64._4_4_ + auVar74._4_4_;
      fVar85 = fVar35 + ABS(fVar76);
      fVar68 = ABS(fVar77);
      fVar60 = auVar63._0_4_ + fVar60 + auVar63._4_4_ + fVar66;
      bVar22 = false;
      bVar24 = false;
      bVar26 = false;
      if (ABS(fVar75) <= fVar34 + ABS(fVar70)) {
        bVar22 = false;
        bVar24 = false;
        bVar26 = true;
        if (!NAN(fVar68) && !NAN(fVar85)) {
          bVar22 = fVar68 < fVar85;
          bVar24 = fVar68 == fVar85;
          bVar26 = false;
        }
      }
      fVar68 = fVar37 + ABS(fVar67);
      fVar66 = ABS(fVar60);
      bVar23 = false;
      bVar25 = false;
      bVar27 = false;
      if (bVar24 || bVar22 != bVar26) {
        bVar23 = false;
        bVar25 = false;
        bVar27 = true;
        if (!NAN(fVar66) && !NAN(fVar68)) {
          bVar23 = fVar66 < fVar68;
          bVar25 = fVar66 == fVar68;
          bVar27 = false;
        }
      }
      if (bVar25 || bVar23 != bVar27) {
        fVar81 = ABS(fVar76) + DAT_01d4c708;
        fVar83 = ABS(fVar67) + DAT_01d4c708;
        fVar85 = ABS(fVar70) + DAT_01d4c708;
        fVar66 = ABS(fVar60 * fVar70 - fVar75 * fVar67);
        fVar68 = fVar37 * fVar85 + fVar34 * fVar83;
        bVar22 = false;
        bVar24 = false;
        bVar26 = false;
        if (ABS(fVar77 * fVar67 - fVar60 * fVar76) <= fVar37 * fVar81 + fVar35 * fVar83) {
          bVar22 = false;
          bVar24 = false;
          bVar26 = true;
          if (!NAN(fVar66) && !NAN(fVar68)) {
            bVar22 = fVar66 < fVar68;
            bVar24 = fVar66 == fVar68;
            bVar26 = false;
          }
        }
        fVar60 = fVar35 * fVar85 + fVar34 * fVar81;
        fVar70 = ABS(fVar75 * fVar76 - fVar77 * fVar70);
        bVar23 = false;
        bVar25 = false;
        bVar27 = false;
        if (bVar24 || bVar22 != bVar26) {
          bVar23 = false;
          bVar25 = false;
          bVar27 = true;
          if (!NAN(fVar70) && !NAN(fVar60)) {
            bVar23 = fVar70 < fVar60;
            bVar25 = fVar70 == fVar60;
            bVar27 = false;
          }
        }
        if (bVar25 || bVar23 != bVar27) {
          plVar5 = *(long **)(puVar29[4] + 0x38);
          for (plVar2 = *(long **)(puVar29[4] + 0x30); plVar2 != plVar5; plVar2 = plVar2 + 4) {
            puVar29 = (undefined8 *)*plVar2;
            if (param_6 == 0) {
              if (param_8 != 0) {
                uVar30 = 0;
                do {
                  if (*(long *)(param_7 + uVar30 * 8) == *(long *)puVar29[7]) goto LAB_006c8e50;
                  uVar30 = uVar30 + 1;
                } while (uVar30 < param_8);
              }
LAB_006c8b9c:
              lVar3 = puVar29[1];
              if (puVar29[2] != lVar3) {
                lVar33 = *(long *)*puVar29;
                uVar30 = 0;
                do {
                  puVar1 = (ushort *)(lVar3 + uVar30 * 2);
                  puVar29 = (undefined8 *)(lVar33 + (ulong)puVar1[2] * 0xc);
                  pfVar31 = (float *)(lVar33 + (ulong)puVar1[1] * 0xc);
                  auVar14 = *(undefined1 (*) [12])(lVar33 + (ulong)*puVar1 * 0xc);
                  uStack_c0 = *(undefined8 *)pfVar31;
                  fVar37 = pfVar31[2];
                  local_d0 = *puVar29;
                  auVar38._0_4_ = *pfVar31 - auVar14._0_4_;
                  auVar38._4_4_ = pfVar31[1] - auVar14._4_4_;
                  fVar35 = auVar14._8_4_;
                  auVar38._8_4_ = fVar37 - fVar35;
                  auVar38._12_4_ = 0;
                  uVar78 = a64_TBL(ZEXT816(0),auVar38,DAT_01cd5418);
                  fVar85 = *(float *)(puVar29 + 1);
                  uVar12 = a64_TBL(ZEXT816(0),auVar38,DAT_01cd5188);
                  uStack_a8 = (ulong)(uint)fVar35;
                  local_b0 = auVar14._0_8_;
                  fVar67 = (float)local_d0 - auVar14._0_4_;
                  fVar68 = (float)((ulong)local_d0 >> 0x20);
                  fVar34 = fVar68 - auVar14._4_4_;
                  fVar35 = fVar85 - fVar35;
                  auVar58._4_4_ = fVar34;
                  auVar58._0_4_ = fVar67;
                  auVar58._8_4_ = fVar35;
                  auVar58._12_4_ = 0;
                  uVar82 = a64_TBL(ZEXT816(0),auVar58,DAT_01cd50f8);
                  auVar80._4_4_ = fVar34;
                  auVar80._0_4_ = fVar67;
                  auVar80._8_4_ = fVar35;
                  auVar80._12_4_ = 0;
                  uVar84 = a64_TBL(ZEXT816(0),auVar80,DAT_01cd5158);
                  uVar61 = a64_TBL(ZEXT816(0),auVar38,DAT_01cd50f8);
                  uVar71 = a64_TBL(ZEXT816(0),auVar38,DAT_01cd5158);
                  auVar10._4_4_ = fVar34;
                  auVar10._0_4_ = fVar67;
                  auVar10._8_4_ = fVar35;
                  auVar10._12_4_ = 0;
                  uVar41 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5418);
                  auVar11._4_4_ = fVar34;
                  auVar11._0_4_ = fVar67;
                  auVar11._8_4_ = fVar35;
                  auVar11._12_4_ = 0;
                  uVar13 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5188);
                  uStack_c8 = (ulong)(uint)fVar85;
                  uStack_b8 = (ulong)(uint)fVar37;
                  fVar70 = (float)uVar78 * (float)uVar82 - (float)uVar61 * (float)uVar41;
                  fVar75 = (float)((ulong)uVar78 >> 0x20) * (float)((ulong)uVar82 >> 0x20) -
                           (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar41 >> 0x20);
                  fVar76 = (float)uVar12 * (float)uVar84 - (float)uVar71 * (float)uVar13;
                  fVar77 = (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar84 >> 0x20) -
                           (float)((ulong)uVar71 >> 0x20) * (float)((ulong)uVar13 >> 0x20);
                  auVar42._0_4_ = fVar70 * fVar70;
                  auVar42._4_4_ = fVar75 * fVar75;
                  auVar42._8_4_ = fVar76 * fVar76;
                  auVar42._12_4_ = fVar77 * fVar77;
                  auVar63 = NEON_ext(auVar42,auVar42,8,1);
                  fVar66 = auVar63._0_4_ + auVar42._0_4_;
                  fVar81 = auVar63._4_4_ + auVar42._4_4_;
                  fVar60 = fVar66 + fVar81;
                  fVar66 = fVar66 + fVar81;
                  auVar43._8_8_ = CONCAT44(fVar66,fVar60);
                  auVar43._0_8_ = CONCAT44(fVar66,fVar60);
                  auVar63 = NEON_frsqrte(auVar43,4);
                  auVar72._0_4_ = auVar63._0_4_ * fVar60;
                  auVar72._4_4_ = auVar63._4_4_ * fVar66;
                  auVar72._8_4_ = auVar63._8_4_ * fVar60;
                  auVar72._12_4_ = auVar63._12_4_ * fVar66;
                  auVar64 = NEON_frsqrts(auVar63,auVar72,4);
                  auVar62._0_4_ = auVar63._0_4_ * auVar64._0_4_;
                  auVar62._4_4_ = auVar63._4_4_ * auVar64._4_4_;
                  auVar62._8_4_ = auVar63._8_4_ * auVar64._8_4_;
                  auVar62._12_4_ = auVar63._12_4_ * auVar64._12_4_;
                  auVar73._0_4_ = (auVar38._0_4_ - fVar67) * (auVar38._0_4_ - fVar67);
                  auVar73._4_4_ = (auVar38._4_4_ - fVar34) * (auVar38._4_4_ - fVar34);
                  auVar73._8_4_ = (auVar38._8_4_ - fVar35) * (auVar38._8_4_ - fVar35);
                  auVar73._12_4_ = 0;
                  auVar64 = NEON_ext(auVar73,auVar73,8,1);
                  auVar79._0_4_ = fVar60 * auVar62._0_4_;
                  auVar79._4_4_ = fVar66 * auVar62._4_4_;
                  auVar79._8_4_ = fVar60 * auVar62._8_4_;
                  auVar79._12_4_ = fVar66 * auVar62._12_4_;
                  iVar40 = -(uint)(fVar60 == 0.0);
                  iVar46 = -(uint)(fVar66 == 0.0);
                  iVar47 = -(uint)(fVar60 == 0.0);
                  iVar48 = -(uint)(fVar66 == 0.0);
                  auVar63 = NEON_frsqrts(auVar62,auVar79,4);
                  fVar70 = fVar70 * auVar62._0_4_ * auVar63._0_4_;
                  fVar75 = fVar75 * auVar62._4_4_ * auVar63._4_4_;
                  fVar76 = fVar76 * auVar62._8_4_ * auVar63._8_4_;
                  fVar77 = fVar77 * auVar62._12_4_ * auVar63._12_4_;
                  local_e0 = SUB41(fVar70,0) & ~(byte)iVar40;
                  bStack_df = (byte)((uint)fVar70 >> 8) & ~(byte)((uint)iVar40 >> 8);
                  bStack_de = (byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
                  bStack_dd = (byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
                  bStack_dc = SUB41(fVar75,0) & ~(byte)iVar46;
                  bStack_db = (byte)((uint)fVar75 >> 8) & ~(byte)((uint)iVar46 >> 8);
                  bStack_da = (byte)((uint)fVar75 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
                  bStack_d9 = (byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
                  bStack_d8 = SUB41(fVar76,0) & ~(byte)iVar47;
                  bStack_d7 = (byte)((uint)fVar76 >> 8) & ~(byte)((uint)iVar47 >> 8);
                  bStack_d6 = (byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
                  bStack_d5 = (byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
                  bStack_d4 = SUB41(fVar77,0) & ~(byte)iVar48;
                  bStack_d3 = (byte)((uint)fVar77 >> 8) & ~(byte)((uint)iVar48 >> 8);
                  bStack_d2 = (byte)((uint)fVar77 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
                  bStack_d1 = (byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
                  if (fVar21 <= auVar64._0_4_ + auVar73._0_4_ + auVar64._4_4_ + auVar73._4_4_) {
                    fVar70 = (float)local_d0 - *pfVar31;
                    fVar68 = fVar68 - pfVar31[1];
                    fVar75 = auVar38._0_4_ - fVar70;
                    fVar76 = auVar38._4_4_ - fVar68;
                    fVar77 = auVar38._8_4_ - (fVar85 - fVar37);
                    auVar36._0_4_ = fVar75 * fVar75;
                    auVar36._4_4_ = fVar76 * fVar76;
                    auVar36._8_4_ = fVar77 * fVar77;
                    auVar36._12_4_ = 0;
                    auVar63 = NEON_ext(auVar36,auVar36,8,1);
                    if (fVar21 <= auVar63._0_4_ + auVar36._0_4_ + auVar63._4_4_ + auVar36._4_4_) {
                      fVar67 = fVar67 - fVar70;
                      fVar34 = fVar34 - fVar68;
                      fVar35 = fVar35 - (fVar85 - fVar37);
                      fVar67 = fVar67 * fVar67;
                      fVar34 = fVar34 * fVar34;
                      fVar35 = fVar35 * fVar35;
                      auVar6._4_4_ = fVar34;
                      auVar6._0_4_ = fVar67;
                      auVar6._8_4_ = fVar35;
                      auVar6._12_4_ = 0;
                      auVar7._4_4_ = fVar34;
                      auVar7._0_4_ = fVar67;
                      auVar7._8_4_ = fVar35;
                      auVar7._12_4_ = 0;
                      auVar63 = NEON_ext(auVar6,auVar7,8,1);
                      if (fVar21 <= auVar63._0_4_ + fVar67 + auVar63._4_4_ + fVar34) {
                        if ((param_11 & 1) == 0) {
                          uVar28 = FUN_006c8fb0(param_1,&local_a0,param_2,param_3,&local_b0,
                                                &uStack_c0,&local_d0,&local_e0);
                          param_1 = (ulong)(uVar28 & 1);
                        }
                        else {
                          param_1 = FUN_006c9340(param_1,&local_a0,param_2,param_3,&local_b0,
                                                 &uStack_c0,&local_d0,&local_e0);
                          if ((int)param_1 == -1) {
                            local_14c = local_14c + 1;
                            if (param_9 != (int *)0x0) {
                              *param_9 = *param_9 + 1;
                            }
                            goto LAB_006c8e34;
                          }
                        }
                        if ((int)param_1 == 1) {
                          if (param_10 != (undefined8 *)0x0) {
                            fVar70 = (float)*param_2 - (float)local_a0;
                            fVar75 = (float)((ulong)*param_2 >> 0x20) - local_a0._4_4_;
                            fVar76 = (float)param_2[1] - (float)uStack_98;
                            fVar77 = (float)((ulong)param_2[1] >> 0x20) - uStack_98._4_4_;
                            fVar70 = fVar70 * fVar70;
                            fVar75 = fVar75 * fVar75;
                            fVar76 = fVar76 * fVar76;
                            fVar77 = fVar77 * fVar77;
                            auVar8._4_4_ = fVar75;
                            auVar8._0_4_ = fVar70;
                            auVar8._8_4_ = fVar76;
                            auVar8._12_4_ = fVar77;
                            auVar9._4_4_ = fVar75;
                            auVar9._0_4_ = fVar70;
                            auVar9._8_4_ = fVar76;
                            auVar9._12_4_ = fVar77;
                            auVar63 = NEON_ext(auVar8,auVar9,8,1);
                            fVar70 = auVar63._0_4_ + fVar70 + auVar63._4_4_ + fVar75;
                            if (fVar70 < fVar69) {
                              param_10[1] = uStack_98;
                              *param_10 = local_a0;
                              fVar69 = fVar70;
                            }
                          }
                          local_78 = local_78 + 1;
                        }
                      }
                    }
                  }
LAB_006c8e34:
                  uVar30 = uVar30 + 3;
                } while (uVar30 < (ulong)(*(long *)(*plVar2 + 0x10) - *(long *)(*plVar2 + 8) >> 1));
              }
            }
            else {
              uVar30 = 0;
              do {
                if (*(long *)(param_5 + uVar30 * 8) == *(long *)puVar29[7]) goto LAB_006c8b9c;
                uVar30 = uVar30 + 1;
              } while (uVar30 < param_6);
            }
LAB_006c8e50:
          }
        }
      }
      puVar32 = puVar32 + 4;
    } while (puVar32 != puVar4);
    if (local_78 == 0) {
      local_78 = -(uint)(local_14c != 0);
    }
  }
  return local_78;
}


