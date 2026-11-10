/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00287ee0; name: FUN_00287ee0
 */


/* WARNING: Removing unreachable block (ram,0x002889f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00287ee0(long param_1,long param_2,undefined1 (*param_3) [16],undefined1 (*param_4) [16],
                 undefined4 *param_5,undefined8 *param_6,long param_7,undefined8 param_8)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [16];
  float *__dest;
  byte bVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  bool bVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 *puVar26;
  float *pfVar27;
  long lVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iVar33;
  float fVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar39;
  float fVar48;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar66;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined8 uVar53;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar71 [16];
  float fVar77;
  float fVar79;
  float fVar80;
  undefined1 auVar78 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
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
  undefined8 uVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined8 uVar98;
  undefined8 uVar99;
  float fVar100;
  float fVar101;
  float fVar103;
  float fVar104;
  undefined1 auVar102 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  undefined1 auVar110 [16];
  undefined8 uVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar115;
  float fVar116;
  undefined8 uVar117;
  ulong uVar118;
  float local_2c0;
  float fStack_2bc;
  undefined *local_260;
  float *local_258;
  undefined8 local_250;
  ulong uStack_248;
  undefined *local_240;
  undefined8 *local_238;
  undefined8 local_230;
  ulong uStack_228;
  float local_220;
  float local_21c;
  float local_218;
  undefined8 local_214;
  undefined1 local_20c;
  undefined8 local_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 local_1e0;
  float local_1d0;
  float fStack_1cc;
  ulong uStack_1c8;
  undefined4 local_1c0;
  float local_1bc;
  float local_1b8;
  undefined8 local_1b4;
  undefined1 local_1ac;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long local_140;
  undefined8 local_138;
  long local_130;
  undefined1 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 local_98;
  
  fVar31 = DAT_01d4c158;
  lVar28 = *(long *)(param_2 + 0x30);
  pfVar27 = (float *)*param_6;
  Hint_Prefetch(lVar28,0,0,0);
  local_98 = CONCAT44(*param_5,*param_5);
  fVar115 = *(float *)(param_1 + 4);
  pauVar2 = param_3 + 1;
  pauVar1 = (undefined1 (*) [12])(param_2 + 4);
  fVar66 = (float)*(undefined8 *)(param_2 + 0xc);
  auVar21 = *pauVar1;
  auVar20 = *pauVar1;
  auVar19 = *pauVar1;
  auVar18 = *pauVar1;
  auVar17 = *pauVar1;
  fVar51 = (float)*(undefined8 *)*pauVar1;
  fVar65 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar83 = *param_3;
  uVar53 = *(undefined8 *)*pauVar2;
  uStack_b0 = *(undefined8 *)*pauVar2;
  fVar49 = *(float *)(param_3[1] + 8);
  uStack_b8 = auVar83._8_8_;
  local_c0 = auVar83._0_8_;
  uStack_a8 = (ulong)(uint)fVar49;
  uStack_d8 = *(undefined8 *)(*param_4 + 8);
  local_e0 = *(undefined8 *)*param_4;
  auVar60 = *param_4;
  auVar14 = *(undefined1 (*) [12])param_4[1];
  auVar78._0_4_ = -(float)local_e0;
  fVar69 = (float)((ulong)local_e0 >> 0x20);
  auVar78._4_4_ = -fVar69;
  fVar70 = (float)uStack_d8;
  auVar78._8_4_ = -fVar70;
  fVar74 = (float)((ulong)uStack_d8 >> 0x20);
  uVar98 = CONCAT44(fVar115,fVar115);
  uVar99 = NEON_fmov(0x3f800000,4);
  fVar85 = *(float *)*pauVar2 - auVar14._0_4_;
  fVar88 = *(float *)(param_3[1] + 4) - auVar14._4_4_;
  fVar91 = fVar49 - auVar14._8_4_;
  fVar67 = fVar74 * fVar74 + -0.5;
  fVar48 = auVar83._4_4_;
  fVar77 = auVar83._8_4_;
  fVar116 = auVar83._12_4_;
  auVar78._12_4_ = 0;
  auVar110 = NEON_ext(auVar78,auVar78,8,1);
  uStack_c8 = (ulong)(uint)auVar14._8_4_;
  uStack_d0 = auVar14._0_8_;
  bVar3 = *(byte *)(pfVar27 + 8);
  auVar96._4_4_ = fVar88;
  auVar96._0_4_ = fVar85;
  auVar96._8_4_ = fVar91;
  auVar96._12_4_ = 0;
  auVar112._4_4_ = fVar88;
  auVar112._0_4_ = fVar85;
  auVar112._8_4_ = fVar91;
  auVar112._12_4_ = 0;
  auVar96 = NEON_ext(auVar96,auVar112,8,1);
  fVar100 = auVar78._0_4_ * fVar88 - auVar78._4_4_ * fVar85;
  fVar105 = auVar78._0_4_ * fVar85;
  fVar106 = auVar78._4_4_ * fVar88;
  uVar95 = NEON_ext(CONCAT44(auVar78._4_4_ * fVar91 - auVar78._8_4_ * fVar88,fVar100),
                    CONCAT44(auVar110._4_4_ * fVar88 - auVar78._4_4_ * auVar96._4_4_,
                             auVar110._0_4_ * fVar85 - auVar78._0_4_ * auVar96._0_4_),4,1);
  auVar40._0_12_ = auVar83._0_12_;
  auVar40._12_4_ = 0;
  fVar38 = auVar83._0_4_;
  auVar83._4_4_ = fVar106;
  auVar83._0_4_ = fVar105;
  auVar83._8_4_ = auVar78._8_4_ * fVar91;
  auVar83._12_4_ = 0;
  auVar97._4_4_ = fVar106;
  auVar97._0_4_ = fVar105;
  auVar97._8_4_ = auVar78._8_4_ * fVar91;
  auVar97._12_4_ = 0;
  auVar96 = NEON_ext(auVar83,auVar97,8,1);
  auVar112 = NEON_ext(auVar40,auVar40,8,1);
  fVar50 = fVar48 * auVar78._0_4_ - fVar38 * auVar78._4_4_;
  fVar105 = fVar105 + fVar106 + auVar96._0_4_ + auVar96._4_4_;
  auVar41._0_4_ = fVar38 * auVar78._0_4_;
  auVar41._4_4_ = fVar48 * auVar78._4_4_;
  auVar41._8_4_ = fVar77 * auVar78._8_4_;
  auVar41._12_4_ = 0;
  uVar52 = NEON_ext(CONCAT44(fVar77 * auVar78._4_4_ - fVar48 * auVar78._8_4_,fVar50),
                    CONCAT44(fVar48 * auVar110._4_4_ - auVar112._4_4_ * auVar78._4_4_,
                             fVar38 * auVar110._0_4_ - auVar112._0_4_ * auVar78._0_4_),4,1);
  auVar96 = NEON_ext(auVar41,auVar41,8,1);
  fVar106 = fVar38 * fVar74 + auVar78._0_4_ * fVar116 + (float)uVar52;
  fVar48 = fVar48 * fVar74 + auVar78._4_4_ * fVar116 + (float)((ulong)uVar52 >> 0x20);
  fVar50 = fVar77 * fVar74 + auVar78._8_4_ * fVar116 + fVar50;
  auVar54._0_4_ = fVar85 * fVar67 + (float)uVar95 * fVar74;
  auVar54._4_4_ = fVar88 * fVar67 + (float)((ulong)uVar95 >> 0x20) * fVar74;
  auVar54._8_4_ = fVar91 * fVar67 + fVar100 * fVar74;
  auVar54._12_4_ = fVar74 * 0.0 + 0.0;
  fVar38 = fVar116 * fVar74 - (auVar41._0_4_ + auVar41._4_4_ + auVar96._0_4_ + auVar96._4_4_);
  auVar96 = NEON_ext(auVar54,auVar54,8,1);
  auVar110._8_4_ = fVar50;
  auVar110._0_8_ = CONCAT44(fVar48,fVar106);
  auVar110._12_4_ = fVar38;
  auVar55._0_4_ = auVar78._0_4_ * fVar105 + auVar54._0_4_;
  auVar55._4_4_ = auVar78._4_4_ * fVar105 + auVar54._4_4_;
  auVar55._8_4_ = auVar78._8_4_ * fVar105 + auVar96._0_4_;
  auVar55._12_4_ = fVar105 * 0.0 + 0.0;
  auVar96 = NEON_ext(auVar55,auVar55,8,1);
  fVar116 = auVar55._0_4_ + auVar55._0_4_;
  fVar67 = auVar55._4_4_ + auVar55._4_4_;
  uVar117 = CONCAT44(fVar67,fVar116);
  fVar85 = auVar96._0_4_ + auVar96._0_4_;
  uVar118 = (ulong)(uint)fVar85;
  auVar14 = *(undefined1 (*) [12])(lVar28 + 0x3c);
  fVar105 = fVar66 * auVar14._8_4_;
  uVar52 = NEON_fminp(CONCAT44(fVar105,fVar105),
                      CONCAT44(fVar65 * auVar14._4_4_,fVar51 * auVar14._0_4_),4);
  uVar95 = NEON_fmov(0x3e800000,4);
  uVar52 = NEON_fminp(uVar52,uVar52,4);
  uVar52 = NEON_fmin(CONCAT44((float)((ulong)uVar52 >> 0x20) * (float)((ulong)uVar95 >> 0x20),
                              (float)uVar52 * (float)uVar95),
                     CONCAT44((float)param_5[2] * DAT_01d4c158,(float)param_5[2] * DAT_01d4c158),4);
  uVar52 = NEON_fmin(uVar52,uVar98,4);
  uVar24 = (uint)bVar3;
  fVar105 = (float)uVar99;
  fVar77 = (float)((ulong)uVar99 >> 0x20);
  if (bVar3 == 0) {
    uVar25 = 0;
  }
  else {
    fVar100 = fVar106 + fVar106;
    fVar72 = fVar48 + fVar48;
    fVar75 = fVar50 + fVar50;
    fVar79 = fVar48 * fVar72;
    fVar80 = fVar50 * fVar75;
    fVar91 = fVar105 - fVar106 * fVar100;
    auVar113._0_8_ =
         NEON_ext(CONCAT44(fVar50 * fVar100 + fVar38 * fVar72,fVar50 * fVar100 + fVar38 * fVar72),
                  CONCAT44(fVar50 * fVar72 - fVar38 * fVar100,fVar50 * fVar72 - fVar38 * fVar100),4,
                  1);
    fVar109 = fVar91 - fVar79;
    fVar88 = fVar50 * fVar72 + fVar38 * fVar100;
    lVar29 = (ulong)(bVar3 - 1) * 0x30;
    auVar113._8_4_ = fVar109;
    auVar113._12_4_ = 0;
    auVar81._0_8_ =
         NEON_ext(CONCAT44(fVar48 * fVar100 - fVar38 * fVar75,fVar48 * fVar100 - fVar38 * fVar75),
                  CONCAT44((fVar77 - fVar106 * fVar100) - fVar80,fVar91 - fVar80),4,1);
    auVar81._8_4_ = fVar88;
    auVar81._12_4_ = 0;
    fVar91 = (float)uVar52 * 0.05;
    uVar95 = NEON_ext(CONCAT44((fVar77 - fVar79) - fVar80,(fVar105 - fVar79) - fVar80),
                      CONCAT44(fVar48 * fVar100 + fVar38 * fVar75,fVar48 * fVar100 + fVar38 * fVar75
                              ),4,1);
    iVar33 = -uVar24;
    auVar82 = auVar81;
    auVar114 = auVar113;
    do {
      while( true ) {
        __dest = (float *)(*(long *)(pfVar27 + 0xc) + lVar29);
        fVar75 = *__dest;
        fVar79 = __dest[1];
        fVar80 = __dest[2];
        fVar68 = fVar116 + auVar114._0_4_ * fVar80 + (float)uVar95 * fVar75 + auVar82._0_4_ * fVar79
        ;
        fVar73 = fVar67 + auVar114._4_4_ * fVar80 +
                          (float)((ulong)uVar95 >> 0x20) * fVar75 + auVar82._4_4_ * fVar79;
        fVar76 = fVar85 + auVar114._8_4_ * fVar80 +
                          (fVar50 * fVar100 - fVar38 * fVar72) * fVar75 + auVar82._8_4_ * fVar79;
        fVar75 = __dest[8];
        fVar79 = __dest[9];
        fVar80 = __dest[10];
        auVar42._0_4_ = fVar75 * (fVar68 - __dest[4]);
        auVar42._4_4_ = fVar79 * (fVar73 - __dest[5]);
        auVar42._8_4_ = fVar80 * (fVar76 - __dest[6]);
        auVar42._12_4_ = (0.0 - __dest[7]) * 0.0;
        auVar96 = NEON_ext(auVar42,auVar42,8,1);
        fVar32 = auVar96._0_4_ + auVar96._4_4_;
        fVar30 = auVar42._0_4_ + auVar42._4_4_ + fVar32;
        auVar71._0_4_ = fVar68 - fVar75 * fVar30;
        auVar71._4_4_ = fVar73 - fVar79 * fVar30;
        auVar71._8_4_ = fVar76 - fVar80 * fVar30;
        auVar71._12_4_ = 0.0 - fVar30 * 0.0;
        auVar96 = NEON_ext(auVar71,auVar71,8,1);
        fVar30 = __dest[4] - auVar71._0_4_;
        fVar68 = __dest[5] - auVar71._4_4_;
        fVar73 = __dest[6] - auVar96._0_4_;
        fVar76 = __dest[7] - 0.0;
        auVar56._0_4_ = fVar30 * fVar30;
        auVar56._4_4_ = fVar68 * fVar68;
        auVar56._8_4_ = fVar73 * fVar73;
        auVar56._12_4_ = fVar76 * fVar76;
        auVar96 = NEON_ext(auVar56,auVar56,8,1);
        bVar22 = fVar91 * fVar91 < auVar56._0_4_ + auVar56._4_4_ + auVar96._0_4_ + auVar96._4_4_;
        auVar57._0_4_ = -(uint)bVar22;
        auVar57._4_4_ = -(uint)bVar22;
        auVar57._8_4_ = -(uint)bVar22;
        auVar57._12_4_ = -(uint)bVar22;
        NEON_ext(auVar57,auVar57,8,1);
        if (CONCAT13((char)auVar57._12_4_,
                     CONCAT12((char)auVar57._8_4_,CONCAT11((char)auVar57._4_4_,(char)auVar57._0_4_))
                    ) == -1) break;
        __dest[10] = fVar80;
        __dest[0xb] = auVar42._0_4_ + auVar42._4_4_ + fVar32;
        __dest[8] = fVar75;
        __dest[9] = fVar79;
        iVar33 = iVar33 + 1;
        lVar29 = lVar29 + -0x30;
        if (iVar33 == 0) goto LAB_002882b0;
      }
      cVar4 = *(char *)(pfVar27 + 8);
      *(byte *)(pfVar27 + 8) = cVar4 - 1U;
      memcpy(__dest,(void *)(*(long *)(pfVar27 + 0xc) + (ulong)(byte)(cVar4 - 1U) * 0x30),0x30);
      auVar82._8_4_ = fVar88;
      auVar82._0_8_ = auVar81._0_8_;
      auVar82._12_4_ = 0;
      auVar114._8_4_ = fVar109;
      auVar114._0_8_ = auVar113._0_8_;
      auVar114._12_4_ = 0;
      iVar33 = iVar33 + 1;
      lVar29 = lVar29 + -0x30;
    } while (iVar33 != 0);
LAB_002882b0:
    auVar110._8_8_ = auVar110._8_8_;
    uVar25 = (uint)*(byte *)(pfVar27 + 8);
  }
  local_118 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  local_2c0 = (float)uVar53;
  fStack_2bc = (float)((ulong)uVar53 >> 0x20);
  if (uVar25 == uVar24) {
    auVar43._0_4_ = auVar110._0_4_ * *pfVar27;
    auVar43._4_4_ = auVar110._4_4_ * pfVar27[1];
    auVar43._8_4_ = auVar110._8_4_ * pfVar27[2];
    auVar43._12_4_ = auVar110._12_4_ * pfVar27[3];
    auVar112 = NEON_ext(auVar43,auVar43,8,1);
    auVar58._0_8_ = CONCAT44(ABS(fVar67 - pfVar27[5]),ABS(fVar116 - pfVar27[4]));
    auVar58._8_4_ = ABS(fVar85 - pfVar27[6]);
    auVar58._12_4_ = ABS(0.0 - pfVar27[7]);
    auVar96 = NEON_ext(auVar58,auVar58,8,1);
    uVar53 = NEON_fmaxp(auVar96._0_8_,auVar58._0_8_,4);
    uVar53 = NEON_fmaxp(uVar53,uVar53,4);
    iVar39 = -(uint)(auVar43._0_4_ + auVar43._4_4_ + auVar112._0_4_ + auVar112._4_4_ <
                    *(float *)(PTR_DAT_02711ed0 + (ulong)bVar3 * 4));
    iVar33 = -(uint)((float)uVar52 * *(float *)(PTR_DAT_02711ec8 + (ulong)bVar3 * 4) < (float)uVar53
                    );
    iVar33 = CONCAT13((byte)((uint)iVar39 >> 0x18) | (byte)((uint)iVar33 >> 0x18),
                      CONCAT12((byte)((uint)iVar39 >> 0x10) | (byte)((uint)iVar33 >> 0x10),
                               CONCAT11((byte)((uint)iVar39 >> 8) | (byte)((uint)iVar33 >> 8),
                                        (byte)iVar39 | (byte)iVar33)));
    auVar34._0_4_ = -(uint)(iVar33 == -1);
    auVar34._4_4_ = -(uint)(iVar33 == -1);
    auVar34._8_4_ = -(uint)(iVar33 == -1);
    auVar34._12_4_ = -(uint)(iVar33 == -1);
    NEON_ext(auVar34,auVar34,8,1);
    if (CONCAT13((char)auVar34._12_4_,
                 CONCAT12((char)auVar34._8_4_,CONCAT11((char)auVar34._4_4_,(char)auVar34._0_4_))) ==
        -1) goto LAB_00288468;
    if (uVar24 != 0) {
      auVar96 = *(undefined1 (*) [16])(*(long *)(pfVar27 + 0xc) + 0x20);
      auVar44._0_12_ = auVar60._0_12_;
      auVar44._12_4_ = 0;
      fVar116 = auVar96._8_4_;
      fVar77 = auVar96._0_4_;
      fVar50 = auVar96._4_4_;
      fVar106 = fVar74 * fVar74 + -0.5;
      auVar112 = NEON_ext(auVar44,auVar44,8,1);
      fVar105 = auVar60._0_4_;
      fVar38 = auVar60._4_4_;
      auVar5._12_4_ = 0;
      auVar5._0_12_ = auVar96._0_12_;
      auVar6._12_4_ = 0;
      auVar6._0_12_ = auVar96._0_12_;
      auVar97 = NEON_ext(auVar5,auVar6,8,1);
      auVar102._0_4_ = fVar105 * fVar77;
      auVar102._4_4_ = fVar38 * fVar50;
      auVar102._8_4_ = auVar60._8_4_ * fVar116;
      auVar102._12_4_ = 0;
      fVar48 = fVar105 * fVar50 - fVar69 * fVar77;
      auVar83 = NEON_ext(auVar102,auVar102,8,1);
      uVar53 = NEON_ext(CONCAT44(fVar38 * fVar116 - fVar70 * fVar50,fVar48),
                        CONCAT44(auVar112._4_4_ * fVar50 - fVar38 * auVar97._4_4_,
                                 auVar112._0_4_ * fVar77 - fVar105 * auVar97._0_4_),4,1);
      fVar31 = auVar102._0_4_ + auVar102._4_4_ + auVar83._0_4_ + auVar83._4_4_;
      auVar59._0_4_ = fVar77 * fVar106 + fVar74 * (float)uVar53;
      auVar59._4_4_ = fVar50 * fVar106 + fVar74 * (float)((ulong)uVar53 >> 0x20);
      auVar59._8_4_ = fVar116 * fVar106 + fVar74 * fVar48;
      auVar59._12_4_ = fVar74 * 0.0 + 0.0;
      auVar112 = NEON_ext(auVar59,auVar59,8,1);
      auVar45._0_4_ = fVar105 * fVar31 + auVar59._0_4_;
      auVar45._4_4_ = fVar38 * fVar31 + auVar59._4_4_;
      auVar45._8_4_ = auVar60._8_4_ * fVar31 + auVar112._0_4_;
      auVar45._12_4_ = fVar31 * 0.0 + 0.0;
      auVar112 = NEON_ext(auVar45,auVar45,8,1);
      puVar26 = (undefined8 *)(param_7 + (ulong)*(uint *)(param_7 + 0x1000) * 0x40);
      uVar24 = 1;
      *(uint *)(param_7 + 0x1000) = *(uint *)(param_7 + 0x1000) + 1;
      fVar31 = auVar112._0_4_ + auVar112._0_4_;
      auVar60._0_8_ =
           CONCAT44(fStack_2bc - (auVar45._4_4_ + auVar45._4_4_) * fVar115,
                    local_2c0 - (auVar45._0_4_ + auVar45._0_4_) * fVar115);
      auVar60._8_4_ = fVar49 - fVar31 * fVar115;
      auVar60._12_4_ = 0.0 - fVar115 * 0.0;
      auVar112 = NEON_ext(auVar60,auVar60,8,1);
      puVar26[1] = (ulong)(uint)fVar31;
      *puVar26 = CONCAT44(auVar45._4_4_ + auVar45._4_4_,auVar45._0_4_ + auVar45._0_4_);
      puVar26[3] = (ulong)auVar112._0_4_;
      puVar26[2] = auVar60._0_8_;
      *(float *)((long)puVar26 + 0xc) = auVar96._12_4_ - fVar115;
      *(undefined4 *)((long)puVar26 + 0x34) = 0xffffffff;
      goto LAB_00288964;
    }
LAB_00288960:
    uVar24 = 0;
  }
  else {
LAB_00288468:
    *(long *)(pfVar27 + 2) = auVar110._8_8_;
    *(long *)pfVar27 = auVar110._0_8_;
    *(ulong *)(pfVar27 + 6) = uVar118;
    *(undefined8 *)(pfVar27 + 4) = uVar117;
    fVar38 = *(float *)(param_2 + 0x10);
    fVar106 = *(float *)(param_2 + 0x14);
    fVar48 = *(float *)(param_2 + 0x18);
    fVar50 = *(float *)(param_2 + 0x1c);
    if ((*(float *)(param_2 + 4) == 1.0) && (*(float *)(param_2 + 8) == 1.0)) {
      bVar22 = *(float *)(param_2 + 0xc) == 1.0;
    }
    else {
      bVar22 = false;
    }
    local_1ac = 0;
    local_1d0 = 0.0;
    fStack_1cc = 0.0;
    uStack_1c8 = 0;
    local_1b4 = 0x7f7fffff;
    local_130 = *(long *)(lVar28 + 0x28) + (ulong)*(byte *)(lVar28 + 0x27) * 0x14;
    local_128 = *(undefined1 *)(lVar28 + 0x26);
    auVar14 = *(undefined1 (*) [12])(lVar28 + 0x3c);
    fVar88 = fVar66 * auVar14._8_4_;
    uVar53 = NEON_fminp(CONCAT44(fVar88,fVar88),
                        CONCAT44(fVar65 * auVar14._4_4_,fVar51 * auVar14._0_4_),4);
    uVar53 = NEON_fminp(uVar53,uVar53,4);
    local_1bc = fVar31 * (float)uVar53;
    local_1b8 = DAT_01d4bb3c * (float)uVar53;
    uVar23 = DAT_01d4c18c;
    if (bVar22 == false) {
      auVar9._12_4_ = 0;
      auVar9._0_12_ = auVar17;
      auVar96 = NEON_frecpe(auVar9,4);
      auVar10._12_4_ = 0;
      auVar10._0_12_ = auVar18;
      auVar112 = NEON_frecps(auVar96,auVar10,4);
      auVar35._0_4_ = auVar96._0_4_ * auVar112._0_4_;
      auVar35._4_4_ = auVar96._4_4_ * auVar112._4_4_;
      auVar35._8_4_ = auVar96._8_4_ * auVar112._8_4_;
      auVar35._12_4_ = auVar96._12_4_ * auVar112._12_4_;
      auVar11._12_4_ = 0;
      auVar11._0_12_ = auVar19;
      auVar96 = NEON_frecps(auVar35,auVar11,4);
      auVar36._0_4_ = auVar35._0_4_ * auVar96._0_4_;
      auVar36._4_4_ = auVar35._4_4_ * auVar96._4_4_;
      auVar36._8_4_ = auVar35._8_4_ * auVar96._8_4_;
      auVar36._12_4_ = auVar35._12_4_ * auVar96._12_4_;
      auVar12._12_4_ = 0;
      auVar12._0_12_ = auVar20;
      auVar96 = NEON_frecps(auVar36,auVar12,4);
      auVar37._0_4_ = auVar36._0_4_ * auVar96._0_4_;
      auVar37._4_4_ = auVar36._4_4_ * auVar96._4_4_;
      auVar37._8_4_ = auVar36._8_4_ * auVar96._8_4_;
      auVar37._12_4_ = auVar36._12_4_ * auVar96._12_4_;
      auVar13._12_4_ = 0;
      auVar13._0_12_ = auVar21;
      auVar96 = NEON_frecps(auVar37,auVar13,4);
      fVar31 = auVar37._0_4_ * auVar96._0_4_;
      fVar88 = auVar37._4_4_ * auVar96._4_4_;
      fVar91 = auVar37._8_4_ * auVar96._8_4_;
      auVar61._4_4_ = -(uint)(fVar51 == fVar65);
      auVar61._0_4_ = 0xffffffff;
      auVar61._8_4_ = -(uint)(fVar51 == fVar66);
      auVar61._12_4_ = 0xffffffff;
      NEON_ext(auVar61,auVar61,8,1);
      if (CONCAT12((char)auVar61._8_4_,CONCAT11((char)auVar61._4_4_,0xff)) == -1) {
        fVar94 = (float)((ulong)_UNK_01d4b588 >> 0x20);
        fVar89 = (float)((ulong)_DAT_01d4b580 >> 0x20);
        fVar72 = fVar51 * (float)_DAT_01d4ae50;
        fVar105 = (float)((ulong)_DAT_01d4ae50 >> 0x20);
        fVar79 = fVar65 * fVar105;
        fVar109 = fVar66 * (float)_UNK_01d4ae58;
        fVar50 = (float)((ulong)_UNK_01d4ae58 >> 0x20);
        fVar30 = fVar50 * 0.0;
        fVar38 = fVar51 * (float)_DAT_01d4b580;
        fVar106 = fVar65 * fVar89;
        fVar48 = fVar66 * (float)_UNK_01d4b588;
        fVar77 = fVar94 * 0.0;
        auVar84._0_4_ = fVar31 * (float)_DAT_01d4ae50;
        auVar84._4_4_ = fVar88 * fVar105;
        auVar84._8_4_ = fVar91 * (float)_UNK_01d4ae58;
        auVar84._12_4_ = fVar50 * 0.0;
        fVar86 = fVar31 * (float)_DAT_01d4b580;
        fVar89 = fVar88 * fVar89;
        fVar92 = fVar91 * (float)_UNK_01d4b588;
        fVar94 = fVar94 * 0.0;
        fVar31 = fVar31 * (float)_DAT_01d49dc0;
        fVar100 = (float)((ulong)_DAT_01d49dc0 >> 0x20);
        fVar88 = fVar88 * fVar100;
        fVar91 = fVar91 * (float)_UNK_01d49dc8;
        fVar50 = (float)((ulong)_UNK_01d49dc8 >> 0x20);
        fVar105 = fVar50 * 0.0;
        fVar51 = fVar51 * (float)_DAT_01d49dc0;
        fVar65 = fVar65 * fVar100;
        fVar66 = fVar66 * (float)_UNK_01d49dc8;
        fVar50 = fVar50 * 0.0;
      }
      else {
        fVar69 = fVar38 + fVar38;
        fVar74 = fVar106 + fVar106;
        fVar72 = fVar48 + fVar48;
        fVar75 = fVar106 * fVar74;
        fVar79 = fVar48 * fVar72;
        fVar109 = fVar48 * fVar69 - fVar50 * fVar74;
        fVar100 = fVar48 * fVar74 + fVar50 * fVar69;
        fVar70 = fVar105 - fVar38 * fVar69;
        uVar53 = NEON_ext(CONCAT44(fVar48 * fVar69 + fVar50 * fVar74,
                                   fVar48 * fVar69 + fVar50 * fVar74),
                          CONCAT44(fVar48 * fVar74 - fVar50 * fVar69,
                                   fVar48 * fVar74 - fVar50 * fVar69),4,1);
        fVar32 = fVar70 - fVar75;
        uVar52 = NEON_ext(CONCAT44((fVar77 - fVar75) - fVar79,(fVar105 - fVar75) - fVar79),
                          CONCAT44(fVar106 * fVar69 + fVar50 * fVar72,
                                   fVar106 * fVar69 + fVar50 * fVar72),4,1);
        uVar95 = NEON_ext(CONCAT44(fVar106 * fVar69 - fVar50 * fVar72,
                                   fVar106 * fVar69 - fVar50 * fVar72),
                          CONCAT44((fVar77 - fVar38 * fVar69) - fVar79,fVar70 - fVar79),4,1);
        fVar70 = (float)((ulong)uVar95 >> 0x20);
        fVar48 = (float)uVar52;
        fVar38 = (float)uVar53;
        fVar106 = (float)((ulong)uVar53 >> 0x20);
        uVar111 = NEON_ext(CONCAT44(fVar48,fVar48),uVar95,4,1);
        uVar53 = NEON_ext(uVar52,CONCAT44(fVar70,fVar70),4,1);
        fVar90 = (float)((ulong)uVar53 >> 0x20);
        uVar99 = NEON_ext(CONCAT44(fVar109,fVar109),(ulong)(uint)fVar100,4,1);
        fVar68 = (float)uVar111 * fVar51;
        fVar107 = (float)((ulong)uVar111 >> 0x20);
        fVar73 = fVar107 * fVar51;
        fVar76 = fVar38 * fVar51;
        fVar101 = (float)uVar53 * fVar65;
        fVar103 = fVar90 * fVar65;
        fVar104 = fVar106 * fVar65;
        fVar87 = (float)uVar53 * fVar88;
        fVar90 = fVar90 * fVar88;
        fVar93 = fVar106 * fVar88;
        fVar74 = (float)uVar99 * fVar66;
        fVar105 = (float)((ulong)uVar99 >> 0x20);
        fVar75 = fVar105 * fVar66;
        fVar80 = fVar32 * fVar66;
        fVar88 = (float)uVar111 * fVar31;
        fVar107 = fVar107 * fVar31;
        fVar108 = fVar38 * fVar31;
        fVar31 = (float)uVar99 * fVar91;
        fVar105 = fVar105 * fVar91;
        fVar91 = fVar32 * fVar91;
        fVar77 = (float)((ulong)uVar52 >> 0x20);
        fVar69 = (float)uVar95;
        fVar51 = fVar74 * fVar32 + fVar68 * fVar38 + fVar101 * fVar106;
        fVar65 = fVar75 * fVar32 + fVar73 * fVar38 + fVar103 * fVar106;
        fVar66 = fVar80 * fVar32 + fVar76 * fVar38 + fVar104 * fVar106;
        fVar50 = 0.0;
        auVar84._0_4_ = fVar31 * fVar109 + fVar88 * fVar48 + fVar87 * fVar77;
        auVar84._4_4_ = fVar105 * fVar109 + fVar107 * fVar48 + fVar90 * fVar77;
        auVar84._8_4_ = fVar91 * fVar109 + fVar108 * fVar48 + fVar93 * fVar77;
        auVar84._12_4_ = 0.0;
        fVar72 = fVar74 * fVar109 + fVar68 * fVar48 + fVar101 * fVar77;
        fVar79 = fVar75 * fVar109 + fVar73 * fVar48 + fVar103 * fVar77;
        fVar109 = fVar80 * fVar109 + fVar76 * fVar48 + fVar104 * fVar77;
        fVar30 = 0.0;
        fVar86 = fVar31 * fVar100 + fVar88 * fVar69 + fVar87 * fVar70;
        fVar89 = fVar105 * fVar100 + fVar107 * fVar69 + fVar90 * fVar70;
        fVar92 = fVar91 * fVar100 + fVar108 * fVar69 + fVar93 * fVar70;
        fVar94 = 0.0;
        fVar31 = fVar31 * fVar32 + fVar88 * fVar38 + fVar87 * fVar106;
        fVar88 = fVar105 * fVar32 + fVar107 * fVar38 + fVar90 * fVar106;
        fVar91 = fVar91 * fVar32 + fVar108 * fVar38 + fVar93 * fVar106;
        fVar105 = 0.0;
        local_1b4._0_4_ = 0x7f7fffff;
        fVar38 = fVar74 * fVar100 + fVar68 * fVar69 + fVar101 * fVar70;
        fVar106 = fVar75 * fVar100 + fVar73 * fVar69 + fVar103 * fVar70;
        fVar48 = fVar80 * fVar100 + fVar76 * fVar69 + fVar104 * fVar70;
        fVar77 = 0.0;
        uVar23 = (undefined4)local_1b4;
      }
      uStack_198 = CONCAT44(fVar30,fVar109);
      local_1a0 = CONCAT44(fVar79,fVar72);
      uStack_188 = CONCAT44(fVar77,fVar48);
      uStack_190 = CONCAT44(fVar106,fVar38);
      uStack_158 = CONCAT44(fVar94,fVar92);
      local_160 = CONCAT44(fVar89,fVar86);
      uStack_148 = CONCAT44(fVar105,fVar91);
      uStack_150 = CONCAT44(fVar88,fVar31);
      uStack_178 = CONCAT44(fVar50,fVar66);
      local_180 = CONCAT44(fVar65,fVar51);
      uStack_168 = auVar84._8_8_;
      uStack_170 = auVar84._0_8_;
      local_1d0 = fVar51 * 0.0 + fVar38 * 0.0 + fVar72 * 0.0;
      fStack_1cc = fVar65 * 0.0 + fVar106 * 0.0 + fVar79 * 0.0;
      uStack_1c8 = (ulong)(uint)(fVar66 * 0.0 + fVar48 * 0.0 + fVar109 * 0.0);
    }
    else {
      uStack_198 = _UNK_01d4ae58;
      local_1a0 = _DAT_01d4ae50;
      uStack_188 = _UNK_01d4b588;
      uStack_190 = _DAT_01d4b580;
      uStack_178 = _UNK_01d49dc8;
      local_180 = _DAT_01d49dc0;
      uStack_168 = _UNK_01d4ae58;
      uStack_170 = _DAT_01d4ae50;
      uStack_158 = _UNK_01d4b588;
      local_160 = _DAT_01d4b580;
      uStack_148 = _UNK_01d49dc8;
      uStack_150 = _DAT_01d49dc0;
    }
    local_1c0 = NEON_fminnm(uVar23,0);
    local_138 = *(undefined8 *)(lVar28 + 0x30);
    local_214 = 0x47f7fffff;
    local_238 = &local_230;
    local_250 = CONCAT44(fVar67 - fStack_1cc,fVar116 - local_1d0);
    local_20c = 1;
    local_240 = PTR_DAT_02711e08 + 0x10;
    local_258 = &local_1d0;
    uStack_248 = (ulong)(uint)(fVar85 - (float)uStack_1c8);
    local_230 = uVar117;
    uStack_228 = uVar118;
    local_220 = fVar115;
    local_21c = fVar115;
    local_218 = fVar115;
    local_200 = uVar117;
    uStack_1f8 = uVar118;
    uStack_1f0 = uVar117;
    uStack_1e8 = uVar118;
    local_1e0 = uVar98;
    local_140 = lVar28;
    if (bVar22 == false) {
      local_260 = PTR_DAT_02711e10 + 0x10;
                    /* try { // try from 002888c4 to 002888f7 has its CatchHandler @ 00288bb8 */
      uVar23 = FUN_00267f90(&local_240,&local_260,&local_250,&local_98,&uStack_f0,&local_100,
                            &local_110,&local_118,(long)pfVar27 + 0x23,(long)pfVar27 + 0x27,
                            (long)pfVar27 + 0x22,1);
    }
    else {
      local_260 = PTR_DAT_02711ed8 + 0x10;
                    /* try { // try from 0028886c to 0028889f has its CatchHandler @ 00288bbc */
      uVar23 = FUN_00266590(&local_240,&local_260,&local_250,&local_98,&uStack_f0,&local_100,
                            &local_110,&local_118,(long)pfVar27 + 0x23,(long)pfVar27 + 0x27,
                            (long)pfVar27 + 0x22,1);
    }
    uVar24 = 0;
    switch(uVar23) {
    default:
      goto LAB_00288960;
    case 4:
                    /* try { // try from 00288924 to 00288957 has its CatchHandler @ 00288bb4 */
      uVar24 = FUN_00288bc0(&local_230,&local_1d0,&local_c0,&local_e0,param_7,param_7,bVar22,pfVar27
                            ,&local_110,&local_98,param_8);
    case 0:
      break;
    case 5:
      if (bVar22 == false) {
        local_258 = &local_1d0;
        local_260 = PTR_DAT_02711e10 + 0x10;
                    /* try { // try from 00288a1c to 00288a43 has its CatchHandler @ 00288bac */
        iVar33 = FUN_00258810(&local_240,&local_260,(long)pfVar27 + 0x23,(long)pfVar27 + 0x27,
                              *(undefined1 *)((long)pfVar27 + 0x22),&uStack_f0,&local_100,&local_110
                              ,&local_118,1);
      }
      else {
        local_258 = &local_1d0;
        local_260 = PTR_DAT_02711ed8 + 0x10;
                    /* try { // try from 002889c0 to 002889e7 has its CatchHandler @ 00288bb0 */
        iVar33 = FUN_00258810(&local_240,&local_260,(long)pfVar27 + 0x23,(long)pfVar27 + 0x27,
                              *(undefined1 *)((long)pfVar27 + 0x22),&uStack_f0,&local_100,&local_110
                              ,&local_118,1);
      }
      if (iVar33 != 5) {
                    /* try { // try from 00288b68 to 00288b9b has its CatchHandler @ 00288ba8 */
        uVar24 = FUN_00288bc0(&local_230,&local_1d0,&local_c0,&local_e0,param_7,param_7,bVar22,
                              pfVar27,&local_110,&local_98,param_8);
        break;
      }
    case 2:
      puVar26 = *(undefined8 **)(pfVar27 + 0xc);
      *puVar26 = 0;
      puVar26[1] = 0;
      puVar26[3] = uStack_f8;
      puVar26[2] = local_100;
      auVar15._8_8_ = uStack_108;
      auVar15._0_8_ = local_110;
      auVar62._0_12_ = auVar15._0_12_;
      auVar62._12_4_ = (int)((ulong)local_118 >> 0x20);
      fVar105 = (float)((ulong)local_110 >> 0x20);
      puVar26[5] = auVar62._8_8_;
      puVar26[4] = local_110;
      uVar24 = 1;
      *(undefined1 *)(pfVar27 + 8) = 1;
      auVar16._8_8_ = uStack_d8;
      auVar16._0_8_ = local_e0;
      fVar48 = (float)((ulong)local_e0 >> 0x20);
      fVar51 = (float)uStack_d8;
      fVar116 = (float)local_e0;
      fVar38 = (float)uStack_108;
      auVar96 = NEON_ext(auVar15,auVar15,8,1);
      auVar7._12_4_ = 0;
      auVar7._0_12_ = auVar16._0_12_;
      auVar8._12_4_ = 0;
      auVar8._0_12_ = auVar16._0_12_;
      auVar112 = NEON_ext(auVar7,auVar8,8,1);
      fVar77 = (float)((ulong)uStack_d8 >> 0x20);
      fVar31 = (float)local_110;
      fVar50 = fVar77 * fVar77 + -0.5;
      auVar46._0_4_ = fVar31 * fVar116;
      auVar46._4_4_ = fVar105 * fVar48;
      auVar46._8_4_ = fVar38 * fVar51;
      auVar46._12_4_ = (float)((ulong)uStack_108 >> 0x20) * 0.0;
      fVar106 = fVar105 * fVar116 - fVar31 * fVar48;
      uVar53 = NEON_ext(CONCAT44(fVar38 * fVar48 - fVar105 * fVar51,fVar106),
                        CONCAT44(fVar105 * auVar112._4_4_ - auVar96._4_4_ * fVar48,
                                 fVar31 * auVar112._0_4_ - auVar96._0_4_ * fVar116),4,1);
      auVar96 = NEON_ext(auVar46,auVar46,8,1);
      auVar63._0_4_ = fVar31 * fVar50 + (float)uVar53 * fVar77;
      auVar63._4_4_ = fVar105 * fVar50 + (float)((ulong)uVar53 >> 0x20) * fVar77;
      auVar63._8_4_ = fVar38 * fVar50 + fVar106 * fVar77;
      auVar63._12_4_ = fVar77 * 0.0 + 0.0;
      fVar31 = auVar46._0_4_ + auVar46._4_4_ + auVar96._0_4_ + auVar96._4_4_;
      auVar96 = NEON_ext(auVar63,auVar63,8,1);
      uVar25 = *(uint *)(param_7 + 0x1000);
      *(uint *)(param_7 + 0x1000) = uVar25 + 1;
      auVar47._0_4_ = fVar116 * fVar31 + auVar63._0_4_;
      auVar47._4_4_ = fVar48 * fVar31 + auVar63._4_4_;
      auVar47._8_4_ = fVar51 * fVar31 + auVar96._0_4_;
      auVar47._12_4_ = fVar31 * 0.0 + 0.0;
      auVar96 = NEON_ext(auVar47,auVar47,8,1);
      puVar26 = (undefined8 *)(param_7 + (ulong)uVar25 * 0x40);
      fVar31 = auVar96._0_4_ + auVar96._0_4_;
      auVar64._0_8_ =
           CONCAT44(fStack_2bc - (auVar47._4_4_ + auVar47._4_4_) * fVar115,
                    local_2c0 - (auVar47._0_4_ + auVar47._0_4_) * fVar115);
      auVar64._8_4_ = fVar49 - fVar31 * fVar115;
      auVar64._12_4_ = 0.0 - fVar115 * 0.0;
      auVar96 = NEON_ext(auVar64,auVar64,8,1);
      puVar26[1] = (ulong)(uint)fVar31;
      *puVar26 = CONCAT44(auVar47._4_4_ + auVar47._4_4_,auVar47._0_4_ + auVar47._0_4_);
      puVar26[3] = (ulong)auVar96._0_4_;
      puVar26[2] = auVar64._0_8_;
      *(float *)((long)puVar26 + 0xc) = (float)local_118 - fVar115;
      *(undefined4 *)((long)puVar26 + 0x34) = 0xffffffff;
    }
  }
LAB_00288964:
  return uVar24 & 1;
}


