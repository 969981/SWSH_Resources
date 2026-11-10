/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00257230; name: FUN_00257230
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00257230(undefined8 *param_1,undefined8 *param_2,undefined1 (*param_3) [16],float *param_4,
                 undefined1 (*param_5) [16],long param_6,uint *param_7,undefined8 *param_8)

{
  char *pcVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  ulong *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined3 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined2 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  int iVar32;
  bool bVar33;
  bool bVar34;
  char cVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  ushort uVar39;
  ushort uVar40;
  float fVar41;
  ushort uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  byte bVar61;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [12];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined8 uVar68;
  undefined1 auVar69 [16];
  float fVar71;
  undefined1 auVar70 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uVar80;
  undefined1 auVar81 [12];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar82 [12];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  ulong uVar91;
  undefined8 uVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  float fVar102;
  undefined1 auVar97 [12];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar103;
  float fVar104;
  undefined8 uVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar108;
  float fVar109;
  char cVar110;
  char cVar111;
  undefined1 uVar112;
  undefined1 uVar113;
  undefined1 uVar114;
  undefined1 uVar115;
  undefined1 uVar116;
  undefined1 uVar117;
  undefined1 uVar118;
  undefined1 uVar119;
  undefined1 auVar120 [16];
  float fVar121;
  int iVar122;
  float fVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar126;
  float fVar129;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  byte bVar130;
  int iVar131;
  undefined1 auVar132 [16];
  byte bVar133;
  int iVar134;
  undefined1 auVar135 [16];
  char local_8 [8];
  
  auVar57 = *param_3;
  uVar68 = *param_1;
  uVar55 = *param_2;
  fVar71 = auVar57._8_4_;
  uVar12 = NEON_ext(uVar68,uVar55,4,1);
  fVar73 = (float)*param_8;
  fVar72 = (float)uVar12;
  fVar75 = (float)((ulong)uVar12 >> 0x20);
  fVar10 = (float)DAT_01cd5038;
  fVar11 = (float)((ulong)DAT_01cd5038 >> 0x20);
  if (fVar73 <= -fVar71) {
    cVar35 = '\0';
    local_8[4] = 0;
    local_8[0] = '\0';
  }
  else {
    auVar58._0_4_ = -(uint)(ABS(auVar57._0_4_) <= fVar72);
    auVar58._4_4_ = -(uint)(ABS(auVar57._4_4_) <= fVar75);
    auVar58._8_4_ = -(uint)(ABS(fVar71) <= fVar10);
    auVar58._12_4_ = -(uint)(ABS(auVar57._12_4_) <= fVar11);
    NEON_ext(auVar58,auVar58,8,1);
    cVar35 = '\x01';
    local_8[4] = 1;
    if (CONCAT13((char)auVar58._12_4_,
                 CONCAT12((char)auVar58._8_4_,CONCAT11((char)auVar58._4_4_,(char)auVar58._0_4_))) ==
        -1) {
      local_8[0] = '\x01';
      auVar65._8_4_ = 0;
      auVar65._0_8_ = auVar57._0_8_;
      auVar65._12_4_ = auVar57._12_4_;
      puVar4 = (ulong *)(param_6 + (ulong)*param_7 * 0x30);
      puVar4[1] = auVar65._8_8_;
      *puVar4 = auVar57._0_8_;
      uVar12 = *(undefined8 *)*param_3;
      lVar37 = param_6 + (ulong)*param_7 * 0x30;
      *(undefined8 *)(lVar37 + 0x18) = *(undefined8 *)(*param_3 + 8);
      *(undefined8 *)(lVar37 + 0x10) = uVar12;
      uVar29 = *(undefined4 *)*param_5;
      uVar30 = *(undefined4 *)(*param_5 + 4);
      uVar31 = *(undefined4 *)(*param_5 + 8);
      lVar37 = param_6 + (ulong)*param_7 * 0x30;
      *param_7 = *param_7 + 1;
      *(undefined4 *)(lVar37 + 0x28) = uVar31;
      *(float *)(lVar37 + 0x2c) = -fVar71;
      *(undefined4 *)(lVar37 + 0x20) = uVar29;
      *(undefined4 *)(lVar37 + 0x24) = uVar30;
      fVar73 = (float)*param_8;
    }
    else {
      local_8[0] = '\0';
      cVar35 = '\x01';
    }
  }
  auVar58 = param_3[1];
  fVar71 = auVar58._8_4_;
  if (fVar73 <= -fVar71) {
    local_8[5] = 0;
    local_8[1] = 0;
  }
  else {
    auVar69._0_4_ = -(uint)(ABS(auVar58._0_4_) <= fVar72);
    auVar69._4_4_ = -(uint)(ABS(auVar58._4_4_) <= fVar75);
    auVar69._8_4_ = -(uint)(ABS(fVar71) <= fVar10);
    auVar69._12_4_ = -(uint)(ABS(auVar58._12_4_) <= fVar11);
    NEON_ext(auVar69,auVar69,8,1);
    local_8[5] = 1;
    if (CONCAT13((char)auVar69._12_4_,
                 CONCAT12((char)auVar69._8_4_,CONCAT11((char)auVar69._4_4_,(char)auVar69._0_4_))) ==
        -1) {
      local_8[1] = 1;
      auVar67._8_4_ = 0;
      auVar67._0_8_ = auVar58._0_8_;
      auVar67._12_4_ = auVar58._12_4_;
      puVar4 = (ulong *)(param_6 + (ulong)*param_7 * 0x30);
      puVar4[1] = auVar67._8_8_;
      *puVar4 = auVar58._0_8_;
      uVar12 = *(undefined8 *)param_3[1];
      lVar37 = param_6 + (ulong)*param_7 * 0x30;
      *(undefined8 *)(lVar37 + 0x18) = *(undefined8 *)(param_3[1] + 8);
      *(undefined8 *)(lVar37 + 0x10) = uVar12;
      uVar29 = *(undefined4 *)*param_5;
      uVar30 = *(undefined4 *)(*param_5 + 4);
      uVar31 = *(undefined4 *)(*param_5 + 8);
      lVar37 = param_6 + (ulong)*param_7 * 0x30;
      *param_7 = *param_7 + 1;
      *(undefined4 *)(lVar37 + 0x28) = uVar31;
      *(float *)(lVar37 + 0x2c) = -fVar71;
      *(undefined4 *)(lVar37 + 0x20) = uVar29;
      *(undefined4 *)(lVar37 + 0x24) = uVar30;
      fVar73 = (float)*param_8;
    }
    else {
      local_8[1] = 0;
    }
  }
  auVar65 = param_3[2];
  fVar71 = auVar65._8_4_;
  if (fVar73 <= -fVar71) {
    local_8[6] = 0;
    local_8[2] = 0;
  }
  else {
    auVar77._0_4_ = -(uint)(ABS(auVar65._0_4_) <= fVar72);
    auVar77._4_4_ = -(uint)(ABS(auVar65._4_4_) <= fVar75);
    auVar77._8_4_ = -(uint)(ABS(fVar71) <= fVar10);
    auVar77._12_4_ = -(uint)(ABS(auVar65._12_4_) <= fVar11);
    NEON_ext(auVar77,auVar77,8,1);
    local_8[6] = 1;
    if (CONCAT13((char)auVar77._12_4_,
                 CONCAT12((char)auVar77._8_4_,CONCAT11((char)auVar77._4_4_,(char)auVar77._0_4_))) ==
        -1) {
      local_8[2] = 1;
      auVar78._8_4_ = 0;
      auVar78._0_8_ = auVar65._0_8_;
      auVar78._12_4_ = auVar65._12_4_;
      puVar4 = (ulong *)(param_6 + (ulong)*param_7 * 0x30);
      puVar4[1] = auVar78._8_8_;
      *puVar4 = auVar65._0_8_;
      uVar12 = *(undefined8 *)param_3[2];
      lVar37 = param_6 + (ulong)*param_7 * 0x30;
      *(undefined8 *)(lVar37 + 0x18) = *(undefined8 *)(param_3[2] + 8);
      *(undefined8 *)(lVar37 + 0x10) = uVar12;
      uVar29 = *(undefined4 *)*param_5;
      uVar30 = *(undefined4 *)(*param_5 + 4);
      uVar31 = *(undefined4 *)(*param_5 + 8);
      lVar37 = param_6 + (ulong)*param_7 * 0x30;
      *param_7 = *param_7 + 1;
      *(undefined4 *)(lVar37 + 0x28) = uVar31;
      *(float *)(lVar37 + 0x2c) = -fVar71;
      *(undefined4 *)(lVar37 + 0x20) = uVar29;
      *(undefined4 *)(lVar37 + 0x24) = uVar30;
      fVar73 = (float)*param_8;
    }
    else {
      local_8[2] = 0;
    }
  }
  auVar69 = param_3[3];
  fVar74 = auVar69._8_4_;
  fVar71 = -fVar74;
  uVar12 = _DAT_01d4b8f0;
  if (fVar73 <= -fVar74) {
    local_8[7] = 0;
    local_8[3] = 0;
    uVar2 = *param_7;
  }
  else {
    iVar122 = -(uint)(ABS(auVar69._0_4_) <= fVar72);
    iVar131 = -(uint)(ABS(auVar69._4_4_) <= fVar75);
    uVar43 = (undefined1)iVar131;
    uVar44 = (undefined1)((uint)iVar131 >> 8);
    uVar45 = (undefined1)((uint)iVar131 >> 0x10);
    uVar46 = (undefined1)((uint)iVar131 >> 0x18);
    iVar131 = -(uint)(ABS(fVar74) <= fVar10);
    uVar47 = (undefined1)iVar131;
    uVar48 = (undefined1)((uint)iVar131 >> 8);
    uVar49 = (undefined1)((uint)iVar131 >> 0x10);
    uVar50 = (undefined1)((uint)iVar131 >> 0x18);
    iVar131 = -(uint)(ABS(auVar69._12_4_) <= fVar11);
    uVar51 = (undefined1)iVar131;
    uVar52 = (undefined1)((uint)iVar131 >> 8);
    uVar53 = (undefined1)((uint)iVar131 >> 0x10);
    uVar54 = (undefined1)((uint)iVar131 >> 0x18);
    auVar6[4] = uVar43;
    auVar6._0_4_ = iVar122;
    auVar6[5] = uVar44;
    auVar6[6] = uVar45;
    auVar6[7] = uVar46;
    auVar6[8] = uVar47;
    auVar6[9] = uVar48;
    auVar6[10] = uVar49;
    auVar6[0xb] = uVar50;
    auVar6[0xc] = uVar51;
    auVar6[0xd] = uVar52;
    auVar6[0xe] = uVar53;
    auVar6[0xf] = uVar54;
    auVar7[4] = uVar43;
    auVar7._0_4_ = iVar122;
    auVar7[5] = uVar44;
    auVar7[6] = uVar45;
    auVar7[7] = uVar46;
    auVar7[8] = uVar47;
    auVar7[9] = uVar48;
    auVar7[10] = uVar49;
    auVar7[0xb] = uVar50;
    auVar7[0xc] = uVar51;
    auVar7[0xd] = uVar52;
    auVar7[0xe] = uVar53;
    auVar7[0xf] = uVar54;
    NEON_ext(auVar6,auVar7,8,1);
    local_8[7] = 1;
    if (CONCAT13(uVar51,CONCAT12(uVar47,CONCAT11(uVar43,(char)iVar122))) == -1) {
      local_8[3] = 1;
      auVar66._8_4_ = 0;
      auVar66._0_8_ = auVar69._0_8_;
      auVar66._12_4_ = auVar69._12_4_;
      puVar4 = (ulong *)(param_6 + (ulong)*param_7 * 0x30);
      puVar4[1] = auVar66._8_8_;
      *puVar4 = auVar69._0_8_;
      uVar12 = *(undefined8 *)param_3[3];
      lVar37 = param_6 + (ulong)*param_7 * 0x30;
      *(undefined8 *)(lVar37 + 0x18) = *(undefined8 *)(param_3[3] + 8);
      *(undefined8 *)(lVar37 + 0x10) = uVar12;
      uVar56 = *(undefined8 *)(*param_5 + 8);
      uVar12 = *(undefined8 *)*param_5;
      lVar37 = param_6 + (ulong)*param_7 * 0x30;
      *param_7 = *param_7 + 1;
      *(ulong *)(lVar37 + 0x28) =
           CONCAT17((char)((uint)fVar71 >> 0x18),
                    CONCAT16((char)((uint)fVar71 >> 0x10),
                             CONCAT15((char)((uint)fVar71 >> 8),
                                      CONCAT14(SUB41(fVar71,0),(int)uVar56))));
      *(undefined8 *)(lVar37 + 0x20) = uVar12;
      uVar2 = *param_7;
      uVar12 = _DAT_01d4b8f0;
    }
    else {
      local_8[3] = 0;
      uVar2 = *param_7;
    }
  }
  if (uVar2 == 4) {
    _DAT_01d4b8f0 = uVar12;
    return;
  }
  uVar43 = (undefined1)_UNK_01d4b8f8;
  uVar44 = (undefined1)((ulong)_UNK_01d4b8f8 >> 8);
  uVar45 = (undefined1)((ulong)_UNK_01d4b8f8 >> 0x10);
  uVar46 = (undefined1)((ulong)_UNK_01d4b8f8 >> 0x18);
  uVar47 = (undefined1)((ulong)_UNK_01d4b8f8 >> 0x20);
  uVar48 = (undefined1)((ulong)_UNK_01d4b8f8 >> 0x28);
  uVar49 = (undefined1)((ulong)_UNK_01d4b8f8 >> 0x30);
  uVar50 = (undefined1)((ulong)_UNK_01d4b8f8 >> 0x38);
  auVar70._8_8_ = _UNK_01d4a628;
  auVar70._0_8_ = _DAT_01d4a620;
  auVar8[8] = uVar43;
  auVar8._0_8_ = uVar12;
  auVar8[9] = uVar44;
  auVar8[10] = uVar45;
  auVar8[0xb] = uVar46;
  auVar8[0xc] = uVar47;
  auVar8[0xd] = uVar48;
  auVar8[0xe] = uVar49;
  auVar8[0xf] = uVar50;
  auVar67 = NEON_fmin(auVar8,auVar57,4);
  auVar57 = NEON_fmax(auVar70,auVar57,4);
  uVar56 = CONCAT44(-(float)((ulong)uVar55 >> 0x20),-(float)uVar55);
  auVar67 = NEON_fmin(auVar67,auVar58,4);
  auVar57 = NEON_fmax(auVar57,auVar58,4);
  fVar72 = param_4[2];
  auVar58 = NEON_fmin(auVar67,auVar65,4);
  auVar57 = NEON_fmax(auVar57,auVar65,4);
  auVar58 = NEON_fmin(auVar58,auVar69,4);
  auVar57 = NEON_fmax(auVar57,auVar69,4);
  uVar76 = *param_1;
  uVar80 = NEON_ext(uVar76,*param_2,4,1);
  uVar55 = CONCAT44(fVar72,fVar72);
  fVar73 = auVar58._0_4_;
  fVar41 = (float)uVar80;
  fVar74 = auVar58._4_4_;
  fVar96 = (float)((ulong)uVar80 >> 0x20);
  fVar75 = auVar57._0_4_;
  fVar71 = auVar57._4_4_;
  bVar61 = -(fVar71 < fVar96) | -(fVar96 < fVar74);
  bVar130 = (byte)(((uint)bVar61 << 0x1f) >> 0x18);
  bVar61 = (byte)(((uint)CONCAT12(bVar61,(ushort)(byte)(-(fVar75 < fVar41) | -(fVar41 < fVar73))) <<
                  0x1f) >> 0x18);
  iVar122 = CONCAT13((char)(bVar130 | bVar61) >> 7,
                     CONCAT12((char)(bVar130 | bVar61) >> 7,
                              CONCAT11((char)(bVar130 | bVar61) >> 7,(char)(bVar130 | bVar61) >> 7))
                    );
  auVar97._0_8_ =
       CONCAT17((char)(bVar130 | bVar61) >> 7,
                CONCAT16((char)(bVar130 | bVar61) >> 7,
                         CONCAT15((char)(bVar130 | bVar61) >> 7,
                                  CONCAT14((char)(bVar130 | bVar61) >> 7,iVar122))));
  auVar97[8] = (char)(bVar130 | bVar61) >> 7;
  auVar97[9] = (char)(bVar130 | bVar61) >> 7;
  auVar97[10] = (char)(bVar130 | bVar61) >> 7;
  auVar97[0xb] = (char)(bVar130 | bVar61) >> 7;
  auVar57[0xc] = (char)(bVar130 | bVar61) >> 7;
  auVar57._0_12_ = auVar97;
  auVar57[0xd] = (char)(bVar130 | bVar61) >> 7;
  auVar57[0xe] = (char)(bVar130 | bVar61) >> 7;
  auVar57[0xf] = (char)(bVar130 | bVar61) >> 7;
  auVar98._0_4_ = -(uint)(iVar122 == -1);
  auVar98._4_4_ = -(uint)((int)((ulong)auVar97._0_8_ >> 0x20) == -1);
  auVar98._8_4_ = -(uint)(auVar97._8_4_ == -1);
  auVar98._12_4_ = -(uint)(auVar57._12_4_ == -1);
  NEON_ext(auVar98,auVar98,8,1);
  _DAT_01d4b8f0 = uVar12;
  if (CONCAT13((char)auVar98._12_4_,
               CONCAT12((char)auVar98._8_4_,CONCAT11((char)auVar98._4_4_,(char)auVar98._0_4_))) !=
      -1) {
    fVar108 = *(float *)param_3[3];
    fVar109 = *(float *)(param_3[3] + 4);
    auVar57 = *param_3;
    fVar102 = auVar57._4_4_;
    fVar104 = auVar57._0_4_;
    iVar122 = -(uint)(fVar41 == fVar108 && fVar96 == fVar109);
    iVar131 = -(uint)(fVar41 == fVar104 && fVar96 == fVar102);
    iVar134 = CONCAT13((byte)((uint)iVar131 >> 0x18) | (byte)((uint)iVar122 >> 0x18),
                       CONCAT12((byte)((uint)iVar131 >> 0x10) | (byte)((uint)iVar122 >> 0x10),
                                CONCAT11((byte)((uint)iVar131 >> 8) | (byte)((uint)iVar122 >> 8),
                                         (byte)iVar131 | (byte)iVar122)));
    auVar135._0_4_ = -(uint)(iVar134 == -1);
    auVar135._4_4_ = -(uint)(iVar134 == -1);
    auVar135._8_4_ = -(uint)(iVar134 == -1);
    auVar135._12_4_ = -(uint)(iVar134 == -1);
    NEON_ext(auVar135,auVar135,8,1);
    if (CONCAT13((char)auVar135._12_4_,
                 CONCAT12((char)auVar135._8_4_,CONCAT11((char)auVar135._4_4_,(char)auVar135._0_4_)))
        != -1) {
      if (fVar96 < fVar109 == fVar96 < fVar102) {
        bVar130 = 0;
      }
      else {
        fVar129 = fVar102 - fVar109;
        fVar126 = fVar41 * fVar129;
        fVar103 = (fVar96 - fVar109) * (fVar104 - fVar108) + (fVar108 + 1.1920929e-07) * fVar129;
        bVar130 = -((float)((uint)fVar103 ^ ((uint)fVar103 ^ (uint)fVar126) & -(uint)(0.0 < fVar129)
                           ) <=
                   (float)((uint)fVar126 ^ ((uint)fVar126 ^ (uint)fVar103) & -(uint)(0.0 < fVar129))
                   ) & 1;
      }
      fVar103 = *(float *)param_3[1];
      fVar126 = *(float *)(param_3[1] + 4);
      bVar61 = -(fVar96 == fVar126) & -(fVar41 == fVar103);
      cVar110 = (char)(((uint)(byte)(bVar61 | (byte)iVar131) << 0x1f) >> 0x18);
      cVar111 = cVar110 >> 7;
      uVar15 = (undefined3)((int)cVar110 >> 7);
      iVar131 = -(uint)(CONCAT13(cVar111,uVar15) == -1);
      iVar134 = -(uint)(CONCAT13(cVar111,uVar15) == -1);
      uVar51 = (undefined1)iVar134;
      uVar52 = (undefined1)((uint)iVar134 >> 8);
      uVar53 = (undefined1)((uint)iVar134 >> 0x10);
      uVar54 = (undefined1)((uint)iVar134 >> 0x18);
      iVar134 = -(uint)(CONCAT13(cVar111,uVar15) == -1);
      uVar112 = (undefined1)iVar134;
      uVar113 = (undefined1)((uint)iVar134 >> 8);
      uVar114 = (undefined1)((uint)iVar134 >> 0x10);
      uVar115 = (undefined1)((uint)iVar134 >> 0x18);
      iVar134 = -(uint)(CONCAT13(cVar111,uVar15) == -1);
      uVar116 = (undefined1)iVar134;
      uVar117 = (undefined1)((uint)iVar134 >> 8);
      uVar118 = (undefined1)((uint)iVar134 >> 0x10);
      uVar119 = (undefined1)((uint)iVar134 >> 0x18);
      auVar23[4] = uVar51;
      auVar23._0_4_ = iVar131;
      auVar23[5] = uVar52;
      auVar23[6] = uVar53;
      auVar23[7] = uVar54;
      auVar23[8] = uVar112;
      auVar23[9] = uVar113;
      auVar23[10] = uVar114;
      auVar23[0xb] = uVar115;
      auVar23[0xc] = uVar116;
      auVar23[0xd] = uVar117;
      auVar23[0xe] = uVar118;
      auVar23[0xf] = uVar119;
      auVar24[4] = uVar51;
      auVar24._0_4_ = iVar131;
      auVar24[5] = uVar52;
      auVar24[6] = uVar53;
      auVar24[7] = uVar54;
      auVar24[8] = uVar112;
      auVar24[9] = uVar113;
      auVar24[10] = uVar114;
      auVar24[0xb] = uVar115;
      auVar24[0xc] = uVar116;
      auVar24[0xd] = uVar117;
      auVar24[0xe] = uVar118;
      auVar24[0xf] = uVar119;
      NEON_ext(auVar23,auVar24,8,1);
      if (CONCAT13(uVar116,CONCAT12(uVar112,CONCAT11(uVar51,(char)iVar131))) != -1) {
        if (fVar96 < fVar102 != fVar96 < fVar126) {
          fVar123 = fVar126 - fVar102;
          fVar121 = (fVar96 - fVar102) * (fVar103 - fVar104) + (fVar104 + 1.1920929e-07) * fVar123;
          fVar129 = fVar41 * fVar123;
          if ((float)((uint)fVar121 ^ ((uint)fVar121 ^ (uint)fVar129) & -(uint)(0.0 < fVar123)) <=
              (float)((uint)fVar129 ^ ((uint)fVar129 ^ (uint)fVar121) & -(uint)(0.0 < fVar123))) {
            if (bVar130 != 0) goto LAB_002578f8;
            bVar130 = 1;
          }
        }
        fVar123 = (float)((ulong)*(undefined8 *)param_3[2] >> 0x20);
        fVar129 = (float)*(undefined8 *)param_3[2];
        bVar133 = -(fVar96 == fVar123) & -(fVar41 == fVar129);
        iVar131 = (uint)(bVar133 | bVar61) << 0x1f;
        auVar132._0_4_ = -(uint)(iVar131 < 0);
        auVar132._4_4_ = -(uint)(iVar131 < 0);
        auVar132._8_4_ = -(uint)(iVar131 < 0);
        auVar132._12_4_ = -(uint)(iVar131 < 0);
        NEON_ext(auVar132,auVar132,8,1);
        if (CONCAT13((char)auVar132._12_4_,
                     CONCAT12((char)auVar132._8_4_,
                              CONCAT11((char)auVar132._4_4_,(char)auVar132._0_4_))) != -1) {
          if (fVar96 < fVar126 != fVar96 < fVar123) {
            fVar121 = fVar123 - fVar126;
            fVar103 = (fVar96 - fVar126) * (fVar129 - fVar103) + (fVar103 + 1.1920929e-07) * fVar121
            ;
            fVar126 = fVar41 * fVar121;
            if ((float)((uint)fVar103 ^ ((uint)fVar103 ^ (uint)fVar126) & -(uint)(0.0 < fVar121)) <=
                (float)((uint)fVar126 ^ ((uint)fVar126 ^ (uint)fVar103) & -(uint)(0.0 < fVar121))) {
              if (bVar130 == 1) goto LAB_002578f8;
              bVar130 = bVar130 + 1;
            }
          }
          cVar110 = (char)(((uint)(byte)((byte)iVar122 | bVar133) << 0x1f) >> 0x18);
          cVar111 = cVar110 >> 7;
          uVar15 = (undefined3)((int)cVar110 >> 7);
          iVar122 = -(uint)(CONCAT13(cVar111,uVar15) == -1);
          iVar131 = -(uint)(CONCAT13(cVar111,uVar15) == -1);
          uVar51 = (undefined1)iVar131;
          uVar52 = (undefined1)((uint)iVar131 >> 8);
          uVar53 = (undefined1)((uint)iVar131 >> 0x10);
          uVar54 = (undefined1)((uint)iVar131 >> 0x18);
          iVar131 = -(uint)(CONCAT13(cVar111,uVar15) == -1);
          uVar112 = (undefined1)iVar131;
          uVar113 = (undefined1)((uint)iVar131 >> 8);
          uVar114 = (undefined1)((uint)iVar131 >> 0x10);
          uVar115 = (undefined1)((uint)iVar131 >> 0x18);
          iVar131 = -(uint)(CONCAT13(cVar111,uVar15) == -1);
          uVar116 = (undefined1)iVar131;
          uVar117 = (undefined1)((uint)iVar131 >> 8);
          uVar118 = (undefined1)((uint)iVar131 >> 0x10);
          uVar119 = (undefined1)((uint)iVar131 >> 0x18);
          auVar16[4] = uVar51;
          auVar16._0_4_ = iVar122;
          auVar16[5] = uVar52;
          auVar16[6] = uVar53;
          auVar16[7] = uVar54;
          auVar16[8] = uVar112;
          auVar16[9] = uVar113;
          auVar16[10] = uVar114;
          auVar16[0xb] = uVar115;
          auVar16[0xc] = uVar116;
          auVar16[0xd] = uVar117;
          auVar16[0xe] = uVar118;
          auVar16[0xf] = uVar119;
          auVar17[4] = uVar51;
          auVar17._0_4_ = iVar122;
          auVar17[5] = uVar52;
          auVar17[6] = uVar53;
          auVar17[7] = uVar54;
          auVar17[8] = uVar112;
          auVar17[9] = uVar113;
          auVar17[10] = uVar114;
          auVar17[0xb] = uVar115;
          auVar17[0xc] = uVar116;
          auVar17[0xd] = uVar117;
          auVar17[0xe] = uVar118;
          auVar17[0xf] = uVar119;
          NEON_ext(auVar16,auVar17,8,1);
          if (CONCAT13(uVar116,CONCAT12(uVar112,CONCAT11(uVar51,(char)iVar122))) != -1) {
            if (fVar96 < fVar123 != fVar96 < fVar109) {
              fVar109 = fVar109 - fVar123;
              fVar103 = fVar41 * fVar109;
              fVar108 = (fVar96 - fVar123) * (fVar108 - fVar129) +
                        (fVar129 + 1.1920929e-07) * fVar109;
              if ((float)((uint)fVar108 ^ ((uint)fVar108 ^ (uint)fVar103) & -(uint)(0.0 < fVar109))
                  <= (float)((uint)fVar103 ^
                            ((uint)fVar103 ^ (uint)fVar108) & -(uint)(0.0 < fVar109))) {
                if (bVar130 == 1) goto LAB_002578f8;
                goto LAB_00257864;
              }
            }
            if (bVar130 == 0) goto LAB_002578f8;
          }
        }
      }
    }
LAB_00257864:
    auVar93._0_4_ = *param_4 * (fVar104 - fVar41);
    auVar93._4_4_ = param_4[1] * (fVar102 - fVar96);
    auVar93._8_4_ = fVar72 * (auVar57._8_4_ - 0.0);
    auVar93._12_4_ = param_4[3] * (auVar57._12_4_ - 0.0);
    auVar57 = NEON_ext(auVar93,auVar93,8,1);
    fVar72 = auVar57._0_4_ + auVar57._4_4_;
    uVar92 = NEON_frecpe(uVar55,4);
    uVar105 = NEON_frecps(uVar55,uVar92,4);
    fVar41 = (float)uVar92 * (float)uVar105;
    fVar96 = (float)((ulong)uVar92 >> 0x20) * (float)((ulong)uVar105 >> 0x20);
    uVar92 = NEON_frecps(uVar55,CONCAT44(fVar96,fVar41),4);
    fVar41 = fVar41 * (float)uVar92;
    fVar96 = fVar96 * (float)((ulong)uVar92 >> 0x20);
    uVar92 = NEON_frecps(uVar55,CONCAT44(fVar96,fVar41),4);
    fVar41 = fVar41 * (float)uVar92;
    fVar96 = fVar96 * (float)((ulong)uVar92 >> 0x20);
    uVar92 = NEON_frecps(uVar55,CONCAT44(fVar96,fVar41),4);
    fVar41 = fVar41 * (float)uVar92;
    fVar96 = fVar96 * (float)((ulong)uVar92 >> 0x20);
    uVar92 = NEON_frecps(uVar55,CONCAT44(fVar96,fVar41),4);
    fVar41 = (auVar93._0_4_ + auVar93._4_4_ + fVar72) * fVar41 * (float)uVar92;
    if (-fVar41 < (float)*param_8) {
      puVar5 = (undefined8 *)(param_6 + (ulong)uVar2 * 0x30);
      puVar5[1] = 0;
      *puVar5 = uVar80;
      lVar37 = param_6 + (ulong)*param_7 * 0x30;
      *(ulong *)(lVar37 + 0x18) = (ulong)(uint)fVar41;
      *(undefined8 *)(lVar37 + 0x10) = uVar80;
      uVar29 = *(undefined4 *)*param_5;
      uVar30 = *(undefined4 *)(*param_5 + 4);
      uVar31 = *(undefined4 *)(*param_5 + 8);
      lVar37 = param_6 + (ulong)*param_7 * 0x30;
      *param_7 = *param_7 + 1;
      *(undefined4 *)(lVar37 + 0x28) = uVar31;
      *(float *)(lVar37 + 0x2c) =
           -((auVar93._0_4_ + auVar93._4_4_ + fVar72) * fVar96 * (float)((ulong)uVar92 >> 0x20));
      *(undefined4 *)(lVar37 + 0x20) = uVar29;
      *(undefined4 *)(lVar37 + 0x24) = uVar30;
      uVar76 = *param_1;
    }
  }
LAB_002578f8:
  uVar76 = NEON_ext(uVar76,uVar56,4,1);
  fVar41 = (float)uVar76;
  fVar96 = (float)((ulong)uVar76 >> 0x20);
  bVar61 = -(fVar71 < fVar96) | -(fVar96 < fVar74);
  bVar130 = (byte)(((uint)bVar61 << 0x1f) >> 0x18);
  bVar61 = (byte)(((uint)CONCAT12(bVar61,(ushort)(byte)(-(fVar75 < fVar41) | -(fVar41 < fVar73))) <<
                  0x1f) >> 0x18);
  iVar122 = CONCAT13((char)(bVar130 | bVar61) >> 7,
                     CONCAT12((char)(bVar130 | bVar61) >> 7,
                              CONCAT11((char)(bVar130 | bVar61) >> 7,(char)(bVar130 | bVar61) >> 7))
                    );
  auVar81._0_8_ =
       CONCAT17((char)(bVar130 | bVar61) >> 7,
                CONCAT16((char)(bVar130 | bVar61) >> 7,
                         CONCAT15((char)(bVar130 | bVar61) >> 7,
                                  CONCAT14((char)(bVar130 | bVar61) >> 7,iVar122))));
  auVar81[8] = (char)(bVar130 | bVar61) >> 7;
  auVar81[9] = (char)(bVar130 | bVar61) >> 7;
  auVar81[10] = (char)(bVar130 | bVar61) >> 7;
  auVar81[0xb] = (char)(bVar130 | bVar61) >> 7;
  auVar83[0xc] = (char)(bVar130 | bVar61) >> 7;
  auVar83._0_12_ = auVar81;
  auVar83[0xd] = (char)(bVar130 | bVar61) >> 7;
  auVar83[0xe] = (char)(bVar130 | bVar61) >> 7;
  auVar83[0xf] = (char)(bVar130 | bVar61) >> 7;
  auVar84._0_4_ = -(uint)(iVar122 == -1);
  auVar84._4_4_ = -(uint)((int)((ulong)auVar81._0_8_ >> 0x20) == -1);
  auVar84._8_4_ = -(uint)(auVar81._8_4_ == -1);
  auVar84._12_4_ = -(uint)(auVar83._12_4_ == -1);
  NEON_ext(auVar84,auVar84,8,1);
  fVar72 = -(float)((ulong)uVar68 >> 0x20);
  if (CONCAT13((char)auVar84._12_4_,
               CONCAT12((char)auVar84._8_4_,CONCAT11((char)auVar84._4_4_,(char)auVar84._0_4_))) !=
      -1) {
    fVar108 = *(float *)*param_3;
    fVar109 = *(float *)(*param_3 + 4);
    fVar102 = SUB164(param_3[3],4);
    fVar104 = SUB164(param_3[3],0);
    iVar134 = -(uint)(fVar41 == fVar104 && fVar96 == fVar102);
    iVar32 = -(uint)(fVar96 == fVar109 && fVar41 == fVar108);
    bVar130 = (byte)((uint)iVar32 >> 0x10) | (byte)((uint)iVar134 >> 0x10);
    bVar61 = (byte)((uint)iVar32 >> 0x18) | (byte)((uint)iVar134 >> 0x18);
    uVar20 = CONCAT11((byte)((uint)iVar32 >> 8) | (byte)((uint)iVar134 >> 8),
                      (byte)iVar32 | (byte)iVar134);
    iVar122 = -(uint)(CONCAT13(bVar61,CONCAT12(bVar130,uVar20)) == -1);
    iVar131 = -(uint)(CONCAT13(bVar61,CONCAT12(bVar130,uVar20)) == -1);
    uVar51 = (undefined1)iVar131;
    uVar52 = (undefined1)((uint)iVar131 >> 8);
    uVar53 = (undefined1)((uint)iVar131 >> 0x10);
    uVar54 = (undefined1)((uint)iVar131 >> 0x18);
    iVar131 = -(uint)(CONCAT13(bVar61,CONCAT12(bVar130,uVar20)) == -1);
    uVar112 = (undefined1)iVar131;
    uVar113 = (undefined1)((uint)iVar131 >> 8);
    uVar114 = (undefined1)((uint)iVar131 >> 0x10);
    uVar115 = (undefined1)((uint)iVar131 >> 0x18);
    iVar131 = -(uint)(CONCAT13(bVar61,CONCAT12(bVar130,uVar20)) == -1);
    uVar116 = (undefined1)iVar131;
    uVar117 = (undefined1)((uint)iVar131 >> 8);
    uVar118 = (undefined1)((uint)iVar131 >> 0x10);
    uVar119 = (undefined1)((uint)iVar131 >> 0x18);
    auVar25[4] = uVar51;
    auVar25._0_4_ = iVar122;
    auVar25[5] = uVar52;
    auVar25[6] = uVar53;
    auVar25[7] = uVar54;
    auVar25[8] = uVar112;
    auVar25[9] = uVar113;
    auVar25[10] = uVar114;
    auVar25[0xb] = uVar115;
    auVar25[0xc] = uVar116;
    auVar25[0xd] = uVar117;
    auVar25[0xe] = uVar118;
    auVar25[0xf] = uVar119;
    auVar26[4] = uVar51;
    auVar26._0_4_ = iVar122;
    auVar26[5] = uVar52;
    auVar26[6] = uVar53;
    auVar26[7] = uVar54;
    auVar26[8] = uVar112;
    auVar26[9] = uVar113;
    auVar26[10] = uVar114;
    auVar26[0xb] = uVar115;
    auVar26[0xc] = uVar116;
    auVar26[0xd] = uVar117;
    auVar26[0xe] = uVar118;
    auVar26[0xf] = uVar119;
    NEON_ext(auVar25,auVar26,8,1);
    if (CONCAT13(uVar116,CONCAT12(uVar112,CONCAT11(uVar51,(char)iVar122))) != -1) {
      if (fVar96 < fVar102 == fVar96 < fVar109) {
        bVar130 = 0;
      }
      else {
        fVar129 = fVar109 - fVar102;
        fVar126 = fVar41 * fVar129;
        fVar103 = (fVar96 - fVar102) * (fVar108 - fVar104) + (fVar104 + 1.1920929e-07) * fVar129;
        bVar130 = -((float)((uint)fVar103 ^ ((uint)fVar103 ^ (uint)fVar126) & -(uint)(0.0 < fVar129)
                           ) <=
                   (float)((uint)fVar126 ^ ((uint)fVar126 ^ (uint)fVar103) & -(uint)(0.0 < fVar129))
                   ) & 1;
      }
      fVar103 = (float)*(undefined8 *)param_3[1];
      fVar126 = (float)((ulong)*(undefined8 *)param_3[1] >> 0x20);
      bVar61 = -(fVar96 == fVar126) & -(fVar41 == fVar103);
      iVar122 = (uint)(byte)(bVar61 | (byte)iVar32) << 0x1f;
      auVar124._0_4_ = -(uint)(iVar122 < 0);
      auVar124._4_4_ = -(uint)(iVar122 < 0);
      auVar124._8_4_ = -(uint)(iVar122 < 0);
      auVar124._12_4_ = -(uint)(iVar122 < 0);
      NEON_ext(auVar124,auVar124,8,1);
      if (CONCAT13((char)auVar124._12_4_,
                   CONCAT12((char)auVar124._8_4_,CONCAT11((char)auVar124._4_4_,(char)auVar124._0_4_)
                           )) != -1) {
        if (fVar96 < fVar109 != fVar96 < fVar126) {
          fVar121 = fVar126 - fVar109;
          fVar129 = (fVar96 - fVar109) * (fVar103 - fVar108) + (fVar108 + 1.1920929e-07) * fVar121;
          fVar123 = fVar41 * fVar121;
          if ((float)((uint)fVar129 ^ ((uint)fVar129 ^ (uint)fVar123) & -(uint)(0.0 < fVar121)) <=
              (float)((uint)fVar123 ^ ((uint)fVar123 ^ (uint)fVar129) & -(uint)(0.0 < fVar121))) {
            if (bVar130 != 0) goto LAB_00257c94;
            bVar130 = 1;
          }
        }
        fVar129 = *(float *)param_3[2];
        fVar123 = *(float *)(param_3[2] + 4);
        bVar133 = -(fVar96 == fVar123) & -(fVar41 == fVar129);
        iVar122 = (uint)(bVar133 | bVar61) << 0x1f;
        auVar127._0_4_ = -(uint)(iVar122 < 0);
        auVar127._4_4_ = -(uint)(iVar122 < 0);
        auVar127._8_4_ = -(uint)(iVar122 < 0);
        auVar127._12_4_ = -(uint)(iVar122 < 0);
        NEON_ext(auVar127,auVar127,8,1);
        if (CONCAT13((char)auVar127._12_4_,
                     CONCAT12((char)auVar127._8_4_,
                              CONCAT11((char)auVar127._4_4_,(char)auVar127._0_4_))) != -1) {
          if (fVar96 < fVar126 != fVar96 < fVar123) {
            fVar121 = fVar123 - fVar126;
            fVar103 = (fVar96 - fVar126) * (fVar129 - fVar103) + (fVar103 + 1.1920929e-07) * fVar121
            ;
            fVar126 = fVar41 * fVar121;
            if ((float)((uint)fVar103 ^ ((uint)fVar103 ^ (uint)fVar126) & -(uint)(0.0 < fVar121)) <=
                (float)((uint)fVar126 ^ ((uint)fVar126 ^ (uint)fVar103) & -(uint)(0.0 < fVar121))) {
              if (bVar130 == 1) goto LAB_00257c94;
              bVar130 = bVar130 + 1;
            }
          }
          iVar122 = (uint)(byte)((byte)iVar134 | bVar133) << 0x1f;
          auVar106._0_4_ = -(uint)(iVar122 < 0);
          auVar106._4_4_ = -(uint)(iVar122 < 0);
          auVar106._8_4_ = -(uint)(iVar122 < 0);
          auVar106._12_4_ = -(uint)(iVar122 < 0);
          NEON_ext(auVar106,auVar106,8,1);
          if (CONCAT13((char)auVar106._12_4_,
                       CONCAT12((char)auVar106._8_4_,
                                CONCAT11((char)auVar106._4_4_,(char)auVar106._0_4_))) != -1) {
            if (fVar96 < fVar123 != fVar96 < fVar102) {
              fVar102 = fVar102 - fVar123;
              fVar103 = fVar41 * fVar102;
              fVar104 = (fVar96 - fVar123) * (fVar104 - fVar129) +
                        (fVar129 + 1.1920929e-07) * fVar102;
              if ((float)((uint)fVar104 ^ ((uint)fVar104 ^ (uint)fVar103) & -(uint)(0.0 < fVar102))
                  <= (float)((uint)fVar103 ^
                            ((uint)fVar103 ^ (uint)fVar104) & -(uint)(0.0 < fVar102))) {
                if (bVar130 == 1) goto LAB_00257c94;
                goto LAB_00257bfc;
              }
            }
            if (bVar130 == 0) goto LAB_00257c94;
          }
        }
      }
    }
LAB_00257bfc:
    auVar85._0_4_ = *param_4 * (fVar108 - fVar41);
    auVar85._4_4_ = param_4[1] * (fVar109 - fVar96);
    auVar85._8_4_ = param_4[2] * (*(float *)(*param_3 + 8) - 0.0);
    auVar85._12_4_ = param_4[3] * (*(float *)(*param_3 + 0xc) - 0.0);
    auVar57 = NEON_ext(auVar85,auVar85,8,1);
    fVar41 = auVar57._0_4_ + auVar57._4_4_;
    uVar80 = NEON_frecpe(uVar55,4);
    uVar92 = NEON_frecps(uVar55,uVar80,4);
    fVar96 = (float)uVar80 * (float)uVar92;
    fVar108 = (float)((ulong)uVar80 >> 0x20) * (float)((ulong)uVar92 >> 0x20);
    uVar80 = NEON_frecps(uVar55,CONCAT44(fVar108,fVar96),4);
    fVar96 = fVar96 * (float)uVar80;
    fVar108 = fVar108 * (float)((ulong)uVar80 >> 0x20);
    uVar80 = NEON_frecps(uVar55,CONCAT44(fVar108,fVar96),4);
    fVar96 = fVar96 * (float)uVar80;
    fVar108 = fVar108 * (float)((ulong)uVar80 >> 0x20);
    uVar80 = NEON_frecps(uVar55,CONCAT44(fVar108,fVar96),4);
    fVar96 = fVar96 * (float)uVar80;
    fVar108 = fVar108 * (float)((ulong)uVar80 >> 0x20);
    uVar80 = NEON_frecps(uVar55,CONCAT44(fVar108,fVar96),4);
    fVar96 = (auVar85._0_4_ + auVar85._4_4_ + fVar41) * fVar96 * (float)uVar80;
    if (-fVar96 < (float)*param_8) {
      puVar5 = (undefined8 *)(param_6 + (ulong)*param_7 * 0x30);
      puVar5[1] = 0;
      *puVar5 = uVar76;
      lVar37 = param_6 + (ulong)*param_7 * 0x30;
      *(ulong *)(lVar37 + 0x18) = (ulong)(uint)fVar96;
      *(undefined8 *)(lVar37 + 0x10) = uVar76;
      uVar29 = *(undefined4 *)*param_5;
      uVar30 = *(undefined4 *)(*param_5 + 4);
      uVar31 = *(undefined4 *)(*param_5 + 8);
      lVar37 = param_6 + (ulong)*param_7 * 0x30;
      *param_7 = *param_7 + 1;
      *(undefined4 *)(lVar37 + 0x28) = uVar31;
      *(float *)(lVar37 + 0x2c) =
           -((auVar85._0_4_ + auVar85._4_4_ + fVar41) * fVar108 * (float)((ulong)uVar80 >> 0x20));
      *(undefined4 *)(lVar37 + 0x20) = uVar29;
      *(undefined4 *)(lVar37 + 0x24) = uVar30;
    }
  }
LAB_00257c94:
  uVar76 = NEON_ext(CONCAT44(fVar72,-(float)uVar68),*param_2,4,1);
  fVar41 = (float)uVar76;
  fVar96 = (float)((ulong)uVar76 >> 0x20);
  bVar61 = -(fVar71 < fVar96) | -(fVar96 < fVar74);
  bVar130 = (byte)(((uint)bVar61 << 0x1f) >> 0x18);
  bVar61 = (byte)(((uint)CONCAT12(bVar61,(ushort)(byte)(-(fVar75 < fVar41) | -(fVar41 < fVar73))) <<
                  0x1f) >> 0x18);
  iVar122 = CONCAT13((char)(bVar130 | bVar61) >> 7,
                     CONCAT12((char)(bVar130 | bVar61) >> 7,
                              CONCAT11((char)(bVar130 | bVar61) >> 7,(char)(bVar130 | bVar61) >> 7))
                    );
  auVar82._0_8_ =
       CONCAT17((char)(bVar130 | bVar61) >> 7,
                CONCAT16((char)(bVar130 | bVar61) >> 7,
                         CONCAT15((char)(bVar130 | bVar61) >> 7,
                                  CONCAT14((char)(bVar130 | bVar61) >> 7,iVar122))));
  auVar82[8] = (char)(bVar130 | bVar61) >> 7;
  auVar82[9] = (char)(bVar130 | bVar61) >> 7;
  auVar82[10] = (char)(bVar130 | bVar61) >> 7;
  auVar82[0xb] = (char)(bVar130 | bVar61) >> 7;
  auVar86[0xc] = (char)(bVar130 | bVar61) >> 7;
  auVar86._0_12_ = auVar82;
  auVar86[0xd] = (char)(bVar130 | bVar61) >> 7;
  auVar86[0xe] = (char)(bVar130 | bVar61) >> 7;
  auVar86[0xf] = (char)(bVar130 | bVar61) >> 7;
  auVar87._0_4_ = -(uint)(iVar122 == -1);
  auVar87._4_4_ = -(uint)((int)((ulong)auVar82._0_8_ >> 0x20) == -1);
  auVar87._8_4_ = -(uint)(auVar82._8_4_ == -1);
  auVar87._12_4_ = -(uint)(auVar86._12_4_ == -1);
  NEON_ext(auVar87,auVar87,8,1);
  if (CONCAT13((char)auVar87._12_4_,
               CONCAT12((char)auVar87._8_4_,CONCAT11((char)auVar87._4_4_,(char)auVar87._0_4_))) !=
      -1) {
    auVar57 = *param_3;
    fVar102 = SUB164(param_3[3],4);
    fVar104 = SUB164(param_3[3],0);
    fVar109 = auVar57._4_4_;
    fVar108 = auVar57._0_4_;
    iVar134 = -(uint)(fVar41 == fVar104 && fVar96 == fVar102);
    iVar32 = -(uint)(fVar96 == fVar109 && fVar41 == fVar108);
    bVar130 = (byte)((uint)iVar32 >> 0x10) | (byte)((uint)iVar134 >> 0x10);
    bVar61 = (byte)((uint)iVar32 >> 0x18) | (byte)((uint)iVar134 >> 0x18);
    uVar20 = CONCAT11((byte)((uint)iVar32 >> 8) | (byte)((uint)iVar134 >> 8),
                      (byte)iVar32 | (byte)iVar134);
    iVar122 = -(uint)(CONCAT13(bVar61,CONCAT12(bVar130,uVar20)) == -1);
    iVar131 = -(uint)(CONCAT13(bVar61,CONCAT12(bVar130,uVar20)) == -1);
    uVar51 = (undefined1)iVar131;
    uVar52 = (undefined1)((uint)iVar131 >> 8);
    uVar53 = (undefined1)((uint)iVar131 >> 0x10);
    uVar54 = (undefined1)((uint)iVar131 >> 0x18);
    iVar131 = -(uint)(CONCAT13(bVar61,CONCAT12(bVar130,uVar20)) == -1);
    uVar112 = (undefined1)iVar131;
    uVar113 = (undefined1)((uint)iVar131 >> 8);
    uVar114 = (undefined1)((uint)iVar131 >> 0x10);
    uVar115 = (undefined1)((uint)iVar131 >> 0x18);
    iVar131 = -(uint)(CONCAT13(bVar61,CONCAT12(bVar130,uVar20)) == -1);
    uVar116 = (undefined1)iVar131;
    uVar117 = (undefined1)((uint)iVar131 >> 8);
    uVar118 = (undefined1)((uint)iVar131 >> 0x10);
    uVar119 = (undefined1)((uint)iVar131 >> 0x18);
    auVar27[4] = uVar51;
    auVar27._0_4_ = iVar122;
    auVar27[5] = uVar52;
    auVar27[6] = uVar53;
    auVar27[7] = uVar54;
    auVar27[8] = uVar112;
    auVar27[9] = uVar113;
    auVar27[10] = uVar114;
    auVar27[0xb] = uVar115;
    auVar27[0xc] = uVar116;
    auVar27[0xd] = uVar117;
    auVar27[0xe] = uVar118;
    auVar27[0xf] = uVar119;
    auVar28[4] = uVar51;
    auVar28._0_4_ = iVar122;
    auVar28[5] = uVar52;
    auVar28[6] = uVar53;
    auVar28[7] = uVar54;
    auVar28[8] = uVar112;
    auVar28[9] = uVar113;
    auVar28[10] = uVar114;
    auVar28[0xb] = uVar115;
    auVar28[0xc] = uVar116;
    auVar28[0xd] = uVar117;
    auVar28[0xe] = uVar118;
    auVar28[0xf] = uVar119;
    NEON_ext(auVar27,auVar28,8,1);
    if (CONCAT13(uVar116,CONCAT12(uVar112,CONCAT11(uVar51,(char)iVar122))) != -1) {
      if (fVar96 < fVar102 == fVar96 < fVar109) {
        bVar130 = 0;
      }
      else {
        fVar129 = fVar109 - fVar102;
        fVar126 = fVar41 * fVar129;
        fVar103 = (fVar96 - fVar102) * (fVar108 - fVar104) + (fVar104 + 1.1920929e-07) * fVar129;
        bVar130 = -((float)((uint)fVar103 ^ ((uint)fVar103 ^ (uint)fVar126) & -(uint)(0.0 < fVar129)
                           ) <=
                   (float)((uint)fVar126 ^ ((uint)fVar126 ^ (uint)fVar103) & -(uint)(0.0 < fVar129))
                   ) & 1;
      }
      fVar103 = (float)*(undefined8 *)param_3[1];
      fVar126 = (float)((ulong)*(undefined8 *)param_3[1] >> 0x20);
      bVar61 = -(fVar96 == fVar126) & -(fVar41 == fVar103);
      iVar122 = (uint)(byte)(bVar61 | (byte)iVar32) << 0x1f;
      auVar125._0_4_ = -(uint)(iVar122 < 0);
      auVar125._4_4_ = -(uint)(iVar122 < 0);
      auVar125._8_4_ = -(uint)(iVar122 < 0);
      auVar125._12_4_ = -(uint)(iVar122 < 0);
      NEON_ext(auVar125,auVar125,8,1);
      if (CONCAT13((char)auVar125._12_4_,
                   CONCAT12((char)auVar125._8_4_,CONCAT11((char)auVar125._4_4_,(char)auVar125._0_4_)
                           )) != -1) {
        if (fVar96 < fVar109 != fVar96 < fVar126) {
          fVar121 = fVar126 - fVar109;
          fVar129 = (fVar96 - fVar109) * (fVar103 - fVar108) + (fVar108 + 1.1920929e-07) * fVar121;
          fVar123 = fVar41 * fVar121;
          if ((float)((uint)fVar129 ^ ((uint)fVar129 ^ (uint)fVar123) & -(uint)(0.0 < fVar121)) <=
              (float)((uint)fVar123 ^ ((uint)fVar123 ^ (uint)fVar129) & -(uint)(0.0 < fVar121))) {
            if (bVar130 != 0) goto LAB_00258030;
            bVar130 = 1;
          }
        }
        fVar129 = *(float *)param_3[2];
        fVar123 = *(float *)(param_3[2] + 4);
        bVar133 = -(fVar96 == fVar123) & -(fVar41 == fVar129);
        iVar122 = (uint)(bVar133 | bVar61) << 0x1f;
        auVar128._0_4_ = -(uint)(iVar122 < 0);
        auVar128._4_4_ = -(uint)(iVar122 < 0);
        auVar128._8_4_ = -(uint)(iVar122 < 0);
        auVar128._12_4_ = -(uint)(iVar122 < 0);
        NEON_ext(auVar128,auVar128,8,1);
        if (CONCAT13((char)auVar128._12_4_,
                     CONCAT12((char)auVar128._8_4_,
                              CONCAT11((char)auVar128._4_4_,(char)auVar128._0_4_))) != -1) {
          if (fVar96 < fVar126 != fVar96 < fVar123) {
            fVar121 = fVar123 - fVar126;
            fVar103 = (fVar96 - fVar126) * (fVar129 - fVar103) + (fVar103 + 1.1920929e-07) * fVar121
            ;
            fVar126 = fVar41 * fVar121;
            if ((float)((uint)fVar103 ^ ((uint)fVar103 ^ (uint)fVar126) & -(uint)(0.0 < fVar121)) <=
                (float)((uint)fVar126 ^ ((uint)fVar126 ^ (uint)fVar103) & -(uint)(0.0 < fVar121))) {
              if (bVar130 == 1) goto LAB_00258030;
              bVar130 = bVar130 + 1;
            }
          }
          iVar122 = (uint)(byte)((byte)iVar134 | bVar133) << 0x1f;
          auVar107._0_4_ = -(uint)(iVar122 < 0);
          auVar107._4_4_ = -(uint)(iVar122 < 0);
          auVar107._8_4_ = -(uint)(iVar122 < 0);
          auVar107._12_4_ = -(uint)(iVar122 < 0);
          NEON_ext(auVar107,auVar107,8,1);
          if (CONCAT13((char)auVar107._12_4_,
                       CONCAT12((char)auVar107._8_4_,
                                CONCAT11((char)auVar107._4_4_,(char)auVar107._0_4_))) != -1) {
            if (fVar96 < fVar123 != fVar96 < fVar102) {
              fVar102 = fVar102 - fVar123;
              fVar103 = fVar41 * fVar102;
              fVar104 = (fVar96 - fVar123) * (fVar104 - fVar129) +
                        (fVar129 + 1.1920929e-07) * fVar102;
              if ((float)((uint)fVar104 ^ ((uint)fVar104 ^ (uint)fVar103) & -(uint)(0.0 < fVar102))
                  <= (float)((uint)fVar103 ^
                            ((uint)fVar103 ^ (uint)fVar104) & -(uint)(0.0 < fVar102))) {
                if (bVar130 == 1) goto LAB_00258030;
                goto LAB_00257f98;
              }
            }
            if (bVar130 == 0) goto LAB_00258030;
          }
        }
      }
    }
LAB_00257f98:
    auVar88._0_4_ = *param_4 * (fVar108 - fVar41);
    auVar88._4_4_ = param_4[1] * (fVar109 - fVar96);
    auVar88._8_4_ = param_4[2] * (auVar57._8_4_ - 0.0);
    auVar88._12_4_ = param_4[3] * (auVar57._12_4_ - 0.0);
    auVar57 = NEON_ext(auVar88,auVar88,8,1);
    fVar41 = auVar57._0_4_ + auVar57._4_4_;
    uVar80 = NEON_frecpe(uVar55,4);
    uVar92 = NEON_frecps(uVar55,uVar80,4);
    fVar96 = (float)uVar80 * (float)uVar92;
    fVar108 = (float)((ulong)uVar80 >> 0x20) * (float)((ulong)uVar92 >> 0x20);
    uVar80 = NEON_frecps(uVar55,CONCAT44(fVar108,fVar96),4);
    fVar96 = fVar96 * (float)uVar80;
    fVar108 = fVar108 * (float)((ulong)uVar80 >> 0x20);
    uVar80 = NEON_frecps(uVar55,CONCAT44(fVar108,fVar96),4);
    fVar96 = fVar96 * (float)uVar80;
    fVar108 = fVar108 * (float)((ulong)uVar80 >> 0x20);
    uVar80 = NEON_frecps(uVar55,CONCAT44(fVar108,fVar96),4);
    fVar96 = fVar96 * (float)uVar80;
    fVar108 = fVar108 * (float)((ulong)uVar80 >> 0x20);
    uVar80 = NEON_frecps(uVar55,CONCAT44(fVar108,fVar96),4);
    fVar96 = (auVar88._0_4_ + auVar88._4_4_ + fVar41) * fVar96 * (float)uVar80;
    if (-fVar96 < (float)*param_8) {
      puVar5 = (undefined8 *)(param_6 + (ulong)*param_7 * 0x30);
      puVar5[1] = 0;
      *puVar5 = uVar76;
      lVar37 = param_6 + (ulong)*param_7 * 0x30;
      *(ulong *)(lVar37 + 0x18) = (ulong)(uint)fVar96;
      *(undefined8 *)(lVar37 + 0x10) = uVar76;
      uVar29 = *(undefined4 *)*param_5;
      uVar30 = *(undefined4 *)(*param_5 + 4);
      uVar31 = *(undefined4 *)(*param_5 + 8);
      lVar37 = param_6 + (ulong)*param_7 * 0x30;
      *param_7 = *param_7 + 1;
      *(undefined4 *)(lVar37 + 0x28) = uVar31;
      *(float *)(lVar37 + 0x2c) =
           -((auVar88._0_4_ + auVar88._4_4_ + fVar41) * fVar108 * (float)((ulong)uVar80 >> 0x20));
      *(undefined4 *)(lVar37 + 0x20) = uVar29;
      *(undefined4 *)(lVar37 + 0x24) = uVar30;
    }
  }
LAB_00258030:
  uVar68 = NEON_ext(CONCAT44(fVar72,-(float)uVar68),uVar56,4,1);
  fVar72 = (float)uVar68;
  fVar41 = (float)((ulong)uVar68 >> 0x20);
  bVar61 = -(fVar41 < fVar74) | -(fVar71 < fVar41);
  bVar130 = (byte)(((uint)bVar61 << 0x1f) >> 0x18);
  bVar61 = (byte)(((uint)CONCAT12(bVar61,(ushort)(byte)(-(fVar72 < fVar73) | -(fVar75 < fVar72))) <<
                  0x1f) >> 0x18);
  iVar122 = CONCAT13((char)(bVar130 | bVar61) >> 7,
                     CONCAT12((char)(bVar130 | bVar61) >> 7,
                              CONCAT11((char)(bVar130 | bVar61) >> 7,(char)(bVar130 | bVar61) >> 7))
                    );
  auVar62._0_8_ =
       CONCAT17((char)(bVar130 | bVar61) >> 7,
                CONCAT16((char)(bVar130 | bVar61) >> 7,
                         CONCAT15((char)(bVar130 | bVar61) >> 7,
                                  CONCAT14((char)(bVar130 | bVar61) >> 7,iVar122))));
  auVar62[8] = (char)(bVar130 | bVar61) >> 7;
  auVar62[9] = (char)(bVar130 | bVar61) >> 7;
  auVar62[10] = (char)(bVar130 | bVar61) >> 7;
  auVar62[0xb] = (char)(bVar130 | bVar61) >> 7;
  auVar63[0xc] = (char)(bVar130 | bVar61) >> 7;
  auVar63._0_12_ = auVar62;
  auVar63[0xd] = (char)(bVar130 | bVar61) >> 7;
  auVar63[0xe] = (char)(bVar130 | bVar61) >> 7;
  auVar63[0xf] = (char)(bVar130 | bVar61) >> 7;
  auVar64._0_4_ = -(uint)(iVar122 == -1);
  auVar64._4_4_ = -(uint)((int)((ulong)auVar62._0_8_ >> 0x20) == -1);
  auVar64._8_4_ = -(uint)(auVar62._8_4_ == -1);
  auVar64._12_4_ = -(uint)(auVar63._12_4_ == -1);
  NEON_ext(auVar64,auVar64,8,1);
  if (CONCAT13((char)auVar64._12_4_,
               CONCAT12((char)auVar64._8_4_,CONCAT11((char)auVar64._4_4_,(char)auVar64._0_4_))) ==
      -1) goto LAB_002583cc;
  fVar75 = *(float *)param_3[3];
  fVar71 = *(float *)(param_3[3] + 4);
  fVar73 = *(float *)*param_3;
  fVar74 = *(float *)(*param_3 + 4);
  iVar32 = -(uint)(fVar41 == fVar71 && fVar72 == fVar75);
  iVar134 = -(uint)(fVar41 == fVar74 && fVar72 == fVar73);
  bVar130 = (byte)((uint)iVar134 >> 0x10) | (byte)((uint)iVar32 >> 0x10);
  bVar61 = (byte)((uint)iVar134 >> 0x18) | (byte)((uint)iVar32 >> 0x18);
  uVar20 = CONCAT11((byte)((uint)iVar134 >> 8) | (byte)((uint)iVar32 >> 8),
                    (byte)iVar134 | (byte)iVar32);
  iVar122 = -(uint)(CONCAT13(bVar61,CONCAT12(bVar130,uVar20)) == -1);
  iVar131 = -(uint)(CONCAT13(bVar61,CONCAT12(bVar130,uVar20)) == -1);
  uVar51 = (undefined1)iVar131;
  uVar52 = (undefined1)((uint)iVar131 >> 8);
  uVar53 = (undefined1)((uint)iVar131 >> 0x10);
  uVar54 = (undefined1)((uint)iVar131 >> 0x18);
  iVar131 = -(uint)(CONCAT13(bVar61,CONCAT12(bVar130,uVar20)) == -1);
  uVar112 = (undefined1)iVar131;
  uVar113 = (undefined1)((uint)iVar131 >> 8);
  uVar114 = (undefined1)((uint)iVar131 >> 0x10);
  uVar115 = (undefined1)((uint)iVar131 >> 0x18);
  iVar131 = -(uint)(CONCAT13(bVar61,CONCAT12(bVar130,uVar20)) == -1);
  uVar116 = (undefined1)iVar131;
  uVar117 = (undefined1)((uint)iVar131 >> 8);
  uVar118 = (undefined1)((uint)iVar131 >> 0x10);
  uVar119 = (undefined1)((uint)iVar131 >> 0x18);
  auVar21[4] = uVar51;
  auVar21._0_4_ = iVar122;
  auVar21[5] = uVar52;
  auVar21[6] = uVar53;
  auVar21[7] = uVar54;
  auVar21[8] = uVar112;
  auVar21[9] = uVar113;
  auVar21[10] = uVar114;
  auVar21[0xb] = uVar115;
  auVar21[0xc] = uVar116;
  auVar21[0xd] = uVar117;
  auVar21[0xe] = uVar118;
  auVar21[0xf] = uVar119;
  auVar22[4] = uVar51;
  auVar22._0_4_ = iVar122;
  auVar22[5] = uVar52;
  auVar22[6] = uVar53;
  auVar22[7] = uVar54;
  auVar22[8] = uVar112;
  auVar22[9] = uVar113;
  auVar22[10] = uVar114;
  auVar22[0xb] = uVar115;
  auVar22[0xc] = uVar116;
  auVar22[0xd] = uVar117;
  auVar22[0xe] = uVar118;
  auVar22[0xf] = uVar119;
  NEON_ext(auVar21,auVar22,8,1);
  if (CONCAT13(uVar116,CONCAT12(uVar112,CONCAT11(uVar51,(char)iVar122))) != -1) {
    if (fVar41 < fVar71 == fVar41 < fVar74) {
      bVar130 = 0;
    }
    else {
      fVar109 = fVar74 - fVar71;
      fVar108 = fVar72 * fVar109;
      fVar96 = (fVar41 - fVar71) * (fVar73 - fVar75) + (fVar75 + 1.1920929e-07) * fVar109;
      bVar130 = -((float)((uint)fVar96 ^ ((uint)fVar96 ^ (uint)fVar108) & -(uint)(0.0 < fVar109)) <=
                 (float)((uint)fVar108 ^ ((uint)fVar108 ^ (uint)fVar96) & -(uint)(0.0 < fVar109))) &
                1;
    }
    fVar96 = *(float *)param_3[1];
    fVar108 = *(float *)(param_3[1] + 4);
    bVar61 = -(fVar41 == fVar108) & -(fVar72 == fVar96);
    cVar110 = (char)(((uint)(byte)(bVar61 | (byte)iVar134) << 0x1f) >> 0x18);
    cVar111 = cVar110 >> 7;
    uVar15 = (undefined3)((int)cVar110 >> 7);
    iVar122 = -(uint)(CONCAT13(cVar111,uVar15) == -1);
    iVar131 = -(uint)(CONCAT13(cVar111,uVar15) == -1);
    uVar51 = (undefined1)iVar131;
    uVar52 = (undefined1)((uint)iVar131 >> 8);
    uVar53 = (undefined1)((uint)iVar131 >> 0x10);
    uVar54 = (undefined1)((uint)iVar131 >> 0x18);
    iVar131 = -(uint)(CONCAT13(cVar111,uVar15) == -1);
    uVar112 = (undefined1)iVar131;
    uVar113 = (undefined1)((uint)iVar131 >> 8);
    uVar114 = (undefined1)((uint)iVar131 >> 0x10);
    uVar115 = (undefined1)((uint)iVar131 >> 0x18);
    iVar131 = -(uint)(CONCAT13(cVar111,uVar15) == -1);
    uVar116 = (undefined1)iVar131;
    uVar117 = (undefined1)((uint)iVar131 >> 8);
    uVar118 = (undefined1)((uint)iVar131 >> 0x10);
    uVar119 = (undefined1)((uint)iVar131 >> 0x18);
    auVar18[4] = uVar51;
    auVar18._0_4_ = iVar122;
    auVar18[5] = uVar52;
    auVar18[6] = uVar53;
    auVar18[7] = uVar54;
    auVar18[8] = uVar112;
    auVar18[9] = uVar113;
    auVar18[10] = uVar114;
    auVar18[0xb] = uVar115;
    auVar18[0xc] = uVar116;
    auVar18[0xd] = uVar117;
    auVar18[0xe] = uVar118;
    auVar18[0xf] = uVar119;
    auVar19[4] = uVar51;
    auVar19._0_4_ = iVar122;
    auVar19[5] = uVar52;
    auVar19[6] = uVar53;
    auVar19[7] = uVar54;
    auVar19[8] = uVar112;
    auVar19[9] = uVar113;
    auVar19[10] = uVar114;
    auVar19[0xb] = uVar115;
    auVar19[0xc] = uVar116;
    auVar19[0xd] = uVar117;
    auVar19[0xe] = uVar118;
    auVar19[0xf] = uVar119;
    NEON_ext(auVar18,auVar19,8,1);
    if (CONCAT13(uVar116,CONCAT12(uVar112,CONCAT11(uVar51,(char)iVar122))) != -1) {
      if (fVar41 < fVar74 != fVar41 < fVar108) {
        fVar104 = fVar108 - fVar74;
        fVar102 = (fVar41 - fVar74) * (fVar96 - fVar73) + (fVar73 + 1.1920929e-07) * fVar104;
        fVar109 = fVar72 * fVar104;
        if ((float)((uint)fVar102 ^ ((uint)fVar102 ^ (uint)fVar109) & -(uint)(0.0 < fVar104)) <=
            (float)((uint)fVar109 ^ ((uint)fVar109 ^ (uint)fVar102) & -(uint)(0.0 < fVar104))) {
          if (bVar130 != 0) goto LAB_002583cc;
          bVar130 = 1;
        }
      }
      fVar104 = (float)((ulong)*(undefined8 *)param_3[2] >> 0x20);
      fVar109 = (float)*(undefined8 *)param_3[2];
      bVar133 = -(fVar41 == fVar104) & -(fVar72 == fVar109);
      iVar122 = (uint)(bVar133 | bVar61) << 0x1f;
      auVar120._0_4_ = -(uint)(iVar122 < 0);
      auVar120._4_4_ = -(uint)(iVar122 < 0);
      auVar120._8_4_ = -(uint)(iVar122 < 0);
      auVar120._12_4_ = -(uint)(iVar122 < 0);
      NEON_ext(auVar120,auVar120,8,1);
      if (CONCAT13((char)auVar120._12_4_,
                   CONCAT12((char)auVar120._8_4_,CONCAT11((char)auVar120._4_4_,(char)auVar120._0_4_)
                           )) != -1) {
        if (fVar41 < fVar108 != fVar41 < fVar104) {
          fVar102 = fVar104 - fVar108;
          fVar108 = (fVar41 - fVar108) * (fVar109 - fVar96) + (fVar96 + 1.1920929e-07) * fVar102;
          fVar96 = fVar72 * fVar102;
          if ((float)((uint)fVar108 ^ ((uint)fVar108 ^ (uint)fVar96) & -(uint)(0.0 < fVar102)) <=
              (float)((uint)fVar96 ^ ((uint)fVar96 ^ (uint)fVar108) & -(uint)(0.0 < fVar102))) {
            if (bVar130 == 1) goto LAB_002583cc;
            bVar130 = bVar130 + 1;
          }
        }
        iVar122 = (uint)(byte)((byte)iVar32 | bVar133) << 0x1f;
        auVar59._0_4_ = -(uint)(iVar122 < 0);
        auVar59._4_4_ = -(uint)(iVar122 < 0);
        auVar59._8_4_ = -(uint)(iVar122 < 0);
        auVar59._12_4_ = -(uint)(iVar122 < 0);
        NEON_ext(auVar59,auVar59,8,1);
        if (CONCAT13((char)auVar59._12_4_,
                     CONCAT12((char)auVar59._8_4_,CONCAT11((char)auVar59._4_4_,(char)auVar59._0_4_))
                    ) != -1) {
          if (fVar41 < fVar104 != fVar41 < fVar71) {
            fVar71 = fVar71 - fVar104;
            fVar96 = fVar72 * fVar71;
            fVar75 = (fVar41 - fVar104) * (fVar75 - fVar109) + (fVar109 + 1.1920929e-07) * fVar71;
            if ((float)((uint)fVar75 ^ ((uint)fVar75 ^ (uint)fVar96) & -(uint)(0.0 < fVar71)) <=
                (float)((uint)fVar96 ^ ((uint)fVar96 ^ (uint)fVar75) & -(uint)(0.0 < fVar71))) {
              if (bVar130 == 1) goto LAB_002583cc;
              goto LAB_00258334;
            }
          }
          if (bVar130 == 0) goto LAB_002583cc;
        }
      }
    }
  }
LAB_00258334:
  auVar60._0_4_ = *param_4 * (fVar73 - fVar72);
  auVar60._4_4_ = param_4[1] * (fVar74 - fVar41);
  auVar60._8_4_ = param_4[2] * (*(float *)(*param_3 + 8) - 0.0);
  auVar60._12_4_ = param_4[3] * (*(float *)(*param_3 + 0xc) - 0.0);
  auVar57 = NEON_ext(auVar60,auVar60,8,1);
  fVar75 = auVar57._0_4_ + auVar57._4_4_;
  uVar56 = NEON_frecpe(uVar55,4);
  uVar76 = NEON_frecps(uVar55,uVar56,4);
  fVar71 = (float)uVar56 * (float)uVar76;
  fVar73 = (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar76 >> 0x20);
  uVar56 = NEON_frecps(uVar55,CONCAT44(fVar73,fVar71),4);
  fVar71 = fVar71 * (float)uVar56;
  fVar73 = fVar73 * (float)((ulong)uVar56 >> 0x20);
  uVar56 = NEON_frecps(uVar55,CONCAT44(fVar73,fVar71),4);
  fVar71 = fVar71 * (float)uVar56;
  fVar73 = fVar73 * (float)((ulong)uVar56 >> 0x20);
  uVar56 = NEON_frecps(uVar55,CONCAT44(fVar73,fVar71),4);
  fVar71 = fVar71 * (float)uVar56;
  fVar73 = fVar73 * (float)((ulong)uVar56 >> 0x20);
  uVar55 = NEON_frecps(uVar55,CONCAT44(fVar73,fVar71),4);
  fVar71 = (auVar60._0_4_ + auVar60._4_4_ + fVar75) * fVar71 * (float)uVar55;
  if (-fVar71 < (float)*param_8) {
    puVar5 = (undefined8 *)(param_6 + (ulong)*param_7 * 0x30);
    puVar5[1] = 0;
    *puVar5 = uVar68;
    lVar37 = param_6 + (ulong)*param_7 * 0x30;
    *(ulong *)(lVar37 + 0x18) = (ulong)(uint)fVar71;
    *(undefined8 *)(lVar37 + 0x10) = uVar68;
    uVar29 = *(undefined4 *)*param_5;
    uVar30 = *(undefined4 *)(*param_5 + 4);
    uVar31 = *(undefined4 *)(*param_5 + 8);
    lVar37 = param_6 + (ulong)*param_7 * 0x30;
    *param_7 = *param_7 + 1;
    *(undefined4 *)(lVar37 + 0x28) = uVar31;
    *(float *)(lVar37 + 0x2c) =
         -((auVar60._0_4_ + auVar60._4_4_ + fVar75) * fVar73 * (float)((ulong)uVar55 >> 0x20));
    *(undefined4 *)(lVar37 + 0x20) = uVar29;
    *(undefined4 *)(lVar37 + 0x24) = uVar30;
  }
LAB_002583cc:
  uVar55 = _UNK_01d4a818;
  uVar68 = _DAT_01d4a810;
  uVar56 = NEON_ext(*param_1,*param_2,4,1);
  fVar75 = -((float)*param_8 + 1.1920929e-07);
  uVar76 = NEON_fmov(0x3f800000,4);
  pcVar1 = local_8 + 4;
  uVar91 = 3;
  uVar36 = 0;
  do {
    uVar38 = uVar91 & 0xffffffff;
    pauVar3 = param_3 + (uVar91 & 0xffffffff);
    uVar80 = *(undefined8 *)(param_3[uVar36] + 8);
    fVar74 = (float)uVar80;
    fVar96 = (float)((ulong)uVar80 >> 0x20);
    uVar80 = *(undefined8 *)param_3[uVar36];
    fVar71 = (float)uVar80;
    fVar73 = (float)((ulong)uVar80 >> 0x20);
    if (cVar35 == '\0') {
      if (pcVar1[uVar38] != '\0') {
        bVar34 = local_8[uVar38] != '\0';
        bVar33 = false;
        goto LAB_0025848c;
      }
    }
    else {
      bVar33 = local_8[uVar36] != '\0';
      bVar34 = false;
      if (pcVar1[uVar38] != '\0') {
        bVar34 = local_8[uVar38] != '\0';
        if ((local_8[uVar36] != '\0') && (local_8[uVar38] != '\0')) goto LAB_0025861c;
      }
LAB_0025848c:
      auVar79._0_4_ = *(float *)*pauVar3 - fVar71;
      auVar79._4_4_ = *(float *)(*pauVar3 + 4) - fVar73;
      auVar79._8_4_ = *(float *)(*pauVar3 + 8) - fVar74;
      auVar79._12_4_ = *(float *)(*pauVar3 + 0xc) - fVar96;
      fVar108 = (float)((ulong)uVar56 >> 0x20);
      auVar89._0_4_ = -(uint)(ABS(auVar79._0_4_) < (float)uVar68);
      auVar89._4_4_ = -(uint)(ABS(auVar79._4_4_) < (float)((ulong)uVar68 >> 0x20));
      auVar89._8_4_ = -(uint)(ABS(auVar79._8_4_) < (float)uVar55);
      auVar89._12_4_ = -(uint)(ABS(auVar79._12_4_) < (float)((ulong)uVar55 >> 0x20));
      uVar91 = CONCAT26((short)auVar89._12_4_,
                        CONCAT24((short)auVar89._8_4_,
                                 CONCAT22((short)auVar89._4_4_,(short)auVar89._0_4_))) &
               (ulong)CONCAT16(-(fVar96 < 0.0) | -(fVar11 < fVar96),
                               (uint6)CONCAT14(-(fVar74 < fVar75) | -(fVar10 < fVar74),
                                               (uint)CONCAT12(-(fVar73 < fVar41) |
                                                              -(fVar108 < fVar73),
                                                              (ushort)(byte)(-(fVar71 < fVar72) |
                                                                            -((float)uVar56 < fVar71
                                                                             )))));
      uVar39 = (ushort)(uVar91 >> 0x10) ^ 1;
      uVar40 = (ushort)(uVar91 >> 0x20) ^ 1;
      uVar42 = (ushort)(uVar91 >> 0x30) ^ 1;
      auVar99._0_4_ = (int)((uint)(uint3)((uint3)uVar91 ^ 0x10001) << 0x1f) >> 0x1f;
      auVar99._4_4_ = (int)((uint)uVar39 << 0x1f) >> 0x1f;
      auVar99._8_4_ = (int)((uint)uVar40 << 0x1f) >> 0x1f;
      auVar99._12_4_ = (int)((uint)uVar42 << 0x1f) >> 0x1f;
      NEON_ext(auVar99,auVar99,8,1);
      if (CONCAT13((char)((short)(uVar42 << 0xf) >> 0xf),
                   CONCAT12((char)((short)(uVar40 << 0xf) >> 0xf),
                            CONCAT11((char)((short)(uVar39 << 0xf) >> 0xf),
                                     (char)((short)(((ushort)uVar91 ^ 1) << 0xf) >> 0xf)))) == -1) {
        auVar57 = NEON_frecpe(auVar79,4);
        auVar58 = NEON_frecps(auVar57,auVar79,4);
        fVar109 = auVar57._0_4_ * auVar58._0_4_;
        fVar104 = auVar57._4_4_ * auVar58._4_4_;
        fVar102 = auVar57._8_4_ * auVar58._8_4_;
        fVar103 = (fVar72 - fVar71) * fVar109;
        fVar126 = (fVar41 - fVar73) * fVar104;
        fVar129 = (fVar75 - fVar74) * fVar102;
        fVar123 = (0.0 - fVar96) * 0.0;
        auVar100[0] = SUB41(fVar103,0) & ~(byte)auVar89._0_4_;
        auVar100[1] = (byte)((uint)fVar103 >> 8) & ~(byte)((uint)auVar89._0_4_ >> 8);
        auVar100[2] = (byte)((uint)fVar103 >> 0x10) & ~(byte)((uint)auVar89._0_4_ >> 0x10);
        auVar100[3] = (byte)((uint)fVar103 >> 0x18) & ~(byte)((uint)auVar89._0_4_ >> 0x18);
        auVar100[4] = SUB41(fVar126,0) & ~(byte)auVar89._4_4_;
        auVar100[5] = (byte)((uint)fVar126 >> 8) & ~(byte)((uint)auVar89._4_4_ >> 8);
        auVar100[6] = (byte)((uint)fVar126 >> 0x10) & ~(byte)((uint)auVar89._4_4_ >> 0x10);
        auVar100[7] = (byte)((uint)fVar126 >> 0x18) & ~(byte)((uint)auVar89._4_4_ >> 0x18);
        auVar100[8] = SUB41(fVar129,0) & ~(byte)auVar89._8_4_;
        auVar100[9] = (byte)((uint)fVar129 >> 8) & ~(byte)((uint)auVar89._8_4_ >> 8);
        auVar100[10] = (byte)((uint)fVar129 >> 0x10) & ~(byte)((uint)auVar89._8_4_ >> 0x10);
        auVar100[0xb] = (byte)((uint)fVar129 >> 0x18) & ~(byte)((uint)auVar89._8_4_ >> 0x18);
        auVar100[0xc] = SUB41(fVar123,0) & ~(byte)auVar89._12_4_;
        auVar100[0xd] = (byte)((uint)fVar123 >> 8) & ~(byte)((uint)auVar89._12_4_ >> 8);
        auVar100[0xe] = (byte)((uint)fVar123 >> 0x10) & ~(byte)((uint)auVar89._12_4_ >> 0x10);
        auVar100[0xf] = (byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)auVar89._12_4_ >> 0x18);
        auVar90._0_4_ = ((float)uVar56 - fVar71) * fVar109;
        auVar90._4_4_ = (fVar108 - fVar73) * fVar104;
        auVar90._8_4_ = (fVar10 - fVar74) * fVar102;
        auVar90._12_4_ = (fVar11 - fVar96) * 0.0;
        auVar9[8] = uVar43;
        auVar9._0_8_ = uVar12;
        auVar9[9] = uVar44;
        auVar9[10] = uVar45;
        auVar9[0xb] = uVar46;
        auVar9[0xc] = uVar47;
        auVar9[0xd] = uVar48;
        auVar9[0xe] = uVar49;
        auVar9[0xf] = uVar50;
        auVar90 = auVar90 ^ (auVar90 ^ auVar9) & auVar89;
        auVar58 = NEON_fmin(auVar100,auVar90,4);
        auVar57 = NEON_fmax(auVar100,auVar90,4);
        uVar92 = NEON_fmaxp(CONCAT44(auVar58._8_4_,auVar58._8_4_),auVar58._0_8_,4);
        uVar80 = NEON_fminp(CONCAT44(auVar57._8_4_,auVar57._8_4_),auVar57._0_8_,4);
        uVar92 = NEON_fmaxp(uVar92,uVar92,4);
        uVar80 = NEON_fminp(uVar80,uVar80,4);
        uVar92 = NEON_fmax(uVar92,0,4);
        uVar80 = NEON_fmin(uVar76,uVar80,4);
        fVar109 = (float)uVar92;
        iVar131 = -(uint)((float)uVar76 < fVar109);
        fVar108 = (float)uVar80;
        iVar122 = -(uint)(fVar108 < fVar109);
        iVar122 = CONCAT13((byte)((uint)iVar122 >> 0x18) | (byte)((uint)iVar131 >> 0x18),
                           CONCAT12((byte)((uint)iVar122 >> 0x10) | (byte)((uint)iVar131 >> 0x10),
                                    CONCAT11((byte)((uint)iVar122 >> 8) | (byte)((uint)iVar131 >> 8)
                                             ,(byte)iVar122 | (byte)iVar131)));
        auVar101._0_4_ = -(uint)(iVar122 == 0);
        auVar101._4_4_ = -(uint)(iVar122 == 0);
        auVar101._8_4_ = -(uint)(iVar122 == 0);
        auVar101._12_4_ = -(uint)(iVar122 == 0);
        NEON_ext(auVar101,auVar101,8,1);
        if (CONCAT13((char)auVar101._12_4_,
                     CONCAT12((char)auVar101._8_4_,
                              CONCAT11((char)auVar101._4_4_,(char)auVar101._0_4_))) == -1) {
          if (!bVar33) {
            auVar94._0_8_ =
                 CONCAT44(fVar73 + auVar79._4_4_ * fVar109,fVar71 + auVar79._0_4_ * fVar109);
            auVar94._8_4_ = fVar74 + auVar79._8_4_ * fVar109;
            auVar94._12_4_ = fVar96 + auVar79._12_4_ * fVar109;
            auVar58 = NEON_ext(auVar94,auVar94,8,1);
            puVar5 = (undefined8 *)(param_6 + (ulong)*param_7 * 0x30);
            puVar5[1] = 0;
            *puVar5 = auVar94._0_8_;
            lVar37 = param_6 + (ulong)*param_7 * 0x30;
            *(ulong *)(lVar37 + 0x18) = (ulong)(uint)auVar58._0_4_;
            *(undefined8 *)(lVar37 + 0x10) = auVar94._0_8_;
            auVar57 = *param_5;
            auVar95._0_12_ = auVar57._0_12_;
            auVar95._12_4_ = -auVar58._0_4_;
            lVar37 = param_6 + (ulong)*param_7 * 0x30;
            *param_7 = *param_7 + 1;
            *(long *)(lVar37 + 0x28) = auVar95._8_8_;
            *(long *)(lVar37 + 0x20) = auVar57._0_8_;
          }
          if (!bVar34) {
            fVar71 = fVar71 + auVar79._0_4_ * fVar108;
            fVar73 = fVar73 + auVar79._4_4_ * fVar108;
            fVar74 = fVar74 + auVar79._8_4_ * fVar108;
            fVar96 = fVar96 + auVar79._12_4_ * fVar108;
            auVar13._4_4_ = fVar73;
            auVar13._0_4_ = fVar71;
            auVar13._8_4_ = fVar74;
            auVar13._12_4_ = fVar96;
            auVar14._4_4_ = fVar73;
            auVar14._0_4_ = fVar71;
            auVar14._8_4_ = fVar74;
            auVar14._12_4_ = fVar96;
            auVar57 = NEON_ext(auVar13,auVar14,8,1);
            puVar5 = (undefined8 *)(param_6 + (ulong)*param_7 * 0x30);
            puVar5[1] = 0;
            *puVar5 = CONCAT44(fVar73,fVar71);
            lVar37 = param_6 + (ulong)*param_7 * 0x30;
            *(ulong *)(lVar37 + 0x18) = (ulong)(uint)auVar57._0_4_;
            *(ulong *)(lVar37 + 0x10) = CONCAT44(fVar73,fVar71);
            uVar92 = *(undefined8 *)(*param_5 + 8);
            uVar80 = *(undefined8 *)*param_5;
            lVar37 = param_6 + (ulong)*param_7 * 0x30;
            *param_7 = *param_7 + 1;
            *(ulong *)(lVar37 + 0x28) = CONCAT44(-auVar57._0_4_,(int)uVar92);
            *(undefined8 *)(lVar37 + 0x20) = uVar80;
          }
        }
      }
    }
LAB_0025861c:
    if (uVar36 == 3) {
      return;
    }
    cVar35 = *(char *)(((ulong)pcVar1 | 1) + uVar36);
    uVar91 = uVar36;
    uVar36 = uVar36 + 1;
  } while( true );
}


