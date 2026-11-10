/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb55d0; name: FUN_00eb55d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eb55d0(float param_1,float param_2,long param_3,undefined1 (*param_4) [12],
                 undefined8 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
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
  undefined1 auVar38 [16];
  ulong uVar39;
  ulong uVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  byte bVar59;
  byte bVar62;
  byte bVar63;
  float fVar60;
  undefined1 auVar54 [16];
  byte bVar64;
  float fVar61;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 auVar74 [12];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  float fVar86;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined8 uVar87;
  undefined8 uVar88;
  float fVar89;
  undefined4 uVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined8 uVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  
  param_5[1] = param_5[1];
  *param_5 = CONCAT44((int)((ulong)*param_5 >> 0x20),param_1 * 0.5);
  fVar45 = (*(float *)(param_3 + 0x7c4) - *(float *)(param_3 + 0x7c0)) * 0.5;
  param_2 = param_2 * 0.5;
  fVar57 = (float)_UNK_01d4ab68;
  uVar40 = (ulong)_UNK_01d4ab68 >> 0x20;
  fVar52 = (float)_DAT_01d4ab60;
  uVar39 = (ulong)_DAT_01d4ab60 >> 0x20;
  param_5[1] = (ulong)(uint)param_2;
  *param_5 = CONCAT44(fVar45,param_1 * 0.5);
  fVar50 = (float)*(undefined8 *)(*param_4 + 8);
  uVar51 = (undefined4)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
  uVar97 = *(undefined8 *)*param_4;
  fVar48 = (float)uVar97;
  fVar49 = (float)((ulong)uVar97 >> 0x20);
  uVar42 = *(undefined8 *)(param_4[2] + 8);
  fVar47 = (float)*(undefined8 *)param_4[2];
  fVar46 = (float)((ulong)*(undefined8 *)(param_4[1] + 4) >> 0x20);
  fVar43 = (float)((ulong)uVar42 >> 0x20);
  auVar83._12_4_ = uVar51;
  auVar83._0_12_ = *param_4;
  auVar93._12_4_ = uVar51;
  auVar93._0_12_ = *param_4;
  auVar93 = NEON_ext(auVar83,auVar93,8,1);
  uVar97 = NEON_ext(uVar97,uVar42,4,1);
  fVar41 = (float)*(undefined8 *)(param_4[1] + 4);
  fVar101 = (float)uVar97 + fVar41;
  fVar105 = (float)((ulong)uVar97 >> 0x20);
  fVar102 = fVar105 + auVar93._0_4_;
  fVar103 = fVar47 + fVar43;
  fVar44 = (float)*(undefined8 *)(param_4[3] + 4);
  auVar83 = NEON_fmov(0x3f800000,4);
  fVar52 = fVar52 * fVar48 + (float)_DAT_01d4b9d0 * fVar46 + (float)_DAT_01d4b2f0 * fVar44 +
           auVar83._0_4_;
  fVar55 = (float)uVar39 * fVar48 + (float)((ulong)_DAT_01d4b9d0 >> 0x20) * fVar46 +
           (float)((ulong)_DAT_01d4b2f0 >> 0x20) * fVar44 + auVar83._4_4_;
  fVar57 = fVar57 * fVar48 + (float)_UNK_01d4b9d8 * fVar46 + (float)_UNK_01d4b2f8 * fVar44 +
           auVar83._8_4_;
  fVar60 = (float)uVar40 * fVar48 + (float)((ulong)_UNK_01d4b9d8 >> 0x20) * fVar46 +
           (float)((ulong)_UNK_01d4b2f8 >> 0x20) * fVar44 + auVar83._12_4_;
  auVar94._4_4_ = fVar55;
  auVar94._0_4_ = fVar55;
  auVar94._8_4_ = fVar55;
  auVar94._12_4_ = fVar55;
  fVar104 = (float)uVar97 - fVar41;
  fVar105 = fVar105 - auVar93._0_4_;
  fVar106 = fVar47 - fVar43;
  auVar98._0_8_ = CONCAT44(-(uint)(fVar52 <= fVar55),-(uint)(fVar52 <= fVar55));
  auVar98._8_4_ = -(uint)(fVar52 <= fVar55);
  auVar98._12_4_ = -(uint)(fVar52 <= fVar55);
  auVar107._8_8_ = auVar98._8_8_;
  auVar107._0_8_ = auVar98._0_8_;
  auVar18._4_4_ = fVar52;
  auVar18._0_4_ = fVar52;
  auVar18._8_4_ = fVar52;
  auVar18._12_4_ = fVar52;
  auVar108._4_4_ = fVar52;
  auVar108._0_4_ = fVar52;
  auVar108._8_4_ = fVar52;
  auVar108._12_4_ = fVar52;
  auVar108 = auVar108 ^ (auVar18 ^ auVar94) & auVar107;
  auVar95._0_8_ = CONCAT44(-(uint)(auVar108._4_4_ <= fVar57),-(uint)(auVar108._0_4_ <= fVar57));
  auVar95._8_4_ = -(uint)(auVar108._8_4_ <= fVar57);
  auVar95._12_4_ = -(uint)(auVar108._12_4_ <= fVar57);
  auVar24._4_4_ = fVar102;
  auVar24._0_4_ = fVar101;
  auVar24._8_4_ = fVar103;
  auVar24._12_4_ = 0;
  auVar31._4_4_ = fVar105;
  auVar31._0_4_ = fVar104;
  auVar31._8_4_ = fVar106;
  auVar31._12_4_ = 0;
  uVar97 = a64_TBL(ZEXT816(0),auVar24,auVar31,DAT_01cd5420);
  auVar25._4_4_ = fVar102;
  auVar25._0_4_ = fVar101;
  auVar25._8_4_ = fVar103;
  auVar25._12_4_ = 0;
  auVar32._4_4_ = fVar105;
  auVar32._0_4_ = fVar104;
  auVar32._8_4_ = fVar106;
  auVar32._12_4_ = 0;
  uVar12 = a64_TBL(ZEXT816(0),auVar25,auVar32,DAT_01cd51d0);
  auVar26._4_4_ = fVar102;
  auVar26._0_4_ = fVar101;
  auVar26._8_4_ = fVar103;
  auVar26._12_4_ = 0;
  auVar33._4_4_ = fVar105;
  auVar33._0_4_ = fVar104;
  auVar33._8_4_ = fVar106;
  auVar33._12_4_ = 0;
  uVar81 = a64_TBL(ZEXT816(0),auVar26,auVar33,DAT_01cd5250);
  auVar109._8_8_ = auVar95._8_8_;
  auVar109._0_8_ = auVar95._0_8_;
  auVar27._4_4_ = fVar102;
  auVar27._0_4_ = fVar101;
  auVar27._8_4_ = fVar103;
  auVar27._12_4_ = 0;
  auVar34._4_4_ = fVar105;
  auVar34._0_4_ = fVar104;
  auVar34._8_4_ = fVar106;
  auVar34._12_4_ = 0;
  uVar53 = a64_TBL(ZEXT816(0),auVar27,auVar34,DAT_01cd5418);
  auVar28._4_4_ = fVar102;
  auVar28._0_4_ = fVar101;
  auVar28._8_4_ = fVar103;
  auVar28._12_4_ = 0;
  auVar35._4_4_ = fVar105;
  auVar35._0_4_ = fVar104;
  auVar35._8_4_ = fVar106;
  auVar35._12_4_ = 0;
  auVar75._0_8_ = a64_TBL(ZEXT816(0),auVar28,auVar35,DAT_01cd5190);
  auVar19._4_4_ = fVar57;
  auVar19._0_4_ = fVar57;
  auVar19._8_4_ = fVar57;
  auVar19._12_4_ = fVar57;
  auVar108 = auVar108 ^ (auVar108 ^ auVar19) & auVar109;
  auVar29._4_4_ = fVar102;
  auVar29._0_4_ = fVar101;
  auVar29._8_4_ = fVar103;
  auVar29._12_4_ = 0;
  auVar36._4_4_ = fVar105;
  auVar36._0_4_ = fVar104;
  auVar36._8_4_ = fVar106;
  auVar36._12_4_ = 0;
  uVar82 = a64_TBL(ZEXT816(0),auVar29,auVar36,DAT_01cd4f98);
  auVar30._4_4_ = fVar102;
  auVar30._0_4_ = fVar101;
  auVar30._8_4_ = fVar103;
  auVar30._12_4_ = 0;
  auVar37._4_4_ = fVar105;
  auVar37._0_4_ = fVar104;
  auVar37._8_4_ = fVar106;
  auVar37._12_4_ = 0;
  uVar87 = a64_TBL(ZEXT816(0),auVar30,auVar37,DAT_01cd50b8);
  uVar51 = (undefined4)((ulong)uVar97 >> 0x20);
  uVar90 = (undefined4)((ulong)uVar12 >> 0x20);
  auVar75._8_8_ = uVar82;
  auVar76._0_12_ = auVar75._0_12_;
  auVar76._12_4_ = fVar60;
  auVar54._0_4_ = -(uint)(auVar108._0_4_ <= fVar60);
  auVar54._4_4_ = -(uint)(auVar108._4_4_ <= fVar60);
  auVar54._8_4_ = -(uint)(auVar108._8_4_ <= fVar60);
  auVar54._12_4_ = -(uint)(auVar108._12_4_ <= fVar60);
  auVar1[4] = SUB41(fVar55,0);
  auVar1._0_4_ = (int)uVar97;
  auVar1[5] = (char)((uint)fVar55 >> 8);
  auVar1[6] = (char)((uint)fVar55 >> 0x10);
  auVar1[7] = (char)((uint)fVar55 >> 0x18);
  auVar1[8] = (char)uVar81;
  auVar1[9] = (char)((ulong)uVar81 >> 8);
  auVar1[10] = (char)((ulong)uVar81 >> 0x10);
  auVar1[0xb] = (char)((ulong)uVar81 >> 0x18);
  auVar1[0xc] = (char)((ulong)uVar81 >> 0x20);
  auVar1[0xd] = (char)((ulong)uVar81 >> 0x28);
  auVar1[0xe] = (char)((ulong)uVar81 >> 0x30);
  auVar1[0xf] = (char)((ulong)uVar81 >> 0x38);
  auVar38._4_4_ = uVar51;
  auVar38._0_4_ = fVar52;
  auVar38._8_4_ = (int)uVar12;
  auVar38._12_4_ = uVar90;
  auVar99._4_4_ = uVar51;
  auVar99._0_4_ = fVar52;
  auVar99._8_4_ = (int)uVar12;
  auVar99._12_4_ = uVar90;
  auVar99 = auVar99 ^ (auVar38 ^ auVar1) & auVar98;
  auVar13._8_4_ = fVar57;
  auVar13._0_8_ = uVar53;
  auVar13._12_4_ = (int)((ulong)uVar87 >> 0x20);
  auVar99 = auVar99 ^ (auVar99 ^ auVar13) & auVar95;
  auVar99 = auVar99 ^ (auVar99 ^ auVar76) & auVar54;
  fVar105 = auVar99._0_4_;
  fVar52 = fVar105 * fVar105;
  fVar101 = auVar99._4_4_;
  fVar55 = fVar101 * fVar101;
  uVar65 = (undefined1)((uint)fVar55 >> 8);
  uVar66 = (undefined1)((uint)fVar55 >> 0x10);
  uVar67 = (undefined1)((uint)fVar55 >> 0x18);
  fVar102 = auVar99._8_4_;
  fVar57 = fVar102 * fVar102;
  uVar68 = (undefined1)((uint)fVar57 >> 8);
  uVar69 = (undefined1)((uint)fVar57 >> 0x10);
  uVar70 = (undefined1)((uint)fVar57 >> 0x18);
  fVar103 = auVar99._12_4_;
  fVar60 = fVar103 * fVar103;
  uVar71 = (undefined1)((uint)fVar60 >> 8);
  uVar72 = (undefined1)((uint)fVar60 >> 0x10);
  uVar73 = (undefined1)((uint)fVar60 >> 0x18);
  auVar2[4] = SUB41(fVar55,0);
  auVar2._0_4_ = fVar52;
  auVar2[5] = uVar65;
  auVar2[6] = uVar66;
  auVar2[7] = uVar67;
  auVar2[8] = SUB41(fVar57,0);
  auVar2[9] = uVar68;
  auVar2[10] = uVar69;
  auVar2[0xb] = uVar70;
  auVar2[0xc] = SUB41(fVar60,0);
  auVar2[0xd] = uVar71;
  auVar2[0xe] = uVar72;
  auVar2[0xf] = uVar73;
  auVar3[4] = SUB41(fVar55,0);
  auVar3._0_4_ = fVar52;
  auVar3[5] = uVar65;
  auVar3[6] = uVar66;
  auVar3[7] = uVar67;
  auVar3[8] = SUB41(fVar57,0);
  auVar3[9] = uVar68;
  auVar3[10] = uVar69;
  auVar3[0xb] = uVar70;
  auVar3[0xc] = SUB41(fVar60,0);
  auVar3[0xd] = uVar71;
  auVar3[0xe] = uVar72;
  auVar3[0xf] = uVar73;
  auVar83 = NEON_ext(auVar2,auVar3,8,1);
  fVar52 = auVar83._0_4_ + fVar52;
  fVar55 = auVar83._4_4_ + fVar55;
  fVar57 = fVar52 + fVar55;
  fVar52 = fVar52 + fVar55;
  uVar65 = SUB41(fVar52,0);
  uVar66 = (undefined1)((uint)fVar52 >> 8);
  uVar67 = (undefined1)((uint)fVar52 >> 0x10);
  uVar68 = (undefined1)((uint)fVar52 >> 0x18);
  auVar4[4] = uVar65;
  auVar4._0_4_ = fVar57;
  auVar4[5] = uVar66;
  auVar4[6] = uVar67;
  auVar4[7] = uVar68;
  auVar4[8] = SUB41(fVar57,0);
  auVar4[9] = (char)((uint)fVar57 >> 8);
  auVar4[10] = (char)((uint)fVar57 >> 0x10);
  auVar4[0xb] = (char)((uint)fVar57 >> 0x18);
  auVar4[0xc] = uVar65;
  auVar4[0xd] = uVar66;
  auVar4[0xe] = uVar67;
  auVar4[0xf] = uVar68;
  auVar83 = NEON_frsqrte(auVar4,4);
  auVar84._0_4_ = auVar83._0_4_ * fVar57;
  auVar84._4_4_ = auVar83._4_4_ * fVar52;
  auVar84._8_4_ = auVar83._8_4_ * fVar57;
  uVar5 = (undefined2)(CONCAT15(uVar66,CONCAT14(uVar65,fVar57)) >> 0x20);
  auVar84._12_4_ = auVar83._12_4_ * (float)CONCAT13(uVar68,CONCAT12(uVar67,uVar5));
  auVar93 = NEON_frsqrts(auVar83,auVar84,4);
  auVar77._0_4_ = auVar83._0_4_ * auVar93._0_4_;
  auVar77._4_4_ = auVar83._4_4_ * auVar93._4_4_;
  auVar77._8_4_ = auVar83._8_4_ * auVar93._8_4_;
  auVar77._12_4_ = auVar83._12_4_ * auVar93._12_4_;
  auVar85._0_4_ = fVar57 * auVar77._0_4_;
  auVar85._4_4_ = fVar52 * auVar77._4_4_;
  auVar85._8_4_ = fVar57 * auVar77._8_4_;
  auVar85._12_4_ = (float)CONCAT13(uVar68,CONCAT12(uVar67,uVar5)) * auVar77._12_4_;
  iVar6 = -(uint)(fVar57 == 0.0);
  iVar7 = -(uint)(fVar52 == 0.0);
  iVar8 = -(uint)(fVar57 == 0.0);
  iVar9 = -(uint)((float)CONCAT13(uVar68,CONCAT12(uVar67,uVar5)) == 0.0);
  auVar83 = NEON_frsqrts(auVar77,auVar85,4);
  fVar105 = auVar77._0_4_ * auVar83._0_4_ * fVar105;
  fVar101 = auVar77._4_4_ * auVar83._4_4_ * fVar101;
  fVar102 = auVar77._8_4_ * auVar83._8_4_ * fVar102;
  fVar103 = auVar77._12_4_ * auVar83._12_4_ * fVar103;
  bVar59 = SUB41(fVar103,0) & ~(byte)iVar9;
  bVar62 = (byte)((uint)fVar103 >> 8) & ~(byte)((uint)iVar9 >> 8);
  bVar63 = (byte)((uint)fVar103 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
  bVar64 = (byte)((uint)fVar103 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
  fVar57 = (float)CONCAT13(bVar64,CONCAT12(bVar63,CONCAT11(bVar62,bVar59)));
  fVar103 = (float)CONCAT13((byte)((uint)fVar105 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18) &
                            (byte)((ulong)DAT_01d4ab50 >> 0x18),
                            CONCAT12((byte)((uint)fVar105 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10) &
                                     (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                     CONCAT11((byte)((uint)fVar105 >> 8) & ~(byte)((uint)iVar6 >> 8)
                                              & (byte)((ulong)DAT_01d4ab50 >> 8),
                                              SUB41(fVar105,0) & ~(byte)iVar6 & (byte)DAT_01d4ab50))
                           );
  auVar74._0_8_ =
       CONCAT17((byte)((uint)fVar101 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18) &
                (byte)((ulong)DAT_01d4ab50 >> 0x38),
                CONCAT16((byte)((uint)fVar101 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10) &
                         (byte)((ulong)DAT_01d4ab50 >> 0x30),
                         CONCAT15((byte)((uint)fVar101 >> 8) & ~(byte)((uint)iVar7 >> 8) &
                                  (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                  CONCAT14(SUB41(fVar101,0) & ~(byte)iVar7 &
                                           (byte)((ulong)DAT_01d4ab50 >> 0x20),fVar103))));
  auVar74[8] = SUB41(fVar102,0) & ~(byte)iVar8 & (byte)DAT_01d4ab58;
  auVar74[9] = (byte)((uint)fVar102 >> 8) & ~(byte)((uint)iVar8 >> 8) &
               (byte)((ulong)DAT_01d4ab58 >> 8);
  auVar74[10] = (byte)((uint)fVar102 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10) &
                (byte)((ulong)DAT_01d4ab58 >> 0x10);
  auVar74[0xb] = (byte)((uint)fVar102 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18) &
                 (byte)((ulong)DAT_01d4ab58 >> 0x18);
  auVar78[0xc] = bVar59 & (byte)((ulong)DAT_01d4ab58 >> 0x20);
  auVar78._0_12_ = auVar74;
  auVar78[0xd] = bVar62 & (byte)((ulong)DAT_01d4ab58 >> 0x28);
  auVar78[0xe] = bVar63 & (byte)((ulong)DAT_01d4ab58 >> 0x30);
  auVar78[0xf] = bVar64 & (byte)((ulong)DAT_01d4ab58 >> 0x38);
  uVar12 = NEON_ext(auVar74._0_8_,auVar74._0_8_,4,1);
  uVar97 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd5188);
  fVar56 = (float)uVar97;
  fVar58 = (float)((ulong)uVar97 >> 0x20);
  uVar53 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd5048);
  fVar86 = (float)((ulong)uVar53 >> 0x20);
  uVar82 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd5158);
  uVar87 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd5418);
  uVar97 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd50f8);
  fVar61 = (float)uVar82;
  fVar89 = (float)((ulong)uVar82 >> 0x20);
  fVar55 = (float)uVar12 * (float)uVar12;
  fVar52 = (float)((ulong)uVar12 >> 0x20);
  fVar52 = fVar52 * fVar52;
  fVar80 = (float)uVar53 * (float)uVar53;
  fVar86 = fVar86 * fVar86;
  fVar103 = (float)uVar87 * fVar103;
  fVar102 = (float)((ulong)uVar87 >> 0x20) * (float)((ulong)auVar74._0_8_ >> 0x20);
  fVar104 = fVar56 * auVar74._8_4_;
  fVar106 = fVar58 * auVar78._12_4_;
  fVar60 = (float)uVar97 * fVar57;
  fVar105 = (float)((ulong)uVar97 >> 0x20) * fVar57;
  fVar103 = fVar103 + fVar103;
  fVar102 = fVar102 + fVar102;
  fVar104 = fVar104 + fVar104;
  fVar106 = fVar106 + fVar106;
  fVar60 = fVar60 + fVar60;
  fVar105 = fVar105 + fVar105;
  fVar101 = fVar61 * fVar57 + fVar61 * fVar57;
  fVar57 = fVar89 * fVar57 + fVar89 * fVar57;
  auVar96._0_4_ = fVar60 + fVar103;
  auVar96._4_4_ = fVar105 + fVar102;
  auVar96._8_4_ = fVar101 + fVar104;
  auVar96._12_4_ = fVar57 + fVar106;
  auVar100._0_4_ = fVar103 - fVar60;
  auVar100._4_4_ = fVar102 - fVar105;
  auVar100._8_4_ = fVar104 - fVar101;
  auVar100._12_4_ = fVar106 - fVar57;
  auVar79._0_8_ =
       CONCAT44((float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar86 + fVar86 + fVar52 + fVar52),
                (float)_DAT_01d4a130 - (fVar80 + fVar80 + fVar55 + fVar55));
  auVar79._8_4_ =
       (float)_UNK_01d4a138 -
       (fVar61 * fVar61 + fVar61 * fVar61 + fVar56 * fVar56 + fVar56 * fVar56);
  auVar79._12_4_ =
       (float)((ulong)_UNK_01d4a138 >> 0x20) -
       (fVar89 * fVar89 + fVar89 * fVar89 + fVar58 * fVar58 + fVar58 * fVar58);
  uVar97 = a64_TBL(ZEXT816(0),auVar96,auVar100,DAT_01cd5250);
  uVar82 = a64_TBL(ZEXT816(0),auVar96,auVar100,DAT_01cd51f8);
  uVar12 = a64_TBL(ZEXT816(0),auVar96,auVar100,DAT_01cd5430);
  uVar53 = a64_TBL(ZEXT816(0),auVar96,auVar100,DAT_01cd5050);
  uVar51 = (undefined4)uVar53;
  uVar90 = (undefined4)((ulong)uVar53 >> 0x20);
  uVar65 = (undefined1)((ulong)uVar82 >> 8);
  uVar66 = (undefined1)((ulong)uVar82 >> 0x10);
  uVar67 = (undefined1)((ulong)uVar82 >> 0x18);
  uVar68 = (undefined1)((ulong)uVar82 >> 0x20);
  uVar69 = (undefined1)((ulong)uVar82 >> 0x28);
  uVar70 = (undefined1)((ulong)uVar82 >> 0x30);
  uVar71 = (undefined1)((ulong)uVar82 >> 0x38);
  auVar10[8] = (char)uVar82;
  auVar10._0_8_ = uVar97;
  auVar10[9] = uVar65;
  auVar10[10] = uVar66;
  auVar10[0xb] = uVar67;
  auVar10[0xc] = uVar68;
  auVar10[0xd] = uVar69;
  auVar10[0xe] = uVar70;
  auVar10[0xf] = uVar71;
  uVar53 = a64_TBL(ZEXT816(0),auVar79,auVar10,DAT_01cd50d8);
  auVar14._8_4_ = auVar79._8_4_;
  auVar14._0_8_ = auVar79._0_8_;
  auVar14._12_4_ = auVar79._12_4_;
  auVar20._8_4_ = uVar51;
  auVar20._0_8_ = uVar12;
  auVar20._12_4_ = uVar90;
  uVar81 = a64_TBL(ZEXT816(0),auVar14,auVar20,DAT_01cd50b8);
  auVar15._8_4_ = auVar79._8_4_;
  auVar15._0_8_ = auVar79._0_8_;
  auVar15._12_4_ = auVar79._12_4_;
  auVar21._8_4_ = uVar51;
  auVar21._0_8_ = uVar12;
  auVar21._12_4_ = uVar90;
  uVar88 = a64_TBL(ZEXT816(0),auVar15,auVar21,DAT_01cd5308);
  auVar16._8_4_ = auVar79._8_4_;
  auVar16._0_8_ = auVar79._0_8_;
  auVar16._12_4_ = auVar79._12_4_;
  auVar22._8_4_ = uVar51;
  auVar22._0_8_ = uVar12;
  auVar22._12_4_ = uVar90;
  uVar87 = a64_TBL(ZEXT816(0),auVar16,auVar22,DAT_01cd5008);
  auVar17._8_4_ = auVar79._8_4_;
  auVar17._0_8_ = auVar79._0_8_;
  auVar17._12_4_ = auVar79._12_4_;
  auVar23._8_4_ = uVar51;
  auVar23._0_8_ = uVar12;
  auVar23._12_4_ = uVar90;
  uVar12 = a64_TBL(ZEXT816(0),auVar17,auVar23,DAT_01cd4fb0);
  auVar11[8] = (char)uVar82;
  auVar11._0_8_ = uVar97;
  auVar11[9] = uVar65;
  auVar11[10] = uVar66;
  auVar11[0xb] = uVar67;
  auVar11[0xc] = uVar68;
  auVar11[0xd] = uVar69;
  auVar11[0xe] = uVar70;
  auVar11[0xf] = uVar71;
  uVar97 = a64_TBL(ZEXT816(0),auVar79,auVar11,DAT_01cd4fb8);
  fVar45 = *(float *)(param_3 + 0x7c4) - fVar45;
  fVar57 = (float)_DAT_01d4ae50;
  fVar60 = (float)((ulong)_DAT_01d4ae50 >> 0x20);
  fVar105 = (float)_UNK_01d4ae58;
  fVar101 = (float)((ulong)_UNK_01d4ae58 >> 0x20);
  fVar102 = (float)uVar42;
  fVar103 = (float)_DAT_01d4b580;
  fVar104 = (float)((ulong)_DAT_01d4b580 >> 0x20);
  fVar106 = (float)_UNK_01d4b588;
  fVar80 = (float)((ulong)_UNK_01d4b588 >> 0x20);
  fVar86 = (float)_DAT_01d49dc0;
  fVar56 = (float)((ulong)_DAT_01d49dc0 >> 0x20);
  fVar58 = (float)_UNK_01d49dc8;
  fVar61 = (float)((ulong)_UNK_01d49dc8 >> 0x20);
  fVar52 = fVar60 * fVar102 + fVar104 * fVar43 + fVar56 * fVar44;
  fVar55 = fVar101 * fVar102 + fVar80 * fVar43 + fVar61 * fVar44;
  fVar89 = (float)*(undefined8 *)param_4[4];
  fVar91 = (float)((ulong)*(undefined8 *)param_4[4] >> 0x20);
  fVar92 = (float)*(undefined8 *)(param_4[4] + 8);
  *(ulong *)(*param_4 + 8) =
       CONCAT44(fVar101 * fVar48 + fVar80 * fVar49 + fVar61 * fVar50,
                fVar105 * fVar48 + fVar106 * fVar49 + fVar58 * fVar50);
  *(ulong *)*param_4 =
       CONCAT44(fVar60 * fVar48 + fVar104 * fVar49 + fVar56 * fVar50,
                fVar57 * fVar48 + fVar103 * fVar49 + fVar86 * fVar50);
  *(ulong *)param_4[2] =
       CONCAT44(fVar101 * fVar41 + fVar80 * fVar46 + fVar61 * fVar47,
                fVar105 * fVar41 + fVar106 * fVar46 + fVar58 * fVar47);
  *(ulong *)(param_4[1] + 4) =
       CONCAT44(fVar60 * fVar41 + fVar104 * fVar46 + fVar56 * fVar47,
                fVar57 * fVar41 + fVar103 * fVar46 + fVar86 * fVar47);
  *(ulong *)(param_4[3] + 4) =
       CONCAT17((char)((uint)fVar55 >> 0x18),
                CONCAT16((char)((uint)fVar55 >> 0x10),
                         CONCAT15((char)((uint)fVar55 >> 8),
                                  CONCAT14(SUB41(fVar55,0),
                                           fVar105 * fVar102 + fVar106 * fVar43 + fVar58 * fVar44)))
               );
  *(ulong *)(param_4[2] + 8) =
       CONCAT17((char)((uint)fVar52 >> 0x18),
                CONCAT16((char)((uint)fVar52 >> 0x10),
                         CONCAT15((char)((uint)fVar52 >> 8),
                                  CONCAT14(SUB41(fVar52,0),
                                           fVar57 * fVar102 + fVar103 * fVar43 + fVar86 * fVar44))))
  ;
  *(ulong *)(param_4[4] + 8) =
       CONCAT44((float)((ulong)uVar88 >> 0x20) * 0.0 + (float)((ulong)uVar12 >> 0x20) * fVar45 +
                (float)((ulong)uVar97 >> 0x20) * param_2 + 0.0 +
                fVar101 * fVar89 + fVar80 * fVar91 + fVar61 * fVar92,
                (float)uVar88 * 0.0 + (float)uVar12 * fVar45 + (float)uVar97 * param_2 + 0.0 +
                fVar105 * fVar89 + fVar106 * fVar91 + fVar58 * fVar92);
  *(ulong *)param_4[4] =
       CONCAT44((float)((ulong)uVar81 >> 0x20) * 0.0 + (float)((ulong)uVar87 >> 0x20) * fVar45 +
                (float)((ulong)uVar53 >> 0x20) * param_2 + 0.0 +
                fVar60 * fVar89 + fVar104 * fVar91 + fVar56 * fVar92,
                (float)uVar81 * 0.0 + (float)uVar87 * fVar45 + (float)uVar53 * param_2 + 0.0 +
                fVar57 * fVar89 + fVar103 * fVar91 + fVar86 * fVar92);
  return;
}


