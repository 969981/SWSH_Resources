/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00285d10; name: FUN_00285d10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00285d10(undefined8 param_1,long param_2,undefined1 (*param_3) [12],
                 undefined1 (*param_4) [16],float *param_5,undefined8 *param_6,undefined8 *param_7)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  ulong uVar23;
  undefined8 *puVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  float fVar28;
  float fVar30;
  ulong uVar29;
  byte bVar31;
  byte bVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  int iVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar53;
  float fVar54;
  undefined1 auVar52 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined8 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar64;
  undefined1 auVar63 [16];
  float fVar65;
  undefined8 uVar66;
  float fVar68;
  float fVar69;
  undefined1 auVar67 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar76 [16];
  float fVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar90;
  undefined1 auVar89 [16];
  float fVar91;
  float fVar92;
  float fVar93;
  undefined8 uVar94;
  undefined1 auVar95 [12];
  undefined1 auVar96 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  
  param_6 = (undefined8 *)*param_6;
  uVar48 = NEON_fmov(0x3f800000,4);
  Hint_Prefetch(param_6 + 0x20,0,0,0);
  uStack_88 = *(undefined8 *)(*param_3 + 8);
  fVar71 = (float)((ulong)uStack_88 >> 0x20);
  local_90 = *(undefined8 *)*param_3;
  fVar28 = (float)local_90;
  fVar30 = (float)((ulong)local_90 >> 0x20);
  auVar62 = *param_4;
  auVar22 = *(undefined1 (*) [12])(param_3[1] + 4);
  auVar95 = *(undefined1 (*) [12])param_4[1];
  fVar73 = auVar62._4_4_;
  fVar65 = -fVar28;
  fVar68 = -fVar30;
  auVar55._4_4_ = fVar68;
  auVar55._0_4_ = fVar65;
  fVar69 = -(float)uStack_88;
  auVar55._8_4_ = fVar69;
  auVar78._0_4_ = auVar95._0_4_ - auVar22._0_4_;
  auVar78._4_4_ = auVar95._4_4_ - auVar22._4_4_;
  auVar78._8_4_ = auVar95._8_4_ - auVar22._8_4_;
  auVar78._12_4_ = 0;
  fVar80 = fVar71 + fVar71;
  fVar70 = auVar62._8_4_;
  fVar93 = auVar62._12_4_;
  fVar9 = fVar71 * fVar71 + -0.5;
  auVar55._12_4_ = 0;
  auVar67 = NEON_ext(auVar78,auVar78,8,1);
  auVar89 = NEON_ext(auVar55,auVar55,8,1);
  fVar91 = fVar65 * auVar78._0_4_;
  fVar92 = fVar68 * auVar78._4_4_;
  fVar85 = fVar65 * auVar78._4_4_ - fVar68 * auVar78._0_4_;
  uVar66 = NEON_ext(CONCAT44(fVar68 * auVar78._8_4_ - fVar69 * auVar78._4_4_,fVar85),
                    CONCAT44(auVar89._4_4_ * auVar78._4_4_ - fVar68 * auVar67._4_4_,
                             auVar89._0_4_ * auVar78._0_4_ - fVar65 * auVar67._0_4_),4,1);
  auVar61._0_12_ = auVar62._0_12_;
  auVar61._12_4_ = 0;
  fVar77 = auVar62._0_4_;
  auVar86._0_4_ = fVar77 * fVar65;
  auVar86._4_4_ = fVar73 * fVar68;
  auVar86._8_4_ = fVar70 * fVar69;
  auVar86._12_4_ = 0;
  uStack_78 = (ulong)(uint)auVar22._8_4_;
  local_80 = auVar22._0_8_;
  fVar74 = fVar73 * fVar65 - fVar77 * fVar68;
  auVar62 = NEON_ext(auVar61,auVar61,8,1);
  auVar67 = NEON_ext(auVar86,auVar86,8,1);
  uVar60 = NEON_ext(CONCAT44(fVar70 * fVar68 - fVar73 * fVar69,fVar74),
                    CONCAT44(fVar73 * auVar89._4_4_ - auVar62._4_4_ * fVar68,
                             fVar77 * auVar89._0_4_ - auVar62._0_4_ * fVar65),4,1);
  auVar20._4_4_ = fVar92;
  auVar20._0_4_ = fVar91;
  auVar20._8_4_ = fVar69 * auVar78._8_4_;
  auVar20._12_4_ = 0;
  auVar21._4_4_ = fVar92;
  auVar21._0_4_ = fVar91;
  auVar21._8_4_ = fVar69 * auVar78._8_4_;
  auVar21._12_4_ = 0;
  auVar89 = NEON_ext(auVar20,auVar21,8,1);
  auVar10._12_4_ = 0;
  auVar10._0_12_ = *param_3;
  auVar11._12_4_ = 0;
  auVar11._0_12_ = *param_3;
  auVar62 = NEON_ext(auVar10,auVar11,8,1);
  fVar59 = fVar77 * fVar71 + fVar65 * fVar93 + (float)uVar60;
  fVar64 = fVar73 * fVar71 + fVar68 * fVar93 + (float)((ulong)uVar60 >> 0x20);
  fVar74 = fVar70 * fVar71 + fVar69 * fVar93 + fVar74;
  fVar77 = fVar28 + fVar28;
  uVar60 = NEON_ext(CONCAT44(fVar71,fVar71),auVar62._0_8_,4,1);
  fVar75 = fVar93 * fVar71 - (auVar86._0_4_ + auVar86._4_4_ + auVar67._0_4_ + auVar67._4_4_);
  fVar70 = fVar28 * fVar77 + (float)uVar60 * fVar80;
  fVar72 = fVar30 * fVar77 + (float)((ulong)uVar60 >> 0x20) * fVar80;
  fVar77 = (float)uStack_88 * fVar77 + -fVar30 * fVar80;
  fVar73 = fVar80 * 0.0 + 0.0;
  auVar12._4_4_ = fVar72;
  auVar12._0_4_ = fVar70;
  auVar12._8_4_ = fVar77;
  auVar12._12_4_ = fVar73;
  auVar13._4_4_ = fVar72;
  auVar13._0_4_ = fVar70;
  auVar13._8_4_ = fVar77;
  auVar13._12_4_ = fVar73;
  auVar62 = NEON_ext(auVar12,auVar13,8,1);
  fVar77 = auVar78._0_4_ * fVar9 + (float)uVar66 * fVar71;
  fVar93 = auVar78._4_4_ * fVar9 + (float)((ulong)uVar66 >> 0x20) * fVar71;
  uVar33 = (undefined1)((uint)fVar93 >> 8);
  uVar34 = (undefined1)((uint)fVar93 >> 0x10);
  uVar35 = (undefined1)((uint)fVar93 >> 0x18);
  fVar9 = auVar78._8_4_ * fVar9 + fVar85 * fVar71;
  uVar36 = (undefined1)((uint)fVar9 >> 8);
  uVar37 = (undefined1)((uint)fVar9 >> 0x10);
  uVar39 = (undefined1)((uint)fVar9 >> 0x18);
  fVar73 = fVar71 * 0.0 + 0.0;
  uVar38 = (undefined1)((uint)fVar73 >> 8);
  uVar40 = (undefined1)((uint)fVar73 >> 0x10);
  uVar43 = (undefined1)((uint)fVar73 >> 0x18);
  fVar28 = fVar91 + fVar92 + auVar89._0_4_ + auVar89._4_4_;
  uVar60 = NEON_fmov(0xbf800000,4);
  fVar71 = -(fVar70 + (float)uVar60);
  fVar72 = -fVar72;
  fVar80 = -auVar62._0_4_;
  auVar87._0_4_ = fVar71 * fVar71;
  auVar87._4_4_ = fVar72 * fVar72;
  auVar87._8_4_ = fVar80 * fVar80;
  auVar87._12_4_ = 0;
  auVar62 = NEON_ext(auVar87,auVar87,8,1);
  fVar85 = fVar59 + fVar59;
  fVar91 = fVar64 + fVar64;
  fVar92 = fVar74 + fVar74;
  fVar30 = auVar62._0_4_ + auVar62._4_4_;
  fVar70 = auVar87._0_4_ + auVar87._4_4_ + fVar30;
  fVar30 = auVar87._0_4_ + auVar87._4_4_ + fVar30;
  uVar29 = CONCAT44(fVar30,fVar70);
  uVar60 = NEON_frsqrte(uVar29,4);
  fVar88 = (float)uVar60;
  fVar90 = (float)((ulong)uVar60 >> 0x20);
  uVar60 = NEON_frsqrts(CONCAT44(fVar90 * fVar90,fVar88 * fVar88),uVar29,4);
  fVar88 = fVar88 * (float)uVar60;
  fVar90 = fVar90 * (float)((ulong)uVar60 >> 0x20);
  uVar60 = NEON_frsqrts(CONCAT44(fVar90 * fVar90,fVar88 * fVar88),uVar29,4);
  fVar88 = fVar88 * (float)uVar60;
  fVar90 = fVar90 * (float)((ulong)uVar60 >> 0x20);
  uVar60 = NEON_frsqrts(CONCAT44(fVar90 * fVar90,fVar88 * fVar88),uVar29,4);
  fVar88 = fVar88 * (float)uVar60;
  fVar90 = fVar90 * (float)((ulong)uVar60 >> 0x20);
  uVar60 = NEON_frsqrts(CONCAT44(fVar90 * fVar90,fVar88 * fVar88),uVar29,4);
  uVar23 = CONCAT44(fVar30 * fVar90 * (float)((ulong)uVar60 >> 0x20),fVar70 * fVar88 * (float)uVar60
                   );
  uVar23 = uVar23 ^ (uVar23 ^ uVar29) & CONCAT44(-(uint)(fVar70 == 0.0),-(uint)(fVar70 == 0.0));
  uVar60 = NEON_frecpe(uVar23,4);
  uVar66 = NEON_frecps(uVar23,uVar60,4);
  fVar30 = (float)uVar60 * (float)uVar66;
  fVar70 = (float)((ulong)uVar60 >> 0x20) * (float)((ulong)uVar66 >> 0x20);
  uVar60 = NEON_frecps(uVar23,CONCAT44(fVar70,fVar30),4);
  fVar30 = fVar30 * (float)uVar60;
  fVar70 = fVar70 * (float)((ulong)uVar60 >> 0x20);
  uVar60 = NEON_frecps(uVar23,CONCAT44(fVar70,fVar30),4);
  fVar30 = fVar30 * (float)uVar60;
  fVar70 = fVar70 * (float)((ulong)uVar60 >> 0x20);
  uVar60 = NEON_frecps(uVar23,CONCAT44(fVar70,fVar30),4);
  fVar30 = fVar30 * (float)uVar60;
  uVar60 = NEON_frecps(uVar23,CONCAT44(fVar70 * (float)((ulong)uVar60 >> 0x20),fVar30),4);
  fVar30 = fVar30 * (float)uVar60;
  auVar62[4] = SUB41(fVar93,0);
  auVar62._0_4_ = fVar77;
  auVar62[5] = uVar33;
  auVar62[6] = uVar34;
  auVar62[7] = uVar35;
  auVar62[8] = SUB41(fVar9,0);
  auVar62[9] = uVar36;
  auVar62[10] = uVar37;
  auVar62[0xb] = uVar39;
  auVar62[0xc] = SUB41(fVar73,0);
  auVar62[0xd] = uVar38;
  auVar62[0xe] = uVar40;
  auVar62[0xf] = uVar43;
  auVar67[4] = SUB41(fVar93,0);
  auVar67._0_4_ = fVar77;
  auVar67[5] = uVar33;
  auVar67[6] = uVar34;
  auVar67[7] = uVar35;
  auVar67[8] = SUB41(fVar9,0);
  auVar67[9] = uVar36;
  auVar67[10] = uVar37;
  auVar67[0xb] = uVar39;
  auVar67[0xc] = SUB41(fVar73,0);
  auVar67[0xd] = uVar38;
  auVar67[0xe] = uVar40;
  auVar67[0xf] = uVar43;
  auVar62 = NEON_ext(auVar62,auVar67,8,1);
  fVar70 = fVar64 * fVar91;
  fVar90 = fVar74 * fVar92;
  fVar88 = fVar74 * fVar85 - fVar75 * fVar91;
  fVar77 = fVar65 * fVar28 + fVar77;
  fVar93 = fVar68 * fVar28 + fVar93;
  uVar33 = (undefined1)((uint)fVar93 >> 8);
  uVar34 = (undefined1)((uint)fVar93 >> 0x10);
  uVar35 = (undefined1)((uint)fVar93 >> 0x18);
  fVar73 = fVar69 * fVar28 + auVar62._0_4_;
  uVar36 = (undefined1)((uint)fVar73 >> 8);
  uVar37 = (undefined1)((uint)fVar73 >> 0x10);
  uVar39 = (undefined1)((uint)fVar73 >> 0x18);
  fVar28 = fVar28 * 0.0 + 0.0;
  uVar38 = (undefined1)((uint)fVar28 >> 8);
  uVar40 = (undefined1)((uint)fVar28 >> 0x10);
  uVar43 = (undefined1)((uint)fVar28 >> 0x18);
  uStack_98 = (ulong)(uint)(fVar80 * fVar30);
  local_a0 = CONCAT44(fVar72 * fVar30,fVar71 * fVar30);
  fVar9 = *param_5;
  local_a8 = CONCAT44(fVar9,fVar9);
  uVar66 = *(undefined8 *)(param_2 + 4);
  fVar30 = (float)((ulong)uVar48 >> 0x20);
  auVar89[4] = SUB41(fVar93,0);
  auVar89._0_4_ = fVar77;
  auVar89[5] = uVar33;
  auVar89[6] = uVar34;
  auVar89[7] = uVar35;
  auVar89[8] = SUB41(fVar73,0);
  auVar89[9] = uVar36;
  auVar89[10] = uVar37;
  auVar89[0xb] = uVar39;
  auVar89[0xc] = SUB41(fVar28,0);
  auVar89[0xd] = uVar38;
  auVar89[0xe] = uVar40;
  auVar89[0xf] = uVar43;
  auVar4[4] = SUB41(fVar93,0);
  auVar4._0_4_ = fVar77;
  auVar4[5] = uVar33;
  auVar4[6] = uVar34;
  auVar4[7] = uVar35;
  auVar4[8] = SUB41(fVar73,0);
  auVar4[9] = uVar36;
  auVar4[10] = uVar37;
  auVar4[0xb] = uVar39;
  auVar4[0xc] = SUB41(fVar28,0);
  auVar4[0xd] = uVar38;
  auVar4[0xe] = uVar40;
  auVar4[0xf] = uVar43;
  auVar62 = NEON_ext(auVar89,auVar4,8,1);
  uVar94 = NEON_ext(CONCAT44((fVar30 - fVar70) - fVar90,((float)uVar48 - fVar70) - fVar90),
                    CONCAT44(fVar64 * fVar85 + fVar75 * fVar92,fVar64 * fVar85 + fVar75 * fVar92),4,
                    1);
  fVar72 = *(float *)(param_2 + 0xc);
  uVar60 = NEON_fminp(CONCAT44(fVar72,fVar72),uVar66,4);
  fVar73 = param_5[2] * DAT_01d4bacc;
  fVar77 = fVar77 + fVar77;
  fVar93 = fVar93 + fVar93;
  fVar68 = auVar62._0_4_ + auVar62._0_4_;
  uVar60 = NEON_fminp(uVar60,uVar60,4);
  uVar60 = NEON_fmin(CONCAT44((float)((ulong)uVar60 >> 0x20) * 0.15,(float)uVar60 * 0.15),
                     CONCAT17((char)((uint)fVar73 >> 0x18),
                              CONCAT16((char)((uint)fVar73 >> 0x10),
                                       CONCAT15((char)((uint)fVar73 >> 8),
                                                CONCAT14(SUB41(fVar73,0),fVar73)))),4);
  fVar28 = fVar74 * fVar91 + fVar75 * fVar85;
  fVar65 = (float)uVar60 * 0.2;
  fVar73 = (float)uVar48 - fVar59 * fVar85;
  fVar70 = fVar73 - fVar70;
  uVar60 = NEON_ext(CONCAT44(fVar64 * fVar85 - fVar75 * fVar92,fVar64 * fVar85 - fVar75 * fVar92),
                    CONCAT44((fVar30 - fVar59 * fVar85) - fVar90,fVar73 - fVar90),4,1);
  uVar48 = NEON_ext(CONCAT44(fVar74 * fVar85 + fVar75 * fVar91,fVar74 * fVar85 + fVar75 * fVar91),
                    CONCAT44(fVar74 * fVar91 - fVar75 * fVar85,fVar74 * fVar91 - fVar75 * fVar85),4,
                    1);
  auVar95._8_4_ = fVar28;
  auVar95._0_8_ = uVar60;
  auVar96._12_4_ = 0;
  auVar96._0_12_ = auVar95;
  fVar69 = (float)uVar48;
  fVar71 = (float)((ulong)uVar48 >> 0x20);
  fVar73 = (float)uVar94;
  fVar30 = (float)((ulong)uVar94 >> 0x20);
  if (*(byte *)(param_6 + 4) == 0) {
LAB_002861c0:
    auVar47._0_8_ =
         CONCAT44(ABS(fVar93 - *(float *)((long)param_6 + 0x14)),
                  ABS(fVar77 - *(float *)(param_6 + 2)));
    auVar47._8_4_ = ABS(fVar68 - *(float *)(param_6 + 3));
    auVar47._12_4_ = ABS(0.0 - *(float *)((long)param_6 + 0x1c));
    fVar28 = fVar59 * (float)*param_6;
    fVar80 = fVar64 * (float)((ulong)*param_6 >> 0x20);
    uVar33 = (undefined1)((uint)fVar80 >> 8);
    uVar34 = (undefined1)((uint)fVar80 >> 0x10);
    uVar35 = (undefined1)((uint)fVar80 >> 0x18);
    fVar85 = fVar74 * (float)param_6[1];
    uVar36 = (undefined1)((uint)fVar85 >> 8);
    uVar37 = (undefined1)((uint)fVar85 >> 0x10);
    uVar39 = (undefined1)((uint)fVar85 >> 0x18);
    fVar91 = fVar75 * (float)((ulong)param_6[1] >> 0x20);
    uVar38 = (undefined1)((uint)fVar91 >> 8);
    uVar40 = (undefined1)((uint)fVar91 >> 0x10);
    uVar43 = (undefined1)((uint)fVar91 >> 0x18);
    auVar62 = NEON_ext(auVar47,auVar47,8,1);
    uVar60 = NEON_fmaxp(auVar62._0_8_,auVar47._0_8_,4);
    auVar5[4] = SUB41(fVar80,0);
    auVar5._0_4_ = fVar28;
    auVar5[5] = uVar33;
    auVar5[6] = uVar34;
    auVar5[7] = uVar35;
    auVar5[8] = SUB41(fVar85,0);
    auVar5[9] = uVar36;
    auVar5[10] = uVar37;
    auVar5[0xb] = uVar39;
    auVar5[0xc] = SUB41(fVar91,0);
    auVar5[0xd] = uVar38;
    auVar5[0xe] = uVar40;
    auVar5[0xf] = uVar43;
    auVar6[4] = SUB41(fVar80,0);
    auVar6._0_4_ = fVar28;
    auVar6[5] = uVar33;
    auVar6[6] = uVar34;
    auVar6[7] = uVar35;
    auVar6[8] = SUB41(fVar85,0);
    auVar6[9] = uVar36;
    auVar6[10] = uVar37;
    auVar6[0xb] = uVar39;
    auVar6[0xc] = SUB41(fVar91,0);
    auVar6[0xd] = uVar38;
    auVar6[0xe] = uVar40;
    auVar6[0xf] = uVar43;
    auVar62 = NEON_ext(auVar5,auVar6,8,1);
    uVar60 = NEON_fmaxp(uVar60,uVar60,4);
    iVar45 = -(uint)(fVar65 < (float)uVar60);
    iVar26 = -(uint)(fVar28 + fVar80 + auVar62._0_4_ + auVar62._4_4_ < 0.9998);
    bVar31 = (byte)((uint)iVar26 >> 0x10) | (byte)((uint)iVar45 >> 0x10);
    bVar32 = (byte)((uint)iVar26 >> 0x18) | (byte)((uint)iVar45 >> 0x18);
    uVar3 = CONCAT11((byte)((uint)iVar26 >> 8) | (byte)((uint)iVar45 >> 8),
                     (byte)iVar26 | (byte)iVar45);
    iVar26 = -(uint)(CONCAT13(bVar32,CONCAT12(bVar31,uVar3)) == -1);
    iVar45 = -(uint)(CONCAT13(bVar32,CONCAT12(bVar31,uVar3)) == -1);
    uVar33 = (undefined1)iVar45;
    uVar34 = (undefined1)((uint)iVar45 >> 8);
    uVar35 = (undefined1)((uint)iVar45 >> 0x10);
    uVar36 = (undefined1)((uint)iVar45 >> 0x18);
    iVar45 = -(uint)(CONCAT13(bVar32,CONCAT12(bVar31,uVar3)) == -1);
    uVar37 = (undefined1)iVar45;
    uVar39 = (undefined1)((uint)iVar45 >> 8);
    uVar38 = (undefined1)((uint)iVar45 >> 0x10);
    uVar40 = (undefined1)((uint)iVar45 >> 0x18);
    iVar45 = -(uint)(CONCAT13(bVar32,CONCAT12(bVar31,uVar3)) == -1);
    uVar43 = (undefined1)iVar45;
    uVar41 = (undefined1)((uint)iVar45 >> 8);
    uVar42 = (undefined1)((uint)iVar45 >> 0x10);
    uVar44 = (undefined1)((uint)iVar45 >> 0x18);
    auVar7[4] = uVar33;
    auVar7._0_4_ = iVar26;
    auVar7[5] = uVar34;
    auVar7[6] = uVar35;
    auVar7[7] = uVar36;
    auVar7[8] = uVar37;
    auVar7[9] = uVar39;
    auVar7[10] = uVar38;
    auVar7[0xb] = uVar40;
    auVar7[0xc] = uVar43;
    auVar7[0xd] = uVar41;
    auVar7[0xe] = uVar42;
    auVar7[0xf] = uVar44;
    auVar8[4] = uVar33;
    auVar8._0_4_ = iVar26;
    auVar8[5] = uVar34;
    auVar8[6] = uVar35;
    auVar8[7] = uVar36;
    auVar8[8] = uVar37;
    auVar8[9] = uVar39;
    auVar8[10] = uVar38;
    auVar8[0xb] = uVar40;
    auVar8[0xc] = uVar43;
    auVar8[0xd] = uVar41;
    auVar8[0xe] = uVar42;
    auVar8[0xf] = uVar44;
    NEON_ext(auVar7,auVar8,8,1);
    if (CONCAT13(uVar43,CONCAT12(uVar37,CONCAT11(uVar33,(char)iVar26))) != -1) goto LAB_002865a4;
  }
  else {
    uVar25 = (uint)*(byte *)(param_6 + 4);
    lVar27 = (ulong)(uVar25 - 1) * 0x30;
    iVar26 = -uVar25;
    do {
      while( true ) {
        auVar95 = auVar96._0_12_;
        puVar24 = (undefined8 *)(param_6[6] + lVar27);
        fVar80 = (float)*puVar24;
        fVar85 = (float)((ulong)*puVar24 >> 0x20);
        fVar91 = (float)puVar24[1];
        fVar90 = fVar77 + fVar69 * fVar91 + fVar73 * fVar80 + auVar96._0_4_ * fVar85;
        fVar53 = fVar93 + fVar71 * fVar91 + fVar30 * fVar80 + auVar96._4_4_ * fVar85;
        fVar54 = fVar68 + fVar70 * fVar91 + fVar88 * fVar80 + auVar96._8_4_ * fVar85;
        uVar48 = puVar24[4];
        auVar46._0_4_ = (float)uVar48 * (fVar90 - *(float *)(puVar24 + 2));
        fVar80 = (float)((ulong)uVar48 >> 0x20);
        auVar46._4_4_ = fVar80 * (fVar53 - *(float *)((long)puVar24 + 0x14));
        fVar85 = (float)puVar24[5];
        auVar46._8_4_ = fVar85 * (fVar54 - *(float *)(puVar24 + 3));
        auVar46._12_4_ = (0.0 - *(float *)((long)puVar24 + 0x1c)) * 0.0;
        auVar62 = NEON_ext(auVar46,auVar46,8,1);
        fVar92 = auVar62._0_4_ + auVar62._4_4_;
        fVar91 = auVar46._0_4_ + auVar46._4_4_ + fVar92;
        fVar92 = auVar46._0_4_ + auVar46._4_4_ + fVar92;
        auVar52._0_4_ = fVar90 - (float)uVar48 * fVar91;
        auVar52._4_4_ = fVar53 - fVar80 * fVar91;
        auVar52._8_4_ = fVar54 - fVar85 * fVar91;
        auVar52._12_4_ = 0.0 - fVar91 * 0.0;
        auVar62 = NEON_ext(auVar52,auVar52,8,1);
        fVar80 = *(float *)(puVar24 + 2) - auVar52._0_4_;
        fVar91 = *(float *)((long)puVar24 + 0x14) - auVar52._4_4_;
        fVar90 = *(float *)(puVar24 + 3) - auVar62._0_4_;
        fVar53 = *(float *)((long)puVar24 + 0x1c) - 0.0;
        auVar49._0_4_ = fVar80 * fVar80;
        auVar49._4_4_ = fVar91 * fVar91;
        auVar49._8_4_ = fVar90 * fVar90;
        auVar49._12_4_ = fVar53 * fVar53;
        auVar62 = NEON_ext(auVar49,auVar49,8,1);
        bVar2 = fVar65 * fVar65 < auVar49._0_4_ + auVar49._4_4_ + auVar62._0_4_ + auVar62._4_4_;
        auVar50._0_4_ = -(uint)bVar2;
        auVar50._4_4_ = -(uint)bVar2;
        auVar50._8_4_ = -(uint)bVar2;
        auVar50._12_4_ = -(uint)bVar2;
        NEON_ext(auVar50,auVar50,8,1);
        if (CONCAT13((char)auVar50._12_4_,
                     CONCAT12((char)auVar50._8_4_,CONCAT11((char)auVar50._4_4_,(char)auVar50._0_4_))
                    ) == -1) break;
        puVar24[5] = CONCAT17((char)((uint)fVar92 >> 0x18),
                              CONCAT16((char)((uint)fVar92 >> 0x10),
                                       CONCAT15((char)((uint)fVar92 >> 8),
                                                CONCAT14(SUB41(fVar92,0),fVar85))));
        puVar24[4] = uVar48;
        iVar26 = iVar26 + 1;
        lVar27 = lVar27 + -0x30;
        if (iVar26 == 0) goto LAB_002861a0;
      }
      cVar1 = *(char *)(param_6 + 4);
      *(byte *)(param_6 + 4) = cVar1 - 1U;
      memcpy(puVar24,(void *)(param_6[6] + (ulong)(byte)(cVar1 - 1U) * 0x30),0x30);
      auVar96._12_4_ = 0;
      auVar96._0_12_ = auVar95;
      iVar26 = iVar26 + 1;
      lVar27 = lVar27 + -0x30;
    } while (iVar26 != 0);
LAB_002861a0:
    if (*(byte *)(param_6 + 4) == uVar25) goto LAB_002861c0;
  }
  fVar54 = (float)uVar66;
  fVar81 = (float)((ulong)uVar66 >> 0x20);
  fVar92 = auVar95._0_4_;
  fVar90 = auVar95._4_4_;
  fVar53 = auVar95._8_4_;
  *(undefined1 *)(param_6 + 4) = 0;
  fVar85 = fVar69 * fVar72;
  fVar65 = -fVar85;
  fVar80 = fVar73 * fVar54 + fVar92 * fVar81;
  fVar91 = fVar73 * fVar54 - fVar92 * fVar81;
  fVar9 = fVar9 - fVar77;
  bVar2 = fVar85 + fVar80 < fVar9;
  param_6[1] = CONCAT44(fVar75,fVar74);
  *param_6 = CONCAT44(fVar64,fVar59);
  param_6[3] = (ulong)(uint)fVar68;
  param_6[2] = CONCAT44(fVar93,fVar77);
  fVar28 = _UNK_01d4ae58;
  if (bVar2) {
    fVar59 = fVar77 + fVar85 + fVar80;
    uVar60 = CONCAT44(_UNK_01d4ae54,_DAT_01d4ae50);
    auVar63._0_8_ =
         CONCAT44((fVar93 + fVar71 * fVar72 + fVar30 * fVar54 + fVar90 * fVar81) -
                  _UNK_01d4ae54 * fVar59,fVar59 - _DAT_01d4ae50 * fVar59);
    auVar63._8_4_ =
         (fVar68 + fVar70 * fVar72 + fVar88 * fVar54 + fVar53 * fVar81) - _UNK_01d4ae58 * fVar59;
    auVar63._12_4_ = 0.0 - _UNK_01d4ae5c * fVar59;
    param_7[1] = (ulong)(uint)fVar72;
    *param_7 = uVar66;
    auVar62 = NEON_ext(auVar63,auVar63,8,1);
    param_7[3] = (ulong)auVar62._0_4_;
    param_7[2] = auVar63._0_8_;
    param_7[5] = CONCAT44(fVar59,fVar28);
    param_7[4] = uVar60;
  }
  fVar64 = _UNK_01d4ae58;
  fVar59 = _UNK_01d4ae54;
  fVar28 = _DAT_01d4ae50;
  uVar23 = (ulong)bVar2;
  fVar74 = -fVar72;
  uVar60 = CONCAT44(fVar81,fVar81);
  if (fVar65 + fVar80 < fVar9) {
    uVar66 = NEON_ext(CONCAT44(fVar54,fVar54),uVar60,4,1);
    fVar75 = fVar77 + fVar65 + fVar80;
    fVar82 = (float)uVar66;
    fVar83 = (float)((ulong)uVar66 >> 0x20);
    auVar76._0_8_ =
         CONCAT44((fVar93 + fVar71 * fVar74 + fVar30 * fVar82 + fVar90 * fVar83) -
                  _UNK_01d4ae54 * fVar75,
                  (fVar77 + fVar69 * fVar74 + fVar73 * fVar82 + fVar92 * fVar83) -
                  _DAT_01d4ae50 * fVar75);
    auVar76._8_4_ =
         (fVar68 + fVar70 * fVar74 + fVar88 * fVar82 + fVar53 * fVar83) - _UNK_01d4ae58 * fVar75;
    auVar76._12_4_ = 0.0 - _UNK_01d4ae5c * fVar75;
    auVar62 = NEON_ext(auVar76,auVar76,8,1);
    puVar24 = param_7 + uVar23 * 6;
    uVar23 = (ulong)(bVar2 + 1);
    puVar24[1] = (ulong)(uint)fVar74;
    *puVar24 = uVar66;
    puVar24[3] = (ulong)auVar62._0_4_;
    puVar24[2] = auVar76._0_8_;
    *(float *)(puVar24 + 5) = fVar64;
    *(float *)((long)puVar24 + 0x2c) = fVar75;
    *(float *)(puVar24 + 4) = fVar28;
    *(float *)((long)puVar24 + 0x24) = fVar59;
  }
  fVar64 = _UNK_01d4ae58;
  fVar59 = _UNK_01d4ae54;
  fVar28 = _DAT_01d4ae50;
  uVar66 = CONCAT44(-fVar81,-fVar81);
  if (fVar85 + fVar91 < fVar9) {
    uVar48 = NEON_ext(CONCAT44(fVar54,fVar54),uVar66,4,1);
    fVar75 = fVar77 + fVar85 + fVar91;
    fVar83 = (float)uVar48;
    fVar84 = (float)((ulong)uVar48 >> 0x20);
    fVar81 = (fVar77 + fVar69 * fVar72 + fVar73 * fVar83 + fVar92 * fVar84) - _DAT_01d4ae50 * fVar75
    ;
    fVar82 = (fVar93 + fVar71 * fVar72 + fVar30 * fVar83 + fVar90 * fVar84) - _UNK_01d4ae54 * fVar75
    ;
    fVar83 = (fVar68 + fVar70 * fVar72 + fVar88 * fVar83 + fVar53 * fVar84) - _UNK_01d4ae58 * fVar75
    ;
    fVar84 = 0.0 - _UNK_01d4ae5c * fVar75;
    auVar16._4_4_ = fVar82;
    auVar16._0_4_ = fVar81;
    auVar16._8_4_ = fVar83;
    auVar16._12_4_ = fVar84;
    auVar17._4_4_ = fVar82;
    auVar17._0_4_ = fVar81;
    auVar17._8_4_ = fVar83;
    auVar17._12_4_ = fVar84;
    auVar62 = NEON_ext(auVar16,auVar17,8,1);
    puVar24 = param_7 + uVar23 * 6;
    uVar23 = (ulong)((int)uVar23 + 1);
    puVar24[1] = (ulong)(uint)fVar72;
    *puVar24 = uVar48;
    puVar24[3] = (ulong)auVar62._0_4_;
    puVar24[2] = CONCAT44(fVar82,fVar81);
    *(float *)(puVar24 + 5) = fVar64;
    *(float *)((long)puVar24 + 0x2c) = fVar75;
    *(float *)(puVar24 + 4) = fVar28;
    *(float *)((long)puVar24 + 0x24) = fVar59;
  }
  fVar64 = _UNK_01d4ae58;
  fVar59 = _UNK_01d4ae54;
  fVar28 = _DAT_01d4ae50;
  if (fVar65 + fVar91 < fVar9) {
    uVar48 = NEON_ext(CONCAT44(fVar54,fVar54),uVar66,4,1);
    fVar75 = fVar77 + fVar65 + fVar91;
    fVar83 = (float)uVar48;
    fVar84 = (float)((ulong)uVar48 >> 0x20);
    fVar81 = (fVar77 + fVar69 * fVar74 + fVar73 * fVar83 + fVar92 * fVar84) - _DAT_01d4ae50 * fVar75
    ;
    fVar82 = (fVar93 + fVar71 * fVar74 + fVar30 * fVar83 + fVar90 * fVar84) - _UNK_01d4ae54 * fVar75
    ;
    fVar83 = (fVar68 + fVar70 * fVar74 + fVar88 * fVar83 + fVar53 * fVar84) - _UNK_01d4ae58 * fVar75
    ;
    fVar84 = 0.0 - _UNK_01d4ae5c * fVar75;
    auVar18._4_4_ = fVar82;
    auVar18._0_4_ = fVar81;
    auVar18._8_4_ = fVar83;
    auVar18._12_4_ = fVar84;
    auVar19._4_4_ = fVar82;
    auVar19._0_4_ = fVar81;
    auVar19._8_4_ = fVar83;
    auVar19._12_4_ = fVar84;
    auVar62 = NEON_ext(auVar18,auVar19,8,1);
    puVar24 = param_7 + uVar23 * 6;
    uVar23 = (ulong)((int)uVar23 + 1);
    puVar24[1] = (ulong)(uint)fVar74;
    *puVar24 = uVar48;
    puVar24[3] = (ulong)auVar62._0_4_;
    puVar24[2] = CONCAT44(fVar82,fVar81);
    *(float *)(puVar24 + 5) = fVar64;
    *(float *)((long)puVar24 + 0x2c) = fVar75;
    *(float *)(puVar24 + 4) = fVar28;
    *(float *)((long)puVar24 + 0x24) = fVar59;
  }
  fVar64 = _UNK_01d4ae58;
  fVar59 = _UNK_01d4ae54;
  fVar28 = _DAT_01d4ae50;
  uVar48 = CONCAT44(-fVar54,-fVar54);
  if (fVar85 - fVar91 < fVar9) {
    uVar94 = NEON_ext(uVar48,uVar60,4,1);
    fVar54 = (float)uVar94;
    fVar81 = (float)((ulong)uVar94 >> 0x20);
    fVar75 = fVar77 + (fVar85 - fVar91);
    auVar79._0_8_ =
         CONCAT44((fVar93 + fVar71 * fVar72 + fVar30 * fVar54 + fVar90 * fVar81) -
                  _UNK_01d4ae54 * fVar75,
                  (fVar77 + fVar69 * fVar72 + fVar73 * fVar54 + fVar92 * fVar81) -
                  _DAT_01d4ae50 * fVar75);
    auVar79._8_4_ =
         (fVar68 + fVar70 * fVar72 + fVar88 * fVar54 + fVar53 * fVar81) - _UNK_01d4ae58 * fVar75;
    auVar79._12_4_ = 0.0 - _UNK_01d4ae5c * fVar75;
    auVar62 = NEON_ext(auVar79,auVar79,8,1);
    puVar24 = param_7 + uVar23 * 6;
    uVar23 = (ulong)((int)uVar23 + 1);
    puVar24[1] = (ulong)(uint)fVar72;
    *puVar24 = uVar94;
    puVar24[3] = (ulong)auVar62._0_4_;
    puVar24[2] = auVar79._0_8_;
    *(float *)(puVar24 + 5) = fVar64;
    *(float *)((long)puVar24 + 0x2c) = fVar75;
    *(float *)(puVar24 + 4) = fVar28;
    *(float *)((long)puVar24 + 0x24) = fVar59;
  }
  fVar64 = _UNK_01d4ae58;
  fVar59 = _UNK_01d4ae54;
  fVar28 = _DAT_01d4ae50;
  if (fVar65 - fVar91 < fVar9) {
    uVar60 = NEON_ext(uVar48,uVar60,4,1);
    fVar82 = fVar77 + (fVar65 - fVar91);
    fVar75 = (float)uVar60;
    fVar91 = (float)((ulong)uVar60 >> 0x20);
    fVar54 = (fVar77 + fVar69 * fVar74 + fVar73 * fVar75 + fVar92 * fVar91) - _DAT_01d4ae50 * fVar82
    ;
    fVar81 = (fVar93 + fVar71 * fVar74 + fVar30 * fVar75 + fVar90 * fVar91) - _UNK_01d4ae54 * fVar82
    ;
    fVar75 = (fVar68 + fVar70 * fVar74 + fVar88 * fVar75 + fVar53 * fVar91) - _UNK_01d4ae58 * fVar82
    ;
    fVar91 = 0.0 - _UNK_01d4ae5c * fVar82;
    auVar14._4_4_ = fVar81;
    auVar14._0_4_ = fVar54;
    auVar14._8_4_ = fVar75;
    auVar14._12_4_ = fVar91;
    auVar15._4_4_ = fVar81;
    auVar15._0_4_ = fVar54;
    auVar15._8_4_ = fVar75;
    auVar15._12_4_ = fVar91;
    auVar62 = NEON_ext(auVar14,auVar15,8,1);
    puVar24 = param_7 + uVar23 * 6;
    uVar23 = (ulong)((int)uVar23 + 1);
    puVar24[1] = (ulong)(uint)fVar74;
    *puVar24 = uVar60;
    puVar24[3] = (ulong)auVar62._0_4_;
    puVar24[2] = CONCAT44(fVar81,fVar54);
    *(float *)(puVar24 + 5) = fVar64;
    *(float *)((long)puVar24 + 0x2c) = fVar82;
    *(float *)(puVar24 + 4) = fVar28;
    *(float *)((long)puVar24 + 0x24) = fVar59;
    fVar28 = _DAT_01d4ae50;
    fVar59 = _UNK_01d4ae54;
    fVar64 = _UNK_01d4ae58;
  }
  _DAT_01d4ae50 = fVar28;
  _UNK_01d4ae54 = fVar59;
  _UNK_01d4ae58 = fVar64;
  if (fVar85 - fVar80 < fVar9) {
    uVar60 = NEON_ext(uVar48,uVar66,4,1);
    fVar75 = (float)uVar60;
    fVar91 = (float)((ulong)uVar60 >> 0x20);
    fVar85 = fVar77 + (fVar85 - fVar80);
    auVar58._0_8_ =
         CONCAT44((fVar93 + fVar71 * fVar72 + fVar30 * fVar75 + fVar90 * fVar91) - fVar59 * fVar85,
                  (fVar77 + fVar69 * fVar72 + fVar73 * fVar75 + fVar92 * fVar91) - fVar28 * fVar85);
    auVar58._8_4_ = (fVar68 + fVar70 * fVar72 + fVar88 * fVar75 + fVar53 * fVar91) - fVar64 * fVar85
    ;
    auVar58._12_4_ = 0.0 - _UNK_01d4ae5c * fVar85;
    auVar62 = NEON_ext(auVar58,auVar58,8,1);
    puVar24 = param_7 + uVar23 * 6;
    uVar23 = (ulong)((int)uVar23 + 1);
    puVar24[1] = (ulong)(uint)fVar72;
    *puVar24 = uVar60;
    puVar24[3] = (ulong)auVar62._0_4_;
    puVar24[2] = auVar58._0_8_;
    *(float *)(puVar24 + 5) = fVar64;
    *(float *)((long)puVar24 + 0x2c) = fVar85;
    *(float *)(puVar24 + 4) = fVar28;
    *(float *)((long)puVar24 + 0x24) = fVar59;
  }
  bVar31 = -(fVar65 - fVar80 < fVar9);
  if ((bVar31 & 1) != 0) {
    uVar66 = NEON_ext(uVar48,uVar66,4,1);
    fVar9 = fVar77 + (fVar65 - fVar80);
    bVar31 = SUB41(fVar9,0);
    puVar24 = param_7 + uVar23 * 6;
    fVar59 = (float)((ulong)uVar66 >> 0x20);
    uVar23 = (ulong)((int)uVar23 + 1);
    fVar28 = (float)uVar66;
    auVar56._12_4_ = _UNK_01d4ae5c;
    auVar56._8_4_ = _UNK_01d4ae58;
    uVar60 = CONCAT44(_UNK_01d4ae54,_DAT_01d4ae50);
    auVar56._0_8_ = uVar60;
    auVar51._0_8_ =
         CONCAT44((fVar93 + fVar71 * fVar74 + fVar30 * fVar28 + fVar90 * fVar59) -
                  _UNK_01d4ae54 * fVar9,
                  (fVar77 + fVar69 * fVar74 + fVar73 * fVar28 + fVar92 * fVar59) -
                  _DAT_01d4ae50 * fVar9);
    auVar51._8_4_ =
         (fVar68 + fVar70 * fVar74 + fVar88 * fVar28 + fVar53 * fVar59) - _UNK_01d4ae58 * fVar9;
    auVar51._12_4_ = 0.0 - _UNK_01d4ae5c * fVar9;
    auVar62 = NEON_ext(auVar51,auVar51,8,1);
    auVar57._0_12_ = auVar56._0_12_;
    auVar57._12_4_ = fVar9;
    puVar24[5] = auVar57._8_8_;
    puVar24[4] = uVar60;
    puVar24[1] = (ulong)(uint)fVar74;
    *puVar24 = uVar66;
    puVar24[3] = (ulong)auVar62._0_4_;
    puVar24[2] = auVar51._0_8_;
  }
  FUN_00290bf0(bVar31,param_6,param_7,uVar23);
LAB_002865a4:
  FUN_00290110(param_6,param_7,&local_a0,&local_90,&local_a8);
  return *(char *)(param_6 + 4) != '\0';
}


