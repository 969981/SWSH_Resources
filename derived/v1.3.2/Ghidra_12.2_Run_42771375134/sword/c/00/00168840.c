/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00168840; name: FUN_00168840
 */


void FUN_00168840(long param_1)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 *puVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  char *pcVar21;
  float fVar22;
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
  byte bVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar50;
  float fVar51;
  float fVar54;
  float fVar55;
  undefined1 auVar52 [12];
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar53 [16];
  float fVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  float fVar72;
  float fVar75;
  float fVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  
  puVar19 = *(undefined8 **)(param_1 + 0x28);
  puVar18 = *(undefined8 **)(param_1 + 0x58);
  puVar17 = *(undefined8 **)(param_1 + 0x88);
  puVar15 = *(undefined8 **)(param_1 + 0xb8);
  if (((puVar19 != (undefined8 *)0x0 || puVar18 != (undefined8 *)0x0) ||
      puVar17 != (undefined8 *)0x0) || puVar15 != (undefined8 *)0x0) {
    pcVar16 = *(char **)(param_1 + 0x20);
    if (*(uint *)(pcVar16 + 4) == 0) {
      fVar34 = 0.0;
      fVar35 = 0.0;
      fVar36 = 0.0;
      fVar37 = 0.0;
      fVar44 = 0.0;
      fVar45 = 0.0;
      fVar42 = 0.0;
      fVar43 = 0.0;
      fVar40 = 0.0;
      fVar41 = 0.0;
      fVar38 = 0.0;
      fVar39 = 0.0;
      fVar32 = 0.0;
      fVar33 = 0.0;
      fVar30 = 0.0;
      fVar31 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar22 = 0.0;
      fVar23 = 0.0;
    }
    else {
      fVar22 = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      fVar32 = 0.0;
      fVar33 = 0.0;
      fVar30 = 0.0;
      fVar31 = 0.0;
      fVar40 = 0.0;
      fVar41 = 0.0;
      fVar38 = 0.0;
      fVar39 = 0.0;
      fVar44 = 0.0;
      fVar45 = 0.0;
      fVar42 = 0.0;
      fVar43 = 0.0;
      fVar36 = 0.0;
      fVar37 = 0.0;
      fVar34 = 0.0;
      fVar35 = 0.0;
      uVar20 = 0;
      pcVar21 = pcVar16 + 0x100;
      lVar2 = 0x170;
      if (*pcVar16 != '\t') {
        lVar2 = 0x110;
      }
      do {
        iVar9 = -(uint)((*(ulong *)(pcVar21 + 0xa0) & 2) == 0);
        iVar11 = -(uint)((*(ulong *)(pcVar21 + 0xa0) & 0x200000000) == 0);
        iVar12 = -(uint)((*(ulong *)(pcVar21 + 0xa8) & 2) == 0);
        iVar14 = -(uint)((*(ulong *)(pcVar21 + 0xa8) & 0x200000000) == 0);
        fVar50 = (float)CONCAT13(pcVar21[0x93] & ~(byte)((uint)iVar9 >> 0x18),
                                 CONCAT12(pcVar21[0x92] & ~(byte)((uint)iVar9 >> 0x10),
                                          CONCAT11(pcVar21[0x91] & ~(byte)((uint)iVar9 >> 8),
                                                   pcVar21[0x90] & ~(byte)iVar9)));
        auVar52._0_8_ =
             CONCAT17(pcVar21[0x97] & ~(byte)((uint)iVar11 >> 0x18),
                      CONCAT16(pcVar21[0x96] & ~(byte)((uint)iVar11 >> 0x10),
                               CONCAT15(pcVar21[0x95] & ~(byte)((uint)iVar11 >> 8),
                                        CONCAT14(pcVar21[0x94] & ~(byte)iVar11,fVar50))));
        auVar52[8] = pcVar21[0x98] & ~(byte)iVar12;
        auVar52[9] = pcVar21[0x99] & ~(byte)((uint)iVar12 >> 8);
        auVar52[10] = pcVar21[0x9a] & ~(byte)((uint)iVar12 >> 0x10);
        auVar52[0xb] = pcVar21[0x9b] & ~(byte)((uint)iVar12 >> 0x18);
        auVar53[0xc] = pcVar21[0x9c] & ~(byte)iVar14;
        auVar53._0_12_ = auVar52;
        auVar53[0xd] = pcVar21[0x9d] & ~(byte)((uint)iVar14 >> 8);
        auVar53[0xe] = pcVar21[0x9e] & ~(byte)((uint)iVar14 >> 0x10);
        auVar53[0xf] = pcVar21[0x9f] & ~(byte)((uint)iVar14 >> 0x18);
        fVar54 = (float)((ulong)auVar52._0_8_ >> 0x20);
        fVar56 = auVar52._8_4_;
        fVar58 = auVar53._12_4_;
        uVar20 = uVar20 + 1;
        fVar26 = fVar26 + *(float *)(pcVar21 + -0x50) * fVar50;
        fVar27 = fVar27 + *(float *)(pcVar21 + -0x4c) * fVar54;
        fVar28 = fVar28 + *(float *)(pcVar21 + -0x48) * fVar56;
        fVar29 = fVar29 + *(float *)(pcVar21 + -0x44) * fVar58;
        fVar22 = fVar22 + (float)*(undefined8 *)(pcVar21 + -0x60) * fVar50;
        fVar23 = fVar23 + (float)((ulong)*(undefined8 *)(pcVar21 + -0x60) >> 0x20) * fVar54;
        fVar24 = fVar24 + (float)*(undefined8 *)(pcVar21 + -0x58) * fVar56;
        fVar25 = fVar25 + (float)((ulong)*(undefined8 *)(pcVar21 + -0x58) >> 0x20) * fVar58;
        fVar30 = fVar30 + fVar50 * (float)*(undefined8 *)(pcVar21 + -0x40);
        fVar31 = fVar31 + fVar54 * (float)((ulong)*(undefined8 *)(pcVar21 + -0x40) >> 0x20);
        fVar32 = fVar32 + fVar56 * (float)*(undefined8 *)(pcVar21 + -0x38);
        fVar33 = fVar33 + fVar58 * (float)((ulong)*(undefined8 *)(pcVar21 + -0x38) >> 0x20);
        fVar38 = fVar38 + fVar50 * (float)*(undefined8 *)pcVar21;
        fVar39 = fVar39 + fVar54 * (float)((ulong)*(undefined8 *)pcVar21 >> 0x20);
        fVar40 = fVar40 + fVar56 * (float)*(undefined8 *)(pcVar21 + 8);
        fVar41 = fVar41 + fVar58 * (float)((ulong)*(undefined8 *)(pcVar21 + 8) >> 0x20);
        fVar34 = fVar34 + fVar50 * *(float *)(pcVar21 + 0x10);
        fVar35 = fVar35 + fVar54 * *(float *)(pcVar21 + 0x14);
        fVar36 = fVar36 + fVar56 * *(float *)(pcVar21 + 0x18);
        fVar37 = fVar37 + fVar58 * *(float *)(pcVar21 + 0x1c);
        pcVar1 = pcVar21 + 0x20;
        pcVar3 = pcVar21 + 0x28;
        pcVar21 = pcVar21 + lVar2;
        fVar42 = fVar42 + fVar50 * (float)*(undefined8 *)pcVar1;
        fVar43 = fVar43 + fVar54 * (float)((ulong)*(undefined8 *)pcVar1 >> 0x20);
        fVar44 = fVar44 + fVar56 * (float)*(undefined8 *)pcVar3;
        fVar45 = fVar45 + fVar58 * (float)((ulong)*(undefined8 *)pcVar3 >> 0x20);
      } while (uVar20 < *(uint *)(pcVar16 + 4));
    }
    fVar50 = (float)*(undefined8 *)(pcVar16 + 0x80);
    fVar54 = (float)((ulong)*(undefined8 *)(pcVar16 + 0x80) >> 0x20);
    fVar56 = (float)*(undefined8 *)(pcVar16 + 0x88);
    fVar58 = (float)((ulong)*(undefined8 *)(pcVar16 + 0x88) >> 0x20);
    fVar38 = fVar38 - (fVar30 * fVar50 - fVar26 * *(float *)(pcVar16 + 0x90));
    fVar39 = fVar39 - (fVar31 * fVar54 - fVar27 * *(float *)(pcVar16 + 0x94));
    fVar40 = fVar40 - (fVar32 * fVar56 - fVar28 * *(float *)(pcVar16 + 0x98));
    fVar41 = fVar41 - (fVar33 * fVar58 - fVar29 * *(float *)(pcVar16 + 0x9c));
    auVar46._0_4_ = fVar30 * fVar30 + fVar26 * fVar26 + fVar22 * fVar22;
    auVar46._4_4_ = fVar31 * fVar31 + fVar27 * fVar27 + fVar23 * fVar23;
    auVar46._8_4_ = fVar32 * fVar32 + fVar28 * fVar28 + fVar24 * fVar24;
    auVar46._12_4_ = fVar33 * fVar33 + fVar29 * fVar29 + fVar25 * fVar25;
    fVar34 = fVar34 - (fVar22 * *(float *)(pcVar16 + 0x90) - fVar30 * *(float *)(pcVar16 + 0x70));
    fVar35 = fVar35 - (fVar23 * *(float *)(pcVar16 + 0x94) - fVar31 * *(float *)(pcVar16 + 0x74));
    fVar36 = fVar36 - (fVar24 * *(float *)(pcVar16 + 0x98) - fVar32 * *(float *)(pcVar16 + 0x78));
    fVar37 = fVar37 - (fVar25 * *(float *)(pcVar16 + 0x9c) - fVar33 * *(float *)(pcVar16 + 0x7c));
    fVar42 = fVar42 - (fVar26 * *(float *)(pcVar16 + 0x70) - fVar22 * fVar50);
    fVar43 = fVar43 - (fVar27 * *(float *)(pcVar16 + 0x74) - fVar23 * fVar54);
    fVar44 = fVar44 - (fVar28 * *(float *)(pcVar16 + 0x78) - fVar24 * fVar56);
    fVar45 = fVar45 - (fVar29 * *(float *)(pcVar16 + 0x7c) - fVar25 * fVar58);
    auVar53 = NEON_frsqrte(auVar46,4);
    fVar51 = auVar53._0_4_;
    auVar73._0_4_ = fVar51 * fVar51;
    fVar55 = auVar53._4_4_;
    auVar73._4_4_ = fVar55 * fVar55;
    fVar57 = auVar53._8_4_;
    auVar73._8_4_ = fVar57 * fVar57;
    fVar59 = auVar53._12_4_;
    auVar73._12_4_ = fVar59 * fVar59;
    fVar50 = fVar42 * fVar42 + fVar38 * fVar38 + fVar34 * fVar34;
    fVar54 = fVar43 * fVar43 + fVar39 * fVar39 + fVar35 * fVar35;
    uVar60 = SUB41(fVar54,0);
    uVar61 = (undefined1)((uint)fVar54 >> 8);
    uVar62 = (undefined1)((uint)fVar54 >> 0x10);
    uVar63 = (undefined1)((uint)fVar54 >> 0x18);
    fVar56 = fVar44 * fVar44 + fVar40 * fVar40 + fVar36 * fVar36;
    uVar64 = SUB41(fVar56,0);
    uVar65 = (undefined1)((uint)fVar56 >> 8);
    uVar66 = (undefined1)((uint)fVar56 >> 0x10);
    uVar67 = (undefined1)((uint)fVar56 >> 0x18);
    fVar58 = fVar45 * fVar45 + fVar41 * fVar41 + fVar37 * fVar37;
    uVar68 = SUB41(fVar58,0);
    uVar69 = (undefined1)((uint)fVar58 >> 8);
    uVar70 = (undefined1)((uint)fVar58 >> 0x10);
    uVar71 = (undefined1)((uint)fVar58 >> 0x18);
    auVar53 = NEON_frsqrts(auVar73,auVar46,4);
    auVar78[4] = uVar60;
    auVar78._0_4_ = fVar50;
    auVar78[5] = uVar61;
    auVar78[6] = uVar62;
    auVar78[7] = uVar63;
    auVar78[8] = uVar64;
    auVar78[9] = uVar65;
    auVar78[10] = uVar66;
    auVar78[0xb] = uVar67;
    auVar78[0xc] = uVar68;
    auVar78[0xd] = uVar69;
    auVar78[0xe] = uVar70;
    auVar78[0xf] = uVar71;
    auVar78 = NEON_frsqrte(auVar78,4);
    fVar51 = fVar51 * auVar53._0_4_;
    fVar55 = fVar55 * auVar53._4_4_;
    fVar57 = fVar57 * auVar53._8_4_;
    fVar59 = fVar59 * auVar53._12_4_;
    fVar72 = auVar78._0_4_;
    auVar74._0_4_ = fVar72 * fVar72;
    fVar75 = auVar78._4_4_;
    auVar74._4_4_ = fVar75 * fVar75;
    fVar76 = auVar78._8_4_;
    auVar74._8_4_ = fVar76 * fVar76;
    fVar77 = auVar78._12_4_;
    auVar74._12_4_ = fVar77 * fVar77;
    auVar4[4] = uVar60;
    auVar4._0_4_ = fVar50;
    auVar4[5] = uVar61;
    auVar4[6] = uVar62;
    auVar4[7] = uVar63;
    auVar4[8] = uVar64;
    auVar4[9] = uVar65;
    auVar4[10] = uVar66;
    auVar4[0xb] = uVar67;
    auVar4[0xc] = uVar68;
    auVar4[0xd] = uVar69;
    auVar4[0xe] = uVar70;
    auVar4[0xf] = uVar71;
    auVar53 = NEON_frsqrts(auVar74,auVar4,4);
    fVar72 = fVar72 * auVar53._0_4_;
    fVar75 = fVar75 * auVar53._4_4_;
    fVar76 = fVar76 * auVar53._8_4_;
    fVar77 = fVar77 * auVar53._12_4_;
    auVar79._0_4_ = fVar51 * fVar51;
    auVar79._4_4_ = fVar55 * fVar55;
    auVar79._8_4_ = fVar57 * fVar57;
    auVar79._12_4_ = fVar59 * fVar59;
    auVar53 = NEON_frsqrts(auVar79,auVar46,4);
    fVar51 = fVar51 * auVar53._0_4_;
    fVar55 = fVar55 * auVar53._4_4_;
    fVar57 = fVar57 * auVar53._8_4_;
    fVar59 = fVar59 * auVar53._12_4_;
    auVar80._0_4_ = fVar72 * fVar72;
    auVar80._4_4_ = fVar75 * fVar75;
    auVar80._8_4_ = fVar76 * fVar76;
    auVar80._12_4_ = fVar77 * fVar77;
    auVar5[4] = uVar60;
    auVar5._0_4_ = fVar50;
    auVar5[5] = uVar61;
    auVar5[6] = uVar62;
    auVar5[7] = uVar63;
    auVar5[8] = uVar64;
    auVar5[9] = uVar65;
    auVar5[10] = uVar66;
    auVar5[0xb] = uVar67;
    auVar5[0xc] = uVar68;
    auVar5[0xd] = uVar69;
    auVar5[0xe] = uVar70;
    auVar5[0xf] = uVar71;
    auVar53 = NEON_frsqrts(auVar80,auVar5,4);
    fVar72 = fVar72 * auVar53._0_4_;
    fVar75 = fVar75 * auVar53._4_4_;
    fVar76 = fVar76 * auVar53._8_4_;
    fVar77 = fVar77 * auVar53._12_4_;
    auVar81._0_4_ = fVar51 * fVar51;
    auVar81._4_4_ = fVar55 * fVar55;
    auVar81._8_4_ = fVar57 * fVar57;
    auVar81._12_4_ = fVar59 * fVar59;
    auVar53 = NEON_frsqrts(auVar81,auVar46,4);
    fVar51 = fVar51 * auVar53._0_4_;
    fVar55 = fVar55 * auVar53._4_4_;
    fVar57 = fVar57 * auVar53._8_4_;
    fVar59 = fVar59 * auVar53._12_4_;
    auVar82._0_4_ = fVar72 * fVar72;
    auVar82._4_4_ = fVar75 * fVar75;
    auVar82._8_4_ = fVar76 * fVar76;
    auVar82._12_4_ = fVar77 * fVar77;
    auVar6[4] = uVar60;
    auVar6._0_4_ = fVar50;
    auVar6[5] = uVar61;
    auVar6[6] = uVar62;
    auVar6[7] = uVar63;
    auVar6[8] = uVar64;
    auVar6[9] = uVar65;
    auVar6[10] = uVar66;
    auVar6[0xb] = uVar67;
    auVar6[0xc] = uVar68;
    auVar6[0xd] = uVar69;
    auVar6[0xe] = uVar70;
    auVar6[0xf] = uVar71;
    auVar53 = NEON_frsqrts(auVar82,auVar6,4);
    fVar72 = fVar72 * auVar53._0_4_;
    fVar75 = fVar75 * auVar53._4_4_;
    fVar76 = fVar76 * auVar53._8_4_;
    fVar77 = fVar77 * auVar53._12_4_;
    auVar83._0_4_ = fVar51 * fVar51;
    auVar83._4_4_ = fVar55 * fVar55;
    auVar83._8_4_ = fVar57 * fVar57;
    auVar83._12_4_ = fVar59 * fVar59;
    auVar53 = NEON_frsqrts(auVar83,auVar46,4);
    auVar84._0_4_ = fVar72 * fVar72;
    auVar84._4_4_ = fVar75 * fVar75;
    auVar84._8_4_ = fVar76 * fVar76;
    auVar84._12_4_ = fVar77 * fVar77;
    auVar7[4] = uVar60;
    auVar7._0_4_ = fVar50;
    auVar7[5] = uVar61;
    auVar7[6] = uVar62;
    auVar7[7] = uVar63;
    auVar7[8] = uVar64;
    auVar7[9] = uVar65;
    auVar7[10] = uVar66;
    auVar7[0xb] = uVar67;
    auVar7[0xc] = uVar68;
    auVar7[0xd] = uVar69;
    auVar7[0xe] = uVar70;
    auVar7[0xf] = uVar71;
    auVar78 = NEON_frsqrts(auVar84,auVar7,4);
    auVar86._0_4_ = auVar46._0_4_ * fVar51 * auVar53._0_4_;
    auVar86._4_4_ = auVar46._4_4_ * fVar55 * auVar53._4_4_;
    auVar86._8_4_ = auVar46._8_4_ * fVar57 * auVar53._8_4_;
    auVar86._12_4_ = auVar46._12_4_ * fVar59 * auVar53._12_4_;
    auVar85._0_4_ = -(uint)(auVar46._0_4_ == 0.0);
    auVar85._4_4_ = -(uint)(auVar46._4_4_ == 0.0);
    auVar85._8_4_ = -(uint)(auVar46._8_4_ == 0.0);
    auVar85._12_4_ = -(uint)(auVar46._12_4_ == 0.0);
    auVar86 = auVar86 ^ (auVar86 ^ auVar46) & auVar85;
    auVar47._0_4_ = -(uint)(fVar50 == 0.0);
    auVar47._4_4_ = -(uint)(fVar54 == 0.0);
    auVar47._8_4_ = -(uint)(fVar56 == 0.0);
    auVar47._12_4_ = -(uint)(fVar58 == 0.0);
    auVar48._0_4_ = fVar50 * fVar72 * auVar78._0_4_;
    auVar48._4_4_ = fVar54 * fVar75 * auVar78._4_4_;
    auVar48._8_4_ = fVar56 * fVar76 * auVar78._8_4_;
    auVar48._12_4_ = fVar58 * fVar77 * auVar78._12_4_;
    auVar8[4] = uVar60;
    auVar8._0_4_ = fVar50;
    auVar8[5] = uVar61;
    auVar8[6] = uVar62;
    auVar8[7] = uVar63;
    auVar8[8] = uVar64;
    auVar8[9] = uVar65;
    auVar8[10] = uVar66;
    auVar8[0xb] = uVar67;
    auVar8[0xc] = uVar68;
    auVar8[0xd] = uVar69;
    auVar8[0xe] = uVar70;
    auVar8[0xf] = uVar71;
    auVar48 = auVar48 ^ (auVar48 ^ auVar8) & auVar47;
    fVar50 = *(float *)(pcVar16 + 0x10);
    fVar54 = *(float *)(pcVar16 + 0x18);
    fVar56 = *(float *)(pcVar16 + 0x1c);
    uVar13 = *(undefined8 *)(pcVar16 + 0x28);
    uVar10 = *(undefined8 *)(pcVar16 + 0x20);
    uVar60 = (undefined1)((uint)fVar42 >> 0x18);
    bVar49 = -((float)((ulong)uVar10 >> 0x20) < auVar48._4_4_) |
             -(*(float *)(pcVar16 + 0x14) < auVar86._4_4_);
    if (puVar19 != (undefined8 *)0x0) {
      *puVar19 = CONCAT44(fVar26,fVar22);
      *(float *)(puVar19 + 1) = fVar30;
      puVar19[2] = CONCAT44(fVar34,fVar38);
      *(int *)(puVar19 + 3) =
           (int)(CONCAT17(uVar60,CONCAT16((char)((uint)fVar42 >> 0x10),
                                          CONCAT15((char)((uint)fVar42 >> 8),
                                                   CONCAT14(SUB41(fVar42,0),fVar38)))) >> 0x20);
      *(uint *)((long)puVar19 + 0xc) =
           (uint)((int)((uint)CONCAT12(bVar49,(ushort)(byte)(-((float)uVar10 < auVar48._0_4_) |
                                                            -(fVar50 < auVar86._0_4_))) << 0x1f) < 0
                 && pcVar16[0xc] != '\0');
    }
    if (puVar18 != (undefined8 *)0x0) {
      *puVar18 = CONCAT44(fVar27,fVar23);
      *(float *)(puVar18 + 1) = fVar31;
      puVar18[2] = CONCAT17((char)((uint)fVar35 >> 0x18),
                            CONCAT16((char)((uint)fVar35 >> 0x10),
                                     CONCAT15((char)((uint)fVar35 >> 8),
                                              CONCAT14(SUB41(fVar35,0),
                                                       CONCAT13((char)((uint)fVar39 >> 0x18),
                                                                CONCAT12((char)((uint)fVar39 >> 0x10
                                                                               ),(short)(CONCAT12((
                                                  char)((uint)fVar39 >> 8),
                                                  CONCAT11(SUB41(fVar39,0),uVar60)) >> 8)))))));
      *(float *)(puVar18 + 3) = fVar43;
      *(uint *)((long)puVar18 + 0xc) =
           (uint)((int)((uint)bVar49 << 0x1f) < 0 && pcVar16[0xd] != '\0');
    }
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = CONCAT44(fVar28,fVar24);
      *(float *)(puVar17 + 1) = fVar32;
      puVar17[2] = CONCAT44(fVar36,fVar40);
      *(float *)(puVar17 + 3) = fVar44;
      *(uint *)((long)puVar17 + 0xc) =
           (uint)((int)((uint)(byte)(-((float)uVar13 < auVar48._8_4_) | -(fVar54 < auVar86._8_4_))
                       << 0x1f) < 0 && pcVar16[0xe] != '\0');
    }
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = CONCAT44(fVar29,fVar25);
      *(float *)(puVar15 + 1) = fVar33;
      puVar15[2] = CONCAT44(fVar37,fVar41);
      *(float *)(puVar15 + 3) = fVar45;
      *(uint *)((long)puVar15 + 0xc) =
           (uint)((int)((uint)(byte)(-((float)((ulong)uVar13 >> 0x20) < auVar48._12_4_) |
                                    -(fVar56 < auVar86._12_4_)) << 0x1f) < 0 && pcVar16[0xf] != '\0'
                 );
    }
  }
  return;
}


