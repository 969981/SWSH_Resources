/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00286ee0; name: FUN_00286ee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00286ee0(undefined8 param_1,long param_2,undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16],undefined4 *param_5,undefined8 *param_6,void *param_7)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  ulong uVar17;
  float fVar80;
  undefined1 auVar81 [12];
  undefined8 *puVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  float *pfVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  byte bVar27;
  byte bVar28;
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
  undefined1 uVar39;
  undefined1 uVar40;
  float fVar41;
  int iVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar51;
  float fVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar53;
  float fVar54;
  float fVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined8 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined8 uVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined8 uVar84;
  ulong uVar85;
  float fVar87;
  undefined1 auVar86 [16];
  float fVar88;
  float fVar89;
  undefined8 uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 local_88;
  
  param_6 = (undefined8 *)*param_6;
  uVar43 = NEON_fmov(0x3e800000,4);
  Hint_Prefetch(param_6 + 0x20,0,0,0);
  auVar82 = *param_3;
  auVar16 = *(undefined1 (*) [12])param_3[1];
  auVar81 = *(undefined1 (*) [12])param_4[1];
  fVar25 = auVar82._0_4_;
  fVar66 = -fVar25;
  fVar26 = auVar82._4_4_;
  fVar68 = -fVar26;
  fVar70 = -auVar82._8_4_;
  fVar41 = auVar82._12_4_;
  auVar92 = *param_4;
  uStack_a8 = auVar82._8_8_;
  local_b0 = auVar82._0_8_;
  uStack_98 = (ulong)(uint)auVar16._8_4_;
  uStack_a0 = auVar16._0_8_;
  lVar19 = *(long *)(param_2 + 0x30);
  auVar48._0_4_ = auVar81._0_4_ - auVar16._0_4_;
  auVar48._4_4_ = auVar81._4_4_ - auVar16._4_4_;
  auVar48._8_4_ = auVar81._8_4_ - auVar16._8_4_;
  auVar48._12_4_ = 0;
  auVar8._4_4_ = fVar68;
  auVar8._0_4_ = fVar66;
  auVar8._8_4_ = fVar70;
  auVar8._12_4_ = 0;
  auVar9._4_4_ = fVar68;
  auVar9._0_4_ = fVar66;
  auVar9._8_4_ = fVar70;
  auVar9._12_4_ = 0;
  auVar86 = NEON_ext(auVar8,auVar9,8,1);
  fVar59 = auVar92._4_4_;
  auVar91 = NEON_ext(auVar48,auVar48,8,1);
  fVar87 = auVar92._12_4_;
  fVar51 = auVar92._8_4_;
  fVar78 = auVar92._0_4_;
  auVar55._0_4_ = fVar66 * auVar48._0_4_;
  auVar55._4_4_ = fVar68 * auVar48._4_4_;
  auVar55._8_4_ = fVar70 * auVar48._8_4_;
  auVar55._12_4_ = 0;
  fVar88 = fVar66 * auVar48._4_4_ - fVar68 * auVar48._0_4_;
  auVar10._12_4_ = 0;
  auVar10._0_12_ = auVar92._0_12_;
  auVar11._12_4_ = 0;
  auVar11._0_12_ = auVar92._0_12_;
  auVar92 = NEON_ext(auVar10,auVar11,8,1);
  uVar90 = NEON_ext(CONCAT44(fVar68 * auVar48._8_4_ - fVar70 * auVar48._4_4_,fVar88),
                    CONCAT44(auVar86._4_4_ * auVar48._4_4_ - fVar68 * auVar91._4_4_,
                             auVar86._0_4_ * auVar48._0_4_ - fVar66 * auVar91._0_4_),4,1);
  auVar91 = NEON_ext(auVar55,auVar55,8,1);
  fVar61 = fVar59 * fVar66 - fVar78 * fVar68;
  auVar44._0_12_ = auVar82._0_12_;
  auVar44._12_4_ = 0;
  uVar63 = NEON_ext(CONCAT44(fVar51 * fVar68 - fVar59 * fVar70,fVar61),
                    CONCAT44(fVar59 * auVar86._4_4_ - auVar92._4_4_ * fVar68,
                             fVar78 * auVar86._0_4_ - auVar92._0_4_ * fVar66),4,1);
  fVar79 = fVar41 + fVar41;
  fVar52 = (float)*(undefined8 *)(param_2 + 4);
  fVar58 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar60 = (float)*(undefined8 *)(param_2 + 0xc);
  fVar89 = fVar60 * *(float *)(lVar19 + 0x44);
  uVar71 = NEON_fmov(0x3f800000,4);
  fVar67 = fVar78 * fVar66;
  fVar69 = fVar59 * fVar68;
  fVar24 = auVar55._0_4_ + auVar55._4_4_ + auVar91._0_4_ + auVar91._4_4_;
  fVar78 = fVar78 * fVar41 + fVar66 * fVar87 + (float)uVar63;
  fVar59 = fVar59 * fVar41 + fVar68 * fVar87 + (float)((ulong)uVar63 >> 0x20);
  fVar61 = fVar51 * fVar41 + fVar70 * fVar87 + fVar61;
  auVar92 = NEON_ext(auVar44,auVar44,8,1);
  uVar77 = NEON_ext(CONCAT44(fVar41,fVar41),auVar92._0_8_,4,1);
  uVar84 = NEON_fmov(0xbf800000,4);
  uVar63 = CONCAT17((char)((uint)fVar59 >> 0x18),
                    CONCAT16((char)((uint)fVar59 >> 0x10),
                             CONCAT15((char)((uint)fVar59 >> 8),CONCAT14(SUB41(fVar59,0),fVar78))));
  fVar62 = fVar25 + fVar25;
  uVar64 = NEON_fminp(CONCAT44(fVar89,fVar89),
                      CONCAT44(fVar58 * *(float *)(lVar19 + 0x40),fVar52 * *(float *)(lVar19 + 0x3c)
                              ),4);
  uVar65 = NEON_fminp(uVar64,uVar64,4);
  auVar45._0_4_ = fVar25 * fVar62 + (float)uVar77 * fVar79;
  auVar45._4_4_ = fVar26 * fVar62 + (float)((ulong)uVar77 >> 0x20) * fVar79;
  auVar45._8_4_ = auVar82._8_4_ * fVar62 + -fVar26 * fVar79;
  auVar45._12_4_ = fVar79 * 0.0 + 0.0;
  auVar82 = NEON_ext(auVar45,auVar45,8,1);
  fVar53 = auVar82._0_4_;
  fVar80 = auVar45._0_4_ + (float)uVar84;
  fVar62 = fVar80 * fVar80;
  fVar79 = auVar45._4_4_ * auVar45._4_4_;
  auVar14._4_4_ = fVar79;
  auVar14._0_4_ = fVar62;
  auVar14._8_4_ = fVar53 * fVar53;
  auVar14._12_4_ = 0;
  auVar15._4_4_ = fVar79;
  auVar15._0_4_ = fVar62;
  auVar15._8_4_ = fVar53 * fVar53;
  auVar15._12_4_ = 0;
  auVar82 = NEON_ext(auVar14,auVar15,8,1);
  fVar26 = auVar82._0_4_ + auVar82._4_4_;
  fVar25 = fVar62 + fVar79 + fVar26;
  fVar26 = fVar62 + fVar79 + fVar26;
  uVar64 = NEON_frsqrte(CONCAT44(fVar26,fVar25),4);
  fVar62 = (float)uVar64;
  fVar79 = (float)((ulong)uVar64 >> 0x20);
  uVar64 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar62 * fVar62),CONCAT44(fVar26,fVar25),4);
  fVar62 = fVar62 * (float)uVar64;
  fVar79 = fVar79 * (float)((ulong)uVar64 >> 0x20);
  uVar64 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar62 * fVar62),CONCAT44(fVar26,fVar25),4);
  fVar62 = fVar62 * (float)uVar64;
  fVar79 = fVar79 * (float)((ulong)uVar64 >> 0x20);
  uVar64 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar62 * fVar62),CONCAT44(fVar26,fVar25),4);
  fVar62 = fVar62 * (float)uVar64;
  fVar79 = fVar79 * (float)((ulong)uVar64 >> 0x20);
  uVar64 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar62 * fVar62),CONCAT44(fVar26,fVar25),4);
  uVar85 = CONCAT44(fVar26 * fVar79 * (float)((ulong)uVar64 >> 0x20),fVar25 * fVar62 * (float)uVar64
                   );
  uVar85 = uVar85 ^ (uVar85 ^ CONCAT44(fVar26,fVar25)) &
                    CONCAT44(-(uint)(fVar25 == 0.0),-(uint)(fVar25 == 0.0));
  auVar12._4_4_ = fVar69;
  auVar12._0_4_ = fVar67;
  auVar12._8_4_ = fVar51 * fVar70;
  auVar12._12_4_ = 0;
  auVar13._4_4_ = fVar69;
  auVar13._0_4_ = fVar67;
  auVar13._8_4_ = fVar51 * fVar70;
  auVar13._12_4_ = 0;
  auVar82 = NEON_ext(auVar12,auVar13,8,1);
  fVar79 = fVar87 * fVar41 - (fVar67 + fVar69 + auVar82._0_4_ + auVar82._4_4_);
  fVar72 = fVar78 + fVar78;
  fVar62 = (float)((ulong)uVar63 >> 0x20);
  fVar73 = fVar62 + fVar62;
  fVar74 = fVar61 + fVar61;
  fVar25 = fVar41 * fVar41 + -0.5;
  fVar67 = fVar62 * fVar73;
  fVar76 = fVar61 * fVar74;
  fVar89 = (float)uVar71;
  fVar54 = (float)((ulong)uVar71 >> 0x20);
  fVar26 = auVar48._0_4_ * fVar25 + (float)uVar90 * fVar41;
  fVar87 = auVar48._4_4_ * fVar25 + (float)((ulong)uVar90 >> 0x20) * fVar41;
  uVar29 = (undefined1)((uint)fVar87 >> 8);
  uVar30 = (undefined1)((uint)fVar87 >> 0x10);
  uVar31 = (undefined1)((uint)fVar87 >> 0x18);
  fVar25 = auVar48._8_4_ * fVar25 + fVar88 * fVar41;
  uVar32 = (undefined1)((uint)fVar25 >> 8);
  uVar33 = (undefined1)((uint)fVar25 >> 0x10);
  uVar35 = (undefined1)((uint)fVar25 >> 0x18);
  fVar41 = fVar41 * 0.0 + 0.0;
  uVar34 = (undefined1)((uint)fVar41 >> 8);
  uVar36 = (undefined1)((uint)fVar41 >> 0x10);
  uVar39 = (undefined1)((uint)fVar41 >> 0x18);
  auVar82[4] = SUB41(fVar87,0);
  auVar82._0_4_ = fVar26;
  auVar82[5] = uVar29;
  auVar82[6] = uVar30;
  auVar82[7] = uVar31;
  auVar82[8] = SUB41(fVar25,0);
  auVar82[9] = uVar32;
  auVar82[10] = uVar33;
  auVar82[0xb] = uVar35;
  auVar82[0xc] = SUB41(fVar41,0);
  auVar82[0xd] = uVar34;
  auVar82[0xe] = uVar36;
  auVar82[0xf] = uVar39;
  auVar92[4] = SUB41(fVar87,0);
  auVar92._0_4_ = fVar26;
  auVar92[5] = uVar29;
  auVar92[6] = uVar30;
  auVar92[7] = uVar31;
  auVar92[8] = SUB41(fVar25,0);
  auVar92[9] = uVar32;
  auVar92[10] = uVar33;
  auVar92[0xb] = uVar35;
  auVar92[0xc] = SUB41(fVar41,0);
  auVar92[0xd] = uVar34;
  auVar92[0xe] = uVar36;
  auVar92[0xf] = uVar39;
  auVar82 = NEON_ext(auVar82,auVar92,8,1);
  uVar77 = NEON_ext(CONCAT44((fVar54 - fVar67) - fVar76,(fVar89 - fVar67) - fVar76),
                    CONCAT44(fVar59 * fVar72 + fVar79 * fVar74,fVar59 * fVar72 + fVar79 * fVar74),4,
                    1);
  uVar71 = NEON_frecpe(uVar85,4);
  uVar64 = NEON_frecps(uVar85,uVar71,4);
  fVar69 = (float)uVar71 * (float)uVar64;
  fVar51 = (float)((ulong)uVar71 >> 0x20) * (float)((ulong)uVar64 >> 0x20);
  fVar26 = fVar66 * fVar24 + fVar26;
  fVar87 = fVar68 * fVar24 + fVar87;
  uVar29 = (undefined1)((uint)fVar87 >> 8);
  uVar30 = (undefined1)((uint)fVar87 >> 0x10);
  uVar31 = (undefined1)((uint)fVar87 >> 0x18);
  fVar25 = fVar70 * fVar24 + auVar82._0_4_;
  uVar32 = (undefined1)((uint)fVar25 >> 8);
  uVar33 = (undefined1)((uint)fVar25 >> 0x10);
  uVar35 = (undefined1)((uint)fVar25 >> 0x18);
  fVar41 = fVar24 * 0.0 + 0.0;
  uVar34 = (undefined1)((uint)fVar41 >> 8);
  uVar36 = (undefined1)((uint)fVar41 >> 0x10);
  uVar39 = (undefined1)((uint)fVar41 >> 0x18);
  uVar64 = NEON_frecps(uVar85,CONCAT44(fVar51,fVar69),4);
  fVar69 = fVar69 * (float)uVar64;
  fVar51 = fVar51 * (float)((ulong)uVar64 >> 0x20);
  uVar64 = NEON_frecps(uVar85,CONCAT44(fVar51,fVar69),4);
  fVar69 = fVar69 * (float)uVar64;
  fVar51 = fVar51 * (float)((ulong)uVar64 >> 0x20);
  uVar64 = NEON_frecps(uVar85,CONCAT44(fVar51,fVar69),4);
  fVar69 = fVar69 * (float)uVar64;
  uVar64 = NEON_frecps(uVar85,CONCAT44(fVar51 * (float)((ulong)uVar64 >> 0x20),fVar69),4);
  fVar69 = fVar69 * (float)uVar64;
  fVar51 = (float)param_5[2];
  fVar24 = fVar61 * fVar72 - fVar79 * fVar73;
  local_c0 = CONCAT44(-(auVar45._4_4_ * fVar69),-(fVar80 * fVar69));
  auVar86[4] = SUB41(fVar87,0);
  auVar86._0_4_ = fVar26;
  auVar86[5] = uVar29;
  auVar86[6] = uVar30;
  auVar86[7] = uVar31;
  auVar86[8] = SUB41(fVar25,0);
  auVar86[9] = uVar32;
  auVar86[10] = uVar33;
  auVar86[0xb] = uVar35;
  auVar86[0xc] = SUB41(fVar41,0);
  auVar86[0xd] = uVar34;
  auVar86[0xe] = uVar36;
  auVar86[0xf] = uVar39;
  auVar91[4] = SUB41(fVar87,0);
  auVar91._0_4_ = fVar26;
  auVar91[5] = uVar29;
  auVar91[6] = uVar30;
  auVar91[7] = uVar31;
  auVar91[8] = SUB41(fVar25,0);
  auVar91[9] = uVar32;
  auVar91[10] = uVar33;
  auVar91[0xb] = uVar35;
  auVar91[0xc] = SUB41(fVar41,0);
  auVar91[0xd] = uVar34;
  auVar91[0xe] = uVar36;
  auVar91[0xf] = uVar39;
  auVar82 = NEON_ext(auVar86,auVar91,8,1);
  uStack_b8 = (ulong)(uint)-(fVar53 * fVar69);
  fVar25 = fVar51 * DAT_01d4c158;
  uVar43 = NEON_fmin(CONCAT44((float)((ulong)uVar65 >> 0x20) * (float)((ulong)uVar43 >> 0x20),
                              (float)uVar65 * (float)uVar43),CONCAT44(fVar25,fVar25),4);
  fVar26 = fVar26 + fVar26;
  fVar87 = fVar87 + fVar87;
  fVar68 = auVar82._0_4_ + auVar82._0_4_;
  local_88 = CONCAT44(*param_5,*param_5);
  fVar66 = (float)uVar43 * 0.2;
  fVar41 = fVar89 - fVar78 * fVar72;
  fVar69 = fVar61 * fVar73 + fVar79 * fVar72;
  fVar25 = fVar61 * fVar73 - fVar79 * fVar72;
  fVar67 = fVar41 - fVar67;
  uVar64 = NEON_ext(CONCAT44(fVar61 * fVar72 + fVar79 * fVar73,fVar61 * fVar72 + fVar79 * fVar73),
                    CONCAT17((char)((uint)fVar25 >> 0x18),
                             CONCAT16((char)((uint)fVar25 >> 0x10),
                                      CONCAT15((char)((uint)fVar25 >> 8),
                                               CONCAT14(SUB41(fVar25,0),
                                                        fVar61 * fVar73 - fVar79 * fVar72)))),4,1);
  uVar43 = NEON_ext(CONCAT44(fVar59 * fVar72 - fVar79 * fVar74,fVar59 * fVar72 - fVar79 * fVar74),
                    CONCAT44((fVar54 - fVar78 * fVar72) - fVar76,fVar41 - fVar76),4,1);
  auVar81._8_4_ = fVar69;
  auVar81._0_8_ = uVar43;
  auVar83._12_4_ = 0;
  auVar83._0_12_ = auVar81;
  fVar41 = (float)uVar77;
  fVar70 = (float)((ulong)uVar77 >> 0x20);
  fVar25 = (float)uVar64;
  fVar59 = (float)((ulong)uVar64 >> 0x20);
  if (*(byte *)(param_6 + 4) == 0) {
LAB_002873a4:
    auVar47._0_8_ =
         CONCAT44(ABS(fVar87 - *(float *)((long)param_6 + 0x14)),
                  ABS(fVar26 - *(float *)(param_6 + 2)));
    auVar47._8_4_ = ABS(fVar68 - *(float *)(param_6 + 3));
    auVar47._12_4_ = ABS(0.0 - *(float *)((long)param_6 + 0x1c));
    fVar78 = fVar78 * (float)*param_6;
    fVar62 = fVar62 * (float)((ulong)*param_6 >> 0x20);
    uVar29 = (undefined1)((uint)fVar62 >> 8);
    uVar30 = (undefined1)((uint)fVar62 >> 0x10);
    uVar31 = (undefined1)((uint)fVar62 >> 0x18);
    fVar69 = fVar61 * (float)param_6[1];
    uVar32 = (undefined1)((uint)fVar69 >> 8);
    uVar33 = (undefined1)((uint)fVar69 >> 0x10);
    uVar35 = (undefined1)((uint)fVar69 >> 0x18);
    fVar72 = fVar79 * (float)((ulong)param_6[1] >> 0x20);
    uVar34 = (undefined1)((uint)fVar72 >> 8);
    uVar36 = (undefined1)((uint)fVar72 >> 0x10);
    uVar39 = (undefined1)((uint)fVar72 >> 0x18);
    auVar82 = NEON_ext(auVar47,auVar47,8,1);
    uVar43 = NEON_fmaxp(auVar82._0_8_,auVar47._0_8_,4);
    auVar4[4] = SUB41(fVar62,0);
    auVar4._0_4_ = fVar78;
    auVar4[5] = uVar29;
    auVar4[6] = uVar30;
    auVar4[7] = uVar31;
    auVar4[8] = SUB41(fVar69,0);
    auVar4[9] = uVar32;
    auVar4[10] = uVar33;
    auVar4[0xb] = uVar35;
    auVar4[0xc] = SUB41(fVar72,0);
    auVar4[0xd] = uVar34;
    auVar4[0xe] = uVar36;
    auVar4[0xf] = uVar39;
    auVar5[4] = SUB41(fVar62,0);
    auVar5._0_4_ = fVar78;
    auVar5[5] = uVar29;
    auVar5[6] = uVar30;
    auVar5[7] = uVar31;
    auVar5[8] = SUB41(fVar69,0);
    auVar5[9] = uVar32;
    auVar5[10] = uVar33;
    auVar5[0xb] = uVar35;
    auVar5[0xc] = SUB41(fVar72,0);
    auVar5[0xd] = uVar34;
    auVar5[0xe] = uVar36;
    auVar5[0xf] = uVar39;
    auVar82 = NEON_ext(auVar4,auVar5,8,1);
    uVar43 = NEON_fmaxp(uVar43,uVar43,4);
    iVar42 = -(uint)(fVar66 < (float)uVar43);
    iVar21 = -(uint)(fVar78 + fVar62 + auVar82._0_4_ + auVar82._4_4_ < 0.9998);
    bVar27 = (byte)((uint)iVar21 >> 0x10) | (byte)((uint)iVar42 >> 0x10);
    bVar28 = (byte)((uint)iVar21 >> 0x18) | (byte)((uint)iVar42 >> 0x18);
    uVar3 = CONCAT11((byte)((uint)iVar21 >> 8) | (byte)((uint)iVar42 >> 8),
                     (byte)iVar21 | (byte)iVar42);
    iVar21 = -(uint)(CONCAT13(bVar28,CONCAT12(bVar27,uVar3)) == -1);
    iVar42 = -(uint)(CONCAT13(bVar28,CONCAT12(bVar27,uVar3)) == -1);
    uVar29 = (undefined1)iVar42;
    uVar30 = (undefined1)((uint)iVar42 >> 8);
    uVar31 = (undefined1)((uint)iVar42 >> 0x10);
    uVar32 = (undefined1)((uint)iVar42 >> 0x18);
    iVar42 = -(uint)(CONCAT13(bVar28,CONCAT12(bVar27,uVar3)) == -1);
    uVar33 = (undefined1)iVar42;
    uVar35 = (undefined1)((uint)iVar42 >> 8);
    uVar34 = (undefined1)((uint)iVar42 >> 0x10);
    uVar36 = (undefined1)((uint)iVar42 >> 0x18);
    iVar42 = -(uint)(CONCAT13(bVar28,CONCAT12(bVar27,uVar3)) == -1);
    uVar39 = (undefined1)iVar42;
    uVar37 = (undefined1)((uint)iVar42 >> 8);
    uVar38 = (undefined1)((uint)iVar42 >> 0x10);
    uVar40 = (undefined1)((uint)iVar42 >> 0x18);
    auVar6[4] = uVar29;
    auVar6._0_4_ = iVar21;
    auVar6[5] = uVar30;
    auVar6[6] = uVar31;
    auVar6[7] = uVar32;
    auVar6[8] = uVar33;
    auVar6[9] = uVar35;
    auVar6[10] = uVar34;
    auVar6[0xb] = uVar36;
    auVar6[0xc] = uVar39;
    auVar6[0xd] = uVar37;
    auVar6[0xe] = uVar38;
    auVar6[0xf] = uVar40;
    auVar7[4] = uVar29;
    auVar7._0_4_ = iVar21;
    auVar7[5] = uVar30;
    auVar7[6] = uVar31;
    auVar7[7] = uVar32;
    auVar7[8] = uVar33;
    auVar7[9] = uVar35;
    auVar7[10] = uVar34;
    auVar7[0xb] = uVar36;
    auVar7[0xc] = uVar39;
    auVar7[0xd] = uVar37;
    auVar7[0xe] = uVar38;
    auVar7[0xf] = uVar40;
    NEON_ext(auVar6,auVar7,8,1);
    if (CONCAT13(uVar39,CONCAT12(uVar33,CONCAT11(uVar29,(char)iVar21))) != -1) goto LAB_00287744;
  }
  else {
    uVar20 = (uint)*(byte *)(param_6 + 4);
    lVar23 = (ulong)(uVar20 - 1) * 0x30;
    iVar21 = -uVar20;
    do {
      while( true ) {
        auVar81 = auVar83._0_12_;
        puVar18 = (undefined8 *)(param_6[6] + lVar23);
        fVar72 = (float)*puVar18;
        fVar73 = (float)((ulong)*puVar18 >> 0x20);
        fVar74 = (float)puVar18[1];
        fVar53 = fVar26 + fVar25 * fVar74 + fVar41 * fVar72 + auVar83._0_4_ * fVar73;
        fVar80 = fVar87 + fVar59 * fVar74 + fVar70 * fVar72 + auVar83._4_4_ * fVar73;
        fVar88 = fVar68 + fVar67 * fVar74 + fVar24 * fVar72 + auVar83._8_4_ * fVar73;
        uVar64 = puVar18[4];
        auVar46._0_4_ = (float)uVar64 * (fVar53 - *(float *)(puVar18 + 2));
        fVar72 = (float)((ulong)uVar64 >> 0x20);
        auVar46._4_4_ = fVar72 * (fVar80 - *(float *)((long)puVar18 + 0x14));
        fVar73 = (float)puVar18[5];
        auVar46._8_4_ = fVar73 * (fVar88 - *(float *)(puVar18 + 3));
        auVar46._12_4_ = (0.0 - *(float *)((long)puVar18 + 0x1c)) * 0.0;
        auVar82 = NEON_ext(auVar46,auVar46,8,1);
        fVar76 = auVar82._0_4_ + auVar82._4_4_;
        fVar74 = auVar46._0_4_ + auVar46._4_4_ + fVar76;
        fVar76 = auVar46._0_4_ + auVar46._4_4_ + fVar76;
        auVar56._0_4_ = fVar53 - (float)uVar64 * fVar74;
        auVar56._4_4_ = fVar80 - fVar72 * fVar74;
        auVar56._8_4_ = fVar88 - fVar73 * fVar74;
        auVar56._12_4_ = 0.0 - fVar74 * 0.0;
        auVar82 = NEON_ext(auVar56,auVar56,8,1);
        fVar72 = *(float *)(puVar18 + 2) - auVar56._0_4_;
        fVar74 = *(float *)((long)puVar18 + 0x14) - auVar56._4_4_;
        fVar53 = *(float *)(puVar18 + 3) - auVar82._0_4_;
        fVar80 = *(float *)((long)puVar18 + 0x1c) - 0.0;
        auVar49._0_4_ = fVar72 * fVar72;
        auVar49._4_4_ = fVar74 * fVar74;
        auVar49._8_4_ = fVar53 * fVar53;
        auVar49._12_4_ = fVar80 * fVar80;
        auVar82 = NEON_ext(auVar49,auVar49,8,1);
        bVar2 = fVar66 * fVar66 < auVar49._0_4_ + auVar49._4_4_ + auVar82._0_4_ + auVar82._4_4_;
        auVar50._0_4_ = -(uint)bVar2;
        auVar50._4_4_ = -(uint)bVar2;
        auVar50._8_4_ = -(uint)bVar2;
        auVar50._12_4_ = -(uint)bVar2;
        NEON_ext(auVar50,auVar50,8,1);
        if (CONCAT13((char)auVar50._12_4_,
                     CONCAT12((char)auVar50._8_4_,CONCAT11((char)auVar50._4_4_,(char)auVar50._0_4_))
                    ) == -1) break;
        puVar18[5] = CONCAT17((char)((uint)fVar76 >> 0x18),
                              CONCAT16((char)((uint)fVar76 >> 0x10),
                                       CONCAT15((char)((uint)fVar76 >> 8),
                                                CONCAT14(SUB41(fVar76,0),fVar73))));
        puVar18[4] = uVar64;
        iVar21 = iVar21 + 1;
        lVar23 = lVar23 + -0x30;
        if (iVar21 == 0) goto LAB_00287384;
      }
      cVar1 = *(char *)(param_6 + 4);
      *(byte *)(param_6 + 4) = cVar1 - 1U;
      memcpy(puVar18,(void *)(param_6[6] + (ulong)(byte)(cVar1 - 1U) * 0x30),0x30);
      auVar83._12_4_ = 0;
      auVar83._0_12_ = auVar81;
      iVar21 = iVar21 + 1;
      lVar23 = lVar23 + -0x30;
    } while (iVar21 != 0);
LAB_00287384:
    if (*(byte *)(param_6 + 4) == uVar20) goto LAB_002873a4;
  }
  uVar65 = local_88;
  uVar64 = *(undefined8 *)(param_2 + 0x18);
  uVar43 = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)(param_6 + 4) = 0;
  param_6[1] = CONCAT44(fVar79,fVar61);
  *param_6 = uVar63;
  *(float *)(param_6 + 3) = fVar68;
  *(undefined4 *)((long)param_6 + 0x1c) = 0;
  *(float *)(param_6 + 2) = fVar26;
  *(float *)((long)param_6 + 0x14) = fVar87;
  uVar85 = (ulong)*(byte *)(lVar19 + 0x26);
  uVar29 = SUB41(fVar51,0);
  if (uVar85 == 0) {
    uVar17 = 0;
  }
  else {
    fVar78 = (float)uVar43;
    fVar66 = fVar78 + fVar78;
    fVar61 = (float)((ulong)uVar43 >> 0x20);
    fVar79 = fVar61 + fVar61;
    fVar69 = (float)uVar64;
    fVar72 = fVar69 + fVar69;
    fVar73 = fVar61 * fVar79;
    fVar74 = fVar69 * fVar72;
    fVar62 = (float)((ulong)uVar64 >> 0x20);
    fVar53 = fVar89 - fVar78 * fVar66;
    fVar51 = fVar69 * fVar79 + fVar62 * fVar66;
    fVar76 = fVar69 * fVar66 - fVar62 * fVar79;
    uVar63 = NEON_ext(CONCAT44(fVar69 * fVar66 + fVar62 * fVar79,fVar69 * fVar66 + fVar62 * fVar79),
                      CONCAT44(fVar69 * fVar79 - fVar62 * fVar66,fVar69 * fVar79 - fVar62 * fVar66),
                      4,1);
    fVar79 = fVar53 - fVar73;
    uVar71 = NEON_ext(CONCAT44((fVar54 - fVar73) - fVar74,(fVar89 - fVar73) - fVar74),
                      CONCAT44(fVar61 * fVar66 + fVar62 * fVar72,fVar61 * fVar66 + fVar62 * fVar72),
                      4,1);
    uVar43 = NEON_ext(CONCAT44(fVar61 * fVar66 - fVar62 * fVar72,fVar61 * fVar66 - fVar62 * fVar72),
                      CONCAT44((fVar54 - fVar78 * fVar66) - fVar74,fVar53 - fVar74),4,1);
    fVar69 = (float)((ulong)uVar43 >> 0x20);
    fVar73 = (float)uVar71;
    fVar78 = (float)((ulong)uVar63 >> 0x20);
    fVar62 = (float)uVar63;
    uVar64 = NEON_ext(CONCAT44(fVar73,fVar73),uVar43,4,1);
    uVar63 = NEON_ext(uVar71,CONCAT44(fVar69,fVar69),4,1);
    uVar77 = NEON_ext(CONCAT44(fVar76,fVar76),(ulong)(uint)fVar51,4,1);
    fVar54 = (float)uVar63 * fVar58;
    fVar72 = (float)((ulong)uVar63 >> 0x20) * fVar58;
    fVar58 = fVar78 * fVar58;
    fVar66 = (float)uVar64 * fVar52;
    fVar89 = (float)((ulong)uVar64 >> 0x20) * fVar52;
    fVar52 = fVar62 * fVar52;
    fVar53 = (float)uVar77 * fVar60;
    fVar80 = (float)((ulong)uVar77 >> 0x20) * fVar60;
    fVar60 = fVar79 * fVar60;
    uVar17 = 0;
    fVar74 = (float)((ulong)uVar71 >> 0x20);
    fVar61 = (float)uVar43;
    pfVar22 = (float *)(*(long *)(lVar19 + 0x28) + (ulong)*(byte *)(lVar19 + 0x27) * 0x14 + 4);
    fVar88 = fVar53 * fVar76 + fVar66 * fVar73 + fVar54 * fVar74;
    fVar75 = fVar80 * fVar76 + fVar89 * fVar73 + fVar72 * fVar74;
    fVar73 = fVar60 * fVar76 + fVar52 * fVar73 + fVar58 * fVar74;
    fVar74 = fVar53 * fVar51 + fVar66 * fVar61 + fVar54 * fVar69;
    fVar76 = fVar80 * fVar51 + fVar89 * fVar61 + fVar72 * fVar69;
    fVar61 = fVar60 * fVar51 + fVar52 * fVar61 + fVar58 * fVar69;
    fVar69 = fVar53 * fVar79 + fVar66 * fVar62 + fVar54 * fVar78;
    fVar51 = fVar80 * fVar79 + fVar89 * fVar62 + fVar72 * fVar78;
    fVar78 = fVar60 * fVar79 + fVar52 * fVar62 + fVar58 * fVar78;
    fVar62 = auVar81._0_4_;
    fVar52 = auVar81._4_4_;
    fVar58 = auVar81._8_4_;
    do {
      uVar63 = _DAT_01d4ae50;
      fVar66 = pfVar22[-1];
      fVar60 = *pfVar22;
      fVar79 = pfVar22[1];
      fVar89 = fVar26 + (fVar25 * fVar78 + fVar41 * fVar69 + fVar62 * fVar51) * fVar79 +
                        (fVar25 * fVar73 + fVar41 * fVar88 + fVar62 * fVar75) * fVar66 +
                        (fVar25 * fVar61 + fVar41 * fVar74 + fVar62 * fVar76) * fVar60;
      if (fVar89 < (float)uVar65) {
        fVar54 = (float)_UNK_01d4ae58;
        puVar18 = (undefined8 *)((long)param_7 + uVar17 * 0x30);
        uVar20 = (int)uVar17 + 1;
        uVar17 = (ulong)uVar20;
        auVar57._0_8_ =
             CONCAT44((fVar87 + (fVar59 * fVar78 + fVar70 * fVar69 + fVar52 * fVar51) * fVar79 +
                                (fVar59 * fVar73 + fVar70 * fVar88 + fVar52 * fVar75) * fVar66 +
                                (fVar59 * fVar61 + fVar70 * fVar74 + fVar52 * fVar76) * fVar60) -
                      (float)((ulong)_DAT_01d4ae50 >> 0x20) * fVar89,
                      fVar89 - (float)_DAT_01d4ae50 * fVar89);
        auVar57._8_4_ =
             (fVar68 + (fVar67 * fVar78 + fVar24 * fVar69 + fVar58 * fVar51) * fVar79 +
                       (fVar67 * fVar73 + fVar24 * fVar88 + fVar58 * fVar75) * fVar66 +
                       (fVar67 * fVar61 + fVar24 * fVar74 + fVar58 * fVar76) * fVar60) -
             fVar54 * fVar89;
        auVar57._12_4_ = 0.0 - (float)((ulong)_UNK_01d4ae58 >> 0x20) * fVar89;
        auVar82 = NEON_ext(auVar57,auVar57,8,1);
        puVar18[3] = (ulong)auVar82._0_4_;
        puVar18[2] = auVar57._0_8_;
        puVar18[5] = CONCAT44(fVar89,fVar54);
        puVar18[4] = uVar63;
        fVar89 = fVar51 * fVar79 + fVar75 * fVar66 + fVar76 * fVar60;
        puVar18[1] = (ulong)(uint)(fVar78 * fVar79 + fVar73 * fVar66 + fVar61 * fVar60);
        *puVar18 = CONCAT17((char)((uint)fVar89 >> 0x18),
                            CONCAT16((char)((uint)fVar89 >> 0x10),
                                     CONCAT15((char)((uint)fVar89 >> 8),
                                              CONCAT14(SUB41(fVar89,0),
                                                       fVar69 * fVar79 +
                                                       fVar88 * fVar66 + fVar74 * fVar60))));
        if (0x3f < uVar20) {
          FUN_002904f0(uVar29,param_6,param_7);
          memcpy(param_7,(void *)param_6[6],0x30);
          memcpy((void *)((long)param_7 + 0x30),(void *)(param_6[6] + 0x30),0x30);
          memcpy((void *)((long)param_7 + 0x60),(void *)(param_6[6] + 0x60),0x30);
          memcpy((void *)((long)param_7 + 0x90),(void *)(param_6[6] + 0x90),0x30);
          uVar17 = 4;
        }
      }
      pfVar22 = pfVar22 + 3;
      uVar85 = uVar85 - 1;
    } while (uVar85 != 0);
  }
  FUN_00290460(uVar29,param_6,param_7,uVar17);
LAB_00287744:
  FUN_00290110(param_6,param_7,&local_c0,&local_b0,&local_88);
  return *(char *)(param_6 + 4) != '\0';
}


