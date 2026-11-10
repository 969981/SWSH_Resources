/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00238f80; name: FUN_00238f80
 */


undefined1  [16]
FUN_00238f80(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  undefined2 uVar15;
  float fVar16;
  float fVar18;
  ulong uVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined3 uVar27;
  int iVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar44;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar52;
  float fVar53;
  int iVar54;
  float fVar57;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined8 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  ulong uVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  uint uVar86;
  undefined1 auVar87 [16];
  undefined8 uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  ulong local_60;
  uint local_58;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  auVar63 = *param_1;
  auVar45 = param_1[1];
  pauVar11 = param_1 + 2;
  auVar79 = *pauVar11;
  fVar19 = auVar63._0_4_;
  fVar26 = auVar45._0_4_;
  auVar59._0_4_ = fVar26 - fVar19;
  fVar20 = auVar63._4_4_;
  fVar41 = auVar45._4_4_;
  auVar59._4_4_ = fVar41 - fVar20;
  fVar21 = auVar63._8_4_;
  fVar42 = auVar45._8_4_;
  auVar59._8_4_ = fVar42 - fVar21;
  fVar22 = auVar63._12_4_;
  fVar43 = auVar45._12_4_;
  auVar59._12_4_ = fVar43 - fVar22;
  fVar44 = auVar79._0_4_;
  auVar62._0_4_ = fVar44 - fVar19;
  fVar49 = auVar79._4_4_;
  auVar62._4_4_ = fVar49 - fVar20;
  fVar50 = auVar79._8_4_;
  auVar62._8_4_ = fVar50 - fVar21;
  fVar51 = auVar79._12_4_;
  auVar62._12_4_ = fVar51 - fVar22;
  auVar66 = NEON_ext(auVar59,auVar59,8,1);
  auVar83 = NEON_ext(auVar62,auVar62,8,1);
  fVar71 = auVar59._0_4_ * auVar62._4_4_ - auVar59._4_4_ * auVar62._0_4_;
  auVar37._0_8_ =
       NEON_ext(CONCAT44(auVar59._4_4_ * auVar62._8_4_ - auVar59._8_4_ * auVar62._4_4_,fVar71),
                CONCAT44(auVar66._4_4_ * auVar62._4_4_ - auVar59._4_4_ * auVar83._4_4_,
                         auVar66._0_4_ * auVar62._0_4_ - auVar59._0_4_ * auVar83._0_4_),4,1);
  fVar23 = (float)auVar37._0_8_;
  fVar64 = (float)((ulong)auVar37._0_8_ >> 0x20);
  auVar91._0_4_ = fVar23 * fVar23;
  auVar91._4_4_ = fVar64 * fVar64;
  auVar91._8_4_ = fVar71 * fVar71;
  auVar91._12_4_ = 0;
  auVar72 = NEON_ext(auVar91,auVar91,8,1);
  fVar18 = auVar72._0_4_ + auVar72._4_4_;
  fVar16 = auVar91._0_4_ + auVar91._4_4_ + fVar18;
  fVar18 = auVar91._0_4_ + auVar91._4_4_ + fVar18;
  uVar17 = CONCAT44(fVar18,fVar16);
  auVar37._0_8_ = NEON_frsqrte(uVar17,4);
  fVar52 = (float)auVar37._0_8_;
  fVar57 = (float)((ulong)auVar37._0_8_ >> 0x20);
  auVar37._0_8_ = NEON_frsqrts(CONCAT44(fVar57 * fVar57,fVar52 * fVar52),uVar17,4);
  fVar52 = fVar52 * (float)auVar37._0_8_;
  fVar57 = fVar57 * (float)((ulong)auVar37._0_8_ >> 0x20);
  auVar37._0_8_ = NEON_frsqrts(CONCAT44(fVar57 * fVar57,fVar52 * fVar52),uVar17,4);
  fVar52 = fVar52 * (float)auVar37._0_8_;
  fVar57 = fVar57 * (float)((ulong)auVar37._0_8_ >> 0x20);
  auVar37._0_8_ = NEON_frsqrts(CONCAT44(fVar57 * fVar57,fVar52 * fVar52),uVar17,4);
  fVar52 = fVar52 * (float)auVar37._0_8_;
  fVar57 = fVar57 * (float)((ulong)auVar37._0_8_ >> 0x20);
  auVar37._0_8_ = NEON_frsqrts(CONCAT44(fVar57 * fVar57,fVar52 * fVar52),uVar17,4);
  uVar86 = -(uint)(fVar16 == 0.0);
  uVar76 = CONCAT44(fVar18 * fVar57 * (float)((ulong)auVar37._0_8_ >> 0x20),
                    fVar16 * fVar52 * (float)auVar37._0_8_);
  uVar76 = uVar76 ^ (uVar76 ^ uVar17) & CONCAT44(uVar86,uVar86);
  auVar37._0_8_ = NEON_frecpe(uVar76,4);
  uVar88 = NEON_frecps(uVar76,auVar37._0_8_,4);
  fVar53 = (float)auVar37._0_8_ * (float)uVar88;
  fVar18 = (float)((ulong)auVar37._0_8_ >> 0x20) * (float)((ulong)uVar88 >> 0x20);
  auVar37._0_8_ = NEON_frecps(uVar76,CONCAT44(fVar18,fVar53),4);
  fVar53 = fVar53 * (float)auVar37._0_8_;
  fVar18 = fVar18 * (float)((ulong)auVar37._0_8_ >> 0x20);
  auVar37._0_8_ = NEON_frecps(uVar76,CONCAT44(fVar18,fVar53),4);
  fVar53 = fVar53 * (float)auVar37._0_8_;
  fVar18 = fVar18 * (float)((ulong)auVar37._0_8_ >> 0x20);
  auVar37._0_8_ = NEON_frecps(uVar76,CONCAT44(fVar18,fVar53),4);
  fVar53 = fVar53 * (float)auVar37._0_8_;
  auVar37._0_8_ =
       NEON_frecps(uVar76,CONCAT44(fVar18 * (float)((ulong)auVar37._0_8_ >> 0x20),fVar53),4);
  fVar53 = fVar53 * (float)auVar37._0_8_;
  fVar18 = *(float *)param_1[3];
  fVar52 = *(float *)(param_1[3] + 4);
  fVar57 = *(float *)(param_1[3] + 8);
  fVar65 = *(float *)(param_1[3] + 0xc);
  auVar72._0_4_ = fVar18 - fVar19;
  auVar72._4_4_ = fVar52 - fVar20;
  auVar72._8_4_ = fVar57 - fVar21;
  auVar72._12_4_ = fVar65 - fVar22;
  auVar90._0_4_ = auVar72._0_4_ * fVar23 * fVar53;
  auVar90._4_4_ = auVar72._4_4_ * fVar64 * fVar53;
  auVar90._8_4_ = auVar72._8_4_ * fVar71 * fVar53;
  auVar90._12_4_ = auVar72._12_4_ * 0.0;
  auVar91 = NEON_ext(auVar90,auVar90,8,1);
  if (0.0001 <= ABS(auVar90._0_4_ + auVar90._4_4_ + auVar91._0_4_ + auVar91._4_4_)) {
    auVar63 = NEON_ext(auVar72,auVar72,8,1);
    auVar73._0_4_ = fVar18 - fVar26;
    auVar73._4_4_ = fVar52 - fVar41;
    auVar73._8_4_ = fVar57 - fVar42;
    auVar73._12_4_ = fVar65 - fVar43;
    auVar87._0_4_ = fVar44 - fVar26;
    auVar87._4_4_ = fVar49 - fVar41;
    auVar87._8_4_ = fVar50 - fVar42;
    auVar87._12_4_ = fVar51 - fVar43;
    fVar53 = auVar62._0_4_ * auVar72._4_4_ - auVar62._4_4_ * auVar72._0_4_;
    auVar37._0_8_ =
         NEON_ext(CONCAT44(auVar62._4_4_ * auVar72._8_4_ - auVar62._8_4_ * auVar72._4_4_,fVar53),
                  CONCAT44(auVar83._4_4_ * auVar72._4_4_ - auVar62._4_4_ * auVar63._4_4_,
                           auVar83._0_4_ * auVar72._0_4_ - auVar62._0_4_ * auVar63._0_4_),4,1);
    fVar24 = auVar59._4_4_ * auVar72._0_4_ - auVar59._0_4_ * auVar72._4_4_;
    uVar88 = NEON_ext(CONCAT44(auVar59._8_4_ * auVar72._4_4_ - auVar59._4_4_ * auVar72._8_4_,fVar24)
                      ,CONCAT44(auVar59._4_4_ * auVar63._4_4_ - auVar66._4_4_ * auVar72._4_4_,
                                auVar59._0_4_ * auVar63._0_4_ - auVar66._0_4_ * auVar72._0_4_),4,1);
    auVar63 = NEON_ext(auVar73,auVar73,8,1);
    auVar45 = NEON_ext(auVar87,auVar87,8,1);
    fVar25 = auVar87._4_4_ * auVar73._0_4_ - auVar87._0_4_ * auVar73._4_4_;
    auVar48._0_4_ = fVar44 * (float)uVar88;
    fVar16 = (float)((ulong)uVar88 >> 0x20);
    auVar48._4_4_ = fVar49 * fVar16;
    auVar48._8_4_ = fVar50 * fVar24;
    auVar48._12_4_ = fVar51 * 0.0;
    uVar61 = NEON_ext(CONCAT44(auVar87._8_4_ * auVar73._4_4_ - auVar87._4_4_ * auVar73._8_4_,fVar25)
                      ,CONCAT44(auVar87._4_4_ * auVar63._4_4_ - auVar45._4_4_ * auVar73._4_4_,
                                auVar87._0_4_ * auVar63._0_4_ - auVar45._0_4_ * auVar73._0_4_),4,1);
    auVar67._0_4_ = fVar19 * fVar23;
    auVar67._4_4_ = fVar20 * fVar64;
    auVar67._8_4_ = fVar21 * fVar71;
    auVar67._12_4_ = fVar22 * 0.0;
    auVar63 = NEON_ext(auVar67,auVar67,8,1);
    fVar18 = fVar18 * fVar23;
    fVar52 = fVar52 * fVar64;
    auVar45._4_4_ = fVar52;
    auVar45._0_4_ = fVar18;
    auVar45._8_4_ = fVar57 * fVar71;
    auVar45._12_4_ = fVar65 * 0.0;
    auVar79._4_4_ = fVar52;
    auVar79._0_4_ = fVar18;
    auVar79._8_4_ = fVar57 * fVar71;
    auVar79._12_4_ = fVar65 * 0.0;
    auVar45 = NEON_ext(auVar45,auVar79,8,1);
    fVar57 = auVar63._0_4_ + auVar63._4_4_;
    auVar68._0_4_ = fVar19 * (float)auVar37._0_8_;
    fVar65 = (float)((ulong)auVar37._0_8_ >> 0x20);
    auVar68._4_4_ = fVar20 * fVar65;
    auVar68._8_4_ = fVar21 * fVar53;
    auVar68._12_4_ = fVar22 * 0.0;
    auVar55._0_4_ = fVar26 * (float)auVar37._0_8_;
    auVar55._4_4_ = fVar41 * fVar65;
    auVar55._8_4_ = fVar42 * fVar53;
    auVar55._12_4_ = fVar43 * 0.0;
    auVar63 = NEON_ext(auVar68,auVar68,8,1);
    auVar40._0_4_ = fVar26 * (float)uVar61;
    fVar26 = (float)((ulong)uVar61 >> 0x20);
    auVar40._4_4_ = fVar41 * fVar26;
    auVar40._8_4_ = fVar42 * fVar25;
    auVar40._12_4_ = fVar43 * 0.0;
    fVar65 = auVar63._0_4_ + auVar63._4_4_;
    auVar74._0_4_ = fVar19 * (float)uVar88;
    auVar74._4_4_ = fVar20 * fVar16;
    auVar74._8_4_ = fVar21 * fVar24;
    auVar74._12_4_ = fVar22 * 0.0;
    auVar63 = NEON_ext(auVar48,auVar48,8,1);
    auVar66._0_4_ = fVar19 * (float)uVar61;
    auVar66._4_4_ = fVar20 * fVar26;
    auVar66._8_4_ = fVar21 * fVar25;
    auVar66._12_4_ = fVar22 * 0.0;
    fVar16 = auVar63._0_4_ + auVar63._4_4_;
    auVar63 = NEON_ext(auVar40,auVar40,8,1);
    auVar79 = NEON_ext(auVar74,auVar74,8,1);
    fVar19 = auVar79._0_4_ + auVar79._4_4_;
    auVar79 = NEON_ext(auVar66,auVar66,8,1);
    fVar20 = auVar45._0_4_ + auVar45._4_4_;
    auVar45 = NEON_ext(auVar55,auVar55,8,1);
    fVar21 = auVar63._0_4_ + auVar63._4_4_;
    fVar22 = auVar45._0_4_ + auVar45._4_4_;
    uVar58 = NEON_ext(CONCAT44(auVar67._0_4_ + auVar67._4_4_ + fVar57,
                               auVar67._0_4_ + auVar67._4_4_ + fVar57),
                      CONCAT44(auVar68._0_4_ + auVar68._4_4_ + fVar65,
                               auVar68._0_4_ + auVar68._4_4_ + fVar65),4,1);
    fVar57 = auVar79._0_4_ + auVar79._4_4_;
    uVar88 = NEON_ext(CONCAT44(auVar74._0_4_ + auVar74._4_4_ + fVar19,
                               auVar74._0_4_ + auVar74._4_4_ + fVar19),
                      CONCAT44(auVar40._0_4_ + auVar40._4_4_ + fVar21,
                               auVar40._0_4_ + auVar40._4_4_ + fVar21),4,1);
    uVar61 = NEON_ext(CONCAT44(fVar18 + fVar52 + fVar20,fVar18 + fVar52 + fVar20),
                      CONCAT44(auVar55._0_4_ + auVar55._4_4_ + fVar22,
                               auVar55._0_4_ + auVar55._4_4_ + fVar22),4,1);
    auVar37._0_8_ =
         NEON_ext(CONCAT44(auVar48._0_4_ + auVar48._4_4_ + fVar16,
                           auVar48._0_4_ + auVar48._4_4_ + fVar16),
                  CONCAT44(auVar66._0_4_ + auVar66._4_4_ + fVar57,
                           auVar66._0_4_ + auVar66._4_4_ + fVar57),4,1);
    local_50 = -(uint)(-1e-06 <= (float)uVar61 * (float)uVar58);
    iStack_4c = -(uint)(-1e-06 <= (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar58 >> 0x20));
    iStack_48 = -(uint)(-1e-06 <= (float)auVar37._0_8_ * (float)uVar88);
    iStack_44 = -(uint)(-1e-06 <=
                       (float)((ulong)auVar37._0_8_ >> 0x20) * (float)((ulong)uVar88 >> 0x20));
    auVar83[0] = ~(byte)local_50;
    auVar83[1] = ~(byte)((uint)local_50 >> 8);
    auVar83[2] = ~(byte)((uint)local_50 >> 0x10);
    auVar83[3] = ~(byte)((uint)local_50 >> 0x18);
    auVar83[4] = ~(byte)iStack_4c;
    auVar83[5] = ~(byte)((uint)iStack_4c >> 8);
    auVar83[6] = ~(byte)((uint)iStack_4c >> 0x10);
    auVar83[7] = ~(byte)((uint)iStack_4c >> 0x18);
    auVar83[8] = ~(byte)iStack_48;
    auVar83[9] = ~(byte)((uint)iStack_48 >> 8);
    auVar83[10] = ~(byte)((uint)iStack_48 >> 0x10);
    auVar83[0xb] = ~(byte)((uint)iStack_48 >> 0x18);
    auVar83[0xc] = ~(byte)iStack_44;
    auVar83[0xd] = ~(byte)((uint)iStack_44 >> 8);
    auVar83[0xe] = ~(byte)((uint)iStack_44 >> 0x10);
    auVar83[0xf] = ~(byte)((uint)iStack_44 >> 0x18);
    NEON_ext(auVar83,auVar83,8,1);
    uVar15 = CONCAT11(auVar83[4],auVar83[0]);
    uVar27 = CONCAT12(auVar83[8],uVar15);
    iVar28 = CONCAT13(auVar83[0xc],uVar27);
    if (iVar28 == -1) {
      return ZEXT816(0);
    }
    local_58 = DAT_01d4d0ac;
    local_60 = DAT_01d4d0a4;
    auVar63 = FUN_002379a0(param_1,&local_50,&local_60,param_6);
    uVar17 = local_60 & 0xffffffff;
    local_60 = local_60 >> 0x20;
    uVar76 = (ulong)local_58;
    auVar37._0_8_ = *(undefined8 *)param_1[uVar17];
    uVar88 = *(undefined8 *)param_1[local_60];
    uVar61 = *(undefined8 *)(param_1[local_60] + 8);
    uVar58 = *(undefined8 *)param_1[uVar76];
    uVar5 = *(undefined8 *)(param_1[uVar76] + 8);
    uVar6 = param_2[uVar17 * 2];
    uVar7 = (param_2 + uVar17 * 2)[1];
    uVar8 = param_2[local_60 * 2];
    uVar9 = (param_2 + local_60 * 2)[1];
    *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_1[uVar17] + 8);
    *(undefined8 *)*param_1 = auVar37._0_8_;
    *(undefined8 *)(param_1[1] + 8) = uVar61;
    *(undefined8 *)param_1[1] = uVar88;
    auVar37._0_8_ = param_2[uVar76 * 2];
    uVar88 = (param_2 + uVar76 * 2)[1];
    *(undefined8 *)(param_1[2] + 8) = uVar5;
    *(undefined8 *)param_1[2] = uVar58;
    uVar61 = param_3[uVar17 * 2];
    uVar58 = (param_3 + uVar17 * 2)[1];
    uVar5 = param_3[local_60 * 2];
    uVar10 = (param_3 + local_60 * 2)[1];
    param_2[1] = uVar7;
    *param_2 = uVar6;
    param_2[3] = uVar9;
    param_2[2] = uVar8;
    uVar6 = param_3[uVar76 * 2];
    uVar7 = (param_3 + uVar76 * 2)[1];
    uVar14 = param_4[local_60];
    uVar38 = param_4[uVar76];
    *param_4 = param_4[uVar17];
    param_4[1] = uVar14;
    uVar14 = param_5[uVar17];
    param_4[2] = uVar38;
    uVar38 = param_5[local_60];
    uVar1 = param_5[uVar76];
    *param_5 = uVar14;
    param_5[1] = uVar38;
    param_2[5] = uVar88;
    param_2[4] = auVar37._0_8_;
    param_3[1] = uVar58;
    *param_3 = uVar61;
    param_3[3] = uVar10;
    param_3[2] = uVar5;
    param_5[2] = uVar1;
    param_3[5] = uVar7;
    param_3[4] = uVar6;
    return auVar63;
  }
  *param_6 = 3;
  if (fVar16 <= 1.1920929e-07) {
    auVar39._0_4_ = auVar59._0_4_ * auVar59._0_4_;
    auVar39._4_4_ = auVar59._4_4_ * auVar59._4_4_;
    auVar39._8_4_ = auVar59._8_4_ * auVar59._8_4_;
    auVar39._12_4_ = auVar59._12_4_ * auVar59._12_4_;
    auVar45 = NEON_ext(auVar39,auVar39,8,1);
    fVar52 = auVar45._0_4_ + auVar45._4_4_;
    fVar18 = auVar39._0_4_ + auVar39._4_4_ + fVar52;
    auVar37._0_8_ = CONCAT44(auVar39._0_4_ + auVar39._4_4_ + fVar52,fVar18);
    bVar2 = fVar18 <= 1.1920929e-07;
    auVar46._0_4_ = -(uint)bVar2;
    auVar46._4_4_ = -(uint)bVar2;
    auVar46._8_4_ = -(uint)bVar2;
    auVar46._12_4_ = -(uint)bVar2;
    NEON_ext(auVar46,auVar46,8,1);
    *param_6 = 2;
    if (CONCAT13((char)auVar46._12_4_,
                 CONCAT12((char)auVar46._8_4_,CONCAT11((char)auVar46._4_4_,(char)auVar46._0_4_))) ==
        -1) {
      *param_6 = 1;
      return auVar63;
    }
    auVar47._0_4_ = -fVar19 * auVar59._0_4_;
    auVar47._4_4_ = -fVar20 * auVar59._4_4_;
    auVar47._8_4_ = -fVar21 * auVar59._8_4_;
    auVar47._12_4_ = auVar59._12_4_ * 0.0;
    auVar63 = NEON_ext(auVar47,auVar47,8,1);
    fVar18 = auVar63._0_4_ + auVar63._4_4_;
    uVar61 = NEON_frecpe(auVar37._0_8_,4);
    uVar88 = NEON_frecps(auVar37._0_8_,uVar61,4);
    fVar52 = (float)uVar61 * (float)uVar88;
    fVar57 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
    uVar88 = NEON_frecps(auVar37._0_8_,CONCAT44(fVar57,fVar52),4);
    fVar52 = fVar52 * (float)uVar88;
    fVar57 = fVar57 * (float)((ulong)uVar88 >> 0x20);
    uVar88 = NEON_frecps(auVar37._0_8_,CONCAT44(fVar57,fVar52),4);
    fVar52 = fVar52 * (float)uVar88;
    fVar57 = fVar57 * (float)((ulong)uVar88 >> 0x20);
    uVar88 = NEON_frecps(auVar37._0_8_,CONCAT44(fVar57,fVar52),4);
    fVar52 = fVar52 * (float)uVar88;
    fVar57 = fVar57 * (float)((ulong)uVar88 >> 0x20);
    auVar37._0_8_ = NEON_frecps(auVar37._0_8_,CONCAT44(fVar57,fVar52),4);
    uVar88 = NEON_fmov(0x3f800000,4);
    auVar37._0_8_ =
         NEON_fmin(CONCAT44((auVar47._0_4_ + auVar47._4_4_ + fVar18) *
                            fVar57 * (float)((ulong)auVar37._0_8_ >> 0x20),
                            (auVar47._0_4_ + auVar47._4_4_ + fVar18) * fVar52 * (float)auVar37._0_8_
                           ),uVar88,4);
    auVar37._0_8_ = NEON_fmax(auVar37._0_8_,0,4);
    fVar18 = (float)auVar37._0_8_;
    auVar29._0_8_ = CONCAT44(fVar20 + auVar59._4_4_ * fVar18,fVar19 + auVar59._0_4_ * fVar18);
    auVar29._8_4_ = fVar21 + auVar59._8_4_ * fVar18;
    auVar29._12_4_ = fVar22 + auVar59._12_4_ * fVar18;
    auVar63 = NEON_ext(auVar29,auVar29,8,1);
    auVar30._8_4_ = auVar63._0_4_;
    auVar30._0_8_ = auVar29._0_8_;
    auVar30._12_4_ = 0;
    return auVar30;
  }
  if ((uVar86 & 1) != 0) {
    return auVar63;
  }
  auVar91 = NEON_ext(auVar45,auVar45,8,1);
  auVar66 = NEON_ext(auVar79,auVar79,8,1);
  fVar52 = fVar26 * fVar49 - fVar41 * fVar44;
  auVar72 = NEON_ext(auVar63,auVar63,8,1);
  uVar61 = NEON_ext(CONCAT44(fVar41 * fVar50 - fVar42 * fVar49,fVar52),
                    CONCAT44(auVar91._4_4_ * fVar49 - fVar41 * auVar66._4_4_,
                             auVar91._0_4_ * fVar44 - fVar26 * auVar66._0_4_),4,1);
  fVar18 = fVar20 * fVar44 - fVar19 * fVar49;
  auVar37._0_8_ =
       NEON_ext(CONCAT44(fVar21 * fVar49 - fVar20 * fVar50,fVar18),
                CONCAT44(fVar20 * auVar66._4_4_ - auVar72._4_4_ * fVar49,
                         fVar19 * auVar66._0_4_ - auVar72._0_4_ * fVar44),4,1);
  fVar57 = fVar19 * fVar41 - fVar20 * fVar26;
  uVar88 = NEON_ext(CONCAT44(fVar20 * fVar42 - fVar21 * fVar41,fVar57),
                    CONCAT44(auVar72._4_4_ * fVar41 - fVar20 * auVar91._4_4_,
                             auVar72._0_4_ * fVar26 - fVar19 * auVar91._0_4_),4,1);
  auVar69._0_4_ = (float)uVar61 * fVar23;
  auVar69._4_4_ = (float)((ulong)uVar61 >> 0x20) * fVar64;
  auVar69._8_4_ = fVar52 * fVar71;
  auVar69._12_4_ = 0;
  auVar91 = NEON_ext(auVar69,auVar69,8,1);
  auVar77._0_4_ = (float)auVar37._0_8_ * fVar23;
  auVar77._4_4_ = (float)((ulong)auVar37._0_8_ >> 0x20) * fVar64;
  auVar77._8_4_ = fVar18 * fVar71;
  auVar77._12_4_ = 0;
  fVar18 = auVar69._0_4_ + auVar69._4_4_ + auVar91._0_4_ + auVar91._4_4_;
  auVar91 = NEON_ext(auVar77,auVar77,8,1);
  fVar52 = auVar77._0_4_ + auVar77._4_4_ + auVar91._0_4_ + auVar91._4_4_;
  auVar70._0_4_ = (float)uVar88 * fVar23;
  auVar70._4_4_ = (float)((ulong)uVar88 >> 0x20) * fVar64;
  auVar70._8_4_ = fVar57 * fVar71;
  auVar70._12_4_ = 0;
  auVar91 = NEON_ext(auVar70,auVar70,8,1);
  fVar57 = auVar70._0_4_ + auVar70._4_4_ + auVar91._0_4_ + auVar91._4_4_;
  bVar2 = 0.0 <= fVar57 && (0.0 <= fVar52 && 0.0 <= fVar18);
  auVar82._0_4_ = -(uint)bVar2;
  auVar82._4_4_ = -(uint)bVar2;
  auVar82._8_4_ = -(uint)bVar2;
  auVar82._12_4_ = -(uint)bVar2;
  NEON_ext(auVar82,auVar82,8,1);
  if (CONCAT13((char)auVar82._12_4_,
               CONCAT12((char)auVar82._8_4_,CONCAT11((char)auVar82._4_4_,(char)auVar82._0_4_))) ==
      -1) {
    auVar33._0_4_ = fVar19 * fVar23;
    auVar33._4_4_ = fVar20 * fVar64;
    auVar33._8_4_ = fVar21 * fVar71;
    auVar33._12_4_ = fVar22 * 0.0;
    auVar63 = NEON_ext(auVar33,auVar33,8,1);
    auVar37._0_8_ = NEON_frecpe(uVar17,4);
    uVar88 = NEON_frecps(uVar17,auVar37._0_8_,4);
    fVar18 = (float)auVar37._0_8_ * (float)uVar88;
    fVar52 = (float)((ulong)auVar37._0_8_ >> 0x20) * (float)((ulong)uVar88 >> 0x20);
    auVar37._0_8_ = NEON_frecps(uVar17,CONCAT44(fVar52,fVar18),4);
    fVar18 = fVar18 * (float)auVar37._0_8_;
    fVar52 = fVar52 * (float)((ulong)auVar37._0_8_ >> 0x20);
    auVar37._0_8_ = NEON_frecps(uVar17,CONCAT44(fVar52,fVar18),4);
    fVar18 = fVar18 * (float)auVar37._0_8_;
    fVar52 = fVar52 * (float)((ulong)auVar37._0_8_ >> 0x20);
    auVar37._0_8_ = NEON_frecps(uVar17,CONCAT44(fVar52,fVar18),4);
    fVar18 = fVar18 * (float)auVar37._0_8_;
    auVar37._0_8_ =
         NEON_frecps(uVar17,CONCAT44(fVar52 * (float)((ulong)auVar37._0_8_ >> 0x20),fVar18),4);
    fVar18 = (auVar33._0_4_ + auVar33._4_4_ + auVar63._0_4_ + auVar63._4_4_) *
             fVar18 * (float)auVar37._0_8_;
    auVar34._0_4_ = fVar23 * fVar18;
    auVar34._4_4_ = fVar64 * fVar18;
    auVar34._8_4_ = fVar71 * fVar18;
    auVar34._12_4_ = 0;
    return auVar34;
  }
  fVar64 = -fVar19 * auVar59._0_4_;
  fVar71 = -fVar20 * auVar59._4_4_;
  fVar65 = -fVar21 * auVar59._8_4_;
  auVar3._4_4_ = fVar71;
  auVar3._0_4_ = fVar64;
  auVar3._8_4_ = fVar65;
  auVar3._12_4_ = auVar59._12_4_ * 0.0;
  auVar4._4_4_ = fVar71;
  auVar4._0_4_ = fVar64;
  auVar4._8_4_ = fVar65;
  auVar4._12_4_ = auVar59._12_4_ * 0.0;
  auVar91 = NEON_ext(auVar3,auVar4,8,1);
  fVar53 = auVar91._0_4_ + auVar91._4_4_;
  auVar75._0_4_ = -fVar26 * auVar59._0_4_;
  auVar75._4_4_ = -fVar41 * auVar59._4_4_;
  auVar75._8_4_ = -fVar42 * auVar59._8_4_;
  auVar75._12_4_ = auVar59._12_4_ * 0.0;
  auVar91 = NEON_ext(auVar75,auVar75,8,1);
  fVar23 = auVar91._0_4_ + auVar91._4_4_;
  fVar65 = fVar64 + fVar71 + fVar53;
  fVar16 = auVar75._0_4_ + auVar75._4_4_ + fVar23;
  fVar23 = auVar75._0_4_ + auVar75._4_4_ + fVar23;
  bVar2 = (0.0 <= fVar65 && fVar57 <= 0.0) && fVar16 <= 0.0;
  auVar84._0_4_ = -(uint)bVar2;
  auVar84._4_4_ = -(uint)bVar2;
  auVar84._8_4_ = -(uint)bVar2;
  auVar84._12_4_ = -(uint)bVar2;
  NEON_ext(auVar84,auVar84,8,1);
  if (CONCAT13((char)auVar84._12_4_,
               CONCAT12((char)auVar84._8_4_,CONCAT11((char)auVar84._4_4_,(char)auVar84._0_4_))) ==
      -1) {
    auVar37._0_8_ = CONCAT44((fVar64 + fVar71 + fVar53) - fVar23,fVar65 - fVar16);
    uVar88 = NEON_frecpe(auVar37._0_8_,4);
    uVar61 = NEON_frecps(auVar37._0_8_,uVar88,4);
    fVar18 = (float)uVar88 * (float)uVar61;
    fVar52 = (float)((ulong)uVar88 >> 0x20) * (float)((ulong)uVar61 >> 0x20);
    uVar88 = NEON_frecps(auVar37._0_8_,CONCAT44(fVar52,fVar18),4);
    fVar18 = fVar18 * (float)uVar88;
    fVar52 = fVar52 * (float)((ulong)uVar88 >> 0x20);
    uVar88 = NEON_frecps(auVar37._0_8_,CONCAT44(fVar52,fVar18),4);
    fVar18 = fVar18 * (float)uVar88;
    fVar52 = fVar52 * (float)((ulong)uVar88 >> 0x20);
    uVar88 = NEON_frecps(auVar37._0_8_,CONCAT44(fVar52,fVar18),4);
    fVar18 = fVar18 * (float)uVar88;
    auVar37._0_8_ =
         NEON_frecps(auVar37._0_8_,CONCAT44(fVar52 * (float)((ulong)uVar88 >> 0x20),fVar18),4);
    fVar65 = fVar65 * (float)(-(uint)(1.1920929e-07 < ABS(fVar65 - fVar16)) &
                             (uint)(fVar18 * (float)auVar37._0_8_));
    lVar13 = 0;
    uVar14 = 2;
    auVar35._0_8_ = CONCAT44(fVar20 + auVar59._4_4_ * fVar65,fVar19 + auVar59._0_4_ * fVar65);
    auVar35._8_4_ = fVar21 + auVar59._8_4_ * fVar65;
    auVar35._12_4_ = fVar22 + auVar59._12_4_ * fVar65;
    auVar63 = NEON_ext(auVar35,auVar35,8,1);
    auVar63._8_4_ = auVar63._0_4_;
    auVar63._0_8_ = auVar35._0_8_;
    auVar63._12_4_ = 0;
LAB_002397f8:
    lVar12 = 1;
    pauVar11 = param_1 + 1;
  }
  else {
    auVar85._0_4_ = -fVar26 * auVar62._0_4_;
    auVar85._4_4_ = -fVar41 * auVar62._4_4_;
    auVar85._8_4_ = -fVar42 * auVar62._8_4_;
    auVar85._12_4_ = auVar62._12_4_ * 0.0;
    auVar91 = NEON_ext(auVar85,auVar85,8,1);
    fVar71 = auVar91._0_4_ + auVar91._4_4_;
    auVar60._0_4_ = auVar59._0_4_ * -fVar44;
    auVar60._4_4_ = auVar59._4_4_ * -fVar49;
    auVar60._8_4_ = auVar59._8_4_ * -fVar50;
    auVar60._12_4_ = auVar59._12_4_ * 0.0;
    auVar89._0_4_ = auVar62._0_4_ * -fVar44;
    auVar89._4_4_ = auVar62._4_4_ * -fVar49;
    auVar89._8_4_ = auVar62._8_4_ * -fVar50;
    auVar89._12_4_ = auVar62._12_4_ * 0.0;
    fVar57 = auVar85._0_4_ + auVar85._4_4_ + fVar71;
    auVar91 = NEON_ext(auVar60,auVar60,8,1);
    fVar24 = auVar91._0_4_ + auVar91._4_4_;
    fVar53 = auVar60._0_4_ + auVar60._4_4_ + fVar24;
    auVar91 = NEON_ext(auVar89,auVar89,8,1);
    fVar25 = auVar91._0_4_ + auVar91._4_4_;
    fVar64 = auVar89._0_4_ + auVar89._4_4_ + fVar25;
    fVar25 = auVar89._0_4_ + auVar89._4_4_ + fVar25;
    bVar2 = (fVar16 <= fVar57 && fVar18 <= 0.0) && fVar64 <= fVar53;
    auVar80._0_4_ = -(uint)bVar2;
    auVar80._4_4_ = -(uint)bVar2;
    auVar80._8_4_ = -(uint)bVar2;
    auVar80._12_4_ = -(uint)bVar2;
    NEON_ext(auVar80,auVar80,8,1);
    if (CONCAT13((char)auVar80._12_4_,
                 CONCAT12((char)auVar80._8_4_,CONCAT11((char)auVar80._4_4_,(char)auVar80._0_4_))) ==
        -1) {
      fVar18 = (fVar57 - fVar16) + (fVar53 - fVar64);
      uVar88 = CONCAT44(((auVar85._0_4_ + auVar85._4_4_ + fVar71) - fVar23) +
                        ((auVar60._0_4_ + auVar60._4_4_ + fVar24) - fVar25),fVar18);
      auVar37._0_8_ = NEON_frecpe(uVar88,4);
      uVar61 = NEON_frecps(uVar88,auVar37._0_8_,4);
      fVar52 = (float)auVar37._0_8_ * (float)uVar61;
      fVar65 = (float)((ulong)auVar37._0_8_ >> 0x20) * (float)((ulong)uVar61 >> 0x20);
      auVar37._0_8_ = NEON_frecps(uVar88,CONCAT44(fVar65,fVar52),4);
      fVar52 = fVar52 * (float)auVar37._0_8_;
      fVar65 = fVar65 * (float)((ulong)auVar37._0_8_ >> 0x20);
      auVar37._0_8_ = NEON_frecps(uVar88,CONCAT44(fVar65,fVar52),4);
      fVar52 = fVar52 * (float)auVar37._0_8_;
      fVar65 = fVar65 * (float)((ulong)auVar37._0_8_ >> 0x20);
      auVar37._0_8_ = NEON_frecps(uVar88,CONCAT44(fVar65,fVar52),4);
      fVar52 = fVar52 * (float)auVar37._0_8_;
      auVar37._0_8_ =
           NEON_frecps(uVar88,CONCAT44(fVar65 * (float)((ulong)auVar37._0_8_ >> 0x20),fVar52),4);
      fVar18 = (fVar57 - fVar16) *
               (float)(-(uint)(1.1920929e-07 < ABS(fVar18)) & (uint)(fVar52 * (float)auVar37._0_8_))
      ;
      auVar36._0_8_ =
           CONCAT44(fVar41 + (fVar49 - fVar41) * fVar18,fVar26 + (fVar44 - fVar26) * fVar18);
      auVar36._8_4_ = fVar42 + (fVar50 - fVar42) * fVar18;
      auVar36._12_4_ = fVar43 + (fVar51 - fVar43) * fVar18;
      auVar63 = NEON_ext(auVar36,auVar36,8,1);
      uVar38 = auVar63._0_4_;
      lVar13 = 1;
      auVar37._0_8_ = auVar36._0_8_;
    }
    else {
      auVar81._0_4_ = -fVar19 * auVar62._0_4_;
      auVar81._4_4_ = -fVar20 * auVar62._4_4_;
      auVar81._8_4_ = -fVar21 * auVar62._8_4_;
      auVar81._12_4_ = auVar62._12_4_ * 0.0;
      auVar91 = NEON_ext(auVar81,auVar81,8,1);
      fVar26 = auVar91._0_4_ + auVar91._4_4_;
      fVar18 = auVar81._0_4_ + auVar81._4_4_ + fVar26;
      bVar2 = fVar64 <= 0.0 && (fVar52 <= 0.0 && 0.0 <= fVar18);
      auVar78._0_4_ = -(uint)bVar2;
      auVar78._4_4_ = -(uint)bVar2;
      auVar78._8_4_ = -(uint)bVar2;
      auVar78._12_4_ = -(uint)bVar2;
      NEON_ext(auVar78,auVar78,8,1);
      if (CONCAT13((char)auVar78._12_4_,
                   CONCAT12((char)auVar78._8_4_,CONCAT11((char)auVar78._4_4_,(char)auVar78._0_4_)))
          != -1) {
        bVar2 = fVar65 <= 0.0 && fVar18 <= 0.0;
        auVar56._0_4_ = -(uint)bVar2;
        auVar56._4_4_ = -(uint)bVar2;
        auVar56._8_4_ = -(uint)bVar2;
        auVar56._12_4_ = -(uint)bVar2;
        NEON_ext(auVar56,auVar56,8,1);
        if (CONCAT13((char)auVar56._12_4_,
                     CONCAT12((char)auVar56._8_4_,CONCAT11((char)auVar56._4_4_,(char)auVar56._0_4_))
                    ) == -1) {
          lVar13 = 0;
          uVar14 = 1;
        }
        else {
          bVar2 = 0.0 <= fVar16 && fVar57 <= fVar16;
          auVar31._0_4_ = -(uint)bVar2;
          auVar31._4_4_ = -(uint)bVar2;
          auVar31._8_4_ = -(uint)bVar2;
          auVar31._12_4_ = -(uint)bVar2;
          NEON_ext(auVar31,auVar31,8,1);
          iVar28 = CONCAT13((char)auVar31._12_4_,
                            CONCAT12((char)auVar31._8_4_,
                                     CONCAT11((char)auVar31._4_4_,(char)auVar31._0_4_)));
          iVar54 = -(uint)(iVar28 == -1);
          auVar32._4_4_ = iVar54;
          auVar32._0_4_ = iVar54;
          auVar32._8_4_ = iVar54;
          auVar32._12_4_ = iVar54;
          auVar63 = auVar79 ^ (auVar79 ^ auVar45) & auVar32;
          uVar14 = 1;
          lVar13 = 1;
          if (iVar28 != -1) {
            lVar13 = 2;
          }
        }
        goto LAB_002397f8;
      }
      uVar88 = CONCAT44((auVar81._0_4_ + auVar81._4_4_ + fVar26) - fVar25,fVar18 - fVar64);
      uVar61 = NEON_frecpe(uVar88,4);
      auVar37._0_8_ = NEON_frecps(uVar88,uVar61,4);
      fVar52 = (float)uVar61 * (float)auVar37._0_8_;
      fVar57 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)auVar37._0_8_ >> 0x20);
      auVar37._0_8_ = NEON_frecps(uVar88,CONCAT44(fVar57,fVar52),4);
      fVar52 = fVar52 * (float)auVar37._0_8_;
      fVar57 = fVar57 * (float)((ulong)auVar37._0_8_ >> 0x20);
      auVar37._0_8_ = NEON_frecps(uVar88,CONCAT44(fVar57,fVar52),4);
      fVar52 = fVar52 * (float)auVar37._0_8_;
      fVar57 = fVar57 * (float)((ulong)auVar37._0_8_ >> 0x20);
      auVar37._0_8_ = NEON_frecps(uVar88,CONCAT44(fVar57,fVar52),4);
      fVar52 = fVar52 * (float)auVar37._0_8_;
      auVar37._0_8_ =
           NEON_frecps(uVar88,CONCAT44(fVar57 * (float)((ulong)auVar37._0_8_ >> 0x20),fVar52),4);
      fVar18 = fVar18 * (float)(-(uint)(1.1920929e-07 < ABS(fVar18 - fVar64)) &
                               (uint)(fVar52 * (float)auVar37._0_8_));
      lVar13 = 0;
      auVar37._0_8_ = CONCAT44(fVar20 + auVar62._4_4_ * fVar18,fVar19 + auVar62._0_4_ * fVar18);
      auVar37._8_4_ = fVar21 + auVar62._8_4_ * fVar18;
      auVar37._12_4_ = fVar22 + auVar62._12_4_ * fVar18;
      auVar63 = NEON_ext(auVar37,auVar37,8,1);
      uVar38 = auVar63._0_4_;
    }
    uVar14 = 2;
    auVar63._8_4_ = uVar38;
    auVar63._0_8_ = auVar37._0_8_;
    auVar63._12_4_ = 0;
    lVar12 = 2;
  }
  auVar37._0_8_ = *(undefined8 *)param_1[lVar13];
  uVar88 = *(undefined8 *)*pauVar11;
  uVar61 = *(undefined8 *)(*pauVar11 + 8);
  uVar58 = param_2[lVar13 * 2];
  uVar5 = (param_2 + lVar13 * 2)[1];
  *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_1[lVar13] + 8);
  *(undefined8 *)*param_1 = auVar37._0_8_;
  *(undefined8 *)(param_1[1] + 8) = uVar61;
  *(undefined8 *)param_1[1] = uVar88;
  auVar37._0_8_ = param_2[lVar12 * 2];
  uVar88 = (param_2 + lVar12 * 2)[1];
  uVar61 = param_3[lVar13 * 2];
  uVar6 = (param_3 + lVar13 * 2)[1];
  param_2[1] = uVar5;
  *param_2 = uVar58;
  param_2[3] = uVar88;
  param_2[2] = auVar37._0_8_;
  auVar37._0_8_ = param_3[lVar12 * 2];
  uVar88 = (param_3 + lVar12 * 2)[1];
  uVar38 = param_4[lVar12];
  *param_4 = param_4[lVar13];
  param_4[1] = uVar38;
  uVar38 = param_5[lVar12];
  *param_5 = param_5[lVar13];
  param_5[1] = uVar38;
  param_3[1] = uVar6;
  *param_3 = uVar61;
  param_3[3] = uVar88;
  param_3[2] = auVar37._0_8_;
  *param_6 = uVar14;
  return auVar63;
}


