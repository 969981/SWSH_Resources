/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00258810; name: FUN_00258810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00258810(long *param_1,long *param_2,undefined1 *param_3,undefined1 *param_4,byte param_5)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  ushort uVar20;
  float fVar17;
  float fVar18;
  float fVar19;
  ushort uVar21;
  ushort uVar27;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  float extraout_s0;
  int iVar29;
  undefined8 uVar30;
  float extraout_var_00;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float extraout_var;
  float extraout_var_01;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  uint uVar50;
  float fVar51;
  float fVar56;
  float fVar57;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  int iVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined8 uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar80;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar81;
  undefined8 uVar82;
  float fVar84;
  undefined1 auVar83 [16];
  float fVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined8 uVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  byte in_stack_00000008;
  float local_1fb0;
  float fStack_1fac;
  float fStack_1fa8;
  float fStack_1fa4;
  undefined8 local_1fa0;
  undefined1 *puStack_1f98;
  undefined1 auStack_1f90 [7168];
  undefined4 local_390;
  undefined4 local_388;
  undefined4 local_284;
  undefined4 local_180;
  undefined8 local_168;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined8 local_150 [2];
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined1 local_130 [2] [16];
  undefined8 local_110 [8];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint local_84;
  
  local_84 = (uint)param_5;
  local_160 = 0.0;
  fStack_15c = 0.0;
  fStack_158 = 0.0;
  fStack_154 = 0.0;
  local_168 = 0;
  uVar30 = NEON_fmin(CONCAT44(*(undefined4 *)(param_1[1] + 0x14),*(undefined4 *)(param_1[1] + 0x14))
                     ,CONCAT44(*(undefined4 *)(param_2[1] + 0x14),*(undefined4 *)(param_2[1] + 0x14)
                              ),4);
  fVar28 = (float)uVar30 * 0.1;
  fVar28 = fVar28 * fVar28;
  if (param_5 == 0) {
    auVar31 = (**(code **)(*param_1 + 0x20))(param_1);
    fStack_1fa8 = auVar31._8_4_;
    fStack_1fa4 = auVar31._12_4_;
    local_1fb0 = auVar31._0_4_;
    fStack_1fac = auVar31._4_4_;
    (**(code **)(*param_2 + 0x20))(param_2);
    local_1fb0 = local_1fb0 - extraout_s0;
    fStack_1fac = fStack_1fac - extraout_var;
    fStack_1fa8 = fStack_1fa8 - extraout_var_00;
    fStack_1fa4 = fStack_1fa4 - extraout_var_01;
    auVar31._0_4_ = local_1fb0 * local_1fb0;
    auVar31._4_4_ = fStack_1fac * fStack_1fac;
    auVar31._8_4_ = fStack_1fa8 * fStack_1fa8;
    auVar31._12_4_ = fStack_1fa4 * fStack_1fa4;
    auVar32 = NEON_ext(auVar31,auVar31,8,1);
    uVar50 = -(uint)(0.0 < auVar31._0_4_ + auVar31._4_4_ + auVar32._0_4_ + auVar32._4_4_);
    fVar16 = 3.4028235e+38;
    local_160 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)local_1fb0) & uVar50);
    fStack_15c = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fStack_1fac) & uVar50);
    fStack_158 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fStack_1fa8) & uVar50);
    fStack_154 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fStack_1fa4) & uVar50);
    uVar30 = 0x1000100010001;
    goto LAB_00259104;
  }
  uVar13 = (ulong)param_5;
  puVar9 = &local_d0;
  puVar7 = local_110;
  puVar14 = local_150;
  do {
    auVar31 = (**(code **)*param_1)(param_1,*param_3,&local_168);
    fStack_1fa8 = auVar31._8_4_;
    fStack_1fa4 = auVar31._12_4_;
    local_1fb0 = auVar31._0_4_;
    fStack_1fac = auVar31._4_4_;
    auVar32 = (**(code **)*param_2)(param_2,*param_4,&local_168);
    auVar110._0_8_ = CONCAT44(fStack_1fac - auVar32._4_4_,local_1fb0 - auVar32._0_4_);
    auVar110._8_4_ = fStack_1fa8 - auVar32._8_4_;
    auVar110._12_4_ = fStack_1fa4 - auVar32._12_4_;
    puVar9[1] = auVar31._8_8_;
    *puVar9 = auVar31._0_8_;
    uVar13 = uVar13 - 1;
    puVar7[1] = auVar32._8_8_;
    *puVar7 = auVar32._0_8_;
    puVar14[1] = auVar110._8_8_;
    *puVar14 = auVar110._0_8_;
    puVar9 = puVar9 + 2;
    puVar7 = puVar7 + 2;
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
    puVar14 = puVar14 + 2;
  } while (uVar13 != 0);
  if ((in_stack_00000008 & 1) != 0) {
    fVar16 = 3.4028235e+38;
    uVar30 = 0;
    goto LAB_00259104;
  }
  uVar13 = (ulong)(local_84 - 1);
  fVar16 = (float)local_150[0];
  fVar19 = SUB84(local_150[0],4);
  fVar81 = (float)local_150[1];
  fVar84 = SUB84(local_150[1],4);
  switch(uVar13) {
  case 0:
    auVar32 = *(undefined1 (*) [16])(local_150 + uVar13 * 2);
    break;
  case 1:
    auVar32._8_8_ = local_150[1];
    auVar32._0_8_ = local_150[0];
    fVar51 = local_140 - fVar16;
    fVar56 = fStack_13c - fVar19;
    fVar57 = fStack_138 - fVar81;
    fVar17 = fStack_134 - fVar84;
    auVar59._0_4_ = fVar51 * fVar51;
    auVar59._4_4_ = fVar56 * fVar56;
    auVar59._8_4_ = fVar57 * fVar57;
    auVar59._12_4_ = fVar17 * fVar17;
    auVar31 = NEON_ext(auVar59,auVar59,8,1);
    fVar58 = auVar31._0_4_ + auVar31._4_4_;
    fVar15 = auVar59._0_4_ + auVar59._4_4_ + fVar58;
    uVar30 = CONCAT44(auVar59._0_4_ + auVar59._4_4_ + fVar58,fVar15);
    bVar5 = fVar15 <= 1.1920929e-07;
    auVar67._0_4_ = -(uint)bVar5;
    auVar67._4_4_ = -(uint)bVar5;
    auVar67._8_4_ = -(uint)bVar5;
    auVar67._12_4_ = -(uint)bVar5;
    NEON_ext(auVar67,auVar67,8,1);
    if (CONCAT13((char)auVar67._12_4_,
                 CONCAT12((char)auVar67._8_4_,CONCAT11((char)auVar67._4_4_,(char)auVar67._0_4_))) ==
        -1) {
      local_84 = 1;
    }
    else {
      auVar68._0_4_ = -fVar16 * fVar51;
      auVar68._4_4_ = -fVar19 * fVar56;
      auVar68._8_4_ = -fVar81 * fVar57;
      auVar68._12_4_ = fVar17 * 0.0;
      auVar31 = NEON_ext(auVar68,auVar68,8,1);
      fVar15 = auVar31._0_4_ + auVar31._4_4_;
      uVar75 = NEON_frecpe(uVar30,4);
      uVar82 = NEON_frecps(uVar30,uVar75,4);
      fVar58 = (float)uVar75 * (float)uVar82;
      fVar22 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
      uVar75 = NEON_frecps(uVar30,CONCAT44(fVar22,fVar58),4);
      fVar58 = fVar58 * (float)uVar75;
      fVar22 = fVar22 * (float)((ulong)uVar75 >> 0x20);
      uVar75 = NEON_frecps(uVar30,CONCAT44(fVar22,fVar58),4);
      fVar58 = fVar58 * (float)uVar75;
      fVar22 = fVar22 * (float)((ulong)uVar75 >> 0x20);
      uVar75 = NEON_frecps(uVar30,CONCAT44(fVar22,fVar58),4);
      fVar58 = fVar58 * (float)uVar75;
      fVar22 = fVar22 * (float)((ulong)uVar75 >> 0x20);
      uVar30 = NEON_frecps(uVar30,CONCAT44(fVar22,fVar58),4);
      uVar75 = NEON_fmov(0x3f800000,4);
      uVar30 = NEON_fmin(CONCAT44((auVar68._0_4_ + auVar68._4_4_ + fVar15) *
                                  fVar22 * (float)((ulong)uVar30 >> 0x20),
                                  (auVar68._0_4_ + auVar68._4_4_ + fVar15) * fVar58 * (float)uVar30)
                         ,uVar75,4);
      uVar30 = NEON_fmax(uVar30,0,4);
      fVar15 = (float)uVar30;
      auVar33._0_8_ = CONCAT44(fVar19 + fVar56 * fVar15,fVar16 + fVar51 * fVar15);
      auVar33._8_4_ = fVar81 + fVar57 * fVar15;
      auVar33._12_4_ = fVar84 + fVar17 * fVar15;
      auVar31 = NEON_ext(auVar33,auVar33,8,1);
      auVar32._8_4_ = (float)auVar31._0_4_;
      auVar32._0_8_ = auVar33._0_8_;
      auVar32._12_4_ = 0;
    }
    break;
  case 2:
    auVar32._8_8_ = local_150[1];
    auVar32._0_8_ = local_150[0];
    auVar3._4_4_ = fStack_13c;
    auVar3._0_4_ = local_140;
    auVar3._8_4_ = fStack_138;
    auVar3._12_4_ = fStack_134;
    fVar51 = local_130[0]._0_4_;
    auVar69._0_4_ = fVar51 - fVar16;
    fVar56 = local_130[0]._4_4_;
    auVar69._4_4_ = fVar56 - fVar19;
    fVar57 = local_130[0]._8_4_;
    auVar69._8_4_ = fVar57 - fVar81;
    auVar69._12_4_ = local_130[0]._12_4_ - fVar84;
    auVar76._0_4_ = local_140 - fVar16;
    auVar76._4_4_ = fStack_13c - fVar19;
    auVar76._8_4_ = fStack_138 - fVar81;
    auVar76._12_4_ = fStack_134 - fVar84;
    auVar31 = NEON_ext(auVar76,auVar76,8,1);
    auVar110 = NEON_ext(auVar69,auVar69,8,1);
    fVar80 = auVar76._0_4_ * auVar69._4_4_ - auVar76._4_4_ * auVar69._0_4_;
    uVar30 = NEON_ext(CONCAT44(auVar76._4_4_ * auVar69._8_4_ - auVar76._8_4_ * auVar69._4_4_,fVar80)
                      ,CONCAT44(auVar31._4_4_ * auVar69._4_4_ - auVar76._4_4_ * auVar110._4_4_,
                                auVar31._0_4_ * auVar69._0_4_ - auVar76._0_4_ * auVar110._0_4_),4,1)
    ;
    fVar17 = (float)uVar30;
    auVar112._0_4_ = fVar17 * fVar17;
    fVar22 = (float)((ulong)uVar30 >> 0x20);
    auVar112._4_4_ = fVar22 * fVar22;
    auVar112._8_4_ = fVar80 * fVar80;
    auVar112._12_4_ = 0;
    auVar31 = NEON_ext(auVar112,auVar112,8,1);
    fVar58 = auVar31._0_4_ + auVar31._4_4_;
    fVar15 = auVar112._0_4_ + auVar112._4_4_ + fVar58;
    uVar30 = CONCAT44(auVar112._0_4_ + auVar112._4_4_ + fVar58,fVar15);
    local_84 = 3;
    if (1.1920929e-07 < fVar15) {
      if (fVar15 != 0.0) {
        auVar31 = NEON_ext(auVar3,auVar3,8,1);
        auVar110 = NEON_ext(local_130[0],local_130[0],8,1);
        fVar58 = local_140 * fVar56 - fStack_13c * fVar51;
        auVar112 = NEON_ext(auVar32,auVar32,8,1);
        uVar111 = NEON_ext(CONCAT44(fStack_13c * fVar57 - fStack_138 * fVar56,fVar58),
                           CONCAT44(auVar31._4_4_ * fVar56 - fStack_13c * auVar110._4_4_,
                                    auVar31._0_4_ * fVar51 - local_140 * auVar110._0_4_),4,1);
        fVar15 = fVar19 * fVar51 - fVar16 * fVar56;
        uVar75 = NEON_ext(CONCAT44(fVar81 * fVar56 - fVar19 * fVar57,fVar15),
                          CONCAT44(fVar19 * auVar110._4_4_ - auVar112._4_4_ * fVar56,
                                   fVar16 * auVar110._0_4_ - auVar112._0_4_ * fVar51),4,1);
        fVar85 = fVar16 * fStack_13c - fVar19 * local_140;
        uVar82 = NEON_ext(CONCAT44(fVar19 * fStack_138 - fVar81 * fStack_13c,fVar85),
                          CONCAT44(auVar112._4_4_ * fStack_13c - fVar19 * auVar31._4_4_,
                                   auVar112._0_4_ * local_140 - fVar16 * auVar31._0_4_),4,1);
        auVar88._0_4_ = (float)uVar111 * fVar17;
        auVar88._4_4_ = (float)((ulong)uVar111 >> 0x20) * fVar22;
        auVar88._8_4_ = fVar58 * fVar80;
        auVar88._12_4_ = 0;
        auVar31 = NEON_ext(auVar88,auVar88,8,1);
        auVar95._0_4_ = (float)uVar75 * fVar17;
        auVar95._4_4_ = (float)((ulong)uVar75 >> 0x20) * fVar22;
        auVar95._8_4_ = fVar15 * fVar80;
        auVar95._12_4_ = 0;
        fVar15 = auVar88._0_4_ + auVar88._4_4_ + auVar31._0_4_ + auVar31._4_4_;
        auVar31 = NEON_ext(auVar95,auVar95,8,1);
        fVar58 = auVar95._0_4_ + auVar95._4_4_ + auVar31._0_4_ + auVar31._4_4_;
        auVar89._0_4_ = (float)uVar82 * fVar17;
        auVar89._4_4_ = (float)((ulong)uVar82 >> 0x20) * fVar22;
        auVar89._8_4_ = fVar85 * fVar80;
        auVar89._12_4_ = 0;
        auVar31 = NEON_ext(auVar89,auVar89,8,1);
        fVar85 = auVar89._0_4_ + auVar89._4_4_ + auVar31._0_4_ + auVar31._4_4_;
        bVar5 = 0.0 <= fVar85 && (0.0 <= fVar58 && 0.0 <= fVar15);
        auVar100._0_4_ = -(uint)bVar5;
        auVar100._4_4_ = -(uint)bVar5;
        auVar100._8_4_ = -(uint)bVar5;
        auVar100._12_4_ = -(uint)bVar5;
        NEON_ext(auVar100,auVar100,8,1);
        if (CONCAT13((char)auVar100._12_4_,
                     CONCAT12((char)auVar100._8_4_,
                              CONCAT11((char)auVar100._4_4_,(char)auVar100._0_4_))) == -1) {
          auVar37._0_4_ = fVar16 * fVar17;
          auVar37._4_4_ = fVar19 * fVar22;
          auVar37._8_4_ = fVar81 * fVar80;
          auVar37._12_4_ = fVar84 * 0.0;
          auVar31 = NEON_ext(auVar37,auVar37,8,1);
          uVar75 = NEON_frecpe(uVar30,4);
          uVar82 = NEON_frecps(uVar30,uVar75,4);
          fVar16 = (float)uVar75 * (float)uVar82;
          fVar19 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
          uVar75 = NEON_frecps(uVar30,CONCAT44(fVar19,fVar16),4);
          fVar16 = fVar16 * (float)uVar75;
          fVar19 = fVar19 * (float)((ulong)uVar75 >> 0x20);
          uVar75 = NEON_frecps(uVar30,CONCAT44(fVar19,fVar16),4);
          fVar16 = fVar16 * (float)uVar75;
          fVar19 = fVar19 * (float)((ulong)uVar75 >> 0x20);
          uVar75 = NEON_frecps(uVar30,CONCAT44(fVar19,fVar16),4);
          fVar16 = fVar16 * (float)uVar75;
          uVar30 = NEON_frecps(uVar30,CONCAT44(fVar19 * (float)((ulong)uVar75 >> 0x20),fVar16),4);
          fVar16 = (auVar37._0_4_ + auVar37._4_4_ + auVar31._0_4_ + auVar31._4_4_) *
                   fVar16 * (float)uVar30;
          auVar32._0_4_ = fVar17 * fVar16;
          auVar32._4_4_ = fVar22 * fVar16;
          auVar32._8_4_ = fVar80 * fVar16;
          auVar32._12_4_ = 0;
        }
        else {
          auVar91._0_4_ = -fVar16 * auVar76._0_4_;
          auVar91._4_4_ = -fVar19 * auVar76._4_4_;
          auVar91._8_4_ = -fVar81 * auVar76._8_4_;
          auVar91._12_4_ = auVar76._12_4_ * 0.0;
          auVar31 = NEON_ext(auVar91,auVar91,8,1);
          fVar80 = auVar31._0_4_ + auVar31._4_4_;
          auVar101._0_4_ = -local_140 * auVar76._0_4_;
          auVar101._4_4_ = -fStack_13c * auVar76._4_4_;
          auVar101._8_4_ = -fStack_138 * auVar76._8_4_;
          auVar101._12_4_ = auVar76._12_4_ * 0.0;
          auVar31 = NEON_ext(auVar101,auVar101,8,1);
          fVar106 = auVar31._0_4_ + auVar31._4_4_;
          fVar17 = auVar91._0_4_ + auVar91._4_4_ + fVar80;
          fVar22 = auVar101._0_4_ + auVar101._4_4_ + fVar106;
          fVar106 = auVar101._0_4_ + auVar101._4_4_ + fVar106;
          bVar5 = (fVar85 <= 0.0 && 0.0 <= fVar17) && fVar22 <= 0.0;
          auVar108._0_4_ = -(uint)bVar5;
          auVar108._4_4_ = -(uint)bVar5;
          auVar108._8_4_ = -(uint)bVar5;
          auVar108._12_4_ = -(uint)bVar5;
          NEON_ext(auVar108,auVar108,8,1);
          pauVar11 = (undefined1 (*) [16])&local_140;
          if (CONCAT13((char)auVar108._12_4_,
                       CONCAT12((char)auVar108._8_4_,
                                CONCAT11((char)auVar108._4_4_,(char)auVar108._0_4_))) == -1) {
            uVar30 = CONCAT44((auVar91._0_4_ + auVar91._4_4_ + fVar80) - fVar106,fVar17 - fVar22);
            uVar75 = NEON_frecpe(uVar30,4);
            uVar82 = NEON_frecps(uVar30,uVar75,4);
            fVar15 = (float)uVar75 * (float)uVar82;
            fVar58 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
            uVar75 = NEON_frecps(uVar30,CONCAT44(fVar58,fVar15),4);
            fVar15 = fVar15 * (float)uVar75;
            fVar58 = fVar58 * (float)((ulong)uVar75 >> 0x20);
            uVar75 = NEON_frecps(uVar30,CONCAT44(fVar58,fVar15),4);
            fVar15 = fVar15 * (float)uVar75;
            fVar58 = fVar58 * (float)((ulong)uVar75 >> 0x20);
            uVar75 = NEON_frecps(uVar30,CONCAT44(fVar58,fVar15),4);
            fVar15 = fVar15 * (float)uVar75;
            uVar30 = NEON_frecps(uVar30,CONCAT44(fVar58 * (float)((ulong)uVar75 >> 0x20),fVar15),4);
            fVar17 = fVar17 * (float)(-(uint)(1.1920929e-07 < ABS(fVar17 - fVar22)) &
                                     (uint)(fVar15 * (float)uVar30));
            lVar12 = 0;
            auVar38._0_8_ =
                 CONCAT44(fVar19 + auVar76._4_4_ * fVar17,fVar16 + auVar76._0_4_ * fVar17);
            auVar38._8_4_ = fVar81 + auVar76._8_4_ * fVar17;
            auVar38._12_4_ = fVar84 + auVar76._12_4_ * fVar17;
            auVar31 = NEON_ext(auVar38,auVar38,8,1);
            pauVar10 = (undefined1 (*) [16])local_150;
            auVar32._8_4_ = (float)auVar31._0_4_;
            auVar32._0_8_ = auVar38._0_8_;
            auVar32._12_4_ = 0;
            local_84 = 2;
LAB_00258fb4:
            lVar8 = 1;
            pauVar6 = pauVar11;
            pauVar11 = pauVar10;
          }
          else {
            auVar109._0_4_ = -local_140 * auVar69._0_4_;
            auVar109._4_4_ = -fStack_13c * auVar69._4_4_;
            auVar109._8_4_ = -fStack_138 * auVar69._8_4_;
            auVar109._12_4_ = auVar69._12_4_ * 0.0;
            auVar31 = NEON_ext(auVar109,auVar109,8,1);
            fVar18 = auVar31._0_4_ + auVar31._4_4_;
            auVar77._0_4_ = auVar76._0_4_ * -fVar51;
            auVar77._4_4_ = auVar76._4_4_ * -fVar56;
            auVar77._8_4_ = auVar76._8_4_ * -fVar57;
            auVar77._12_4_ = auVar76._12_4_ * 0.0;
            auVar113._0_4_ = auVar69._0_4_ * -fVar51;
            auVar113._4_4_ = auVar69._4_4_ * -fVar56;
            auVar113._8_4_ = auVar69._8_4_ * -fVar57;
            auVar113._12_4_ = auVar69._12_4_ * 0.0;
            fVar80 = auVar109._0_4_ + auVar109._4_4_ + fVar18;
            auVar31 = NEON_ext(auVar77,auVar77,8,1);
            fVar24 = auVar31._0_4_ + auVar31._4_4_;
            fVar85 = auVar77._0_4_ + auVar77._4_4_ + fVar24;
            auVar31 = NEON_ext(auVar113,auVar113,8,1);
            fVar25 = auVar31._0_4_ + auVar31._4_4_;
            fVar23 = auVar113._0_4_ + auVar113._4_4_ + fVar25;
            fVar25 = auVar113._0_4_ + auVar113._4_4_ + fVar25;
            pauVar6 = local_130;
            bVar5 = (fVar22 <= fVar80 && fVar15 <= 0.0) && fVar23 <= fVar85;
            auVar104._0_4_ = -(uint)bVar5;
            auVar104._4_4_ = -(uint)bVar5;
            auVar104._8_4_ = -(uint)bVar5;
            auVar104._12_4_ = -(uint)bVar5;
            NEON_ext(auVar104,auVar104,8,1);
            if (CONCAT13((char)auVar104._12_4_,
                         CONCAT12((char)auVar104._8_4_,
                                  CONCAT11((char)auVar104._4_4_,(char)auVar104._0_4_))) == -1) {
              fVar16 = (fVar80 - fVar22) + (fVar85 - fVar23);
              uVar30 = CONCAT44(((auVar109._0_4_ + auVar109._4_4_ + fVar18) - fVar106) +
                                ((auVar77._0_4_ + auVar77._4_4_ + fVar24) - fVar25),fVar16);
              uVar75 = NEON_frecpe(uVar30,4);
              uVar82 = NEON_frecps(uVar30,uVar75,4);
              fVar19 = (float)uVar75 * (float)uVar82;
              fVar81 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
              uVar75 = NEON_frecps(uVar30,CONCAT44(fVar81,fVar19),4);
              fVar19 = fVar19 * (float)uVar75;
              fVar81 = fVar81 * (float)((ulong)uVar75 >> 0x20);
              uVar75 = NEON_frecps(uVar30,CONCAT44(fVar81,fVar19),4);
              fVar19 = fVar19 * (float)uVar75;
              fVar81 = fVar81 * (float)((ulong)uVar75 >> 0x20);
              uVar75 = NEON_frecps(uVar30,CONCAT44(fVar81,fVar19),4);
              fVar19 = fVar19 * (float)uVar75;
              uVar30 = NEON_frecps(uVar30,CONCAT44(fVar81 * (float)((ulong)uVar75 >> 0x20),fVar19),4
                                  );
              fVar16 = (fVar80 - fVar22) *
                       (float)(-(uint)(1.1920929e-07 < ABS(fVar16)) & (uint)(fVar19 * (float)uVar30)
                              );
              auVar39._0_8_ =
                   CONCAT44(fStack_13c + (fVar56 - fStack_13c) * fVar16,
                            local_140 + (fVar51 - local_140) * fVar16);
              auVar39._8_4_ = fStack_138 + (fVar57 - fStack_138) * fVar16;
              auVar39._12_4_ = fStack_134 + (local_130[0]._12_4_ - fStack_134) * fVar16;
              auVar31 = NEON_ext(auVar39,auVar39,8,1);
              lVar12 = 1;
              auVar1._8_4_ = auVar31._0_4_;
              auVar1._0_8_ = auVar39._0_8_;
            }
            else {
              auVar105._0_4_ = -fVar16 * auVar69._0_4_;
              auVar105._4_4_ = -fVar19 * auVar69._4_4_;
              auVar105._8_4_ = -fVar81 * auVar69._8_4_;
              auVar105._12_4_ = auVar69._12_4_ * 0.0;
              auVar31 = NEON_ext(auVar105,auVar105,8,1);
              fVar51 = auVar31._0_4_ + auVar31._4_4_;
              fVar15 = auVar105._0_4_ + auVar105._4_4_ + fVar51;
              bVar5 = (fVar58 <= 0.0 && 0.0 <= fVar15) && fVar23 <= 0.0;
              auVar96._0_4_ = -(uint)bVar5;
              auVar96._4_4_ = -(uint)bVar5;
              auVar96._8_4_ = -(uint)bVar5;
              auVar96._12_4_ = -(uint)bVar5;
              NEON_ext(auVar96,auVar96,8,1);
              if (CONCAT13((char)auVar96._12_4_,
                           CONCAT12((char)auVar96._8_4_,
                                    CONCAT11((char)auVar96._4_4_,(char)auVar96._0_4_))) != -1) {
                bVar5 = fVar17 <= 0.0 && fVar15 <= 0.0;
                auVar70._0_4_ = -(uint)bVar5;
                auVar70._4_4_ = -(uint)bVar5;
                auVar70._8_4_ = -(uint)bVar5;
                auVar70._12_4_ = -(uint)bVar5;
                NEON_ext(auVar70,auVar70,8,1);
                pauVar10 = (undefined1 (*) [16])local_150;
                if (CONCAT13((char)auVar70._12_4_,
                             CONCAT12((char)auVar70._8_4_,
                                      CONCAT11((char)auVar70._4_4_,(char)auVar70._0_4_))) == -1) {
                  lVar12 = 0;
                  local_84 = 1;
                }
                else {
                  bVar5 = 0.0 <= fVar22 && fVar80 <= fVar22;
                  auVar35._0_4_ = -(uint)bVar5;
                  auVar35._4_4_ = -(uint)bVar5;
                  auVar35._8_4_ = -(uint)bVar5;
                  auVar35._12_4_ = -(uint)bVar5;
                  NEON_ext(auVar35,auVar35,8,1);
                  iVar29 = CONCAT13((char)auVar35._12_4_,
                                    CONCAT12((char)auVar35._8_4_,
                                             CONCAT11((char)auVar35._4_4_,(char)auVar35._0_4_)));
                  auVar36._0_4_ = -(uint)(iVar29 == -1);
                  auVar36._4_4_ = auVar36._0_4_;
                  auVar36._8_4_ = auVar36._0_4_;
                  auVar36._12_4_ = auVar36._0_4_;
                  local_84 = 1;
                  lVar12 = 1;
                  if (iVar29 != -1) {
                    lVar12 = 2;
                  }
                  pauVar10 = pauVar10 + lVar12;
                  auVar32 = local_130[0] ^ (local_130[0] ^ auVar3) & auVar36;
                }
                goto LAB_00258fb4;
              }
              uVar30 = CONCAT44((auVar105._0_4_ + auVar105._4_4_ + fVar51) - fVar25,fVar15 - fVar23)
              ;
              uVar75 = NEON_frecpe(uVar30,4);
              uVar82 = NEON_frecps(uVar30,uVar75,4);
              fVar58 = (float)uVar75 * (float)uVar82;
              fVar51 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
              uVar75 = NEON_frecps(uVar30,CONCAT44(fVar51,fVar58),4);
              fVar58 = fVar58 * (float)uVar75;
              fVar51 = fVar51 * (float)((ulong)uVar75 >> 0x20);
              uVar75 = NEON_frecps(uVar30,CONCAT44(fVar51,fVar58),4);
              fVar58 = fVar58 * (float)uVar75;
              fVar51 = fVar51 * (float)((ulong)uVar75 >> 0x20);
              uVar75 = NEON_frecps(uVar30,CONCAT44(fVar51,fVar58),4);
              fVar58 = fVar58 * (float)uVar75;
              uVar30 = NEON_frecps(uVar30,CONCAT44(fVar51 * (float)((ulong)uVar75 >> 0x20),fVar58),4
                                  );
              fVar15 = fVar15 * (float)(-(uint)(1.1920929e-07 < ABS(fVar15 - fVar23)) &
                                       (uint)(fVar58 * (float)uVar30));
              lVar12 = 0;
              auVar40._0_8_ =
                   CONCAT44(fVar19 + auVar69._4_4_ * fVar15,fVar16 + auVar69._0_4_ * fVar15);
              auVar40._8_4_ = fVar81 + auVar69._8_4_ * fVar15;
              auVar40._12_4_ = fVar84 + auVar69._12_4_ * fVar15;
              auVar31 = NEON_ext(auVar40,auVar40,8,1);
              pauVar11 = (undefined1 (*) [16])local_150;
              auVar1._8_4_ = auVar31._0_4_;
              auVar1._0_8_ = auVar40._0_8_;
            }
            auVar32._12_4_ = 0;
            auVar32._0_12_ = auVar1;
            local_84 = 2;
            lVar8 = 2;
          }
          local_150[1] = *(undefined8 *)((long)*pauVar11 + 8);
          local_150[0] = *(undefined8 *)*pauVar11;
          fStack_138 = (float)*(undefined8 *)((long)*pauVar6 + 8);
          fStack_134 = (float)((ulong)*(undefined8 *)((long)*pauVar6 + 8) >> 0x20);
          local_140 = (float)*(undefined8 *)*pauVar6;
          fStack_13c = (float)((ulong)*(undefined8 *)*pauVar6 >> 0x20);
          local_110[0] = local_110[lVar12 * 2];
          local_110[1] = local_110[lVar12 * 2 + 1];
          uStack_c8 = (&uStack_c8)[lVar12 * 2];
          local_d0 = local_110[lVar12 * 2 + 8];
          uStack_b8 = (&uStack_c8)[lVar8 * 2];
          uStack_c0 = local_110[lVar8 * 2 + 8];
          local_110[2] = local_110[lVar8 * 2];
          local_110[3] = local_110[lVar8 * 2 + 1];
        }
      }
    }
    else {
      auVar52._0_4_ = auVar76._0_4_ * auVar76._0_4_;
      auVar52._4_4_ = auVar76._4_4_ * auVar76._4_4_;
      auVar52._8_4_ = auVar76._8_4_ * auVar76._8_4_;
      auVar52._12_4_ = auVar76._12_4_ * auVar76._12_4_;
      auVar31 = NEON_ext(auVar52,auVar52,8,1);
      fVar58 = auVar31._0_4_ + auVar31._4_4_;
      fVar15 = auVar52._0_4_ + auVar52._4_4_ + fVar58;
      uVar30 = CONCAT44(auVar52._0_4_ + auVar52._4_4_ + fVar58,fVar15);
      bVar5 = fVar15 <= 1.1920929e-07;
      auVar60._0_4_ = -(uint)bVar5;
      auVar60._4_4_ = -(uint)bVar5;
      auVar60._8_4_ = -(uint)bVar5;
      auVar60._12_4_ = -(uint)bVar5;
      NEON_ext(auVar60,auVar60,8,1);
      local_84 = 2;
      if (CONCAT13((char)auVar60._12_4_,
                   CONCAT12((char)auVar60._8_4_,CONCAT11((char)auVar60._4_4_,(char)auVar60._0_4_)))
          == -1) {
        local_84 = 1;
      }
      else {
        auVar61._0_4_ = -fVar16 * auVar76._0_4_;
        auVar61._4_4_ = -fVar19 * auVar76._4_4_;
        auVar61._8_4_ = -fVar81 * auVar76._8_4_;
        auVar61._12_4_ = auVar76._12_4_ * 0.0;
        auVar31 = NEON_ext(auVar61,auVar61,8,1);
        fVar15 = auVar31._0_4_ + auVar31._4_4_;
        uVar75 = NEON_frecpe(uVar30,4);
        uVar82 = NEON_frecps(uVar30,uVar75,4);
        fVar58 = (float)uVar75 * (float)uVar82;
        fVar51 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
        uVar75 = NEON_frecps(uVar30,CONCAT44(fVar51,fVar58),4);
        fVar58 = fVar58 * (float)uVar75;
        fVar51 = fVar51 * (float)((ulong)uVar75 >> 0x20);
        uVar75 = NEON_frecps(uVar30,CONCAT44(fVar51,fVar58),4);
        fVar58 = fVar58 * (float)uVar75;
        fVar51 = fVar51 * (float)((ulong)uVar75 >> 0x20);
        uVar75 = NEON_frecps(uVar30,CONCAT44(fVar51,fVar58),4);
        fVar58 = fVar58 * (float)uVar75;
        fVar51 = fVar51 * (float)((ulong)uVar75 >> 0x20);
        uVar30 = NEON_frecps(uVar30,CONCAT44(fVar51,fVar58),4);
        uVar75 = NEON_fmov(0x3f800000,4);
        uVar30 = NEON_fmin(CONCAT44((auVar61._0_4_ + auVar61._4_4_ + fVar15) *
                                    fVar51 * (float)((ulong)uVar30 >> 0x20),
                                    (auVar61._0_4_ + auVar61._4_4_ + fVar15) *
                                    fVar58 * (float)uVar30),uVar75,4);
        uVar30 = NEON_fmax(uVar30,0,4);
        fVar15 = (float)uVar30;
        auVar34._0_8_ = CONCAT44(fVar19 + auVar76._4_4_ * fVar15,fVar16 + auVar76._0_4_ * fVar15);
        auVar34._8_4_ = fVar81 + auVar76._8_4_ * fVar15;
        auVar34._12_4_ = fVar84 + auVar76._12_4_ * fVar15;
        auVar31 = NEON_ext(auVar34,auVar34,8,1);
        auVar32._8_4_ = (float)auVar31._0_4_;
        auVar32._0_8_ = auVar34._0_8_;
        auVar32._12_4_ = 0;
      }
    }
    break;
  case 3:
    auVar32 = FUN_00237120(local_150,&local_d0,local_110,&local_84);
    break;
  default:
    auVar32 = *(undefined1 (*) [16])(local_150 + uVar13 * 2);
  }
  fStack_158 = auVar32._8_4_;
  fStack_154 = auVar32._12_4_;
  local_160 = auVar32._0_4_;
  fStack_15c = auVar32._4_4_;
  auVar41._0_4_ = local_160 * local_160;
  auVar41._4_4_ = fStack_15c * fStack_15c;
  auVar41._8_4_ = fStack_158 * fStack_158;
  auVar41._12_4_ = fStack_154 * fStack_154;
  auVar31 = NEON_ext(auVar41,auVar41,8,1);
  fVar16 = auVar41._0_4_ + auVar41._4_4_ + auVar31._0_4_ + auVar31._4_4_;
  bVar5 = fVar28 < fVar16;
  uVar30 = CONCAT26(-(ushort)bVar5,CONCAT24(-(ushort)bVar5,CONCAT22(-(ushort)bVar5,-(ushort)bVar5)))
  ;
LAB_00259104:
  uVar20 = (ushort)((ulong)uVar30 >> 0x10);
  uVar21 = (ushort)((ulong)uVar30 >> 0x20);
  uVar27 = (ushort)((ulong)uVar30 >> 0x30);
  auVar53._0_4_ = (int)((uint)(ushort)uVar30 << 0x1f) >> 0x1f;
  auVar53._4_4_ = (int)((uint)uVar20 << 0x1f) >> 0x1f;
  auVar53._8_4_ = (int)((uint)uVar21 << 0x1f) >> 0x1f;
  auVar53._12_4_ = (int)((uint)uVar27 << 0x1f) >> 0x1f;
  NEON_ext(auVar53,auVar53,8,1);
  if (CONCAT13((char)((short)(uVar27 << 0xf) >> 0xf),
               CONCAT12((char)((short)(uVar21 << 0xf) >> 0xf),
                        CONCAT11((char)((short)(uVar20 << 0xf) >> 0xf),
                                 (char)((short)((ushort)uVar30 << 0xf) >> 0xf)))) == -1) {
    auVar45._4_4_ = fStack_15c;
    auVar45._0_4_ = local_160;
    auVar45._8_4_ = fStack_158;
    auVar45._12_4_ = fStack_154;
    do {
      local_1fa0 = CONCAT44(-auVar45._4_4_,-auVar45._0_4_);
      puStack_1f98 = (undefined1 *)(ulong)(uint)-auVar45._8_4_;
      auVar31 = (**(code **)(*param_1 + 8))(param_1,&local_1fa0);
      fStack_1fa8 = auVar31._8_4_;
      fStack_1fa4 = auVar31._12_4_;
      local_1fb0 = auVar31._0_4_;
      fStack_1fac = auVar31._4_4_;
      auVar31 = (**(code **)(*param_2 + 8))(param_2,&local_160);
      uVar13 = (ulong)local_84;
      *(float *)(&uStack_c8 + uVar13 * 2) = fStack_1fa8;
      *(float *)((long)&uStack_c8 + uVar13 * 0x10 + 4) = fStack_1fa4;
      *(float *)(local_110 + uVar13 * 2 + 8) = local_1fb0;
      *(float *)((long)local_110 + uVar13 * 0x10 + 0x44) = fStack_1fac;
      auVar45._0_8_ = CONCAT44(fStack_1fac - auVar31._4_4_,local_1fb0 - auVar31._0_4_);
      auVar45._8_4_ = fStack_1fa8 - auVar31._8_4_;
      auVar45._12_4_ = fStack_1fa4 - auVar31._12_4_;
      local_110[uVar13 * 2 + 1] = auVar31._8_8_;
      local_110[uVar13 * 2] = auVar31._0_8_;
      *(long *)(local_130[uVar13 - 2] + 8) = auVar45._8_8_;
      local_150[uVar13 * 2] = auVar45._0_8_;
      uVar50 = local_84 + 1;
      if (local_84 == 3) {
        local_84 = uVar50;
        auVar45 = FUN_00237120(local_150,&local_d0,local_110,&local_84);
      }
      else {
        fVar19 = (float)local_150[0];
        fVar81 = SUB84(local_150[0],4);
        fVar84 = (float)local_150[1];
        fVar15 = SUB84(local_150[1],4);
        if (local_84 == 2) {
          auVar45._8_8_ = local_150[1];
          auVar45._0_8_ = local_150[0];
          auVar4._4_4_ = fStack_13c;
          auVar4._0_4_ = local_140;
          auVar4._8_4_ = fStack_138;
          auVar4._12_4_ = fStack_134;
          auVar78._0_4_ = local_140 - fVar19;
          auVar78._4_4_ = fStack_13c - fVar81;
          auVar78._8_4_ = fStack_138 - fVar84;
          auVar78._12_4_ = fStack_134 - fVar15;
          fVar56 = local_130[0]._0_4_;
          auVar73._0_4_ = fVar56 - fVar19;
          fVar57 = local_130[0]._4_4_;
          auVar73._4_4_ = fVar57 - fVar81;
          fVar17 = local_130[0]._8_4_;
          auVar73._8_4_ = fVar17 - fVar84;
          auVar73._12_4_ = local_130[0]._12_4_ - fVar15;
          auVar31 = NEON_ext(auVar78,auVar78,8,1);
          auVar32 = NEON_ext(auVar73,auVar73,8,1);
          fVar85 = auVar78._0_4_ * auVar73._4_4_ - auVar78._4_4_ * auVar73._0_4_;
          uVar30 = NEON_ext(CONCAT44(auVar78._4_4_ * auVar73._8_4_ - auVar78._8_4_ * auVar73._4_4_,
                                     fVar85),
                            CONCAT44(auVar31._4_4_ * auVar73._4_4_ - auVar78._4_4_ * auVar32._4_4_,
                                     auVar31._0_4_ * auVar73._0_4_ - auVar78._0_4_ * auVar32._0_4_),
                            4,1);
          fVar22 = (float)uVar30;
          auVar86._0_4_ = fVar22 * fVar22;
          fVar80 = (float)((ulong)uVar30 >> 0x20);
          auVar86._4_4_ = fVar80 * fVar80;
          auVar86._8_4_ = fVar85 * fVar85;
          auVar86._12_4_ = 0;
          auVar31 = NEON_ext(auVar86,auVar86,8,1);
          fVar51 = auVar31._0_4_ + auVar31._4_4_;
          fVar58 = auVar86._0_4_ + auVar86._4_4_ + fVar51;
          uVar30 = CONCAT44(auVar86._0_4_ + auVar86._4_4_ + fVar51,fVar58);
          local_84 = 3;
          if (1.1920929e-07 < fVar58) {
            if (fVar58 != 0.0) {
              auVar31 = NEON_ext(auVar4,auVar4,8,1);
              auVar32 = NEON_ext(local_130[0],local_130[0],8,1);
              fVar106 = local_140 * fVar57 - fStack_13c * fVar56;
              auVar110 = NEON_ext(auVar45,auVar45,8,1);
              uVar82 = NEON_ext(CONCAT44(fStack_13c * fVar17 - fStack_138 * fVar57,fVar106),
                                CONCAT44(auVar31._4_4_ * fVar57 - fStack_13c * auVar32._4_4_,
                                         auVar31._0_4_ * fVar56 - local_140 * auVar32._0_4_),4,1);
              fVar58 = fVar81 * fVar56 - fVar19 * fVar57;
              uVar111 = NEON_ext(CONCAT44(fVar84 * fVar57 - fVar81 * fVar17,fVar58),
                                 CONCAT44(fVar81 * auVar32._4_4_ - auVar110._4_4_ * fVar57,
                                          fVar19 * auVar32._0_4_ - auVar110._0_4_ * fVar56),4,1);
              fVar51 = fVar19 * fStack_13c - fVar81 * local_140;
              uVar75 = NEON_ext(CONCAT44(fVar81 * fStack_138 - fVar84 * fStack_13c,fVar51),
                                CONCAT44(auVar110._4_4_ * fStack_13c - fVar81 * auVar31._4_4_,
                                         auVar110._0_4_ * local_140 - fVar19 * auVar31._0_4_),4,1);
              auVar92._0_4_ = (float)uVar82 * fVar22;
              auVar92._4_4_ = (float)((ulong)uVar82 >> 0x20) * fVar80;
              auVar92._8_4_ = fVar106 * fVar85;
              auVar92._12_4_ = 0;
              auVar31 = NEON_ext(auVar92,auVar92,8,1);
              auVar97._0_4_ = (float)uVar111 * fVar22;
              auVar97._4_4_ = (float)((ulong)uVar111 >> 0x20) * fVar80;
              auVar97._8_4_ = fVar58 * fVar85;
              auVar97._12_4_ = 0;
              auVar32 = NEON_ext(auVar97,auVar97,8,1);
              fVar58 = auVar92._0_4_ + auVar92._4_4_ + auVar31._0_4_ + auVar31._4_4_;
              auVar102._0_4_ = (float)uVar75 * fVar22;
              auVar102._4_4_ = (float)((ulong)uVar75 >> 0x20) * fVar80;
              auVar102._8_4_ = fVar51 * fVar85;
              auVar102._12_4_ = 0;
              fVar51 = auVar97._0_4_ + auVar97._4_4_ + auVar32._0_4_ + auVar32._4_4_;
              auVar31 = NEON_ext(auVar102,auVar102,8,1);
              fVar106 = auVar102._0_4_ + auVar102._4_4_ + auVar31._0_4_ + auVar31._4_4_;
              bVar5 = (0.0 <= fVar58 && 0.0 <= fVar51) && 0.0 <= fVar106;
              auVar103._0_4_ = -(uint)bVar5;
              auVar103._4_4_ = -(uint)bVar5;
              auVar103._8_4_ = -(uint)bVar5;
              auVar103._12_4_ = -(uint)bVar5;
              NEON_ext(auVar103,auVar103,8,1);
              if (CONCAT13((char)auVar103._12_4_,
                           CONCAT12((char)auVar103._8_4_,
                                    CONCAT11((char)auVar103._4_4_,(char)auVar103._0_4_))) == -1) {
                auVar46._0_4_ = fVar19 * fVar22;
                auVar46._4_4_ = fVar81 * fVar80;
                auVar46._8_4_ = fVar84 * fVar85;
                auVar46._12_4_ = fVar15 * 0.0;
                auVar31 = NEON_ext(auVar46,auVar46,8,1);
                uVar75 = NEON_frecpe(uVar30,4);
                uVar82 = NEON_frecps(uVar30,uVar75,4);
                fVar19 = (float)uVar75 * (float)uVar82;
                fVar81 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
                uVar75 = NEON_frecps(uVar30,CONCAT44(fVar81,fVar19),4);
                fVar19 = fVar19 * (float)uVar75;
                fVar81 = fVar81 * (float)((ulong)uVar75 >> 0x20);
                uVar75 = NEON_frecps(uVar30,CONCAT44(fVar81,fVar19),4);
                fVar19 = fVar19 * (float)uVar75;
                fVar81 = fVar81 * (float)((ulong)uVar75 >> 0x20);
                uVar75 = NEON_frecps(uVar30,CONCAT44(fVar81,fVar19),4);
                fVar19 = fVar19 * (float)uVar75;
                uVar30 = NEON_frecps(uVar30,CONCAT44(fVar81 * (float)((ulong)uVar75 >> 0x20),fVar19)
                                     ,4);
                fVar19 = (auVar46._0_4_ + auVar46._4_4_ + auVar31._0_4_ + auVar31._4_4_) *
                         fVar19 * (float)uVar30;
                auVar45._0_4_ = fVar22 * fVar19;
                auVar45._4_4_ = fVar80 * fVar19;
                auVar45._8_4_ = fVar85 * fVar19;
                auVar45._12_4_ = 0.0;
              }
              else {
                auVar83._0_4_ = -fVar19 * auVar78._0_4_;
                auVar83._4_4_ = -fVar81 * auVar78._4_4_;
                auVar83._8_4_ = -fVar84 * auVar78._8_4_;
                auVar83._12_4_ = auVar78._12_4_ * 0.0;
                auVar31 = NEON_ext(auVar83,auVar83,8,1);
                fVar85 = auVar31._0_4_ + auVar31._4_4_;
                auVar87._0_4_ = -local_140 * auVar78._0_4_;
                auVar87._4_4_ = -fStack_13c * auVar78._4_4_;
                auVar87._8_4_ = -fStack_138 * auVar78._8_4_;
                auVar87._12_4_ = auVar78._12_4_ * 0.0;
                auVar31 = NEON_ext(auVar87,auVar87,8,1);
                fVar23 = auVar31._0_4_ + auVar31._4_4_;
                fVar22 = auVar83._0_4_ + auVar83._4_4_ + fVar85;
                fVar80 = auVar87._0_4_ + auVar87._4_4_ + fVar23;
                fVar23 = auVar87._0_4_ + auVar87._4_4_ + fVar23;
                bVar5 = (0.0 <= fVar22 && fVar106 <= 0.0) && fVar80 <= 0.0;
                auVar98._0_4_ = -(uint)bVar5;
                auVar98._4_4_ = -(uint)bVar5;
                auVar98._8_4_ = -(uint)bVar5;
                auVar98._12_4_ = -(uint)bVar5;
                NEON_ext(auVar98,auVar98,8,1);
                if (CONCAT13((char)auVar98._12_4_,
                             CONCAT12((char)auVar98._8_4_,
                                      CONCAT11((char)auVar98._4_4_,(char)auVar98._0_4_))) == -1) {
                  uVar30 = CONCAT44((auVar83._0_4_ + auVar83._4_4_ + fVar85) - fVar23,
                                    fVar22 - fVar80);
                  uVar75 = NEON_frecpe(uVar30,4);
                  uVar82 = NEON_frecps(uVar30,uVar75,4);
                  fVar58 = (float)uVar75 * (float)uVar82;
                  fVar51 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
                  uVar75 = NEON_frecps(uVar30,CONCAT44(fVar51,fVar58),4);
                  fVar58 = fVar58 * (float)uVar75;
                  fVar51 = fVar51 * (float)((ulong)uVar75 >> 0x20);
                  uVar75 = NEON_frecps(uVar30,CONCAT44(fVar51,fVar58),4);
                  fVar58 = fVar58 * (float)uVar75;
                  fVar51 = fVar51 * (float)((ulong)uVar75 >> 0x20);
                  uVar75 = NEON_frecps(uVar30,CONCAT44(fVar51,fVar58),4);
                  fVar58 = fVar58 * (float)uVar75;
                  uVar30 = NEON_frecps(uVar30,CONCAT44(fVar51 * (float)((ulong)uVar75 >> 0x20),
                                                       fVar58),4);
                  fVar22 = fVar22 * (float)(-(uint)(1.1920929e-07 < ABS(fVar22 - fVar80)) &
                                           (uint)(fVar58 * (float)uVar30));
                  puVar7 = local_110;
                  auVar47._0_8_ =
                       CONCAT44(fVar81 + auVar78._4_4_ * fVar22,fVar19 + auVar78._0_4_ * fVar22);
                  auVar47._8_4_ = fVar84 + auVar78._8_4_ * fVar22;
                  auVar47._12_4_ = fVar15 + auVar78._12_4_ * fVar22;
                  auVar31 = NEON_ext(auVar47,auVar47,8,1);
                  puVar9 = &local_d0;
                  pauVar11 = (undefined1 (*) [16])local_150;
                  local_84 = 2;
                  auVar45._8_4_ = (float)auVar31._0_4_;
                  auVar45._0_8_ = auVar47._0_8_;
                  auVar45._12_4_ = 0.0;
LAB_00259878:
                  lVar12 = 1;
                  pauVar10 = (undefined1 (*) [16])&local_140;
                }
                else {
                  auVar99._0_4_ = -local_140 * auVar73._0_4_;
                  auVar99._4_4_ = -fStack_13c * auVar73._4_4_;
                  auVar99._8_4_ = -fStack_138 * auVar73._8_4_;
                  auVar99._12_4_ = auVar73._12_4_ * 0.0;
                  auVar31 = NEON_ext(auVar99,auVar99,8,1);
                  fVar24 = auVar31._0_4_ + auVar31._4_4_;
                  auVar79._0_4_ = auVar78._0_4_ * -fVar56;
                  auVar79._4_4_ = auVar78._4_4_ * -fVar57;
                  auVar79._8_4_ = auVar78._8_4_ * -fVar17;
                  auVar79._12_4_ = auVar78._12_4_ * 0.0;
                  auVar107._0_4_ = auVar73._0_4_ * -fVar56;
                  auVar107._4_4_ = auVar73._4_4_ * -fVar57;
                  auVar107._8_4_ = auVar73._8_4_ * -fVar17;
                  auVar107._12_4_ = auVar73._12_4_ * 0.0;
                  fVar85 = auVar99._0_4_ + auVar99._4_4_ + fVar24;
                  auVar31 = NEON_ext(auVar79,auVar79,8,1);
                  fVar25 = auVar31._0_4_ + auVar31._4_4_;
                  fVar106 = auVar79._0_4_ + auVar79._4_4_ + fVar25;
                  auVar31 = NEON_ext(auVar107,auVar107,8,1);
                  fVar26 = auVar31._0_4_ + auVar31._4_4_;
                  fVar18 = auVar107._0_4_ + auVar107._4_4_ + fVar26;
                  fVar26 = auVar107._0_4_ + auVar107._4_4_ + fVar26;
                  bVar5 = (fVar80 <= fVar85 && fVar58 <= 0.0) && fVar18 <= fVar106;
                  auVar93._0_4_ = -(uint)bVar5;
                  auVar93._4_4_ = -(uint)bVar5;
                  auVar93._8_4_ = -(uint)bVar5;
                  auVar93._12_4_ = -(uint)bVar5;
                  NEON_ext(auVar93,auVar93,8,1);
                  if (CONCAT13((char)auVar93._12_4_,
                               CONCAT12((char)auVar93._8_4_,
                                        CONCAT11((char)auVar93._4_4_,(char)auVar93._0_4_))) == -1) {
                    fVar19 = (fVar85 - fVar80) + (fVar106 - fVar18);
                    uVar30 = CONCAT44(((auVar99._0_4_ + auVar99._4_4_ + fVar24) - fVar23) +
                                      ((auVar79._0_4_ + auVar79._4_4_ + fVar25) - fVar26),fVar19);
                    uVar75 = NEON_frecpe(uVar30,4);
                    uVar82 = NEON_frecps(uVar30,uVar75,4);
                    fVar81 = (float)uVar75 * (float)uVar82;
                    fVar84 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
                    uVar75 = NEON_frecps(uVar30,CONCAT44(fVar84,fVar81),4);
                    fVar81 = fVar81 * (float)uVar75;
                    fVar84 = fVar84 * (float)((ulong)uVar75 >> 0x20);
                    uVar75 = NEON_frecps(uVar30,CONCAT44(fVar84,fVar81),4);
                    fVar81 = fVar81 * (float)uVar75;
                    fVar84 = fVar84 * (float)((ulong)uVar75 >> 0x20);
                    uVar75 = NEON_frecps(uVar30,CONCAT44(fVar84,fVar81),4);
                    fVar81 = fVar81 * (float)uVar75;
                    uVar30 = NEON_frecps(uVar30,CONCAT44(fVar84 * (float)((ulong)uVar75 >> 0x20),
                                                         fVar81),4);
                    fVar19 = (fVar85 - fVar80) *
                             (float)(-(uint)(1.1920929e-07 < ABS(fVar19)) &
                                    (uint)(fVar81 * (float)uVar30));
                    auVar48._0_8_ =
                         CONCAT44(fStack_13c + (fVar57 - fStack_13c) * fVar19,
                                  local_140 + (fVar56 - local_140) * fVar19);
                    auVar48._8_4_ = fStack_138 + (fVar17 - fStack_138) * fVar19;
                    auVar48._12_4_ = fStack_134 + (local_130[0]._12_4_ - fStack_134) * fVar19;
                    auVar31 = NEON_ext(auVar48,auVar48,8,1);
                    auVar2._8_4_ = auVar31._0_4_;
                    auVar2._0_8_ = auVar48._0_8_;
                    puVar7 = local_110 + 2;
                    puVar9 = &uStack_c0;
                    pauVar11 = (undefined1 (*) [16])&local_140;
                  }
                  else {
                    auVar94._0_4_ = -fVar19 * auVar73._0_4_;
                    auVar94._4_4_ = -fVar81 * auVar73._4_4_;
                    auVar94._8_4_ = -fVar84 * auVar73._8_4_;
                    auVar94._12_4_ = auVar73._12_4_ * 0.0;
                    auVar31 = NEON_ext(auVar94,auVar94,8,1);
                    fVar56 = auVar31._0_4_ + auVar31._4_4_;
                    fVar58 = auVar94._0_4_ + auVar94._4_4_ + fVar56;
                    bVar5 = (fVar51 <= 0.0 && 0.0 <= fVar58) && fVar18 <= 0.0;
                    auVar90._0_4_ = -(uint)bVar5;
                    auVar90._4_4_ = -(uint)bVar5;
                    auVar90._8_4_ = -(uint)bVar5;
                    auVar90._12_4_ = -(uint)bVar5;
                    NEON_ext(auVar90,auVar90,8,1);
                    if (CONCAT13((char)auVar90._12_4_,
                                 CONCAT12((char)auVar90._8_4_,
                                          CONCAT11((char)auVar90._4_4_,(char)auVar90._0_4_))) != -1)
                    {
                      bVar5 = fVar22 <= 0.0 && fVar58 <= 0.0;
                      auVar74._0_4_ = -(uint)bVar5;
                      auVar74._4_4_ = -(uint)bVar5;
                      auVar74._8_4_ = -(uint)bVar5;
                      auVar74._12_4_ = -(uint)bVar5;
                      NEON_ext(auVar74,auVar74,8,1);
                      if (CONCAT13((char)auVar74._12_4_,
                                   CONCAT12((char)auVar74._8_4_,
                                            CONCAT11((char)auVar74._4_4_,(char)auVar74._0_4_))) ==
                          -1) {
                        puVar7 = local_110;
                        puVar9 = &local_d0;
                        pauVar11 = (undefined1 (*) [16])local_150;
                      }
                      else {
                        bVar5 = 0.0 <= fVar80 && fVar85 <= fVar80;
                        auVar43._0_4_ = -(uint)bVar5;
                        auVar43._4_4_ = -(uint)bVar5;
                        auVar43._8_4_ = -(uint)bVar5;
                        auVar43._12_4_ = -(uint)bVar5;
                        NEON_ext(auVar43,auVar43,8,1);
                        iVar29 = CONCAT13((char)auVar43._12_4_,
                                          CONCAT12((char)auVar43._8_4_,
                                                   CONCAT11((char)auVar43._4_4_,(char)auVar43._0_4_)
                                                  ));
                        iVar66 = -(uint)(iVar29 == -1);
                        auVar44._4_4_ = iVar66;
                        auVar44._0_4_ = iVar66;
                        auVar44._8_4_ = iVar66;
                        auVar44._12_4_ = iVar66;
                        auVar45 = local_130[0] ^ (local_130[0] ^ auVar4) & auVar44;
                        lVar12 = 0x10;
                        if (iVar29 != -1) {
                          lVar12 = 0x20;
                        }
                        pauVar11 = (undefined1 (*) [16])((long)local_150 + lVar12);
                        puVar9 = (undefined8 *)((long)local_110 + lVar12 + 0x40);
                        puVar7 = (undefined8 *)((long)local_110 + lVar12);
                      }
                      local_84 = 1;
                      goto LAB_00259878;
                    }
                    uVar30 = CONCAT44((auVar94._0_4_ + auVar94._4_4_ + fVar56) - fVar26,
                                      fVar58 - fVar18);
                    uVar75 = NEON_frecpe(uVar30,4);
                    uVar82 = NEON_frecps(uVar30,uVar75,4);
                    fVar51 = (float)uVar75 * (float)uVar82;
                    fVar56 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
                    uVar75 = NEON_frecps(uVar30,CONCAT44(fVar56,fVar51),4);
                    fVar51 = fVar51 * (float)uVar75;
                    fVar56 = fVar56 * (float)((ulong)uVar75 >> 0x20);
                    uVar75 = NEON_frecps(uVar30,CONCAT44(fVar56,fVar51),4);
                    fVar51 = fVar51 * (float)uVar75;
                    fVar56 = fVar56 * (float)((ulong)uVar75 >> 0x20);
                    uVar75 = NEON_frecps(uVar30,CONCAT44(fVar56,fVar51),4);
                    fVar51 = fVar51 * (float)uVar75;
                    uVar30 = NEON_frecps(uVar30,CONCAT44(fVar56 * (float)((ulong)uVar75 >> 0x20),
                                                         fVar51),4);
                    fVar58 = fVar58 * (float)(-(uint)(1.1920929e-07 < ABS(fVar58 - fVar18)) &
                                             (uint)(fVar51 * (float)uVar30));
                    auVar49._0_8_ =
                         CONCAT44(fVar81 + auVar73._4_4_ * fVar58,fVar19 + auVar73._0_4_ * fVar58);
                    auVar49._8_4_ = fVar84 + auVar73._8_4_ * fVar58;
                    auVar49._12_4_ = fVar15 + auVar73._12_4_ * fVar58;
                    auVar31 = NEON_ext(auVar49,auVar49,8,1);
                    auVar2._8_4_ = auVar31._0_4_;
                    auVar2._0_8_ = auVar49._0_8_;
                    puVar7 = local_110;
                    puVar9 = &local_d0;
                    pauVar11 = (undefined1 (*) [16])local_150;
                  }
                  auVar45._12_4_ = 0.0;
                  auVar45._0_12_ = auVar2;
                  local_84 = 2;
                  lVar12 = 2;
                  pauVar10 = local_130;
                }
                fStack_138 = (float)*(undefined8 *)((long)*pauVar10 + 8);
                fStack_134 = (float)((ulong)*(undefined8 *)((long)*pauVar10 + 8) >> 0x20);
                local_140 = (float)*(undefined8 *)*pauVar10;
                fStack_13c = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
                local_110[0] = *puVar7;
                local_110[1] = puVar7[1];
                local_150[1] = *(undefined8 *)((long)*pauVar11 + 8);
                local_150[0] = *(undefined8 *)*pauVar11;
                uStack_c8 = puVar9[1];
                local_d0 = *puVar9;
                uStack_b8 = (&uStack_c8)[lVar12 * 2];
                uStack_c0 = local_110[lVar12 * 2 + 8];
                local_110[2] = local_110[lVar12 * 2];
                local_110[3] = local_110[lVar12 * 2 + 1];
              }
            }
          }
          else {
            auVar54._0_4_ = auVar78._0_4_ * auVar78._0_4_;
            auVar54._4_4_ = auVar78._4_4_ * auVar78._4_4_;
            auVar54._8_4_ = auVar78._8_4_ * auVar78._8_4_;
            auVar54._12_4_ = auVar78._12_4_ * auVar78._12_4_;
            auVar31 = NEON_ext(auVar54,auVar54,8,1);
            fVar51 = auVar31._0_4_ + auVar31._4_4_;
            fVar58 = auVar54._0_4_ + auVar54._4_4_ + fVar51;
            uVar30 = CONCAT44(auVar54._0_4_ + auVar54._4_4_ + fVar51,fVar58);
            bVar5 = fVar58 <= 1.1920929e-07;
            auVar63._0_4_ = -(uint)bVar5;
            auVar63._4_4_ = -(uint)bVar5;
            auVar63._8_4_ = -(uint)bVar5;
            auVar63._12_4_ = -(uint)bVar5;
            NEON_ext(auVar63,auVar63,8,1);
            local_84 = 2;
            if (CONCAT13((char)auVar63._12_4_,
                         CONCAT12((char)auVar63._8_4_,
                                  CONCAT11((char)auVar63._4_4_,(char)auVar63._0_4_))) != -1) {
              auVar64._0_4_ = -fVar19 * auVar78._0_4_;
              auVar64._4_4_ = -fVar81 * auVar78._4_4_;
              auVar64._8_4_ = -fVar84 * auVar78._8_4_;
              auVar64._12_4_ = auVar78._12_4_ * 0.0;
              auVar31 = NEON_ext(auVar64,auVar64,8,1);
              fVar58 = auVar31._0_4_ + auVar31._4_4_;
              uVar75 = NEON_frecpe(uVar30,4);
              uVar82 = NEON_frecps(uVar30,uVar75,4);
              fVar51 = (float)uVar75 * (float)uVar82;
              fVar56 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
              uVar75 = NEON_frecps(uVar30,CONCAT44(fVar56,fVar51),4);
              fVar51 = fVar51 * (float)uVar75;
              fVar56 = fVar56 * (float)((ulong)uVar75 >> 0x20);
              uVar75 = NEON_frecps(uVar30,CONCAT44(fVar56,fVar51),4);
              fVar51 = fVar51 * (float)uVar75;
              fVar56 = fVar56 * (float)((ulong)uVar75 >> 0x20);
              uVar75 = NEON_frecps(uVar30,CONCAT44(fVar56,fVar51),4);
              fVar51 = fVar51 * (float)uVar75;
              fVar56 = fVar56 * (float)((ulong)uVar75 >> 0x20);
              uVar30 = NEON_frecps(uVar30,CONCAT44(fVar56,fVar51),4);
              uVar75 = NEON_fmov(0x3f800000,4);
              uVar30 = NEON_fmin(CONCAT44((auVar64._0_4_ + auVar64._4_4_ + fVar58) *
                                          fVar56 * (float)((ulong)uVar30 >> 0x20),
                                          (auVar64._0_4_ + auVar64._4_4_ + fVar58) *
                                          fVar51 * (float)uVar30),uVar75,4);
              uVar30 = NEON_fmax(uVar30,0,4);
              fVar58 = (float)uVar30;
              fVar51 = auVar78._0_4_ * fVar58;
              fVar56 = auVar78._4_4_ * fVar58;
              fVar57 = auVar78._8_4_ * fVar58;
              fVar58 = auVar78._12_4_ * fVar58;
              goto LAB_002593d0;
            }
LAB_00259408:
            auVar45._8_8_ = local_150[1];
            auVar45._0_8_ = local_150[0];
            local_84 = 1;
          }
        }
        else {
          bVar5 = local_84 == 1;
          local_84 = uVar50;
          if (bVar5) {
            fVar51 = local_140 - fVar19;
            fVar56 = fStack_13c - fVar81;
            fVar57 = fStack_138 - fVar84;
            fVar58 = fStack_134 - fVar15;
            auVar62._0_4_ = fVar51 * fVar51;
            auVar62._4_4_ = fVar56 * fVar56;
            auVar62._8_4_ = fVar57 * fVar57;
            auVar62._12_4_ = fVar58 * fVar58;
            auVar31 = NEON_ext(auVar62,auVar62,8,1);
            fVar22 = auVar31._0_4_ + auVar31._4_4_;
            fVar17 = auVar62._0_4_ + auVar62._4_4_ + fVar22;
            uVar30 = CONCAT44(auVar62._0_4_ + auVar62._4_4_ + fVar22,fVar17);
            bVar5 = fVar17 <= 1.1920929e-07;
            auVar71._0_4_ = -(uint)bVar5;
            auVar71._4_4_ = -(uint)bVar5;
            auVar71._8_4_ = -(uint)bVar5;
            auVar71._12_4_ = -(uint)bVar5;
            NEON_ext(auVar71,auVar71,8,1);
            if (CONCAT13((char)auVar71._12_4_,
                         CONCAT12((char)auVar71._8_4_,
                                  CONCAT11((char)auVar71._4_4_,(char)auVar71._0_4_))) == -1)
            goto LAB_00259408;
            auVar72._0_4_ = -fVar19 * fVar51;
            auVar72._4_4_ = -fVar81 * fVar56;
            auVar72._8_4_ = -fVar84 * fVar57;
            auVar72._12_4_ = fVar58 * 0.0;
            auVar31 = NEON_ext(auVar72,auVar72,8,1);
            fVar17 = auVar31._0_4_ + auVar31._4_4_;
            uVar75 = NEON_frecpe(uVar30,4);
            uVar82 = NEON_frecps(uVar30,uVar75,4);
            fVar22 = (float)uVar75 * (float)uVar82;
            fVar80 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
            uVar75 = NEON_frecps(uVar30,CONCAT44(fVar80,fVar22),4);
            fVar22 = fVar22 * (float)uVar75;
            fVar80 = fVar80 * (float)((ulong)uVar75 >> 0x20);
            uVar75 = NEON_frecps(uVar30,CONCAT44(fVar80,fVar22),4);
            fVar22 = fVar22 * (float)uVar75;
            fVar80 = fVar80 * (float)((ulong)uVar75 >> 0x20);
            uVar75 = NEON_frecps(uVar30,CONCAT44(fVar80,fVar22),4);
            fVar22 = fVar22 * (float)uVar75;
            fVar80 = fVar80 * (float)((ulong)uVar75 >> 0x20);
            uVar30 = NEON_frecps(uVar30,CONCAT44(fVar80,fVar22),4);
            uVar75 = NEON_fmov(0x3f800000,4);
            uVar30 = NEON_fmin(CONCAT44((auVar72._0_4_ + auVar72._4_4_ + fVar17) *
                                        fVar80 * (float)((ulong)uVar30 >> 0x20),
                                        (auVar72._0_4_ + auVar72._4_4_ + fVar17) *
                                        fVar22 * (float)uVar30),uVar75,4);
            uVar30 = NEON_fmax(uVar30,0,4);
            fVar17 = (float)uVar30;
            fVar51 = fVar51 * fVar17;
            fVar56 = fVar56 * fVar17;
            fVar57 = fVar57 * fVar17;
            fVar58 = fVar58 * fVar17;
LAB_002593d0:
            auVar42._0_8_ = CONCAT44(fVar81 + fVar56,fVar19 + fVar51);
            auVar42._8_4_ = fVar84 + fVar57;
            auVar42._12_4_ = fVar15 + fVar58;
            auVar31 = NEON_ext(auVar42,auVar42,8,1);
            auVar45._8_4_ = (float)auVar31._0_4_;
            auVar45._0_8_ = auVar42._0_8_;
            auVar45._12_4_ = 0.0;
          }
        }
      }
      local_160 = auVar45._0_4_;
      auVar55._0_4_ = local_160 * local_160;
      fStack_15c = auVar45._4_4_;
      auVar55._4_4_ = fStack_15c * fStack_15c;
      fStack_158 = auVar45._8_4_;
      auVar55._8_4_ = fStack_158 * fStack_158;
      fStack_154 = auVar45._12_4_;
      auVar55._12_4_ = fStack_154 * fStack_154;
      auVar31 = NEON_ext(auVar55,auVar55,8,1);
      fVar19 = auVar55._0_4_ + auVar55._4_4_ + auVar31._0_4_ + auVar31._4_4_;
      bVar5 = fVar19 < fVar16 && fVar28 < fVar19;
      auVar65._0_4_ = -(uint)bVar5;
      auVar65._4_4_ = -(uint)bVar5;
      auVar65._8_4_ = -(uint)bVar5;
      auVar65._12_4_ = -(uint)bVar5;
      NEON_ext(auVar65,auVar65,8,1);
      fVar16 = fVar19;
    } while (CONCAT13((char)auVar65._12_4_,
                      CONCAT12((char)auVar65._8_4_,CONCAT11((char)auVar65._4_4_,(char)auVar65._0_4_)
                              )) == -1);
  }
  puStack_1f98 = auStack_1f90;
  local_1fa0 = (ulong)local_1fa0._4_4_ << 0x20;
  local_390 = 0;
  local_388 = 0;
  local_284 = 0;
  local_180 = 0;
                    /* try { // try from 00259930 to 00259953 has its CatchHandler @ 00259990 */
  FUN_002599a0(&local_1fa0,param_1,param_2);
  return;
}


