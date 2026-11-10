/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002648d0; name: FUN_002648d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002648d0(long param_1,long param_2,undefined1 (*param_3) [12],undefined1 (*param_4) [16],
            float *param_5,undefined8 param_6,long param_7)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar19;
  undefined1 extraout_var_03;
  undefined1 uVar20;
  undefined1 extraout_var_04;
  undefined1 uVar21;
  undefined1 extraout_var_05;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar28;
  undefined1 auVar27 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  undefined1 auVar35 [12];
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar47;
  undefined1 auVar45 [16];
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  float fVar54;
  float fVar56;
  ulong uVar55;
  float fVar57;
  float fVar58;
  float fVar62;
  undefined8 uVar59;
  float fVar63;
  float fVar64;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  int iVar72;
  undefined1 auVar68 [16];
  int iVar71;
  int iVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  ulong uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar101;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar102;
  float fVar109;
  float fVar110;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar111;
  float fVar114;
  float fVar115;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  ulong uVar120;
  float local_70 [2];
  float local_68 [2];
  float local_60;
  float fStack_5c;
  undefined8 uStack_58;
  float local_50;
  float fStack_4c;
  ulong uStack_48;
  undefined8 local_40;
  ulong uStack_38;
  float local_30;
  float fStack_2c;
  undefined8 uStack_28;
  
  fVar29 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  auVar2 = *param_4;
  fVar34 = auVar2._12_4_;
  auVar25._0_12_ = auVar2._0_12_;
  auVar25._12_4_ = 0;
  auVar43._12_4_ = 0;
  auVar43._0_12_ = *param_3;
  auVar44._12_4_ = 0;
  auVar44._0_12_ = *param_3;
  auVar43 = NEON_ext(auVar43,auVar44,8,1);
  fVar23 = auVar2._0_4_;
  fVar65 = fVar23 + fVar23;
  fVar62 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  fVar4 = (float)*(undefined8 *)*param_3;
  fVar22 = fVar4 + fVar4;
  uVar42 = NEON_ext(CONCAT44(fVar29,fVar29),auVar43._0_8_,4,1);
  auVar43 = NEON_ext(auVar25,auVar25,8,1);
  uVar67 = NEON_ext(CONCAT44(fVar34,fVar34),auVar43._0_8_,4,1);
  fVar29 = fVar29 + fVar29;
  fVar34 = fVar34 + fVar34;
  fVar4 = fVar4 * fVar22 + (float)uVar42 * fVar29;
  fVar41 = fVar62 * fVar22 + (float)((ulong)uVar42 >> 0x20) * fVar29;
  uVar19 = (undefined1)((uint)fVar41 >> 8);
  uVar20 = (undefined1)((uint)fVar41 >> 0x10);
  uVar21 = (undefined1)((uint)fVar41 >> 0x18);
  fVar22 = (float)*(undefined8 *)(*param_3 + 8) * fVar22 + -fVar62 * fVar29;
  fVar29 = fVar29 * 0.0 + 0.0;
  uVar42 = NEON_fmov(0xbf800000,4);
  fVar58 = (*(float *)(param_3[1] + 4) + *(float *)param_4[1]) * 0.5;
  fVar62 = (*(float *)(param_3[1] + 8) + *(float *)(param_4[1] + 4)) * 0.5;
  fVar63 = (*(float *)param_3[2] + *(float *)(param_4[1] + 8)) * 0.5;
  auVar26._0_4_ = fVar23 * fVar65 + (float)uVar67 * fVar34;
  auVar26._4_4_ = auVar2._4_4_ * fVar65 + (float)((ulong)uVar67 >> 0x20) * fVar34;
  auVar26._8_4_ = auVar2._8_4_ * fVar65 + -auVar2._4_4_ * fVar34;
  auVar26._12_4_ = fVar34 * 0.0 + 0.0;
  auVar2[4] = SUB41(fVar41,0);
  auVar2._0_4_ = fVar4;
  auVar2[5] = uVar19;
  auVar2[6] = uVar20;
  auVar2[7] = uVar21;
  auVar2._8_4_ = fVar22;
  auVar2._12_4_ = fVar29;
  auVar3[4] = SUB41(fVar41,0);
  auVar3._0_4_ = fVar4;
  auVar3[5] = uVar19;
  auVar3[6] = uVar20;
  auVar3[7] = uVar21;
  auVar3._8_4_ = fVar22;
  auVar3._12_4_ = fVar29;
  auVar43 = NEON_ext(auVar2,auVar3,8,1);
  auVar44 = NEON_ext(auVar26,auVar26,8,1);
  fVar54 = *(float *)(param_3[1] + 4) - fVar58;
  fVar56 = *(float *)(param_3[1] + 8) - fVar62;
  fVar57 = *(float *)param_3[2] - fVar63;
  fVar34 = *(float *)param_4[1] - fVar58;
  fVar65 = *(float *)(param_4[1] + 4) - fVar62;
  fVar64 = *(float *)(param_4[1] + 8) - fVar63;
  fVar22 = *(float *)(param_1 + 4);
  fVar30 = *(float *)(param_1 + 8);
  fVar4 = (fVar4 + (float)uVar42) * fVar30;
  fVar29 = auVar43._0_4_ * fVar30;
  fVar31 = *(float *)(param_2 + 8);
  fVar23 = (auVar26._0_4_ + (float)uVar42) * fVar31;
  fVar28 = auVar44._0_4_ * fVar31;
  local_30 = fVar54 + fVar4;
  fStack_2c = fVar56 + fVar41 * fVar30;
  fVar33 = fVar57 + fVar29;
  fVar54 = fVar54 - fVar4;
  fVar56 = fVar56 - fVar41 * fVar30;
  fVar57 = fVar57 - fVar29;
  local_50 = fVar34 + fVar23;
  fStack_4c = fVar65 + auVar26._4_4_ * fVar31;
  fVar39 = fVar64 + fVar28;
  fVar4 = fVar22 + *(float *)(param_2 + 4);
  fVar34 = fVar34 - fVar23;
  fVar65 = fVar65 - auVar26._4_4_ * fVar31;
  fVar64 = fVar64 - fVar28;
  uStack_28 = (ulong)(uint)fVar33;
  fVar41 = (fVar4 + *param_5) * (fVar4 + *param_5);
  fVar30 = fVar54 - local_30;
  fVar31 = fVar56 - fStack_2c;
  local_40 = CONCAT44(fVar31,fVar30);
  fVar33 = fVar57 - fVar33;
  fVar29 = fVar34 - local_50;
  fVar23 = fVar65 - fStack_4c;
  fVar28 = fVar64 - fVar39;
  uStack_48 = (ulong)(uint)fVar39;
  uStack_38 = (ulong)(uint)fVar33;
  uStack_58 = (ulong)(uint)fVar28;
  local_60 = fVar29;
  fStack_5c = fVar23;
  FUN_00235130(&local_30,&local_40,&local_50,&local_60,local_68,local_70);
  if (fVar41 < (float)CONCAT13(extraout_var_01,
                               CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)))) {
    return 0;
  }
  auVar27._0_4_ = fVar30 * fVar30;
  auVar27._4_4_ = fVar31 * fVar31;
  auVar27._8_4_ = fVar33 * fVar33;
  auVar27._12_4_ = 0;
  auVar43 = NEON_ext(auVar27,auVar27,8,1);
  fVar33 = auVar43._0_4_ + auVar43._4_4_;
  fVar31 = auVar27._0_4_ + auVar27._4_4_ + fVar33;
  fVar33 = auVar27._0_4_ + auVar27._4_4_ + fVar33;
  uVar90 = CONCAT44(fVar33,fVar31);
  uVar67 = NEON_frsqrte(uVar90,4);
  auVar32._0_4_ = fVar29 * fVar29;
  auVar32._4_4_ = fVar23 * fVar23;
  auVar32._8_4_ = fVar28 * fVar28;
  auVar32._12_4_ = 0;
  auVar43 = NEON_ext(auVar32,auVar32,8,1);
  fVar28 = auVar43._0_4_ + auVar43._4_4_;
  fVar23 = (float)uVar67;
  fVar39 = (float)((ulong)uVar67 >> 0x20);
  fVar29 = fVar39 * fVar39;
  uVar67 = NEON_frsqrts(CONCAT17((char)((uint)fVar29 >> 0x18),
                                 CONCAT16((char)((uint)fVar29 >> 0x10),
                                          CONCAT15((char)((uint)fVar29 >> 8),
                                                   CONCAT14(SUB41(fVar29,0),fVar23 * fVar23)))),
                        uVar90,4);
  fVar23 = fVar23 * (float)uVar67;
  fVar39 = fVar39 * (float)((ulong)uVar67 >> 0x20);
  fVar29 = fVar39 * fVar39;
  uVar67 = NEON_frsqrts(CONCAT17((char)((uint)fVar29 >> 0x18),
                                 CONCAT16((char)((uint)fVar29 >> 0x10),
                                          CONCAT15((char)((uint)fVar29 >> 8),
                                                   CONCAT14(SUB41(fVar29,0),fVar23 * fVar23)))),
                        uVar90,4);
  fVar23 = fVar23 * (float)uVar67;
  fVar39 = fVar39 * (float)((ulong)uVar67 >> 0x20);
  fVar29 = fVar39 * fVar39;
  uVar67 = NEON_frsqrts(CONCAT17((char)((uint)fVar29 >> 0x18),
                                 CONCAT16((char)((uint)fVar29 >> 0x10),
                                          CONCAT15((char)((uint)fVar29 >> 8),
                                                   CONCAT14(SUB41(fVar29,0),fVar23 * fVar23)))),
                        uVar90,4);
  fVar23 = fVar23 * (float)uVar67;
  fVar39 = fVar39 * (float)((ulong)uVar67 >> 0x20);
  fVar29 = fVar39 * fVar39;
  uVar67 = NEON_frsqrts(CONCAT17((char)((uint)fVar29 >> 0x18),
                                 CONCAT16((char)((uint)fVar29 >> 0x10),
                                          CONCAT15((char)((uint)fVar29 >> 8),
                                                   CONCAT14(SUB41(fVar29,0),fVar23 * fVar23)))),
                        uVar90,4);
  fVar30 = auVar32._0_4_ + auVar32._4_4_ + fVar28;
  fVar28 = auVar32._0_4_ + auVar32._4_4_ + fVar28;
  uVar120 = CONCAT44(fVar28,fVar30);
  uVar55 = CONCAT44(fVar33 * fVar39 * (float)((ulong)uVar67 >> 0x20),fVar31 * fVar23 * (float)uVar67
                   );
  uVar55 = uVar55 ^ (uVar55 ^ uVar90) & CONCAT44(-(uint)(fVar31 == 0.0),-(uint)(fVar31 == 0.0));
  uVar42 = NEON_frecpe(uVar55,4);
  uVar67 = NEON_frecps(uVar55,uVar42,4);
  fVar66 = (float)uVar42 * (float)uVar67;
  fVar33 = (float)((ulong)uVar42 >> 0x20) * (float)((ulong)uVar67 >> 0x20);
  uVar67 = NEON_frecps(uVar55,CONCAT44(fVar33,fVar66),4);
  fVar66 = fVar66 * (float)uVar67;
  fVar33 = fVar33 * (float)((ulong)uVar67 >> 0x20);
  uVar67 = NEON_frecps(uVar55,CONCAT44(fVar33,fVar66),4);
  fVar66 = fVar66 * (float)uVar67;
  fVar33 = fVar33 * (float)((ulong)uVar67 >> 0x20);
  uVar67 = NEON_frecps(uVar55,CONCAT44(fVar33,fVar66),4);
  fVar66 = fVar66 * (float)uVar67;
  uVar42 = NEON_frsqrte(uVar120,4);
  fVar29 = (float)uVar42;
  fVar23 = (float)((ulong)uVar42 >> 0x20);
  uVar42 = NEON_frsqrts(CONCAT44(fVar23 * fVar23,fVar29 * fVar29),uVar120,4);
  fVar29 = fVar29 * (float)uVar42;
  fVar23 = fVar23 * (float)((ulong)uVar42 >> 0x20);
  uVar42 = NEON_frsqrts(CONCAT44(fVar23 * fVar23,fVar29 * fVar29),uVar120,4);
  fVar29 = fVar29 * (float)uVar42;
  fVar23 = fVar23 * (float)((ulong)uVar42 >> 0x20);
  uVar42 = NEON_frsqrts(CONCAT44(fVar23 * fVar23,fVar29 * fVar29),uVar120,4);
  fVar29 = fVar29 * (float)uVar42;
  fVar23 = fVar23 * (float)((ulong)uVar42 >> 0x20);
  uVar42 = NEON_frsqrts(CONCAT44(fVar23 * fVar23,fVar29 * fVar29),uVar120,4);
  iVar40 = -(uint)(fVar30 < 1e-06);
  bVar78 = (byte)iVar40;
  bVar79 = (byte)((uint)iVar40 >> 8);
  bVar80 = (byte)((uint)iVar40 >> 0x10);
  bVar81 = (byte)((uint)iVar40 >> 0x18);
  auVar15._8_8_ = uStack_38;
  auVar15._0_8_ = local_40;
  iVar40 = -(uint)(fVar31 < 1e-06);
  fVar29 = fVar30 * fVar29 * (float)uVar42;
  fVar28 = fVar28 * fVar23 * (float)((ulong)uVar42 >> 0x20);
  uVar19 = (undefined1)((uint)fVar28 >> 8);
  uVar20 = (undefined1)((uint)fVar28 >> 0x10);
  uVar21 = (undefined1)((uint)fVar28 >> 0x18);
  uVar90 = CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(SUB41(fVar28,0),fVar29)))) ^
           (CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(SUB41(fVar28,0),fVar29)))) ^
           uVar120) & CONCAT44(-(uint)(fVar30 == 0.0),-(uint)(fVar30 == 0.0));
  uVar59 = NEON_frecpe(uVar90,4);
  uVar42 = NEON_frecps(uVar90,uVar59,4);
  fVar29 = (float)uVar59 * (float)uVar42;
  fVar23 = (float)((ulong)uVar59 >> 0x20) * (float)((ulong)uVar42 >> 0x20);
  uVar42 = NEON_frecps(uVar90,CONCAT44(fVar23,fVar29),4);
  fVar29 = fVar29 * (float)uVar42;
  fVar23 = fVar23 * (float)((ulong)uVar42 >> 0x20);
  uVar42 = NEON_frecps(uVar90,CONCAT44(fVar23,fVar29),4);
  fVar29 = fVar29 * (float)uVar42;
  fVar23 = fVar23 * (float)((ulong)uVar42 >> 0x20);
  uVar42 = NEON_frecps(uVar90,CONCAT44(fVar23,fVar29),4);
  uVar67 = NEON_frecps(uVar55,CONCAT44(fVar33 * (float)((ulong)uVar67 >> 0x20),fVar66),4);
  fVar66 = fVar66 * (float)uVar67;
  fVar29 = fVar29 * (float)uVar42;
  fVar33 = (float)local_40;
  fVar28 = fVar33 * fVar66;
  fVar39 = (float)((ulong)local_40 >> 0x20);
  fVar30 = fVar39 * fVar66;
  fVar46 = (float)uStack_38;
  fVar66 = fVar46 * fVar66;
  fVar47 = (float)(uStack_38 >> 0x20);
  bVar74 = (byte)iVar40;
  bVar75 = (byte)((uint)iVar40 >> 8);
  bVar76 = (byte)((uint)iVar40 >> 0x10);
  bVar77 = (byte)((uint)iVar40 >> 0x18);
  fVar28 = (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~bVar77,
                           CONCAT12((byte)((uint)fVar28 >> 0x10) & ~bVar76,
                                    CONCAT11((byte)((uint)fVar28 >> 8) & ~bVar75,
                                             SUB41(fVar28,0) & ~bVar74)));
  auVar24._0_8_ =
       CONCAT17((byte)((uint)fVar30 >> 0x18) & ~bVar77,
                CONCAT16((byte)((uint)fVar30 >> 0x10) & ~bVar76,
                         CONCAT15((byte)((uint)fVar30 >> 8) & ~bVar75,
                                  CONCAT14(SUB41(fVar30,0) & ~bVar74,fVar28))));
  auVar24[8] = SUB41(fVar66,0) & ~bVar74;
  auVar24[9] = (byte)((uint)fVar66 >> 8) & ~bVar75;
  auVar24[10] = (byte)((uint)fVar66 >> 0x10) & ~bVar76;
  auVar24[0xb] = (byte)((uint)fVar66 >> 0x18) & ~bVar77;
  uVar67 = NEON_frecps(uVar90,CONCAT44(fVar23 * (float)((ulong)uVar42 >> 0x20),fVar29),4);
  fVar29 = fVar29 * (float)uVar67;
  fVar23 = local_60 * fVar29;
  fVar30 = fStack_5c * fVar29;
  fVar29 = (float)uStack_58 * fVar29;
  fVar28 = fVar28 * (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~bVar81,
                                    CONCAT12((byte)((uint)fVar23 >> 0x10) & ~bVar80,
                                             CONCAT11((byte)((uint)fVar23 >> 8) & ~bVar79,
                                                      SUB41(fVar23,0) & ~bVar78)));
  fVar30 = (float)((ulong)auVar24._0_8_ >> 0x20) *
           (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~bVar81,
                           CONCAT12((byte)((uint)fVar30 >> 0x10) & ~bVar80,
                                    CONCAT11((byte)((uint)fVar30 >> 8) & ~bVar79,
                                             SUB41(fVar30,0) & ~bVar78)));
  uVar19 = (undefined1)((uint)fVar30 >> 8);
  uVar20 = (undefined1)((uint)fVar30 >> 0x10);
  uVar21 = (undefined1)((uint)fVar30 >> 0x18);
  fVar29 = auVar24._8_4_ *
           (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~bVar81,
                           CONCAT12((byte)((uint)fVar29 >> 0x10) & ~bVar80,
                                    CONCAT11((byte)((uint)fVar29 >> 8) & ~bVar79,
                                             SUB41(fVar29,0) & ~bVar78)));
  uVar48 = (undefined1)((uint)fVar29 >> 8);
  uVar49 = (undefined1)((uint)fVar29 >> 0x10);
  uVar50 = (undefined1)((uint)fVar29 >> 0x18);
  auVar5[4] = SUB41(fVar30,0);
  auVar5._0_4_ = fVar28;
  auVar5[5] = uVar19;
  auVar5[6] = uVar20;
  auVar5[7] = uVar21;
  auVar5[8] = SUB41(fVar29,0);
  auVar5[9] = uVar48;
  auVar5[10] = uVar49;
  auVar5[0xb] = uVar50;
  auVar5._12_4_ = 0;
  auVar6[4] = SUB41(fVar30,0);
  auVar6._0_4_ = fVar28;
  auVar6[5] = uVar19;
  auVar6[6] = uVar20;
  auVar6[7] = uVar21;
  auVar6[8] = SUB41(fVar29,0);
  auVar6[9] = uVar48;
  auVar6[10] = uVar49;
  auVar6[0xb] = uVar50;
  auVar6._12_4_ = 0;
  auVar43 = NEON_ext(auVar5,auVar6,8,1);
  fVar29 = (float)uStack_48;
  fVar23 = (float)(uStack_48 >> 0x20);
  if (0.9998 < ABS(fVar28 + fVar30 + auVar43._0_4_ + auVar43._4_4_)) {
    fVar102 = fVar54 - local_30;
    fVar109 = fVar56 - fStack_2c;
    fVar110 = fVar57 - (float)uStack_28;
    fVar111 = fVar34 - local_50;
    fVar114 = fVar65 - fStack_4c;
    fVar115 = fVar64 - fVar29;
    fVar30 = fVar102 * (fVar34 - local_30);
    fVar66 = fVar109 * (fVar65 - fStack_2c);
    uVar19 = (undefined1)((uint)fVar66 >> 0x18);
    fVar28 = fVar110 * (fVar64 - (float)uStack_28);
    fVar101 = fVar115 * (fVar57 - fVar29);
    auVar103._0_4_ = fVar102 * fVar102;
    auVar103._4_4_ = fVar109 * fVar109;
    auVar103._8_4_ = fVar110 * fVar110;
    auVar103._12_4_ = (0.0 - uStack_28._4_4_) * (0.0 - uStack_28._4_4_);
    auVar112._0_4_ = fVar111 * fVar111;
    auVar112._4_4_ = fVar114 * fVar114;
    auVar112._8_4_ = fVar115 * fVar115;
    auVar112._12_4_ = (0.0 - fVar23) * (0.0 - fVar23);
    auVar43 = NEON_ext(auVar103,auVar103,8,1);
    fVar17 = auVar43._0_4_ + auVar43._4_4_;
    auVar43 = NEON_ext(auVar112,auVar112,8,1);
    fVar18 = auVar43._0_4_ + auVar43._4_4_;
    fVar28 = (float)CONCAT13((char)((uint)fVar28 >> 0x18),
                             CONCAT12((char)((uint)fVar28 >> 0x10),
                                      (short)(CONCAT12((char)((uint)fVar28 >> 8),
                                                       CONCAT11(SUB41(fVar28,0),uVar19)) >> 8)));
    fVar102 = fVar110 * (fVar29 - (float)uStack_28) +
              fVar102 * (local_50 - local_30) + fVar109 * (fStack_4c - fStack_2c);
    fVar30 = fVar28 + fVar30 + (float)(CONCAT17(uVar19,CONCAT16((char)((uint)fVar66 >> 0x10),
                                                                CONCAT15((char)((uint)fVar66 >> 8),
                                                                         CONCAT14(SUB41(fVar66,0),
                                                                                  fVar30)))) >> 0x20
                                      );
    fVar66 = fVar115 * ((float)uStack_28 - fVar29) +
             fVar111 * (local_30 - local_50) + fVar114 * (fStack_2c - fStack_4c);
    fVar28 = (float)(CONCAT17((char)((uint)fVar101 >> 0x18),
                              CONCAT16((char)((uint)fVar101 >> 0x10),
                                       CONCAT15((char)((uint)fVar101 >> 8),
                                                CONCAT14(SUB41(fVar101,0),fVar28)))) >> 0x20) +
             fVar111 * (fVar54 - local_50) + fVar114 * (fVar56 - fStack_4c);
    uVar67 = NEON_ext(CONCAT17((char)((uint)fVar102 >> 0x18),
                               CONCAT16((char)((uint)fVar102 >> 0x10),
                                        CONCAT15((char)((uint)fVar102 >> 8),
                                                 CONCAT14(SUB41(fVar102,0),fVar102)))),
                      CONCAT44(fVar30,fVar30),4,1);
    uVar42 = NEON_ext(CONCAT44(fVar66,fVar66),CONCAT44(fVar28,fVar28),4,1);
    uVar59 = NEON_rev64(CONCAT44(auVar112._0_4_ + auVar112._4_4_ + fVar18,
                                 auVar112._0_4_ + auVar112._4_4_ + fVar18),4);
    auVar68._0_8_ =
         NEON_rev64(CONCAT44(auVar103._0_4_ + auVar103._4_4_ + fVar17,
                             auVar103._0_4_ + auVar103._4_4_ + fVar17),4);
    auVar68._8_8_ = uVar59;
    auVar43 = NEON_frecpe(auVar68,4);
    auVar44 = NEON_frecps(auVar43,auVar68,4);
    auVar91._0_4_ = auVar43._0_4_ * auVar44._0_4_;
    auVar91._4_4_ = auVar43._4_4_ * auVar44._4_4_;
    auVar91._8_4_ = auVar43._8_4_ * auVar44._8_4_;
    auVar91._12_4_ = auVar43._12_4_ * auVar44._12_4_;
    auVar43 = NEON_frecps(auVar91,auVar68,4);
    auVar92._0_4_ = auVar91._0_4_ * auVar43._0_4_;
    auVar92._4_4_ = auVar91._4_4_ * auVar43._4_4_;
    auVar92._8_4_ = auVar91._8_4_ * auVar43._8_4_;
    auVar92._12_4_ = auVar91._12_4_ * auVar43._12_4_;
    auVar43 = NEON_frecps(auVar92,auVar68,4);
    auVar93._0_4_ = auVar92._0_4_ * auVar43._0_4_;
    auVar93._4_4_ = auVar92._4_4_ * auVar43._4_4_;
    auVar93._8_4_ = auVar92._8_4_ * auVar43._8_4_;
    auVar93._12_4_ = auVar92._12_4_ * auVar43._12_4_;
    auVar43 = NEON_frecps(auVar93,auVar68,4);
    iVar40 = -(uint)((float)auVar68._0_8_ == 0.0);
    iVar71 = -(uint)((float)((ulong)auVar68._0_8_ >> 0x20) == 0.0);
    iVar72 = -(uint)((float)uVar59 == 0.0);
    iVar73 = -(uint)((float)((ulong)uVar59 >> 0x20) == 0.0);
    fVar28 = auVar93._0_4_ * auVar43._0_4_ * (float)uVar67;
    fVar30 = auVar93._4_4_ * auVar43._4_4_ * (float)((ulong)uVar67 >> 0x20);
    fVar66 = auVar93._8_4_ * auVar43._8_4_ * (float)uVar42;
    fVar17 = auVar93._12_4_ * auVar43._12_4_ * (float)((ulong)uVar42 >> 0x20);
    auVar43 = NEON_fmov(0x3f800000,4);
    bVar74 = SUB41(fVar28,0) & ~(byte)iVar40;
    bVar75 = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar40 >> 8);
    bVar76 = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
    bVar77 = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
    bVar78 = SUB41(fVar30,0) & ~(byte)iVar71;
    bVar79 = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar71 >> 8);
    bVar80 = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
    bVar81 = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
    bVar82 = SUB41(fVar66,0) & ~(byte)iVar72;
    bVar83 = (byte)((uint)fVar66 >> 8) & ~(byte)((uint)iVar72 >> 8);
    bVar84 = (byte)((uint)fVar66 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
    bVar85 = (byte)((uint)fVar66 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
    bVar86 = SUB41(fVar17,0) & ~(byte)iVar73;
    bVar87 = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar73 >> 8);
    bVar88 = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10);
    bVar89 = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18);
    uVar90 = CONCAT26(-(ushort)((float)CONCAT13(bVar89,CONCAT12(bVar88,CONCAT11(bVar87,bVar86))) <=
                               auVar43._12_4_),
                      CONCAT24(-(ushort)((float)CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(bVar83,
                                                  bVar82))) <= auVar43._8_4_),
                               CONCAT22(-(ushort)((float)CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(
                                                  bVar79,bVar78))) <= auVar43._4_4_),
                                        -(ushort)((float)CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(
                                                  bVar75,bVar74))) <= auVar43._0_4_)))) &
             CONCAT26(-(ushort)(0.0 <= (float)CONCAT13(bVar89,CONCAT12(bVar88,CONCAT11(bVar87,bVar86
                                                                                      )))),
                      CONCAT24(-(ushort)(0.0 <= (float)CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(
                                                  bVar83,bVar82)))),
                               CONCAT22(-(ushort)(0.0 <= (float)CONCAT13(bVar81,CONCAT12(bVar80,
                                                  CONCAT11(bVar79,bVar78)))),
                                        -(ushort)(0.0 <= (float)CONCAT13(bVar77,CONCAT12(bVar76,
                                                  CONCAT11(bVar75,bVar74)))))));
    iVar40 = (uint)(ushort)uVar90 << 0x1f;
    iVar71 = (uint)(ushort)(uVar90 >> 0x10) << 0x1f;
    iVar72 = (uint)(ushort)(uVar90 >> 0x20) << 0x1f;
    iVar73 = (uint)(ushort)(uVar90 >> 0x30) << 0x1f;
    auVar104._0_4_ = -(uint)(iVar40 < 0);
    auVar104._4_4_ = -(uint)(iVar40 < 0);
    auVar104._8_4_ = -(uint)(iVar40 < 0);
    auVar104._12_4_ = -(uint)(iVar40 < 0);
    NEON_ext(auVar104,auVar104,8,1);
    if (CONCAT13((char)auVar104._12_4_,
                 CONCAT12((char)auVar104._8_4_,CONCAT11((char)auVar104._4_4_,(char)auVar104._0_4_)))
        == -1) {
      fVar28 = (float)CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74)));
      auVar105._0_4_ = local_30 + fVar33 * fVar28;
      auVar105._4_4_ = fStack_2c + fVar39 * fVar28;
      auVar105._8_4_ = (float)uStack_28 + fVar46 * fVar28;
      auVar105._12_4_ = uStack_28._4_4_ + fVar47 * fVar28;
      auVar43 = NEON_ext(auVar105,auVar105,8,1);
      fVar66 = auVar105._0_4_ - local_50;
      fVar17 = auVar105._4_4_ - fStack_4c;
      fVar18 = auVar43._0_4_ - fVar29;
      auVar116._0_4_ = fVar66 * fVar66;
      auVar116._4_4_ = fVar17 * fVar17;
      auVar116._8_4_ = fVar18 * fVar18;
      auVar116._12_4_ = (0.0 - fVar23) * (0.0 - fVar23);
      auVar44 = NEON_ext(auVar116,auVar116,8,1);
      fVar30 = auVar44._0_4_ + auVar44._4_4_;
      fVar28 = auVar116._0_4_ + auVar116._4_4_ + fVar30;
      fVar30 = auVar116._0_4_ + auVar116._4_4_ + fVar30;
      uVar90 = CONCAT44(fVar30,fVar28);
      bVar13 = 1e-06 < fVar28 && fVar28 < fVar41;
      auVar118._0_4_ = -(uint)bVar13;
      auVar118._4_4_ = -(uint)bVar13;
      auVar118._8_4_ = -(uint)bVar13;
      auVar118._12_4_ = -(uint)bVar13;
      NEON_ext(auVar118,auVar118,8,1);
      if (CONCAT13((char)auVar118._12_4_,
                   CONCAT12((char)auVar118._8_4_,CONCAT11((char)auVar118._4_4_,(char)auVar118._0_4_)
                           )) != -1) goto LAB_00264d8c;
      uVar67 = NEON_frsqrte(uVar90,4);
      fVar102 = (float)uVar67;
      fVar101 = (float)((ulong)uVar67 >> 0x20);
      uVar67 = NEON_frsqrts(CONCAT44(fVar101 * fVar101,fVar102 * fVar102),uVar90,4);
      fVar102 = fVar102 * (float)uVar67;
      fVar101 = fVar101 * (float)((ulong)uVar67 >> 0x20);
      uVar67 = NEON_frsqrts(CONCAT44(fVar101 * fVar101,fVar102 * fVar102),uVar90,4);
      fVar102 = fVar102 * (float)uVar67;
      fVar101 = fVar101 * (float)((ulong)uVar67 >> 0x20);
      uVar67 = NEON_frsqrts(CONCAT44(fVar101 * fVar101,fVar102 * fVar102),uVar90,4);
      fVar102 = fVar102 * (float)uVar67;
      fVar101 = fVar101 * (float)((ulong)uVar67 >> 0x20);
      uVar67 = NEON_frsqrts(CONCAT44(fVar101 * fVar101,fVar102 * fVar102),uVar90,4);
      uVar120 = CONCAT44(fVar30 * fVar101 * (float)((ulong)uVar67 >> 0x20),
                         fVar28 * fVar102 * (float)uVar67);
      uVar120 = uVar120 ^ (uVar120 ^ uVar90) &
                          CONCAT44(-(uint)(fVar28 == 0.0),-(uint)(fVar28 == 0.0));
      uVar67 = NEON_frecpe(uVar120,4);
      uVar42 = NEON_frecps(uVar120,uVar67,4);
      fVar28 = (float)uVar67 * (float)uVar42;
      fVar30 = (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar42 >> 0x20);
      uVar67 = NEON_frecps(uVar120,CONCAT44(fVar30,fVar28),4);
      fVar28 = fVar28 * (float)uVar67;
      fVar30 = fVar30 * (float)((ulong)uVar67 >> 0x20);
      uVar67 = NEON_frecps(uVar120,CONCAT44(fVar30,fVar28),4);
      fVar28 = fVar28 * (float)uVar67;
      fVar30 = fVar30 * (float)((ulong)uVar67 >> 0x20);
      uVar67 = NEON_frecps(uVar120,CONCAT44(fVar30,fVar28),4);
      fVar28 = fVar28 * (float)uVar67;
      uVar67 = NEON_frecps(uVar120,CONCAT44(fVar30 * (float)((ulong)uVar67 >> 0x20),fVar28),4);
      fVar28 = fVar28 * (float)uVar67;
      pfVar1 = (float *)(param_7 + (ulong)*(uint *)(param_7 + 0x1000) * 0x40);
      *(uint *)(param_7 + 0x1000) = *(uint *)(param_7 + 0x1000) + 1;
      auVar108._0_4_ = auVar105._0_4_ - fVar66 * fVar28 * fVar22;
      auVar108._4_4_ = auVar105._4_4_ - fVar17 * fVar28 * fVar22;
      auVar108._8_4_ = auVar43._0_4_ - fVar18 * fVar28 * fVar22;
      auVar108._12_4_ = 0.0 - fVar22 * 0.0;
      auVar43 = NEON_ext(auVar108,auVar108,8,1);
      pfVar1[2] = fVar18 * fVar28;
      pfVar1[3] = (float)(uVar120 >> 0x20) - fVar4;
      *pfVar1 = fVar66 * fVar28;
      pfVar1[1] = fVar17 * fVar28;
      *(ulong *)(pfVar1 + 4) = CONCAT44(fVar62 + auVar108._4_4_,fVar58 + auVar108._0_4_);
      pfVar1[6] = fVar63 + auVar43._0_4_;
      pfVar1[0xd] = -NAN;
      iVar40 = 1;
    }
    else {
LAB_00264d8c:
      iVar40 = 0;
    }
    auVar96._0_4_ = -(uint)(iVar71 < 0);
    auVar96._4_4_ = -(uint)(iVar71 < 0);
    auVar96._8_4_ = -(uint)(iVar71 < 0);
    auVar96._12_4_ = -(uint)(iVar71 < 0);
    NEON_ext(auVar96,auVar96,8,1);
    if (CONCAT13((char)auVar96._12_4_,
                 CONCAT12((char)auVar96._8_4_,CONCAT11((char)auVar96._4_4_,(char)auVar96._0_4_))) ==
        -1) {
      fVar28 = (float)CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(bVar79,bVar78)));
      auVar97._0_4_ = local_30 + fVar33 * fVar28;
      auVar97._4_4_ = fStack_2c + fVar39 * fVar28;
      auVar97._8_4_ = (float)uStack_28 + fVar46 * fVar28;
      auVar97._12_4_ = uStack_28._4_4_ + fVar47 * fVar28;
      auVar43 = NEON_ext(auVar97,auVar97,8,1);
      fVar34 = auVar97._0_4_ - fVar34;
      fVar65 = auVar97._4_4_ - fVar65;
      fVar64 = auVar43._0_4_ - fVar64;
      auVar117._0_4_ = fVar34 * fVar34;
      auVar117._4_4_ = fVar65 * fVar65;
      auVar117._8_4_ = fVar64 * fVar64;
      auVar117._12_4_ = 0;
      auVar44 = NEON_ext(auVar117,auVar117,8,1);
      fVar30 = auVar44._0_4_ + auVar44._4_4_;
      fVar28 = auVar117._0_4_ + auVar117._4_4_ + fVar30;
      fVar30 = auVar117._0_4_ + auVar117._4_4_ + fVar30;
      uVar90 = CONCAT44(fVar30,fVar28);
      bVar13 = 1e-06 < fVar28 && fVar28 < fVar41;
      auVar119._0_4_ = -(uint)bVar13;
      auVar119._4_4_ = -(uint)bVar13;
      auVar119._8_4_ = -(uint)bVar13;
      auVar119._12_4_ = -(uint)bVar13;
      NEON_ext(auVar119,auVar119,8,1);
      if (CONCAT13((char)auVar119._12_4_,
                   CONCAT12((char)auVar119._8_4_,CONCAT11((char)auVar119._4_4_,(char)auVar119._0_4_)
                           )) == -1) {
        uVar67 = NEON_frsqrte(uVar90,4);
        fVar66 = (float)uVar67;
        fVar17 = (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frsqrts(CONCAT44(fVar17 * fVar17,fVar66 * fVar66),uVar90,4);
        fVar66 = fVar66 * (float)uVar67;
        fVar17 = fVar17 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frsqrts(CONCAT44(fVar17 * fVar17,fVar66 * fVar66),uVar90,4);
        fVar66 = fVar66 * (float)uVar67;
        fVar17 = fVar17 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frsqrts(CONCAT44(fVar17 * fVar17,fVar66 * fVar66),uVar90,4);
        fVar66 = fVar66 * (float)uVar67;
        fVar17 = fVar17 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frsqrts(CONCAT44(fVar17 * fVar17,fVar66 * fVar66),uVar90,4);
        uVar120 = CONCAT44(fVar30 * fVar17 * (float)((ulong)uVar67 >> 0x20),
                           fVar28 * fVar66 * (float)uVar67);
        uVar120 = uVar120 ^ (uVar120 ^ uVar90) &
                            CONCAT44(-(uint)(fVar28 == 0.0),-(uint)(fVar28 == 0.0));
        uVar67 = NEON_frecpe(uVar120,4);
        uVar42 = NEON_frecps(uVar120,uVar67,4);
        fVar28 = (float)uVar67 * (float)uVar42;
        fVar30 = (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar42 >> 0x20);
        uVar67 = NEON_frecps(uVar120,CONCAT44(fVar30,fVar28),4);
        fVar28 = fVar28 * (float)uVar67;
        fVar30 = fVar30 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frecps(uVar120,CONCAT44(fVar30,fVar28),4);
        fVar28 = fVar28 * (float)uVar67;
        fVar30 = fVar30 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frecps(uVar120,CONCAT44(fVar30,fVar28),4);
        fVar28 = fVar28 * (float)uVar67;
        uVar67 = NEON_frecps(uVar120,CONCAT44(fVar30 * (float)((ulong)uVar67 >> 0x20),fVar28),4);
        fVar28 = fVar28 * (float)uVar67;
        pfVar1 = (float *)(param_7 + (ulong)*(uint *)(param_7 + 0x1000) * 0x40);
        *(uint *)(param_7 + 0x1000) = *(uint *)(param_7 + 0x1000) + 1;
        auVar98._0_4_ = auVar97._0_4_ - fVar34 * fVar28 * fVar22;
        auVar98._4_4_ = auVar97._4_4_ - fVar65 * fVar28 * fVar22;
        auVar98._8_4_ = auVar43._0_4_ - fVar64 * fVar28 * fVar22;
        auVar98._12_4_ = 0.0 - fVar22 * 0.0;
        auVar43 = NEON_ext(auVar98,auVar98,8,1);
        pfVar1[2] = fVar64 * fVar28;
        pfVar1[3] = (float)(uVar120 >> 0x20) - fVar4;
        *pfVar1 = fVar34 * fVar28;
        pfVar1[1] = fVar65 * fVar28;
        iVar40 = iVar40 + 1;
        *(ulong *)(pfVar1 + 4) = CONCAT44(fVar62 + auVar98._4_4_,fVar58 + auVar98._0_4_);
        pfVar1[6] = fVar63 + auVar43._0_4_;
        pfVar1[0xd] = -NAN;
      }
    }
    auVar99._0_4_ = -(uint)(iVar72 < 0);
    auVar99._4_4_ = -(uint)(iVar72 < 0);
    auVar99._8_4_ = -(uint)(iVar72 < 0);
    auVar99._12_4_ = -(uint)(iVar72 < 0);
    NEON_ext(auVar99,auVar99,8,1);
    if (CONCAT13((char)auVar99._12_4_,
                 CONCAT12((char)auVar99._8_4_,CONCAT11((char)auVar99._4_4_,(char)auVar99._0_4_))) ==
        -1) {
      fVar34 = (float)CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(bVar83,bVar82)));
      auVar100._0_4_ = local_50 + local_60 * fVar34;
      auVar100._4_4_ = fStack_4c + fStack_5c * fVar34;
      auVar100._8_4_ = fVar29 + (float)uStack_58 * fVar34;
      auVar100._12_4_ = fVar23 + uStack_58._4_4_ * fVar34;
      auVar43 = NEON_ext(auVar100,auVar100,8,1);
      fVar28 = local_30 - auVar100._0_4_;
      fVar64 = fStack_2c - auVar100._4_4_;
      fVar30 = (float)uStack_28 - auVar43._0_4_;
      auVar106._0_4_ = fVar28 * fVar28;
      auVar106._4_4_ = fVar64 * fVar64;
      auVar106._8_4_ = fVar30 * fVar30;
      auVar106._12_4_ = (uStack_28._4_4_ - 0.0) * (uStack_28._4_4_ - 0.0);
      auVar43 = NEON_ext(auVar106,auVar106,8,1);
      fVar65 = auVar43._0_4_ + auVar43._4_4_;
      fVar34 = auVar106._0_4_ + auVar106._4_4_ + fVar65;
      fVar65 = auVar106._0_4_ + auVar106._4_4_ + fVar65;
      uVar90 = CONCAT44(fVar65,fVar34);
      bVar13 = 1e-06 < fVar34 && fVar34 < fVar41;
      auVar113._0_4_ = -(uint)bVar13;
      auVar113._4_4_ = -(uint)bVar13;
      auVar113._8_4_ = -(uint)bVar13;
      auVar113._12_4_ = -(uint)bVar13;
      NEON_ext(auVar113,auVar113,8,1);
      if (CONCAT13((char)auVar113._12_4_,
                   CONCAT12((char)auVar113._8_4_,CONCAT11((char)auVar113._4_4_,(char)auVar113._0_4_)
                           )) == -1) {
        uVar67 = NEON_frsqrte(uVar90,4);
        fVar66 = (float)uVar67;
        fVar17 = (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frsqrts(CONCAT44(fVar17 * fVar17,fVar66 * fVar66),uVar90,4);
        fVar66 = fVar66 * (float)uVar67;
        fVar17 = fVar17 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frsqrts(CONCAT44(fVar17 * fVar17,fVar66 * fVar66),uVar90,4);
        fVar66 = fVar66 * (float)uVar67;
        fVar17 = fVar17 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frsqrts(CONCAT44(fVar17 * fVar17,fVar66 * fVar66),uVar90,4);
        fVar66 = fVar66 * (float)uVar67;
        fVar17 = fVar17 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frsqrts(CONCAT44(fVar17 * fVar17,fVar66 * fVar66),uVar90,4);
        uVar120 = CONCAT44(fVar65 * fVar17 * (float)((ulong)uVar67 >> 0x20),
                           fVar34 * fVar66 * (float)uVar67);
        uVar120 = uVar120 ^ (uVar120 ^ uVar90) &
                            CONCAT44(-(uint)(fVar34 == 0.0),-(uint)(fVar34 == 0.0));
        uVar67 = NEON_frecpe(uVar120,4);
        uVar42 = NEON_frecps(uVar120,uVar67,4);
        fVar34 = (float)uVar67 * (float)uVar42;
        fVar65 = (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar42 >> 0x20);
        uVar67 = NEON_frecps(uVar120,CONCAT44(fVar65,fVar34),4);
        fVar34 = fVar34 * (float)uVar67;
        fVar65 = fVar65 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frecps(uVar120,CONCAT44(fVar65,fVar34),4);
        fVar34 = fVar34 * (float)uVar67;
        fVar65 = fVar65 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frecps(uVar120,CONCAT44(fVar65,fVar34),4);
        fVar34 = fVar34 * (float)uVar67;
        uVar67 = NEON_frecps(uVar120,CONCAT44(fVar65 * (float)((ulong)uVar67 >> 0x20),fVar34),4);
        fVar34 = fVar34 * (float)uVar67;
        auVar107._0_4_ = local_30 - fVar28 * fVar34 * fVar22;
        auVar107._4_4_ = fStack_2c - fVar64 * fVar34 * fVar22;
        auVar107._8_4_ = (float)uStack_28 - fVar30 * fVar34 * fVar22;
        auVar107._12_4_ = uStack_28._4_4_ - fVar22 * 0.0;
        auVar43 = NEON_ext(auVar107,auVar107,8,1);
        pfVar1 = (float *)(param_7 + (ulong)*(uint *)(param_7 + 0x1000) * 0x40);
        *(uint *)(param_7 + 0x1000) = *(uint *)(param_7 + 0x1000) + 1;
        pfVar1[2] = fVar30 * fVar34;
        pfVar1[3] = (float)(uVar120 >> 0x20) - fVar4;
        *pfVar1 = fVar28 * fVar34;
        pfVar1[1] = fVar64 * fVar34;
        *(ulong *)(pfVar1 + 4) = CONCAT44(fVar62 + auVar107._4_4_,fVar58 + auVar107._0_4_);
        pfVar1[6] = fVar63 + auVar43._0_4_;
        iVar40 = iVar40 + 1;
        pfVar1[0xd] = -NAN;
      }
    }
    auVar94._0_4_ = -(uint)(iVar73 < 0);
    auVar94._4_4_ = -(uint)(iVar73 < 0);
    auVar94._8_4_ = -(uint)(iVar73 < 0);
    auVar94._12_4_ = -(uint)(iVar73 < 0);
    NEON_ext(auVar94,auVar94,8,1);
    if (CONCAT13((char)auVar94._12_4_,
                 CONCAT12((char)auVar94._8_4_,CONCAT11((char)auVar94._4_4_,(char)auVar94._0_4_))) ==
        -1) {
      fVar34 = (float)CONCAT13(bVar89,CONCAT12(bVar88,CONCAT11(bVar87,bVar86)));
      fVar28 = local_50 + local_60 * fVar34;
      fVar65 = fStack_4c + fStack_5c * fVar34;
      uVar19 = (undefined1)((uint)fVar65 >> 8);
      uVar20 = (undefined1)((uint)fVar65 >> 0x10);
      uVar21 = (undefined1)((uint)fVar65 >> 0x18);
      fVar64 = fVar29 + (float)uStack_58 * fVar34;
      uVar48 = (undefined1)((uint)fVar64 >> 8);
      uVar49 = (undefined1)((uint)fVar64 >> 0x10);
      uVar50 = (undefined1)((uint)fVar64 >> 0x18);
      fVar34 = fVar23 + uStack_58._4_4_ * fVar34;
      uVar51 = (undefined1)((uint)fVar34 >> 8);
      uVar52 = (undefined1)((uint)fVar34 >> 0x10);
      uVar53 = (undefined1)((uint)fVar34 >> 0x18);
      auVar9[4] = SUB41(fVar65,0);
      auVar9._0_4_ = fVar28;
      auVar9[5] = uVar19;
      auVar9[6] = uVar20;
      auVar9[7] = uVar21;
      auVar9[8] = SUB41(fVar64,0);
      auVar9[9] = uVar48;
      auVar9[10] = uVar49;
      auVar9[0xb] = uVar50;
      auVar9[0xc] = SUB41(fVar34,0);
      auVar9[0xd] = uVar51;
      auVar9[0xe] = uVar52;
      auVar9[0xf] = uVar53;
      auVar10[4] = SUB41(fVar65,0);
      auVar10._0_4_ = fVar28;
      auVar10[5] = uVar19;
      auVar10[6] = uVar20;
      auVar10[7] = uVar21;
      auVar10[8] = SUB41(fVar64,0);
      auVar10[9] = uVar48;
      auVar10[10] = uVar49;
      auVar10[0xb] = uVar50;
      auVar10[0xc] = SUB41(fVar34,0);
      auVar10[0xd] = uVar51;
      auVar10[0xe] = uVar52;
      auVar10[0xf] = uVar53;
      auVar43 = NEON_ext(auVar9,auVar10,8,1);
      fVar28 = fVar54 - fVar28;
      fVar65 = fVar56 - fVar65;
      fVar64 = fVar57 - auVar43._0_4_;
      auVar95._0_4_ = fVar28 * fVar28;
      auVar95._4_4_ = fVar65 * fVar65;
      auVar95._8_4_ = fVar64 * fVar64;
      auVar95._12_4_ = 0;
      auVar43 = NEON_ext(auVar95,auVar95,8,1);
      fVar34 = auVar43._0_4_ + auVar43._4_4_;
      fVar30 = auVar95._0_4_ + auVar95._4_4_ + fVar34;
      fVar34 = auVar95._0_4_ + auVar95._4_4_ + fVar34;
      uVar90 = CONCAT44(fVar34,fVar30);
      bVar13 = 1e-06 < fVar30 && fVar30 < fVar41;
      auVar69._0_4_ = -(uint)bVar13;
      auVar69._4_4_ = -(uint)bVar13;
      auVar69._8_4_ = -(uint)bVar13;
      auVar69._12_4_ = -(uint)bVar13;
      NEON_ext(auVar69,auVar69,8,1);
      if (CONCAT13((char)auVar69._12_4_,
                   CONCAT12((char)auVar69._8_4_,CONCAT11((char)auVar69._4_4_,(char)auVar69._0_4_)))
          == -1) {
        uVar67 = NEON_frsqrte(uVar90,4);
        fVar41 = (float)uVar67;
        fVar29 = (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frsqrts(CONCAT44(fVar29 * fVar29,fVar41 * fVar41),uVar90,4);
        fVar41 = fVar41 * (float)uVar67;
        fVar29 = fVar29 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frsqrts(CONCAT44(fVar29 * fVar29,fVar41 * fVar41),uVar90,4);
        fVar41 = fVar41 * (float)uVar67;
        fVar29 = fVar29 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frsqrts(CONCAT44(fVar29 * fVar29,fVar41 * fVar41),uVar90,4);
        fVar41 = fVar41 * (float)uVar67;
        fVar29 = fVar29 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frsqrts(CONCAT44(fVar29 * fVar29,fVar41 * fVar41),uVar90,4);
        fVar41 = fVar30 * fVar41 * (float)uVar67;
        fVar34 = fVar34 * fVar29 * (float)((ulong)uVar67 >> 0x20);
        uVar19 = (undefined1)((uint)fVar34 >> 8);
        uVar20 = (undefined1)((uint)fVar34 >> 0x10);
        uVar21 = (undefined1)((uint)fVar34 >> 0x18);
        uVar90 = CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(SUB41(fVar34,0),fVar41))))
                 ^ (CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(SUB41(fVar34,0),fVar41)
                                                            ))) ^ uVar90) &
                   CONCAT44(-(uint)(fVar30 == 0.0),-(uint)(fVar30 == 0.0));
        uVar67 = NEON_frecpe(uVar90,4);
        uVar42 = NEON_frecps(uVar90,uVar67,4);
        fVar41 = (float)uVar67 * (float)uVar42;
        fVar29 = (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar42 >> 0x20);
        uVar67 = NEON_frecps(uVar90,CONCAT17((char)((uint)fVar29 >> 0x18),
                                             CONCAT16((char)((uint)fVar29 >> 0x10),
                                                      CONCAT15((char)((uint)fVar29 >> 8),
                                                               CONCAT14(SUB41(fVar29,0),fVar41)))),4
                            );
        fVar41 = fVar41 * (float)uVar67;
        fVar29 = fVar29 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frecps(uVar90,CONCAT17((char)((uint)fVar29 >> 0x18),
                                             CONCAT16((char)((uint)fVar29 >> 0x10),
                                                      CONCAT15((char)((uint)fVar29 >> 8),
                                                               CONCAT14(SUB41(fVar29,0),fVar41)))),4
                            );
        fVar41 = fVar41 * (float)uVar67;
        fVar29 = fVar29 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frecps(uVar90,CONCAT17((char)((uint)fVar29 >> 0x18),
                                             CONCAT16((char)((uint)fVar29 >> 0x10),
                                                      CONCAT15((char)((uint)fVar29 >> 8),
                                                               CONCAT14(SUB41(fVar29,0),fVar41)))),4
                            );
        fVar41 = fVar41 * (float)uVar67;
        fVar29 = fVar29 * (float)((ulong)uVar67 >> 0x20);
        uVar67 = NEON_frecps(uVar90,CONCAT17((char)((uint)fVar29 >> 0x18),
                                             CONCAT16((char)((uint)fVar29 >> 0x10),
                                                      CONCAT15((char)((uint)fVar29 >> 8),
                                                               CONCAT14(SUB41(fVar29,0),fVar41)))),4
                            );
        fVar41 = fVar41 * (float)uVar67;
        fVar65 = fVar65 * fVar41;
        auVar38._0_8_ = CONCAT44(fVar56 - fVar65 * fVar22,fVar54 - fVar28 * fVar41 * fVar22);
        auVar38._8_4_ = fVar57 - fVar64 * fVar41 * fVar22;
        auVar38._12_4_ = 0.0 - fVar22 * 0.0;
        auVar43 = NEON_ext(auVar38,auVar38,8,1);
        puVar16 = (undefined8 *)(param_7 + (ulong)*(uint *)(param_7 + 0x1000) * 0x40);
        auVar35._8_4_ = auVar43._0_4_;
        auVar35._0_8_ = auVar38._0_8_;
        *(uint *)(param_7 + 0x1000) = *(uint *)(param_7 + 0x1000) + 1;
        puVar16[1] = CONCAT44((float)(uVar90 >> 0x20) - fVar4,fVar64 * fVar41);
        *puVar16 = CONCAT17((char)((uint)fVar65 >> 0x18),
                            CONCAT16((char)((uint)fVar65 >> 0x10),
                                     CONCAT15((char)((uint)fVar65 >> 8),
                                              CONCAT14(SUB41(fVar65,0),fVar28 * fVar41))));
        goto LAB_002651e4;
      }
    }
    if (iVar40 != 0) {
      return 1;
    }
  }
  iVar40 = -(uint)(1e-06 < fVar31);
  uVar19 = (undefined1)((ulong)_UNK_01d4ae58 >> 8);
  uVar20 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x10);
  uVar21 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x18);
  uVar48 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x20);
  uVar49 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x28);
  uVar50 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x30);
  uVar51 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x38);
  auVar70._4_4_ = iVar40;
  auVar70._0_4_ = iVar40;
  auVar70._8_4_ = iVar40;
  auVar70._12_4_ = iVar40;
  auVar11[8] = (char)_UNK_01d4ae58;
  auVar11._0_8_ = _DAT_01d4ae50;
  auVar11[9] = uVar19;
  auVar11[10] = uVar20;
  auVar11[0xb] = uVar21;
  auVar11[0xc] = uVar48;
  auVar11[0xd] = uVar49;
  auVar11[0xe] = uVar50;
  auVar11[0xf] = uVar51;
  auVar12[8] = (char)_UNK_01d4ae58;
  auVar12._0_8_ = _DAT_01d4ae50;
  auVar12[9] = uVar19;
  auVar12[10] = uVar20;
  auVar12[0xb] = uVar21;
  auVar12[0xc] = uVar48;
  auVar12[0xd] = uVar49;
  auVar12[0xe] = uVar50;
  auVar12[0xf] = uVar51;
  iVar40 = -(uint)((float)CONCAT13(extraout_var_01,
                                   CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) <
                  1e-06);
  uVar67 = NEON_frsqrte(CONCAT17(extraout_var_05,
                                 CONCAT16(extraout_var_04,
                                          CONCAT15(extraout_var_03,
                                                   CONCAT14(extraout_var_02,
                                                            CONCAT13(extraout_var_01,
                                                                     CONCAT12(extraout_var_00,
                                                                              CONCAT11(extraout_var,
                                                                                       extraout_b0))
                                                                    ))))),4);
  auVar36._0_4_ = local_30 + fVar33 * local_68[0];
  auVar36._4_4_ = fStack_2c + fVar39 * local_68[0];
  auVar36._8_4_ = (float)uStack_28 + fVar46 * local_68[0];
  auVar36._12_4_ = uStack_28._4_4_ + fVar47 * local_68[0];
  auVar44 = NEON_ext(auVar36,auVar36,8,1);
  auVar45._0_4_ = local_50 + local_60 * local_70[0];
  auVar45._4_4_ = fStack_4c + fStack_5c * local_70[0];
  auVar45._8_4_ = fVar29 + (float)uStack_58 * local_70[0];
  auVar45._12_4_ = fVar23 + uStack_58._4_4_ * local_70[0];
  fVar41 = (float)uVar67;
  fVar23 = (float)((ulong)uVar67 >> 0x20);
  fVar29 = fVar23 * fVar23;
  uVar67 = NEON_frsqrts(CONCAT17((char)((uint)fVar29 >> 0x18),
                                 CONCAT16((char)((uint)fVar29 >> 0x10),
                                          CONCAT15((char)((uint)fVar29 >> 8),
                                                   CONCAT14(SUB41(fVar29,0),fVar41 * fVar41)))),
                        CONCAT17(extraout_var_05,
                                 CONCAT16(extraout_var_04,
                                          CONCAT15(extraout_var_03,
                                                   CONCAT14(extraout_var_02,
                                                            CONCAT13(extraout_var_01,
                                                                     CONCAT12(extraout_var_00,
                                                                              CONCAT11(extraout_var,
                                                                                       extraout_b0))
                                                                    ))))),4);
  auVar60._4_4_ = iVar40;
  auVar60._0_4_ = iVar40;
  auVar60._8_4_ = iVar40;
  auVar60._12_4_ = iVar40;
  fVar41 = fVar41 * (float)uVar67;
  fVar23 = fVar23 * (float)((ulong)uVar67 >> 0x20);
  auVar43 = NEON_ext(auVar45,auVar45,8,1);
  uVar67 = NEON_frsqrts(CONCAT44(fVar23 * fVar23,fVar41 * fVar41),
                        CONCAT17(extraout_var_05,
                                 CONCAT16(extraout_var_04,
                                          CONCAT15(extraout_var_03,
                                                   CONCAT14(extraout_var_02,
                                                            CONCAT13(extraout_var_01,
                                                                     CONCAT12(extraout_var_00,
                                                                              CONCAT11(extraout_var,
                                                                                       extraout_b0))
                                                                    ))))),4);
  auVar61._0_4_ = auVar36._0_4_ - auVar45._0_4_;
  auVar61._4_4_ = auVar36._4_4_ - auVar45._4_4_;
  auVar61._8_4_ = auVar44._0_4_ - auVar43._0_4_;
  auVar61._12_4_ = 0;
  auVar61 = auVar61 ^ (auVar61 ^ auVar12 ^ (auVar11 ^ auVar15) & auVar70) & auVar60;
  fVar41 = fVar41 * (float)uVar67;
  fVar23 = fVar23 * (float)((ulong)uVar67 >> 0x20);
  fVar30 = auVar61._0_4_;
  fVar29 = fVar30 * fVar30;
  fVar65 = auVar61._4_4_;
  fVar34 = fVar65 * fVar65;
  uVar19 = (undefined1)((uint)fVar34 >> 8);
  uVar20 = (undefined1)((uint)fVar34 >> 0x10);
  uVar21 = (undefined1)((uint)fVar34 >> 0x18);
  fVar31 = auVar61._8_4_;
  fVar28 = fVar31 * fVar31;
  uVar48 = (undefined1)((uint)fVar28 >> 8);
  uVar49 = (undefined1)((uint)fVar28 >> 0x10);
  uVar50 = (undefined1)((uint)fVar28 >> 0x18);
  fVar64 = auVar61._12_4_ * auVar61._12_4_;
  uVar51 = (undefined1)((uint)fVar64 >> 8);
  uVar52 = (undefined1)((uint)fVar64 >> 0x10);
  uVar53 = (undefined1)((uint)fVar64 >> 0x18);
  auVar7[4] = SUB41(fVar34,0);
  auVar7._0_4_ = fVar29;
  auVar7[5] = uVar19;
  auVar7[6] = uVar20;
  auVar7[7] = uVar21;
  auVar7[8] = SUB41(fVar28,0);
  auVar7[9] = uVar48;
  auVar7[10] = uVar49;
  auVar7[0xb] = uVar50;
  auVar7[0xc] = SUB41(fVar64,0);
  auVar7[0xd] = uVar51;
  auVar7[0xe] = uVar52;
  auVar7[0xf] = uVar53;
  auVar8[4] = SUB41(fVar34,0);
  auVar8._0_4_ = fVar29;
  auVar8[5] = uVar19;
  auVar8[6] = uVar20;
  auVar8[7] = uVar21;
  auVar8[8] = SUB41(fVar28,0);
  auVar8[9] = uVar48;
  auVar8[10] = uVar49;
  auVar8[0xb] = uVar50;
  auVar8[0xc] = SUB41(fVar64,0);
  auVar8[0xd] = uVar51;
  auVar8[0xe] = uVar52;
  auVar8[0xf] = uVar53;
  auVar43 = NEON_ext(auVar7,auVar8,8,1);
  fVar64 = auVar43._0_4_ + auVar43._4_4_;
  fVar28 = fVar29 + fVar34 + fVar64;
  fVar64 = fVar29 + fVar34 + fVar64;
  uVar19 = SUB41(fVar64,0);
  uVar20 = (undefined1)((uint)fVar64 >> 8);
  uVar21 = (undefined1)((uint)fVar64 >> 0x10);
  uVar48 = (undefined1)((uint)fVar64 >> 0x18);
  uVar67 = NEON_frsqrte(CONCAT17(uVar48,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,fVar28)))),4
                       );
  fVar29 = (float)uVar67;
  fVar34 = (float)((ulong)uVar67 >> 0x20);
  uVar67 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar29 * fVar29),
                        CONCAT17(uVar48,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,fVar28)))),4
                       );
  fVar29 = fVar29 * (float)uVar67;
  fVar34 = fVar34 * (float)((ulong)uVar67 >> 0x20);
  uVar67 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar29 * fVar29),
                        CONCAT17(uVar48,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,fVar28)))),4
                       );
  fVar29 = fVar29 * (float)uVar67;
  fVar34 = fVar34 * (float)((ulong)uVar67 >> 0x20);
  uVar67 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar29 * fVar29),
                        CONCAT17(uVar48,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,fVar28)))),4
                       );
  fVar29 = fVar29 * (float)uVar67;
  fVar34 = fVar34 * (float)((ulong)uVar67 >> 0x20);
  uVar67 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar29 * fVar29),
                        CONCAT17(uVar48,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,fVar28)))),4
                       );
  uVar90 = CONCAT44(fVar64 * fVar34 * (float)((ulong)uVar67 >> 0x20),fVar28 * fVar29 * (float)uVar67
                   );
  uVar90 = uVar90 ^ (uVar90 ^ CONCAT17(uVar48,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,fVar28
                                                                                      ))))) &
                    CONCAT44(-(uint)(fVar28 == 0.0),-(uint)(fVar28 == 0.0));
  uVar67 = NEON_frecpe(uVar90,4);
  uVar42 = NEON_frecps(uVar90,uVar67,4);
  fVar29 = (float)uVar67 * (float)uVar42;
  fVar34 = (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar42 >> 0x20);
  uVar67 = NEON_frecps(uVar90,CONCAT17((char)((uint)fVar34 >> 0x18),
                                       CONCAT16((char)((uint)fVar34 >> 0x10),
                                                CONCAT15((char)((uint)fVar34 >> 8),
                                                         CONCAT14(SUB41(fVar34,0),fVar29)))),4);
  fVar29 = fVar29 * (float)uVar67;
  fVar34 = fVar34 * (float)((ulong)uVar67 >> 0x20);
  uVar67 = NEON_frecps(uVar90,CONCAT17((char)((uint)fVar34 >> 0x18),
                                       CONCAT16((char)((uint)fVar34 >> 0x10),
                                                CONCAT15((char)((uint)fVar34 >> 8),
                                                         CONCAT14(SUB41(fVar34,0),fVar29)))),4);
  fVar29 = fVar29 * (float)uVar67;
  fVar34 = fVar34 * (float)((ulong)uVar67 >> 0x20);
  uVar67 = NEON_frecps(uVar90,CONCAT17((char)((uint)fVar34 >> 0x18),
                                       CONCAT16((char)((uint)fVar34 >> 0x10),
                                                CONCAT15((char)((uint)fVar34 >> 8),
                                                         CONCAT14(SUB41(fVar34,0),fVar29)))),4);
  fVar29 = fVar29 * (float)uVar67;
  fVar34 = fVar34 * (float)((ulong)uVar67 >> 0x20);
  uVar67 = NEON_frecps(uVar90,CONCAT17((char)((uint)fVar34 >> 0x18),
                                       CONCAT16((char)((uint)fVar34 >> 0x10),
                                                CONCAT15((char)((uint)fVar34 >> 8),
                                                         CONCAT14(SUB41(fVar34,0),fVar29)))),4);
  fVar29 = fVar29 * (float)uVar67;
  uVar67 = NEON_frsqrts(CONCAT44(fVar23 * fVar23,fVar41 * fVar41),
                        CONCAT17(extraout_var_05,
                                 CONCAT16(extraout_var_04,
                                          CONCAT15(extraout_var_03,
                                                   CONCAT14(extraout_var_02,
                                                            CONCAT13(extraout_var_01,
                                                                     CONCAT12(extraout_var_00,
                                                                              CONCAT11(extraout_var,
                                                                                       extraout_b0))
                                                                    ))))),4);
  fVar65 = fVar65 * fVar29;
  fVar41 = fVar41 * (float)uVar67;
  fVar23 = fVar23 * (float)((ulong)uVar67 >> 0x20);
  uVar67 = NEON_frsqrts(CONCAT44(fVar23 * fVar23,fVar41 * fVar41),
                        CONCAT17(extraout_var_05,
                                 CONCAT16(extraout_var_04,
                                          CONCAT15(extraout_var_03,
                                                   CONCAT14(extraout_var_02,
                                                            CONCAT13(extraout_var_01,
                                                                     CONCAT12(extraout_var_00,
                                                                              CONCAT11(extraout_var,
                                                                                       extraout_b0))
                                                                    ))))),4);
  auVar37._0_8_ = CONCAT44(auVar36._4_4_ - fVar65 * fVar22,auVar36._0_4_ - fVar30 * fVar29 * fVar22)
  ;
  auVar37._8_4_ = auVar44._0_4_ - fVar31 * fVar29 * fVar22;
  auVar37._12_4_ = 0.0 - fVar22 * 0.0;
  auVar43 = NEON_ext(auVar37,auVar37,8,1);
  fVar41 = (float)CONCAT13(extraout_var_05,
                           CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02))) *
           fVar23 * (float)((ulong)uVar67 >> 0x20);
  uVar14 = (uint)fVar41 ^
           ((uint)fVar41 ^
           CONCAT13(extraout_var_05,
                    CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02)))) &
           -(uint)((float)CONCAT13(extraout_var_01,
                                   CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) ==
                  0.0);
  auVar35._8_4_ = auVar43._0_4_;
  auVar35._0_8_ = auVar37._0_8_;
  fVar4 = (float)CONCAT13((byte)(uVar14 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                          CONCAT12((byte)(uVar14 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                   CONCAT11((byte)(uVar14 >> 8) & ~(byte)((uint)iVar40 >> 8),
                                            (byte)uVar14 & ~(byte)iVar40))) - fVar4;
  puVar16 = (undefined8 *)(param_7 + (ulong)*(uint *)(param_7 + 0x1000) * 0x40);
  *(uint *)(param_7 + 0x1000) = *(uint *)(param_7 + 0x1000) + 1;
  puVar16[1] = CONCAT17((char)((uint)fVar4 >> 0x18),
                        CONCAT16((char)((uint)fVar4 >> 0x10),
                                 CONCAT15((char)((uint)fVar4 >> 8),
                                          CONCAT14(SUB41(fVar4,0),fVar31 * fVar29))));
  *puVar16 = CONCAT17((char)((uint)fVar65 >> 0x18),
                      CONCAT16((char)((uint)fVar65 >> 0x10),
                               CONCAT15((char)((uint)fVar65 >> 8),
                                        CONCAT14(SUB41(fVar65,0),fVar30 * fVar29))));
LAB_002651e4:
  fVar62 = fVar62 + auVar35._4_4_;
  puVar16[2] = CONCAT17((char)((uint)fVar62 >> 0x18),
                        CONCAT16((char)((uint)fVar62 >> 0x10),
                                 CONCAT15((char)((uint)fVar62 >> 8),
                                          CONCAT14(SUB41(fVar62,0),fVar58 + auVar35._0_4_))));
  *(float *)(puVar16 + 3) = fVar63 + auVar35._8_4_;
  *(undefined4 *)((long)puVar16 + 0x34) = 0xffffffff;
  return 1;
}


