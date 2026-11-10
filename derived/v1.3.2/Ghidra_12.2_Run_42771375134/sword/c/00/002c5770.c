/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002c5770; name: FUN_002c5770
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002c5770(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
            float *param_6,float *param_7,undefined8 *param_8,undefined8 *param_9,
            undefined8 *param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  byte bVar38;
  undefined1 auVar39 [12];
  byte bVar43;
  byte bVar44;
  byte bVar45;
  float fVar46;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar47;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar48;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  int iVar57;
  ulong uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined8 uVar68;
  undefined1 auVar69 [16];
  float fVar73;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 uVar74;
  undefined8 uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar79;
  float fVar80;
  undefined8 uVar82;
  float fVar89;
  undefined8 uVar83;
  undefined1 auVar84 [16];
  float fVar90;
  undefined1 auVar85 [16];
  float fVar81;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar91;
  float fVar99;
  float fVar101;
  undefined1 auVar93 [16];
  float fVar92;
  float fVar100;
  float fVar102;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined8 uVar119;
  float fVar120;
  undefined1 auVar121 [16];
  undefined8 uVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  undefined8 local_1c0;
  ulong uStack_1b8;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  float local_130 [4];
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110 [8];
  undefined8 local_f0 [2];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint local_ac;
  float local_a8 [2];
  float local_98 [2];
  
  local_ac = 1;
  fVar16 = *param_4;
  fVar20 = param_4[1];
  fVar79 = param_4[2];
  fVar89 = param_4[3];
  auVar104._0_4_ = fVar16 * fVar16;
  auVar104._4_4_ = fVar20 * fVar20;
  auVar104._8_4_ = fVar79 * fVar79;
  auVar104._12_4_ = fVar89 * fVar89;
  auVar59 = NEON_ext(auVar104,auVar104,8,1);
  uVar47 = -(uint)(1.1920929e-07 < auVar104._0_4_ + auVar104._4_4_ + auVar59._0_4_ + auVar59._4_4_);
  fVar123 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar16) & uVar47);
  fVar124 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar20) & uVar47);
  fVar103 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar79) & uVar47);
  fVar16 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar89) & uVar47);
  auVar59._0_4_ = fVar123 * fVar123;
  auVar59._4_4_ = fVar124 * fVar124;
  auVar59._8_4_ = fVar103 * fVar103;
  auVar59._12_4_ = fVar16 * fVar16;
  auVar60 = NEON_ext(auVar59,auVar59,8,1);
  fVar20 = auVar60._0_4_ + auVar60._4_4_;
  fVar16 = auVar59._0_4_ + auVar59._4_4_ + fVar20;
  fVar20 = auVar59._0_4_ + auVar59._4_4_ + fVar20;
  uVar8 = CONCAT44(fVar20,fVar16);
  uVar82 = NEON_frsqrte(uVar8,4);
  fVar79 = (float)uVar82;
  fVar89 = (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar89 * fVar89,fVar79 * fVar79),uVar8,4);
  fVar79 = fVar79 * (float)uVar82;
  fVar89 = fVar89 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar89 * fVar89,fVar79 * fVar79),uVar8,4);
  fVar79 = fVar79 * (float)uVar82;
  fVar89 = fVar89 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar89 * fVar89,fVar79 * fVar79),uVar8,4);
  fVar79 = fVar79 * (float)uVar82;
  fVar89 = fVar89 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar89 * fVar89,fVar79 * fVar79),uVar8,4);
  uVar58 = CONCAT44(fVar20 * fVar89 * (float)((ulong)uVar82 >> 0x20),fVar16 * fVar79 * (float)uVar82
                   );
  uVar58 = uVar58 ^ (uVar58 ^ uVar8) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar82 = NEON_frecpe(uVar58,4);
  uVar83 = NEON_frecps(uVar58,uVar82,4);
  fVar16 = (float)uVar82 * (float)uVar83;
  fVar20 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar83 >> 0x20);
  uVar82 = NEON_frecps(uVar58,CONCAT44(fVar20,fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  fVar20 = fVar20 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frecps(uVar58,CONCAT44(fVar20,fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  fVar20 = fVar20 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frecps(uVar58,CONCAT44(fVar20,fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  uVar82 = NEON_frecps(uVar58,CONCAT44(fVar20 * (float)((ulong)uVar82 >> 0x20),fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  fVar20 = -(fVar123 * fVar16);
  fVar79 = -(fVar124 * fVar16);
  fVar89 = -(fVar103 * fVar16);
  lVar7 = *(long *)(param_2 + 8);
  auVar60 = *(undefined1 (*) [16])(lVar7 + 0x30);
  auVar59 = *(undefined1 (*) [16])(lVar7 + 0x40);
  auVar93._0_4_ = auVar60._0_4_ * fVar20;
  auVar93._4_4_ = auVar60._4_4_ * fVar79;
  auVar93._8_4_ = auVar60._8_4_ * fVar89;
  auVar93._12_4_ = auVar60._12_4_ * 0.0;
  auVar104 = NEON_ext(auVar93,auVar93,8,1);
  auVar107._0_4_ = fVar20 * auVar59._0_4_;
  auVar107._4_4_ = fVar79 * auVar59._4_4_;
  auVar107._8_4_ = fVar89 * auVar59._8_4_;
  auVar107._12_4_ = auVar59._12_4_ * 0.0;
  auVar105 = NEON_ext(auVar107,auVar107,8,1);
  auVar105._0_4_ =
       -(uint)(auVar107._0_4_ + auVar107._4_4_ + auVar105._0_4_ + auVar105._4_4_ <
              auVar93._0_4_ + auVar93._4_4_ + auVar104._0_4_ + auVar104._4_4_);
  lVar10 = *(long *)(param_3 + 8);
  auVar105._4_4_ = auVar105._0_4_;
  auVar105._8_4_ = auVar105._0_4_;
  auVar105._12_4_ = auVar105._0_4_;
  uVar83 = 0;
  auVar60 = auVar59 ^ (auVar59 ^ auVar60) & auVar105;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  fVar91 = -*(float *)(lVar10 + 0x30);
  fVar99 = -*(float *)(lVar10 + 0x34);
  fVar101 = -*(float *)(lVar10 + 0x38);
  local_130[2] = auVar60._8_4_;
  local_130[3] = auVar60._12_4_;
  local_130[0] = auVar60._0_4_;
  local_130[1] = auVar60._4_4_;
  uStack_118 = 0;
  local_120 = 0;
  local_110[2] = 0.0;
  local_110[3] = 0.0;
  local_110[0] = 0.0;
  local_110[1] = 0.0;
  local_110[6] = 0.0;
  local_110[7] = 0.0;
  local_110[4] = 0.0;
  local_110[5] = 0.0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  fVar91 = (float)((uint)fVar91 ^
                  ((uint)fVar91 ^ (uint)*(float *)(lVar10 + 0x30)) & -(uint)(0.0 < fVar123 * fVar16)
                  );
  fVar99 = (float)((uint)fVar99 ^
                  ((uint)fVar99 ^ (uint)*(float *)(lVar10 + 0x34)) & -(uint)(0.0 < fVar124 * fVar16)
                  );
  fVar101 = (float)((uint)fVar101 ^
                   ((uint)fVar101 ^ (uint)*(float *)(lVar10 + 0x38)) &
                   -(uint)(0.0 < fVar103 * fVar16));
  auVar84._8_8_ = 0xffffffffffffffff;
  auVar84._0_8_ = 0xffffffffffffffff;
  fVar16 = local_130[0] - fVar91;
  fVar20 = local_130[1] - fVar99;
  fVar79 = local_130[2] - fVar101;
  fVar89 = local_130[3] - 0.0;
  uStack_168 = (ulong)(uint)fVar101;
  local_170 = CONCAT44(fVar99,fVar91);
  uStack_158 = 0;
  local_160 = 0;
  fVar91 = -fVar16;
  fVar99 = -fVar20;
  auVar60._0_8_ = CONCAT44(fVar99,fVar91);
  auVar60._8_4_ = -fVar79;
  local_f0[1] = CONCAT44(fVar89,fVar79);
  local_f0[0] = CONCAT44(fVar20,fVar16);
  fStack_d8 = 0.0;
  fStack_d4 = 0.0;
  local_e0 = 0.0;
  fStack_dc = 0.0;
  auVar60._12_4_ = 0;
  uVar82 = NEON_fmin(0,CONCAT44(*(undefined4 *)(lVar10 + 0x18),*(undefined4 *)(lVar10 + 0x18)),4);
  fVar101 = (float)uVar82 * 0.1;
  auVar49._0_4_ = fVar91 * fVar91;
  auVar49._4_4_ = fVar99 * fVar99;
  auVar49._8_4_ = auVar60._8_4_ * auVar60._8_4_;
  auVar49._12_4_ = 0;
  auVar104 = NEON_ext(auVar49,auVar49,8,1);
  fVar91 = auVar49._0_4_ + auVar49._4_4_ + auVar104._0_4_ + auVar104._4_4_;
  bVar6 = fVar101 * fVar101 < fVar91;
  auVar106._0_4_ = -(uint)bVar6;
  auVar106._4_4_ = -(uint)bVar6;
  auVar106._8_4_ = -(uint)bVar6;
  auVar106._12_4_ = -(uint)bVar6;
  NEON_ext(auVar106,auVar106,8,1);
  uStack_1b8 = (ulong)(uint)auVar60._8_4_;
  if (CONCAT13((char)auVar106._12_4_,
               CONCAT12((char)auVar106._8_4_,CONCAT11((char)auVar106._4_4_,(char)auVar106._0_4_)))
      == -1) {
    fVar103 = param_1 + fVar101;
    fVar99 = *param_7 * 0.0 + *param_6;
    fVar123 = param_7[1] * 0.0 + param_6[1];
    fVar124 = param_7[2] * 0.0 + param_6[2];
    fVar125 = param_7[3] * 0.0 + param_6[3];
    auVar2._4_4_ = fVar123;
    auVar2._0_4_ = fVar99;
    auVar2._8_4_ = fVar124;
    auVar2._12_4_ = fVar125;
    auVar3._4_4_ = fVar123;
    auVar3._0_4_ = fVar99;
    auVar3._8_4_ = fVar124;
    auVar3._12_4_ = fVar125;
    auVar104 = NEON_ext(auVar2,auVar3,8,1);
    fVar124 = auVar104._0_4_;
    auVar69 = ZEXT816(0);
    local_1c0 = auVar60._0_8_;
    do {
      uVar47 = local_ac;
      fVar92 = auVar60._0_4_;
      auVar27._0_4_ = fVar92 * fVar92;
      fVar100 = auVar60._4_4_;
      auVar27._4_4_ = fVar100 * fVar100;
      fVar102 = auVar60._8_4_;
      auVar27._8_4_ = fVar102 * fVar102;
      auVar27._12_4_ = auVar60._12_4_ * auVar60._12_4_;
      auVar104 = NEON_ext(auVar27,auVar27,8,1);
      fVar21 = auVar104._0_4_ + auVar104._4_4_;
      fVar125 = auVar27._0_4_ + auVar27._4_4_ + fVar21;
      fVar21 = auVar27._0_4_ + auVar27._4_4_ + fVar21;
      uVar8 = CONCAT44(fVar21,fVar125);
      uVar83 = NEON_frsqrte(uVar8,4);
      fVar80 = (float)uVar83;
      fVar90 = (float)((ulong)uVar83 >> 0x20);
      uVar83 = NEON_frsqrts(CONCAT44(fVar90 * fVar90,fVar80 * fVar80),uVar8,4);
      fVar80 = fVar80 * (float)uVar83;
      fVar90 = fVar90 * (float)((ulong)uVar83 >> 0x20);
      uVar83 = NEON_frsqrts(CONCAT44(fVar90 * fVar90,fVar80 * fVar80),uVar8,4);
      fVar80 = fVar80 * (float)uVar83;
      fVar90 = fVar90 * (float)((ulong)uVar83 >> 0x20);
      uVar83 = NEON_frsqrts(CONCAT44(fVar90 * fVar90,fVar80 * fVar80),uVar8,4);
      fVar80 = fVar80 * (float)uVar83;
      fVar90 = fVar90 * (float)((ulong)uVar83 >> 0x20);
      uVar83 = NEON_frsqrts(CONCAT44(fVar90 * fVar90,fVar80 * fVar80),uVar8,4);
      uVar58 = CONCAT44(fVar21 * fVar90 * (float)((ulong)uVar83 >> 0x20),
                        fVar125 * fVar80 * (float)uVar83);
      uVar58 = uVar58 ^ (uVar58 ^ uVar8) & CONCAT44(-(uint)(fVar125 == 0.0),-(uint)(fVar125 == 0.0))
      ;
      uVar83 = NEON_frecpe(uVar58,4);
      uVar75 = NEON_frecps(uVar58,uVar83,4);
      fVar125 = (float)uVar83 * (float)uVar75;
      fVar21 = (float)((ulong)uVar83 >> 0x20) * (float)((ulong)uVar75 >> 0x20);
      uVar83 = NEON_frecps(uVar58,CONCAT44(fVar21,fVar125),4);
      fVar125 = fVar125 * (float)uVar83;
      fVar21 = fVar21 * (float)((ulong)uVar83 >> 0x20);
      uVar83 = NEON_frecps(uVar58,CONCAT44(fVar21,fVar125),4);
      fVar125 = fVar125 * (float)uVar83;
      fVar21 = fVar21 * (float)((ulong)uVar83 >> 0x20);
      uVar83 = NEON_frecps(uVar58,CONCAT44(fVar21,fVar125),4);
      fVar125 = fVar125 * (float)uVar83;
      auVar104 = *(undefined1 (*) [16])(lVar7 + 0x30);
      uVar83 = NEON_frecps(uVar58,CONCAT44(fVar21 * (float)((ulong)uVar83 >> 0x20),fVar125),4);
      fVar125 = fVar125 * (float)uVar83;
      fVar92 = fVar92 * fVar125;
      fVar100 = fVar100 * fVar125;
      fVar102 = fVar102 * fVar125;
      auVar76._0_4_ = auVar104._0_4_ * fVar92;
      auVar76._4_4_ = auVar104._4_4_ * fVar100;
      auVar76._8_4_ = auVar104._8_4_ * fVar102;
      auVar76._12_4_ = auVar104._12_4_ * 0.0;
      auVar107 = NEON_ext(auVar76,auVar76,8,1);
      auVar108._0_4_ = fVar92 * auVar59._0_4_;
      auVar108._4_4_ = fVar100 * auVar59._4_4_;
      auVar108._8_4_ = fVar102 * auVar59._8_4_;
      auVar108._12_4_ = auVar59._12_4_ * 0.0;
      auVar105 = NEON_ext(auVar108,auVar108,8,1);
      auVar77._0_4_ =
           -(uint)(auVar108._0_4_ + auVar108._4_4_ + auVar105._0_4_ + auVar105._4_4_ <
                  auVar76._0_4_ + auVar76._4_4_ + auVar107._0_4_ + auVar107._4_4_);
      auVar77._4_4_ = auVar77._0_4_;
      auVar77._8_4_ = auVar77._0_4_;
      auVar77._12_4_ = auVar77._0_4_;
      auVar59 = auVar59 ^ (auVar59 ^ auVar104) & auVar77;
      auVar61._0_4_ = -(uint)(0.0 < -fVar92);
      auVar61._4_4_ = -(uint)(0.0 < -fVar100);
      auVar61._8_4_ = -(uint)(0.0 < -fVar102);
      auVar61._12_4_ = 0;
      auVar104 = *(undefined1 (*) [16])(lVar10 + 0x30);
      auVar62._0_4_ = -auVar104._0_4_;
      auVar62._4_4_ = -auVar104._4_4_;
      auVar62._8_4_ = -auVar104._8_4_;
      auVar62._12_4_ = 0;
      auVar62 = auVar62 ^ (auVar62 ^ auVar104) & auVar61;
      auVar85._0_4_ = fVar99 + auVar62._0_4_;
      auVar85._4_4_ = fVar123 + auVar62._4_4_;
      auVar85._8_4_ = fVar124 + auVar62._8_4_;
      auVar85._12_4_ = auVar62._12_4_ + 0.0;
      auVar31._0_4_ = auVar59._0_4_ - auVar85._0_4_;
      auVar31._4_4_ = auVar59._4_4_ - auVar85._4_4_;
      auVar31._8_4_ = auVar59._8_4_ - auVar85._8_4_;
      auVar31._12_4_ = auVar59._12_4_ - auVar85._12_4_;
      auVar109._0_4_ = fVar92 * -auVar31._0_4_;
      auVar109._4_4_ = fVar100 * -auVar31._4_4_;
      auVar109._8_4_ = fVar102 * -auVar31._8_4_;
      auVar109._12_4_ = 0;
      auVar104 = NEON_ext(auVar109,auVar109,8,1);
      fVar21 = auVar104._0_4_ + auVar104._4_4_;
      fVar80 = (auVar109._0_4_ + auVar109._4_4_ + fVar21) - fVar103;
      uVar75 = auVar69._8_8_;
      fVar125 = fVar91;
      if (fVar80 <= 0.0) {
        uVar83 = auVar69._0_8_;
      }
      else {
        auVar94._0_4_ = fVar92 * *param_7;
        auVar94._4_4_ = fVar100 * param_7[1];
        auVar94._8_4_ = fVar102 * param_7[2];
        auVar94._12_4_ = param_7[3] * 0.0;
        auVar104 = NEON_ext(auVar94,auVar94,8,1);
        fVar92 = auVar104._0_4_ + auVar104._4_4_;
        fVar91 = auVar94._0_4_ + auVar94._4_4_ + fVar92;
        uVar83 = CONCAT44(auVar94._0_4_ + auVar94._4_4_ + fVar92,fVar91);
        if (0.0 <= fVar91) {
          return 0;
        }
        uVar75 = NEON_frecpe(uVar83,4);
        uVar119 = NEON_frecps(uVar83,uVar75,4);
        fVar91 = (float)uVar75 * (float)uVar119;
        fVar92 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar119 >> 0x20);
        uVar75 = NEON_frecps(uVar83,CONCAT44(fVar92,fVar91),4);
        fVar91 = fVar91 * (float)uVar75;
        fVar92 = fVar92 * (float)((ulong)uVar75 >> 0x20);
        uVar75 = NEON_frecps(uVar83,CONCAT44(fVar92,fVar91),4);
        fVar91 = fVar91 * (float)uVar75;
        fVar92 = fVar92 * (float)((ulong)uVar75 >> 0x20);
        uVar75 = NEON_frecps(uVar83,CONCAT44(fVar92,fVar91),4);
        fVar91 = fVar91 * (float)uVar75;
        fVar92 = fVar92 * (float)((ulong)uVar75 >> 0x20);
        uVar83 = NEON_frecps(uVar83,CONCAT44(fVar92,fVar91),4);
        fVar91 = auVar69._0_4_ - fVar80 * fVar91 * (float)uVar83;
        uVar83 = CONCAT44(auVar69._4_4_ -
                          ((auVar109._0_4_ + auVar109._4_4_ + fVar21) -
                          (param_1 + (float)((ulong)uVar82 >> 0x20) * 0.1)) *
                          fVar92 * (float)((ulong)uVar83 >> 0x20),fVar91);
        uVar75 = 0;
        if (auVar69._0_4_ < fVar91) {
          uVar119 = NEON_fmov(0x3f800000,4);
          if ((float)uVar119 < fVar91) {
            return 0;
          }
          uStack_1b8 = auVar60._8_8_;
          auVar50._0_4_ = *param_7 * fVar91 + *param_6;
          auVar50._4_4_ = param_7[1] * fVar91 + param_6[1];
          auVar50._8_4_ = param_7[2] * fVar91 + param_6[2];
          auVar50._12_4_ = param_7[3] * fVar91 + param_6[3];
          auVar104 = NEON_ext(auVar50,auVar50,8,1);
          fVar91 = auVar104._0_4_;
          auVar85._0_4_ = auVar62._0_4_ + auVar50._0_4_;
          auVar85._4_4_ = auVar62._4_4_ + auVar50._4_4_;
          auVar85._8_4_ = auVar62._8_4_ + fVar91;
          auVar85._12_4_ = auVar62._12_4_ + 0.0;
          fVar99 = auVar50._0_4_ - fVar99;
          fVar123 = auVar50._4_4_ - fVar123;
          fVar124 = fVar91 - fVar124;
          local_170._0_4_ = (float)local_170 + fVar99;
          local_170._4_4_ = local_170._4_4_ + fVar123;
          uStack_168._0_4_ = (float)uStack_168 + fVar124;
          uStack_168._4_4_ = uStack_168._4_4_ + 0.0;
          local_160._0_4_ = (float)local_160 + fVar99;
          local_160._4_4_ = local_160._4_4_ + fVar123;
          uStack_158._0_4_ = (float)uStack_158 + fVar124;
          uStack_158._4_4_ = uStack_158._4_4_ + 0.0;
          local_150._0_4_ = (float)local_150 + fVar99;
          local_150._4_4_ = local_150._4_4_ + fVar123;
          uStack_148._0_4_ = (float)uStack_148 + fVar124;
          uStack_148._4_4_ = uStack_148._4_4_ + 0.0;
          auVar63._0_8_ = CONCAT44(local_130[1] - local_170._4_4_,local_130[0] - (float)local_170);
          auVar63._8_4_ = local_130[2] - (float)uStack_168;
          auVar63._12_4_ = local_130[3] - uStack_168._4_4_;
          auVar95._0_8_ = CONCAT44(local_110[1] - local_150._4_4_,local_110[0] - (float)local_150);
          auVar95._8_4_ = local_110[2] - (float)uStack_148;
          auVar95._12_4_ = local_110[3] - uStack_148._4_4_;
          auVar31._0_4_ = auVar59._0_4_ - auVar85._0_4_;
          auVar31._4_4_ = auVar59._4_4_ - auVar85._4_4_;
          auVar31._8_4_ = auVar59._8_4_ - auVar85._8_4_;
          auVar31._12_4_ = auVar59._12_4_ - auVar85._12_4_;
          local_f0[1] = auVar63._8_8_;
          local_f0[0] = auVar63._0_8_;
          fStack_d8 = (float)uStack_118 - (float)uStack_158;
          fStack_d4 = uStack_118._4_4_ - uStack_158._4_4_;
          local_e0 = (float)local_120 - (float)local_160;
          fStack_dc = local_120._4_4_ - local_160._4_4_;
          uStack_c8 = auVar95._8_8_;
          local_d0 = auVar95._0_8_;
          fVar99 = auVar50._0_4_;
          fVar123 = auVar50._4_4_;
          fVar124 = fVar91;
          local_1c0 = auVar60._0_8_;
          fVar125 = 3.4028235e+38;
        }
      }
      uVar8 = (ulong)local_ac;
      bVar6 = local_ac == 3;
      local_ac = local_ac + 1;
      local_f0[uVar8 * 2 + -7] = auVar59._8_8_;
      local_f0[uVar8 * 2 + -8] = auVar59._0_8_;
      local_f0[uVar8 * 2 + -0xf] = auVar85._8_8_;
      local_f0[uVar8 * 2 + -0x10] = auVar85._0_8_;
      local_f0[uVar8 * 2 + 1] = auVar31._8_8_;
      local_f0[uVar8 * 2] = auVar31._0_8_;
      if (bVar6) {
        auVar31 = FUN_00237120(local_f0,local_130,&local_170,&local_ac);
      }
      else {
        fVar91 = (float)local_f0[0];
        fVar21 = (float)((ulong)local_f0[0] >> 0x20);
        fVar92 = (float)local_f0[1];
        fVar100 = (float)((ulong)local_f0[1] >> 0x20);
        if (uVar47 == 2) {
          auVar31._8_8_ = local_f0[1];
          auVar31._0_8_ = local_f0[0];
          auVar4._4_4_ = fStack_dc;
          auVar4._0_4_ = local_e0;
          auVar4._8_4_ = fStack_d8;
          auVar4._12_4_ = fStack_d4;
          auVar5._8_8_ = uStack_c8;
          auVar5._0_8_ = local_d0;
          auVar70._0_4_ = local_e0 - fVar91;
          auVar70._4_4_ = fStack_dc - fVar21;
          auVar70._8_4_ = fStack_d8 - fVar92;
          auVar70._12_4_ = fStack_d4 - fVar100;
          fVar90 = (float)local_d0;
          auVar66._0_4_ = fVar90 - fVar91;
          fVar46 = (float)((ulong)local_d0 >> 0x20);
          auVar66._4_4_ = fVar46 - fVar21;
          fVar17 = (float)uStack_c8;
          auVar66._8_4_ = fVar17 - fVar92;
          fVar22 = (float)((ulong)uStack_c8 >> 0x20);
          auVar66._12_4_ = fVar22 - fVar100;
          auVar59 = NEON_ext(auVar70,auVar70,8,1);
          auVar60 = NEON_ext(auVar66,auVar66,8,1);
          fVar81 = auVar70._0_4_ * auVar66._4_4_ - auVar70._4_4_ * auVar66._0_4_;
          uVar119 = NEON_ext(CONCAT44(auVar70._4_4_ * auVar66._8_4_ - auVar70._8_4_ * auVar66._4_4_,
                                      fVar81),
                             CONCAT44(auVar59._4_4_ * auVar66._4_4_ - auVar70._4_4_ * auVar60._4_4_,
                                      auVar59._0_4_ * auVar66._0_4_ - auVar70._0_4_ * auVar60._0_4_)
                             ,4,1);
          fVar73 = (float)uVar119;
          auVar86._0_4_ = fVar73 * fVar73;
          fVar18 = (float)((ulong)uVar119 >> 0x20);
          auVar86._4_4_ = fVar18 * fVar18;
          auVar86._8_4_ = fVar81 * fVar81;
          auVar86._12_4_ = 0;
          auVar59 = NEON_ext(auVar86,auVar86,8,1);
          fVar80 = auVar59._0_4_ + auVar59._4_4_;
          fVar102 = auVar86._0_4_ + auVar86._4_4_ + fVar80;
          uVar119 = CONCAT44(auVar86._0_4_ + auVar86._4_4_ + fVar80,fVar102);
          local_ac = 3;
          if (1.1920929e-07 < fVar102) {
            if (fVar102 != 0.0) {
              auVar59 = NEON_ext(auVar4,auVar4,8,1);
              auVar60 = NEON_ext(auVar5,auVar5,8,1);
              fVar120 = local_e0 * fVar46 - fStack_dc * fVar90;
              auVar104 = NEON_ext(auVar31,auVar31,8,1);
              uVar74 = NEON_ext(CONCAT44(fStack_dc * fVar17 - fStack_d8 * fVar46,fVar120),
                                CONCAT44(auVar59._4_4_ * fVar46 - fStack_dc * auVar60._4_4_,
                                         auVar59._0_4_ * fVar90 - local_e0 * auVar60._0_4_),4,1);
              fVar102 = fVar21 * fVar90 - fVar91 * fVar46;
              uVar122 = NEON_ext(CONCAT44(fVar92 * fVar46 - fVar21 * fVar17,fVar102),
                                 CONCAT44(fVar21 * auVar60._4_4_ - auVar104._4_4_ * fVar46,
                                          fVar91 * auVar60._0_4_ - auVar104._0_4_ * fVar90),4,1);
              fVar80 = fVar91 * fStack_dc - fVar21 * local_e0;
              uVar68 = NEON_ext(CONCAT44(fVar21 * fStack_d8 - fVar92 * fStack_dc,fVar80),
                                CONCAT44(auVar104._4_4_ * fStack_dc - fVar21 * auVar59._4_4_,
                                         auVar104._0_4_ * local_e0 - fVar91 * auVar59._0_4_),4,1);
              auVar110._0_4_ = (float)uVar74 * fVar73;
              auVar110._4_4_ = (float)((ulong)uVar74 >> 0x20) * fVar18;
              auVar110._8_4_ = fVar120 * fVar81;
              auVar110._12_4_ = 0;
              auVar59 = NEON_ext(auVar110,auVar110,8,1);
              auVar113._0_4_ = (float)uVar122 * fVar73;
              auVar113._4_4_ = (float)((ulong)uVar122 >> 0x20) * fVar18;
              auVar113._8_4_ = fVar102 * fVar81;
              auVar113._12_4_ = 0;
              auVar60 = NEON_ext(auVar113,auVar113,8,1);
              fVar102 = auVar110._0_4_ + auVar110._4_4_ + auVar59._0_4_ + auVar59._4_4_;
              auVar116._0_4_ = (float)uVar68 * fVar73;
              auVar116._4_4_ = (float)((ulong)uVar68 >> 0x20) * fVar18;
              auVar116._8_4_ = fVar80 * fVar81;
              auVar116._12_4_ = 0;
              fVar80 = auVar113._0_4_ + auVar113._4_4_ + auVar60._0_4_ + auVar60._4_4_;
              auVar59 = NEON_ext(auVar116,auVar116,8,1);
              fVar120 = auVar116._0_4_ + auVar116._4_4_ + auVar59._0_4_ + auVar59._4_4_;
              bVar6 = (0.0 <= fVar102 && 0.0 <= fVar80) && 0.0 <= fVar120;
              auVar117._0_4_ = -(uint)bVar6;
              auVar117._4_4_ = -(uint)bVar6;
              auVar117._8_4_ = -(uint)bVar6;
              auVar117._12_4_ = -(uint)bVar6;
              NEON_ext(auVar117,auVar117,8,1);
              if (CONCAT13((char)auVar117._12_4_,
                           CONCAT12((char)auVar117._8_4_,
                                    CONCAT11((char)auVar117._4_4_,(char)auVar117._0_4_))) == -1) {
                auVar32._0_4_ = fVar91 * fVar73;
                auVar32._4_4_ = fVar21 * fVar18;
                auVar32._8_4_ = fVar92 * fVar81;
                auVar32._12_4_ = fVar100 * 0.0;
                auVar59 = NEON_ext(auVar32,auVar32,8,1);
                uVar68 = NEON_frecpe(uVar119,4);
                uVar74 = NEON_frecps(uVar119,uVar68,4);
                fVar91 = (float)uVar68 * (float)uVar74;
                fVar21 = (float)((ulong)uVar68 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
                uVar68 = NEON_frecps(uVar119,CONCAT44(fVar21,fVar91),4);
                fVar91 = fVar91 * (float)uVar68;
                fVar21 = fVar21 * (float)((ulong)uVar68 >> 0x20);
                uVar68 = NEON_frecps(uVar119,CONCAT44(fVar21,fVar91),4);
                fVar91 = fVar91 * (float)uVar68;
                fVar21 = fVar21 * (float)((ulong)uVar68 >> 0x20);
                uVar68 = NEON_frecps(uVar119,CONCAT44(fVar21,fVar91),4);
                fVar91 = fVar91 * (float)uVar68;
                uVar119 = NEON_frecps(uVar119,CONCAT44(fVar21 * (float)((ulong)uVar68 >> 0x20),
                                                       fVar91),4);
                fVar91 = (auVar32._0_4_ + auVar32._4_4_ + auVar59._0_4_ + auVar59._4_4_) *
                         fVar91 * (float)uVar119;
                auVar31._0_4_ = fVar73 * fVar91;
                auVar31._4_4_ = fVar18 * fVar91;
                auVar31._8_4_ = fVar81 * fVar91;
                auVar31._12_4_ = 0.0;
              }
              else {
                auVar78._0_4_ = -fVar91 * auVar70._0_4_;
                auVar78._4_4_ = -fVar21 * auVar70._4_4_;
                auVar78._8_4_ = -fVar92 * auVar70._8_4_;
                auVar78._12_4_ = auVar70._12_4_ * 0.0;
                auVar59 = NEON_ext(auVar78,auVar78,8,1);
                fVar81 = auVar59._0_4_ + auVar59._4_4_;
                auVar87._0_4_ = -local_e0 * auVar70._0_4_;
                auVar87._4_4_ = -fStack_dc * auVar70._4_4_;
                auVar87._8_4_ = -fStack_d8 * auVar70._8_4_;
                auVar87._12_4_ = auVar70._12_4_ * 0.0;
                auVar59 = NEON_ext(auVar87,auVar87,8,1);
                fVar23 = auVar59._0_4_ + auVar59._4_4_;
                fVar73 = auVar78._0_4_ + auVar78._4_4_ + fVar81;
                fVar18 = auVar87._0_4_ + auVar87._4_4_ + fVar23;
                fVar23 = auVar87._0_4_ + auVar87._4_4_ + fVar23;
                bVar6 = (0.0 <= fVar73 && fVar120 <= 0.0) && fVar18 <= 0.0;
                auVar114._0_4_ = -(uint)bVar6;
                auVar114._4_4_ = -(uint)bVar6;
                auVar114._8_4_ = -(uint)bVar6;
                auVar114._12_4_ = -(uint)bVar6;
                NEON_ext(auVar114,auVar114,8,1);
                if (CONCAT13((char)auVar114._12_4_,
                             CONCAT12((char)auVar114._8_4_,
                                      CONCAT11((char)auVar114._4_4_,(char)auVar114._0_4_))) == -1) {
                  uVar119 = CONCAT44((auVar78._0_4_ + auVar78._4_4_ + fVar81) - fVar23,
                                     fVar73 - fVar18);
                  uVar68 = NEON_frecpe(uVar119,4);
                  uVar74 = NEON_frecps(uVar119,uVar68,4);
                  fVar102 = (float)uVar68 * (float)uVar74;
                  fVar80 = (float)((ulong)uVar68 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
                  uVar68 = NEON_frecps(uVar119,CONCAT44(fVar80,fVar102),4);
                  fVar102 = fVar102 * (float)uVar68;
                  fVar80 = fVar80 * (float)((ulong)uVar68 >> 0x20);
                  uVar68 = NEON_frecps(uVar119,CONCAT44(fVar80,fVar102),4);
                  fVar102 = fVar102 * (float)uVar68;
                  fVar80 = fVar80 * (float)((ulong)uVar68 >> 0x20);
                  uVar68 = NEON_frecps(uVar119,CONCAT44(fVar80,fVar102),4);
                  fVar102 = fVar102 * (float)uVar68;
                  uVar119 = NEON_frecps(uVar119,CONCAT44(fVar80 * (float)((ulong)uVar68 >> 0x20),
                                                         fVar102),4);
                  fVar73 = fVar73 * (float)(-(uint)(1.1920929e-07 < ABS(fVar73 - fVar18)) &
                                           (uint)(fVar102 * (float)uVar119));
                  puVar9 = &local_170;
                  pfVar11 = local_130;
                  auVar33._0_8_ =
                       CONCAT44(fVar21 + auVar70._4_4_ * fVar73,fVar91 + auVar70._0_4_ * fVar73);
                  auVar33._8_4_ = fVar92 + auVar70._8_4_ * fVar73;
                  auVar33._12_4_ = fVar100 + auVar70._12_4_ * fVar73;
                  auVar59 = NEON_ext(auVar33,auVar33,8,1);
                  pfVar12 = (float *)local_f0;
                  auVar31._8_4_ = (float)auVar59._0_4_;
                  auVar31._0_8_ = auVar33._0_8_;
                  auVar31._12_4_ = 0.0;
                  local_ac = 2;
LAB_002c6278:
                  puVar13 = &local_160;
                  pfVar14 = (float *)&local_120;
                  pfVar15 = &local_e0;
                }
                else {
                  auVar115._0_4_ = -local_e0 * auVar66._0_4_;
                  auVar115._4_4_ = -fStack_dc * auVar66._4_4_;
                  auVar115._8_4_ = -fStack_d8 * auVar66._8_4_;
                  auVar115._12_4_ = auVar66._12_4_ * 0.0;
                  auVar59 = NEON_ext(auVar115,auVar115,8,1);
                  fVar24 = auVar59._0_4_ + auVar59._4_4_;
                  auVar71._0_4_ = auVar70._0_4_ * -fVar90;
                  auVar71._4_4_ = auVar70._4_4_ * -fVar46;
                  auVar71._8_4_ = auVar70._8_4_ * -fVar17;
                  auVar71._12_4_ = auVar70._12_4_ * 0.0;
                  auVar121._0_4_ = auVar66._0_4_ * -fVar90;
                  auVar121._4_4_ = auVar66._4_4_ * -fVar46;
                  auVar121._8_4_ = auVar66._8_4_ * -fVar17;
                  auVar121._12_4_ = auVar66._12_4_ * 0.0;
                  fVar81 = auVar115._0_4_ + auVar115._4_4_ + fVar24;
                  auVar59 = NEON_ext(auVar71,auVar71,8,1);
                  fVar25 = auVar59._0_4_ + auVar59._4_4_;
                  fVar120 = auVar71._0_4_ + auVar71._4_4_ + fVar25;
                  auVar59 = NEON_ext(auVar121,auVar121,8,1);
                  fVar26 = auVar59._0_4_ + auVar59._4_4_;
                  fVar19 = auVar121._0_4_ + auVar121._4_4_ + fVar26;
                  fVar26 = auVar121._0_4_ + auVar121._4_4_ + fVar26;
                  bVar6 = (fVar18 <= fVar81 && fVar102 <= 0.0) && fVar19 <= fVar120;
                  auVar111._0_4_ = -(uint)bVar6;
                  auVar111._4_4_ = -(uint)bVar6;
                  auVar111._8_4_ = -(uint)bVar6;
                  auVar111._12_4_ = -(uint)bVar6;
                  NEON_ext(auVar111,auVar111,8,1);
                  puVar13 = &local_150;
                  pfVar14 = local_110;
                  pfVar15 = (float *)&local_d0;
                  if (CONCAT13((char)auVar111._12_4_,
                               CONCAT12((char)auVar111._8_4_,
                                        CONCAT11((char)auVar111._4_4_,(char)auVar111._0_4_))) == -1)
                  {
                    local_ac = 2;
                    fVar91 = (fVar81 - fVar18) + (fVar120 - fVar19);
                    uVar119 = CONCAT44(((auVar115._0_4_ + auVar115._4_4_ + fVar24) - fVar23) +
                                       ((auVar71._0_4_ + auVar71._4_4_ + fVar25) - fVar26),fVar91);
                    uVar68 = NEON_frecpe(uVar119,4);
                    uVar74 = NEON_frecps(uVar119,uVar68,4);
                    fVar21 = (float)uVar68 * (float)uVar74;
                    fVar92 = (float)((ulong)uVar68 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
                    uVar68 = NEON_frecps(uVar119,CONCAT44(fVar92,fVar21),4);
                    fVar21 = fVar21 * (float)uVar68;
                    fVar92 = fVar92 * (float)((ulong)uVar68 >> 0x20);
                    uVar68 = NEON_frecps(uVar119,CONCAT44(fVar92,fVar21),4);
                    fVar21 = fVar21 * (float)uVar68;
                    fVar92 = fVar92 * (float)((ulong)uVar68 >> 0x20);
                    uVar68 = NEON_frecps(uVar119,CONCAT44(fVar92,fVar21),4);
                    fVar21 = fVar21 * (float)uVar68;
                    uVar119 = NEON_frecps(uVar119,CONCAT44(fVar92 * (float)((ulong)uVar68 >> 0x20),
                                                           fVar21),4);
                    fVar91 = (fVar81 - fVar18) *
                             (float)(-(uint)(1.1920929e-07 < ABS(fVar91)) &
                                    (uint)(fVar21 * (float)uVar119));
                    auVar34._0_8_ =
                         CONCAT44(fStack_dc + (fVar46 - fStack_dc) * fVar91,
                                  local_e0 + (fVar90 - local_e0) * fVar91);
                    auVar34._8_4_ = fStack_d8 + (fVar17 - fStack_d8) * fVar91;
                    auVar34._12_4_ = fStack_d4 + (fVar22 - fStack_d4) * fVar91;
                    auVar59 = NEON_ext(auVar34,auVar34,8,1);
                    auVar31._8_4_ = (float)auVar59._0_4_;
                    auVar31._0_8_ = auVar34._0_8_;
                    auVar31._12_4_ = 0.0;
                    puVar9 = &local_160;
                    pfVar11 = (float *)&local_120;
                    pfVar12 = &local_e0;
                  }
                  else {
                    auVar112._0_4_ = -fVar91 * auVar66._0_4_;
                    auVar112._4_4_ = -fVar21 * auVar66._4_4_;
                    auVar112._8_4_ = -fVar92 * auVar66._8_4_;
                    auVar112._12_4_ = auVar66._12_4_ * 0.0;
                    auVar59 = NEON_ext(auVar112,auVar112,8,1);
                    fVar90 = auVar59._0_4_ + auVar59._4_4_;
                    fVar102 = auVar112._0_4_ + auVar112._4_4_ + fVar90;
                    bVar6 = (fVar80 <= 0.0 && 0.0 <= fVar102) && fVar19 <= 0.0;
                    auVar96._0_4_ = -(uint)bVar6;
                    auVar96._4_4_ = -(uint)bVar6;
                    auVar96._8_4_ = -(uint)bVar6;
                    auVar96._12_4_ = -(uint)bVar6;
                    NEON_ext(auVar96,auVar96,8,1);
                    if (CONCAT13((char)auVar96._12_4_,
                                 CONCAT12((char)auVar96._8_4_,
                                          CONCAT11((char)auVar96._4_4_,(char)auVar96._0_4_))) != -1)
                    {
                      bVar6 = fVar73 <= 0.0 && fVar102 <= 0.0;
                      auVar67._0_4_ = -(uint)bVar6;
                      auVar67._4_4_ = -(uint)bVar6;
                      auVar67._8_4_ = -(uint)bVar6;
                      auVar67._12_4_ = -(uint)bVar6;
                      NEON_ext(auVar67,auVar67,8,1);
                      if (CONCAT13((char)auVar67._12_4_,
                                   CONCAT12((char)auVar67._8_4_,
                                            CONCAT11((char)auVar67._4_4_,(char)auVar67._0_4_))) ==
                          -1) {
                        puVar9 = &local_170;
                        pfVar11 = local_130;
                        pfVar12 = (float *)local_f0;
                      }
                      else {
                        bVar6 = 0.0 <= fVar18 && fVar81 <= fVar18;
                        auVar29._0_4_ = -(uint)bVar6;
                        auVar29._4_4_ = -(uint)bVar6;
                        auVar29._8_4_ = -(uint)bVar6;
                        auVar29._12_4_ = -(uint)bVar6;
                        NEON_ext(auVar29,auVar29,8,1);
                        iVar48 = CONCAT13((char)auVar29._12_4_,
                                          CONCAT12((char)auVar29._8_4_,
                                                   CONCAT11((char)auVar29._4_4_,(char)auVar29._0_4_)
                                                  ));
                        iVar57 = -(uint)(iVar48 == -1);
                        auVar30._4_4_ = iVar57;
                        auVar30._0_4_ = iVar57;
                        auVar30._8_4_ = iVar57;
                        auVar30._12_4_ = iVar57;
                        lVar7 = 0x10;
                        if (iVar48 != -1) {
                          lVar7 = 0x20;
                        }
                        auVar31 = auVar5 ^ (auVar5 ^ auVar4) & auVar30;
                        pfVar12 = (float *)((long)local_f0 + lVar7);
                        pfVar11 = (float *)((long)local_f0 + lVar7 + -0x40);
                        puVar9 = (undefined8 *)((long)local_f0 + lVar7 + -0x80);
                      }
                      local_ac = 1;
                      goto LAB_002c6278;
                    }
                    uVar119 = CONCAT44((auVar112._0_4_ + auVar112._4_4_ + fVar90) - fVar26,
                                       fVar102 - fVar19);
                    uVar68 = NEON_frecpe(uVar119,4);
                    uVar74 = NEON_frecps(uVar119,uVar68,4);
                    fVar80 = (float)uVar68 * (float)uVar74;
                    fVar90 = (float)((ulong)uVar68 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
                    uVar68 = NEON_frecps(uVar119,CONCAT44(fVar90,fVar80),4);
                    fVar80 = fVar80 * (float)uVar68;
                    fVar90 = fVar90 * (float)((ulong)uVar68 >> 0x20);
                    uVar68 = NEON_frecps(uVar119,CONCAT44(fVar90,fVar80),4);
                    fVar80 = fVar80 * (float)uVar68;
                    fVar90 = fVar90 * (float)((ulong)uVar68 >> 0x20);
                    uVar68 = NEON_frecps(uVar119,CONCAT44(fVar90,fVar80),4);
                    fVar80 = fVar80 * (float)uVar68;
                    uVar119 = NEON_frecps(uVar119,CONCAT44(fVar90 * (float)((ulong)uVar68 >> 0x20),
                                                           fVar80),4);
                    fVar102 = fVar102 * (float)(-(uint)(1.1920929e-07 < ABS(fVar102 - fVar19)) &
                                               (uint)(fVar80 * (float)uVar119));
                    auVar35._0_8_ =
                         CONCAT44(fVar21 + auVar66._4_4_ * fVar102,fVar91 + auVar66._0_4_ * fVar102)
                    ;
                    auVar35._8_4_ = fVar92 + auVar66._8_4_ * fVar102;
                    auVar35._12_4_ = fVar100 + auVar66._12_4_ * fVar102;
                    auVar59 = NEON_ext(auVar35,auVar35,8,1);
                    auVar31._8_4_ = (float)auVar59._0_4_;
                    auVar31._0_8_ = auVar35._0_8_;
                    auVar31._12_4_ = 0.0;
                    local_ac = 2;
                    puVar9 = &local_170;
                    pfVar11 = local_130;
                    pfVar12 = (float *)local_f0;
                  }
                }
                local_f0[1] = *(undefined8 *)(pfVar12 + 2);
                local_f0[0] = *(undefined8 *)pfVar12;
                fStack_d8 = (float)*(undefined8 *)(pfVar15 + 2);
                fStack_d4 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
                local_e0 = (float)*(undefined8 *)pfVar15;
                fStack_dc = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
                local_130[2] = (float)*(undefined8 *)(pfVar11 + 2);
                local_130[3] = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20);
                local_130[0] = (float)*(undefined8 *)pfVar11;
                local_130[1] = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
                uStack_118 = *(undefined8 *)(pfVar14 + 2);
                local_120 = *(undefined8 *)pfVar14;
                uStack_168 = puVar9[1];
                local_170 = *puVar9;
                uStack_158 = puVar13[1];
                local_160 = *puVar13;
              }
            }
          }
          else {
            auVar40._0_4_ = auVar70._0_4_ * auVar70._0_4_;
            auVar40._4_4_ = auVar70._4_4_ * auVar70._4_4_;
            auVar40._8_4_ = auVar70._8_4_ * auVar70._8_4_;
            auVar40._12_4_ = auVar70._12_4_ * auVar70._12_4_;
            auVar59 = NEON_ext(auVar40,auVar40,8,1);
            fVar80 = auVar59._0_4_ + auVar59._4_4_;
            fVar102 = auVar40._0_4_ + auVar40._4_4_ + fVar80;
            uVar119 = CONCAT44(auVar40._0_4_ + auVar40._4_4_ + fVar80,fVar102);
            bVar6 = fVar102 <= 1.1920929e-07;
            auVar52._0_4_ = -(uint)bVar6;
            auVar52._4_4_ = -(uint)bVar6;
            auVar52._8_4_ = -(uint)bVar6;
            auVar52._12_4_ = -(uint)bVar6;
            NEON_ext(auVar52,auVar52,8,1);
            local_ac = 2;
            if (CONCAT13((char)auVar52._12_4_,
                         CONCAT12((char)auVar52._8_4_,
                                  CONCAT11((char)auVar52._4_4_,(char)auVar52._0_4_))) != -1) {
              auVar53._0_4_ = -fVar91 * auVar70._0_4_;
              auVar53._4_4_ = -fVar21 * auVar70._4_4_;
              auVar53._8_4_ = -fVar92 * auVar70._8_4_;
              auVar53._12_4_ = auVar70._12_4_ * 0.0;
              auVar59 = NEON_ext(auVar53,auVar53,8,1);
              fVar102 = auVar59._0_4_ + auVar59._4_4_;
              uVar68 = NEON_frecpe(uVar119,4);
              uVar74 = NEON_frecps(uVar119,uVar68,4);
              fVar80 = (float)uVar68 * (float)uVar74;
              fVar90 = (float)((ulong)uVar68 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
              uVar68 = NEON_frecps(uVar119,CONCAT44(fVar90,fVar80),4);
              fVar80 = fVar80 * (float)uVar68;
              fVar90 = fVar90 * (float)((ulong)uVar68 >> 0x20);
              uVar68 = NEON_frecps(uVar119,CONCAT44(fVar90,fVar80),4);
              fVar80 = fVar80 * (float)uVar68;
              fVar90 = fVar90 * (float)((ulong)uVar68 >> 0x20);
              uVar68 = NEON_frecps(uVar119,CONCAT44(fVar90,fVar80),4);
              fVar80 = fVar80 * (float)uVar68;
              fVar90 = fVar90 * (float)((ulong)uVar68 >> 0x20);
              uVar119 = NEON_frecps(uVar119,CONCAT44(fVar90,fVar80),4);
              uVar68 = NEON_fmov(0x3f800000,4);
              uVar119 = NEON_fmin(CONCAT44((auVar53._0_4_ + auVar53._4_4_ + fVar102) *
                                           fVar90 * (float)((ulong)uVar119 >> 0x20),
                                           (auVar53._0_4_ + auVar53._4_4_ + fVar102) *
                                           fVar80 * (float)uVar119),uVar68,4);
              uVar119 = NEON_fmax(uVar119,0,4);
              fVar102 = (float)uVar119;
              fVar80 = auVar70._0_4_ * fVar102;
              fVar90 = auVar70._4_4_ * fVar102;
              fVar46 = auVar70._8_4_ * fVar102;
              fVar102 = auVar70._12_4_ * fVar102;
              goto LAB_002c5df4;
            }
LAB_002c5e08:
            auVar31._8_8_ = local_f0[1];
            auVar31._0_8_ = local_f0[0];
            local_ac = 1;
          }
        }
        else if (uVar47 == 1) {
          fVar80 = local_e0 - fVar91;
          fVar90 = fStack_dc - fVar21;
          fVar46 = fStack_d8 - fVar92;
          fVar102 = fStack_d4 - fVar100;
          auVar51._0_4_ = fVar80 * fVar80;
          auVar51._4_4_ = fVar90 * fVar90;
          auVar51._8_4_ = fVar46 * fVar46;
          auVar51._12_4_ = fVar102 * fVar102;
          auVar59 = NEON_ext(auVar51,auVar51,8,1);
          fVar22 = auVar59._0_4_ + auVar59._4_4_;
          fVar17 = auVar51._0_4_ + auVar51._4_4_ + fVar22;
          uVar119 = CONCAT44(auVar51._0_4_ + auVar51._4_4_ + fVar22,fVar17);
          bVar6 = fVar17 <= 1.1920929e-07;
          auVar64._0_4_ = -(uint)bVar6;
          auVar64._4_4_ = -(uint)bVar6;
          auVar64._8_4_ = -(uint)bVar6;
          auVar64._12_4_ = -(uint)bVar6;
          NEON_ext(auVar64,auVar64,8,1);
          if (CONCAT13((char)auVar64._12_4_,
                       CONCAT12((char)auVar64._8_4_,
                                CONCAT11((char)auVar64._4_4_,(char)auVar64._0_4_))) == -1)
          goto LAB_002c5e08;
          auVar65._0_4_ = -fVar91 * fVar80;
          auVar65._4_4_ = -fVar21 * fVar90;
          auVar65._8_4_ = -fVar92 * fVar46;
          auVar65._12_4_ = fVar102 * 0.0;
          auVar59 = NEON_ext(auVar65,auVar65,8,1);
          fVar17 = auVar59._0_4_ + auVar59._4_4_;
          uVar68 = NEON_frecpe(uVar119,4);
          uVar74 = NEON_frecps(uVar119,uVar68,4);
          fVar22 = (float)uVar68 * (float)uVar74;
          fVar73 = (float)((ulong)uVar68 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
          uVar68 = NEON_frecps(uVar119,CONCAT44(fVar73,fVar22),4);
          fVar22 = fVar22 * (float)uVar68;
          fVar73 = fVar73 * (float)((ulong)uVar68 >> 0x20);
          uVar68 = NEON_frecps(uVar119,CONCAT44(fVar73,fVar22),4);
          fVar22 = fVar22 * (float)uVar68;
          fVar73 = fVar73 * (float)((ulong)uVar68 >> 0x20);
          uVar68 = NEON_frecps(uVar119,CONCAT44(fVar73,fVar22),4);
          fVar22 = fVar22 * (float)uVar68;
          fVar73 = fVar73 * (float)((ulong)uVar68 >> 0x20);
          uVar119 = NEON_frecps(uVar119,CONCAT44(fVar73,fVar22),4);
          uVar68 = NEON_fmov(0x3f800000,4);
          uVar119 = NEON_fmin(CONCAT44((auVar65._0_4_ + auVar65._4_4_ + fVar17) *
                                       fVar73 * (float)((ulong)uVar119 >> 0x20),
                                       (auVar65._0_4_ + auVar65._4_4_ + fVar17) *
                                       fVar22 * (float)uVar119),uVar68,4);
          uVar119 = NEON_fmax(uVar119,0,4);
          fVar17 = (float)uVar119;
          fVar80 = fVar80 * fVar17;
          fVar90 = fVar90 * fVar17;
          fVar46 = fVar46 * fVar17;
          fVar102 = fVar102 * fVar17;
LAB_002c5df4:
          auVar28._0_8_ = CONCAT44(fVar21 + fVar90,fVar91 + fVar80);
          auVar28._8_4_ = fVar92 + fVar46;
          auVar28._12_4_ = fVar100 + fVar102;
          auVar59 = NEON_ext(auVar28,auVar28,8,1);
          auVar31._8_4_ = (float)auVar59._0_4_;
          auVar31._0_8_ = auVar28._0_8_;
          auVar31._12_4_ = 0.0;
        }
      }
      fVar21 = auVar31._0_4_;
      auVar54._0_4_ = fVar21 * fVar21;
      fVar92 = auVar31._4_4_;
      auVar54._4_4_ = fVar92 * fVar92;
      fVar100 = auVar31._8_4_;
      auVar54._8_4_ = fVar100 * fVar100;
      fVar102 = auVar31._12_4_;
      auVar54._12_4_ = fVar102 * fVar102;
      auVar59 = NEON_ext(auVar54,auVar54,8,1);
      fVar91 = auVar54._0_4_ + auVar54._4_4_ + auVar59._0_4_ + auVar59._4_4_;
      iVar48 = -(uint)(fVar91 < fVar125);
      bVar6 = fVar103 * fVar103 < fVar91 && fVar91 < fVar125;
      auVar72._0_4_ = -(uint)bVar6;
      auVar72._4_4_ = -(uint)bVar6;
      auVar72._8_4_ = -(uint)bVar6;
      auVar72._12_4_ = -(uint)bVar6;
      NEON_ext(auVar72,auVar72,8,1);
      auVar60._0_4_ = -fVar21;
      auVar60._4_4_ = -fVar92;
      auVar60._8_4_ = -fVar100;
      auVar60._12_4_ = 0;
      if (CONCAT13((char)auVar72._12_4_,
                   CONCAT12((char)auVar72._8_4_,CONCAT11((char)auVar72._4_4_,(char)auVar72._0_4_)))
          != -1) goto code_r0x002c62f0;
      lVar7 = *(long *)(param_2 + 8);
      auVar59 = *(undefined1 (*) [16])(lVar7 + 0x40);
      lVar10 = *(long *)(param_3 + 8);
      auVar69._8_8_ = uVar75;
      auVar69._0_8_ = uVar83;
      fVar16 = fVar21;
      fVar20 = fVar92;
      fVar79 = fVar100;
      fVar89 = fVar102;
    } while( true );
  }
  auVar56._8_4_ = auVar60._8_4_;
  auVar56._0_8_ = auVar60._0_8_;
  auVar56._12_4_ = 0;
  auVar31._12_4_ = fVar89;
  auVar31._8_4_ = fVar79;
  auVar31._4_4_ = fVar20;
  auVar31._0_4_ = fVar16;
LAB_002c6304:
  auVar98 = ZEXT816(0);
  iVar48 = -(uint)(fVar101 * fVar101 < fVar91);
  bVar38 = (byte)iVar48;
  auVar55[0] = bVar38 & auVar84[0];
  bVar43 = (byte)((uint)iVar48 >> 8);
  auVar55[1] = bVar43 & auVar84[1];
  bVar44 = (byte)((uint)iVar48 >> 0x10);
  auVar55[2] = bVar44 & auVar84[2];
  bVar45 = (byte)((uint)iVar48 >> 0x18);
  auVar55[3] = bVar45 & auVar84[3];
  auVar55[4] = bVar38 & auVar84[4];
  auVar55[5] = bVar43 & auVar84[5];
  auVar55[6] = bVar44 & auVar84[6];
  auVar55[7] = bVar45 & auVar84[7];
  auVar55[8] = bVar38 & auVar84[8];
  auVar55[9] = bVar43 & auVar84[9];
  auVar55[10] = bVar44 & auVar84[10];
  auVar55[0xb] = bVar45 & auVar84[0xb];
  auVar55[0xc] = bVar38 & auVar84[0xc];
  auVar55[0xd] = bVar43 & auVar84[0xd];
  auVar55[0xe] = bVar44 & auVar84[0xe];
  auVar55[0xf] = bVar45 & auVar84[0xf];
  auVar1._4_4_ = fVar20;
  auVar1._0_4_ = fVar16;
  auVar1._8_4_ = fVar79;
  auVar1._12_4_ = fVar89;
  auVar88._4_4_ = fVar20;
  auVar88._0_4_ = fVar16;
  auVar88._8_4_ = fVar79;
  auVar88._12_4_ = fVar89;
  auVar88 = auVar88 ^ (auVar1 ^ auVar31) & auVar84;
  auVar56 = auVar56 ^ (auVar56 ^ auVar60) & auVar55;
  iVar48 = -(*(byte *)(lVar7 + 0x24) & 1);
  fVar79 = auVar56._0_4_;
  auVar41._0_4_ = fVar79 * fVar79;
  fVar89 = auVar56._4_4_;
  auVar41._4_4_ = fVar89 * fVar89;
  fVar91 = auVar56._8_4_;
  auVar41._8_4_ = fVar91 * fVar91;
  auVar41._12_4_ = auVar56._12_4_ * auVar56._12_4_;
  auVar59 = NEON_ext(auVar41,auVar41,8,1);
  auVar97._0_8_ = CONCAT44(iVar48,iVar48);
  auVar97._8_4_ = iVar48;
  auVar97._12_4_ = iVar48;
  fVar20 = auVar59._0_4_ + auVar59._4_4_;
  fVar16 = auVar41._0_4_ + auVar41._4_4_ + fVar20;
  fVar20 = auVar41._0_4_ + auVar41._4_4_ + fVar20;
  uVar8 = CONCAT44(fVar20,fVar16);
  uVar82 = NEON_frsqrte(uVar8,4);
  fVar99 = (float)uVar82;
  fVar101 = (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar101 * fVar101,fVar99 * fVar99),uVar8,4);
  fVar99 = fVar99 * (float)uVar82;
  fVar101 = fVar101 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar101 * fVar101,fVar99 * fVar99),uVar8,4);
  fVar99 = fVar99 * (float)uVar82;
  fVar101 = fVar101 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar101 * fVar101,fVar99 * fVar99),uVar8,4);
  fVar99 = fVar99 * (float)uVar82;
  fVar101 = fVar101 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar101 * fVar101,fVar99 * fVar99),uVar8,4);
  uVar58 = CONCAT44(fVar20 * fVar101 * (float)((ulong)uVar82 >> 0x20),
                    fVar16 * fVar99 * (float)uVar82);
  uVar58 = uVar58 ^ (uVar58 ^ uVar8) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar82 = NEON_frecpe(uVar58,4);
  uVar75 = NEON_frecps(uVar58,uVar82,4);
  fVar16 = (float)uVar82 * (float)uVar75;
  fVar20 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar75 >> 0x20);
  uVar82 = NEON_frecps(uVar58,CONCAT44(fVar20,fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  fVar20 = fVar20 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frecps(uVar58,CONCAT44(fVar20,fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  fVar20 = fVar20 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frecps(uVar58,CONCAT44(fVar20,fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  iVar48 = -(uint)(0.0 < (float)uVar58);
  uVar82 = NEON_frecps(uVar58,CONCAT44(fVar20 * (float)((ulong)uVar82 >> 0x20),fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  fVar79 = fVar79 * fVar16;
  fVar89 = fVar89 * fVar16;
  fVar91 = fVar91 * fVar16;
  bVar38 = (byte)iVar48;
  bVar43 = (byte)((uint)iVar48 >> 8);
  bVar44 = (byte)((uint)iVar48 >> 0x10);
  bVar45 = (byte)((uint)iVar48 >> 0x18);
  fVar16 = (float)CONCAT13(bVar45 & (byte)((uint)fVar79 >> 0x18),
                           CONCAT12(bVar44 & (byte)((uint)fVar79 >> 0x10),
                                    CONCAT11(bVar43 & (byte)((uint)fVar79 >> 8),
                                             bVar38 & SUB41(fVar79,0))));
  auVar39._0_8_ =
       CONCAT17(bVar45 & (byte)((uint)fVar89 >> 0x18),
                CONCAT16(bVar44 & (byte)((uint)fVar89 >> 0x10),
                         CONCAT15(bVar43 & (byte)((uint)fVar89 >> 8),
                                  CONCAT14(bVar38 & SUB41(fVar89,0),fVar16))));
  auVar39[8] = bVar38 & SUB41(fVar91,0);
  auVar39[9] = bVar43 & (byte)((uint)fVar91 >> 8);
  auVar39[10] = bVar44 & (byte)((uint)fVar91 >> 0x10);
  auVar39[0xb] = bVar45 & (byte)((uint)fVar91 >> 0x18);
  auVar42._0_8_ = CONCAT44(-(float)((ulong)auVar39._0_8_ >> 0x20),-fVar16);
  auVar42._8_4_ = -auVar39._8_4_;
  auVar42._12_4_ = 0;
  param_9[1] = (ulong)(uint)auVar42._8_4_;
  *param_9 = auVar42._0_8_;
  *param_8 = uVar83;
  uStack_178 = auVar88._8_8_;
  local_180 = auVar88._0_8_;
  if (local_ac == 3) {
    FUN_00231940(&local_180,local_f0,&local_e0,&local_d0,local_98,local_a8);
    auVar98._0_4_ =
         local_130[0] +
         ((float)local_120 - local_130[0]) * local_98[0] +
         (local_110[0] - local_130[0]) * local_a8[0];
    auVar98._4_4_ =
         local_130[1] +
         (local_120._4_4_ - local_130[1]) * local_98[0] +
         (local_110[1] - local_130[1]) * local_a8[0];
    auVar98._8_4_ =
         local_130[2] +
         ((float)uStack_118 - local_130[2]) * local_98[0] +
         (local_110[2] - local_130[2]) * local_a8[0];
    auVar98._12_4_ = local_130[3] + 0.0;
    auVar42._12_4_ = 0;
    auVar97._8_8_ = auVar97._8_8_;
  }
  else if (local_ac == 2) {
    FUN_002318c0(&local_180,local_f0,&local_e0,local_98);
    auVar118._0_8_ =
         CONCAT44(local_130[1] + (local_120._4_4_ - local_130[1]) * local_98[0],
                  local_130[0] + ((float)local_120 - local_130[0]) * local_98[0]);
    auVar118._8_4_ = local_130[2] + ((float)uStack_118 - local_130[2]) * local_98[0];
    auVar118._12_4_ = local_130[3] + (uStack_118._4_4_ - local_130[3]) * local_98[0];
    auVar59 = NEON_ext(auVar118,auVar118,8,1);
    auVar42._12_4_ = 0;
    auVar97._8_8_ = auVar97._8_8_;
    auVar98._8_4_ = (float)auVar59._0_4_;
    auVar98._0_8_ = auVar118._0_8_;
    auVar98._12_4_ = 0.0;
  }
  else if (local_ac == 1) {
    auVar98._4_4_ = local_130[1];
    auVar98._0_4_ = local_130[0];
    auVar98._8_4_ = local_130[2];
    auVar98._12_4_ = local_130[3];
  }
  fVar16 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar36._0_8_ =
       CONCAT44(auVar98._4_4_ - auVar42._4_4_ * fVar16,auVar98._0_4_ - auVar42._0_4_ * fVar16);
  auVar36._8_4_ = auVar98._8_4_ - auVar42._8_4_ * fVar16;
  auVar36._12_4_ = auVar98._12_4_ - auVar42._12_4_ * fVar16;
  auVar59 = NEON_ext(auVar36,auVar36,8,1);
  auVar37._8_4_ = auVar59._0_4_;
  auVar37._0_8_ = auVar36._0_8_;
  auVar37._12_4_ = 0;
  auVar98 = auVar98 ^ (auVar98 ^ auVar37) & auVar97;
  param_10[1] = auVar98._8_8_;
  *param_10 = auVar98._0_8_;
  return 1;
code_r0x002c62f0:
  auVar84._4_4_ = iVar48;
  auVar84._0_4_ = iVar48;
  auVar84._8_4_ = iVar48;
  auVar84._12_4_ = iVar48;
  auVar56._8_8_ = uStack_1b8;
  auVar56._0_8_ = local_1c0;
  lVar7 = *(long *)(param_2 + 8);
  goto LAB_002c6304;
}


