/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014c010; name: FUN_0014c010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014c010(undefined8 *param_1,int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  float fVar27;
  float fVar29;
  undefined1 auVar28 [16];
  byte bVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar50;
  float fVar51;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar52 [16];
  float fVar58;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar59;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar60 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  float fVar101;
  undefined1 auVar102 [16];
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float local_190;
  float fStack_18c;
  float fStack_188;
  undefined1 local_148 [44];
  float fStack_11c;
  float local_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  *(int *)(param_1 + 0x1a) = iVar1;
  *(int *)((long)param_1 + 0xd4) = iVar2;
  fVar27 = (float)param_2[2];
  *(float *)(param_1 + 0x1b) = fVar27;
  fVar71 = fVar27 * *(float *)(param_3 + 0xa0);
  fVar38 = (float)param_2[4] * (float)param_2[4];
  auVar82._0_4_ = *(float *)(param_3 + 0x54) * fVar71;
  auVar82._4_4_ = *(float *)(param_3 + 0x58) * fVar71;
  auVar82._8_4_ = *(float *)(param_3 + 0x5c) * fVar71;
  auVar82._12_4_ = *(float *)(param_3 + 0x60) * fVar71;
  auVar76._8_4_ = 0x42fefff3;
  auVar76._0_8_ = 0x42fefff342fefff3;
  auVar76._12_4_ = 0x42fefff3;
  auVar67 = NEON_fmov(0x3f800000,4);
  fVar68 = (float)param_2[3];
  auVar40._8_4_ = 0xc2fefff3;
  auVar40._0_8_ = 0xc2fefff3c2fefff3;
  auVar40._12_4_ = 0xc2fefff3;
  auVar40 = NEON_fmax(auVar40,auVar82,4);
  auVar40 = NEON_fmin(auVar40,auVar76,4);
  fVar42 = auVar40._0_4_ + 0.5;
  fVar46 = auVar40._4_4_ + 0.5;
  fVar47 = auVar40._8_4_ + 0.5;
  fVar49 = auVar40._12_4_ + 0.5;
  fVar29 = *(float *)(param_3 + 0xdc) * fVar27;
  fVar77 = *(float *)(param_3 + 0xe0) * fVar27;
  fVar79 = *(float *)(param_3 + 0xe4) * fVar27;
  auVar83._0_4_ = (int)fVar42 + ((int)fVar42 >> 0x1f);
  auVar83._4_4_ = (int)fVar46 + ((int)fVar46 >> 0x1f);
  auVar83._8_4_ = (int)fVar47 + ((int)fVar47 >> 0x1f);
  auVar83._12_4_ = (int)fVar49 + ((int)fVar49 >> 0x1f);
  auVar52 = NEON_scvtf(auVar83,4);
  fVar57 = auVar67._0_4_;
  fVar73 = auVar67._4_4_;
  fVar74 = auVar67._8_4_;
  fVar42 = auVar40._0_4_ - auVar52._0_4_;
  fVar46 = auVar40._4_4_ - auVar52._4_4_;
  fVar47 = auVar40._8_4_ - auVar52._8_4_;
  fVar41 = auVar40._12_4_ - auVar52._12_4_;
  fVar49 = fVar42 * fVar42;
  fVar55 = fVar46 * fVar46;
  fVar56 = fVar47 * fVar47;
  fVar58 = fVar41 * fVar41;
  fVar42 = fVar42 * (fVar49 * (fVar49 * 0.023093348 + 20.202066) + 1513.9069);
  fVar46 = fVar46 * (fVar55 * (fVar55 * 0.023093348 + 20.202066) + 1513.9069);
  fVar47 = fVar47 * (fVar56 * (fVar56 * 0.023093348 + 20.202066) + 1513.9069);
  fVar41 = fVar41 * (fVar58 * (fVar58 * 0.023093348 + 20.202066) + 1513.9069);
  auVar53._0_4_ = (fVar49 * (fVar49 + 233.1842) + 4368.2114) - fVar42;
  auVar53._4_4_ = (fVar55 * (fVar55 + 233.1842) + 4368.2114) - fVar46;
  auVar53._8_4_ = (fVar56 * (fVar56 + 233.1842) + 4368.2114) - fVar47;
  auVar53._12_4_ = (fVar58 * (fVar58 + 233.1842) + 4368.2114) - fVar41;
  auVar52 = NEON_frecpe(auVar53,4);
  auVar40 = NEON_frecps(auVar53,auVar52,4);
  fVar42 = auVar52._0_4_ * auVar40._0_4_ * fVar42;
  fVar46 = auVar52._4_4_ * auVar40._4_4_ * fVar46;
  fVar47 = auVar52._8_4_ * auVar40._8_4_ * fVar47;
  fVar41 = auVar52._12_4_ * auVar40._12_4_ * fVar41;
  fVar49 = (fVar42 + fVar42 + fVar57) * (float)(auVar83._0_4_ * 0x800000 + (int)fVar57);
  fVar55 = (fVar46 + fVar46 + fVar73) * (float)(auVar83._4_4_ * 0x800000 + (int)fVar73);
  fVar56 = (fVar47 + fVar47 + fVar74) * (float)(auVar83._8_4_ * 0x800000 + (int)fVar74);
  fVar41 = (fVar41 + fVar41 + auVar67._12_4_) *
           (float)(auVar83._12_4_ * 0x800000 + (int)auVar67._12_4_);
  fVar64 = fVar49 * fVar68;
  fVar65 = fVar55 * fVar68;
  fVar66 = fVar56 * fVar68;
  fVar68 = fVar41 * fVar68;
  auVar67._0_4_ = *(float *)(param_3 + 0x60) * fVar71;
  auVar67._4_4_ = *(float *)(param_3 + 100) * fVar71;
  auVar67._8_4_ = *(float *)(param_3 + 0x68) * fVar71;
  auVar67._12_4_ = *(float *)(param_3 + 0x6c) * fVar71;
  auVar52._8_4_ = 0xc2fefff3;
  auVar52._0_8_ = 0xc2fefff3c2fefff3;
  auVar52._12_4_ = 0xc2fefff3;
  auVar40 = NEON_fmax(auVar52,auVar67,4);
  auVar40 = NEON_fmin(auVar40,auVar76,4);
  fVar42 = auVar40._0_4_ + 0.5;
  fVar46 = auVar40._4_4_ + 0.5;
  fVar47 = auVar40._8_4_ + 0.5;
  fVar58 = auVar40._12_4_ + 0.5;
  auVar54._0_4_ = (int)fVar42 + ((int)fVar42 >> 0x1f);
  auVar54._4_4_ = (int)fVar46 + ((int)fVar46 >> 0x1f);
  auVar54._8_4_ = (int)fVar47 + ((int)fVar47 >> 0x1f);
  auVar54._12_4_ = (int)fVar58 + ((int)fVar58 >> 0x1f);
  auVar52 = NEON_scvtf(auVar54,4);
  fVar42 = auVar40._0_4_ - auVar52._0_4_;
  fVar58 = auVar40._4_4_ - auVar52._4_4_;
  fVar48 = auVar40._8_4_ - auVar52._8_4_;
  fVar46 = auVar40._12_4_ - auVar52._12_4_;
  fVar47 = fVar42 * fVar42;
  fVar61 = fVar58 * fVar58;
  fVar62 = fVar48 * fVar48;
  fVar63 = fVar46 * fVar46;
  fVar42 = fVar42 * (fVar47 * (fVar47 * 0.023093348 + 20.202066) + 1513.9069);
  fVar58 = fVar58 * (fVar61 * (fVar61 * 0.023093348 + 20.202066) + 1513.9069);
  fVar48 = fVar48 * (fVar62 * (fVar62 * 0.023093348 + 20.202066) + 1513.9069);
  auVar60._0_4_ = (fVar47 * (fVar47 + 233.1842) + 4368.2114) - fVar42;
  auVar60._4_4_ = (fVar61 * (fVar61 + 233.1842) + 4368.2114) - fVar58;
  auVar60._8_4_ = (fVar62 * (fVar62 + 233.1842) + 4368.2114) - fVar48;
  auVar60._12_4_ =
       (fVar63 * (fVar63 + 233.1842) + 4368.2114) -
       fVar46 * (fVar63 * (fVar63 * 0.023093348 + 20.202066) + 1513.9069);
  auVar52 = NEON_frecpe(auVar60,4);
  auVar40 = NEON_frecps(auVar60,auVar52,4);
  fVar42 = auVar52._0_4_ * auVar40._0_4_ * fVar42;
  fVar58 = auVar52._4_4_ * auVar40._4_4_ * fVar58;
  fVar48 = auVar52._8_4_ * auVar40._8_4_ * fVar48;
  fVar69 = (float)param_2[8];
  fVar72 = -(float)param_2[7];
  fVar59 = fVar72 - (float)param_2[7];
  fVar81 = fVar59 * fVar72;
  fVar47 = ((float)param_2[9] - *(float *)(param_3 + 0xdc)) * *(float *)(param_3 + 0x78) * fVar27;
  fVar61 = ((float)param_2[10] - *(float *)(param_3 + 0xe0)) * *(float *)(param_3 + 0x7c) * fVar27;
  fVar63 = ((float)param_2[0xb] - *(float *)(param_3 + 0xe4)) * *(float *)(param_3 + 0x80) * fVar27;
  fVar36 = (float)(iVar1 + 1) * 0.5 * (float)param_2[1];
  fVar78 = fVar47 * fVar36;
  fVar80 = fVar61 * fVar36;
  fVar36 = fVar63 * fVar36;
  fVar46 = (float)param_2[5];
  fVar50 = -(float)param_2[6];
  fVar62 = fVar50 - (float)param_2[6];
  fVar43 = -fVar46 - fVar46;
  fVar42 = fVar78 + (*(float *)(param_3 + 0x48) * fVar38 -
                    fVar29 * (fVar57 - (fVar42 + fVar42 + fVar57) *
                                       (float)(auVar54._0_4_ * 0x800000 + (int)fVar57)));
  fVar58 = fVar80 + (*(float *)(param_3 + 0x4c) * fVar38 -
                    fVar77 * (fVar73 - (fVar58 + fVar58 + fVar73) *
                                       (float)(auVar54._4_4_ * 0x800000 + (int)fVar73)));
  fVar48 = fVar36 + (*(float *)(param_3 + 0x50) * fVar38 -
                    fVar79 * (fVar74 - (fVar48 + fVar48 + fVar74) *
                                       (float)(auVar54._8_4_ * 0x800000 + (int)fVar74)));
  fVar59 = fVar59 * fVar69;
  fVar39 = fVar43 * fVar50 + fVar59;
  fVar59 = fVar43 * fVar50 - fVar59;
  fVar101 = fVar43 * fVar46 + 1.0;
  fVar37 = (1.0 - fVar62 * fVar50) - fVar81;
  fVar70 = fVar43 * fVar72 + fVar62 * fVar69;
  fVar81 = fVar101 - fVar81;
  auVar102._4_4_ = fVar81;
  auVar102._0_4_ = fVar59;
  fVar75 = fVar62 * fVar72 - fVar43 * fVar69;
  fVar51 = fVar43 * fVar72 - fVar62 * fVar69;
  fVar43 = fVar62 * fVar72 + fVar43 * fVar69;
  bVar93 = (byte)DAT_01d4ab58;
  bVar94 = (byte)((ulong)DAT_01d4ab58 >> 8);
  bVar95 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
  bVar96 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
  bVar97 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
  bVar98 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
  bVar99 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
  bVar100 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
  bVar85 = (byte)DAT_01d4ab50;
  bVar86 = (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar87 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar88 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
  bVar89 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
  bVar90 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
  bVar91 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
  bVar92 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
  fVar101 = fVar101 - fVar62 * fVar50;
  auVar102._8_4_ = fVar43;
  auVar102._12_4_ = 0;
  param_1[1] = (ulong)(uint)fVar51;
  *param_1 = CONCAT44(fVar39,fVar37);
  *(undefined1 (*) [16])(param_1 + 2) = auVar102;
  fVar46 = fVar70 * fVar48 + fVar37 * fVar42 + fVar59 * fVar58;
  fVar38 = fVar75 * fVar48 + fVar39 * fVar42 + fVar81 * fVar58;
  fVar62 = fVar101 * fVar48 + fVar51 * fVar42 + fVar43 * fVar58;
  fVar42 = fVar48 * 0.0 + fVar42 * 0.0 + fVar58 * 0.0;
  param_1[5] = (ulong)(uint)fVar101;
  param_1[4] = CONCAT44(fVar75,fVar70);
  *(byte *)(param_1 + 7) = SUB41(fVar62,0) & bVar93;
  *(byte *)((long)param_1 + 0x39) = (byte)((uint)fVar62 >> 8) & bVar94;
  *(byte *)((long)param_1 + 0x3a) = (byte)((uint)fVar62 >> 0x10) & bVar95;
  *(byte *)((long)param_1 + 0x3b) = (byte)((uint)fVar62 >> 0x18) & bVar96;
  *(byte *)((long)param_1 + 0x3c) = SUB41(fVar42,0) & bVar97;
  *(byte *)((long)param_1 + 0x3d) = (byte)((uint)fVar42 >> 8) & bVar98;
  *(byte *)((long)param_1 + 0x3e) = (byte)((uint)fVar42 >> 0x10) & bVar99;
  *(byte *)((long)param_1 + 0x3f) = (byte)((uint)fVar42 >> 0x18) & bVar100;
  *(byte *)(param_1 + 6) = SUB41(fVar46,0) & bVar85;
  *(byte *)((long)param_1 + 0x31) = (byte)((uint)fVar46 >> 8) & bVar86;
  *(byte *)((long)param_1 + 0x32) = (byte)((uint)fVar46 >> 0x10) & bVar87;
  *(byte *)((long)param_1 + 0x33) = (byte)((uint)fVar46 >> 0x18) & bVar88;
  *(byte *)((long)param_1 + 0x34) = SUB41(fVar38,0) & bVar89;
  *(byte *)((long)param_1 + 0x35) = (byte)((uint)fVar38 >> 8) & bVar90;
  *(byte *)((long)param_1 + 0x36) = (byte)((uint)fVar38 >> 0x10) & bVar91;
  *(byte *)((long)param_1 + 0x37) = (byte)((uint)fVar38 >> 0x18) & bVar92;
  fVar47 = fVar47 - fVar78;
  fVar61 = fVar61 - fVar80;
  fVar63 = fVar63 - fVar36;
  fVar42 = fVar70 * fVar63 + fVar37 * fVar47 + fVar59 * fVar61;
  fVar46 = fVar75 * fVar63 + fVar39 * fVar47 + fVar81 * fVar61;
  fVar58 = fVar101 * fVar63 + fVar51 * fVar47 + fVar43 * fVar61;
  fVar47 = fVar63 * 0.0 + fVar47 * 0.0 + fVar61 * 0.0;
  *(byte *)(param_1 + 9) = SUB41(fVar58,0) & bVar93;
  *(byte *)((long)param_1 + 0x49) = (byte)((uint)fVar58 >> 8) & bVar94;
  *(byte *)((long)param_1 + 0x4a) = (byte)((uint)fVar58 >> 0x10) & bVar95;
  *(byte *)((long)param_1 + 0x4b) = (byte)((uint)fVar58 >> 0x18) & bVar96;
  *(byte *)((long)param_1 + 0x4c) = SUB41(fVar47,0) & bVar97;
  *(byte *)((long)param_1 + 0x4d) = (byte)((uint)fVar47 >> 8) & bVar98;
  *(byte *)((long)param_1 + 0x4e) = (byte)((uint)fVar47 >> 0x10) & bVar99;
  *(byte *)((long)param_1 + 0x4f) = (byte)((uint)fVar47 >> 0x18) & bVar100;
  *(byte *)(param_1 + 8) = SUB41(fVar42,0) & bVar85;
  *(byte *)((long)param_1 + 0x41) = (byte)((uint)fVar42 >> 8) & bVar86;
  *(byte *)((long)param_1 + 0x42) = (byte)((uint)fVar42 >> 0x10) & bVar87;
  *(byte *)((long)param_1 + 0x43) = (byte)((uint)fVar42 >> 0x18) & bVar88;
  *(byte *)((long)param_1 + 0x44) = SUB41(fVar46,0) & bVar89;
  *(byte *)((long)param_1 + 0x45) = (byte)((uint)fVar46 >> 8) & bVar90;
  *(byte *)((long)param_1 + 0x46) = (byte)((uint)fVar46 >> 0x10) & bVar91;
  *(byte *)((long)param_1 + 0x47) = (byte)((uint)fVar46 >> 0x18) & bVar92;
  fVar29 = fVar29 - *(float *)(param_3 + 0x188) * fVar27;
  fVar77 = fVar77 - *(float *)(param_3 + 0x18c) * fVar27;
  fVar79 = fVar79 - *(float *)(param_3 + 400) * fVar27;
  fVar42 = fVar70 * fVar79 + fVar37 * fVar29 + fVar59 * fVar77;
  fVar46 = fVar75 * fVar79 + fVar39 * fVar29 + fVar81 * fVar77;
  fVar47 = fVar101 * fVar79 + fVar51 * fVar29 + fVar43 * fVar77;
  fVar29 = fVar79 * 0.0 + fVar29 * 0.0 + fVar77 * 0.0;
  param_1[0xb] = CONCAT17((byte)((uint)fVar29 >> 0x18) & bVar100,
                          CONCAT16((byte)((uint)fVar29 >> 0x10) & bVar99,
                                   CONCAT15((byte)((uint)fVar29 >> 8) & bVar98,
                                            CONCAT14(SUB41(fVar29,0) & bVar97,
                                                     CONCAT13((byte)((uint)fVar47 >> 0x18) & bVar96,
                                                              CONCAT12((byte)((uint)fVar47 >> 0x10)
                                                                       & bVar95,CONCAT11((byte)((
                                                  uint)fVar47 >> 8) & bVar94,
                                                  SUB41(fVar47,0) & bVar93)))))));
  param_1[10] = CONCAT17((byte)((uint)fVar46 >> 0x18) & bVar92,
                         CONCAT16((byte)((uint)fVar46 >> 0x10) & bVar91,
                                  CONCAT15((byte)((uint)fVar46 >> 8) & bVar90,
                                           CONCAT14(SUB41(fVar46,0) & bVar89,
                                                    CONCAT13((byte)((uint)fVar42 >> 0x18) & bVar88,
                                                             CONCAT12((byte)((uint)fVar42 >> 0x10) &
                                                                      bVar87,CONCAT11((byte)((uint)
                                                  fVar42 >> 8) & bVar86,SUB41(fVar42,0) & bVar85))))
                                          )));
  fVar77 = (float)param_2[0xc];
  fVar42 = (float)param_2[0xd];
  fVar29 = (float)param_2[0xe];
  fVar47 = *(float *)(param_3 + 0xe8);
  fVar79 = *(float *)(param_3 + 0xec);
  fVar46 = *(float *)(param_3 + 0xf0);
  fVar58 = fVar77 * fVar77 + fVar42 * fVar42 + fVar29 * fVar29 +
           fVar47 * fVar47 + fVar79 * fVar79 + fVar46 * fVar46;
  *(bool *)((long)param_1 + 0xdc) = 0.0 < fVar58;
  if (fVar58 <= 0.0) {
    auVar40 = NEON_fmov(0xbf800000,4);
    bVar34 = (byte)_UNK_01d4b6a8;
    uVar20 = (ulong)_UNK_01d4b6a8 >> 8;
    uVar21 = (ulong)_UNK_01d4b6a8 >> 0x10;
    uVar22 = (ulong)_UNK_01d4b6a8 >> 0x18;
    uVar23 = (ulong)_UNK_01d4b6a8 >> 0x20;
    uVar24 = (ulong)_UNK_01d4b6a8 >> 0x28;
    uVar25 = (ulong)_UNK_01d4b6a8 >> 0x30;
    uVar26 = (ulong)_UNK_01d4b6a8 >> 0x38;
    bVar30 = (byte)_DAT_01d4b6a0;
    uVar13 = (ulong)_DAT_01d4b6a0 >> 8;
    uVar14 = (ulong)_DAT_01d4b6a0 >> 0x10;
    uVar15 = (ulong)_DAT_01d4b6a0 >> 0x18;
    uVar16 = (ulong)_DAT_01d4b6a0 >> 0x20;
    uVar17 = (ulong)_DAT_01d4b6a0 >> 0x28;
    uVar18 = (ulong)_DAT_01d4b6a0 >> 0x30;
    uVar19 = (ulong)_DAT_01d4b6a0 >> 0x38;
    param_1[1] = auVar40._8_8_;
    *param_1 = auVar40._0_8_;
    local_90._0_1_ = SUB41(fVar64,0);
    local_90._1_1_ = (byte)((uint)fVar64 >> 8);
    local_90._2_1_ = (byte)((uint)fVar64 >> 0x10);
    local_90._3_1_ = (byte)((uint)fVar64 >> 0x18);
    uStack_8c._0_1_ = SUB41(fVar65,0);
    uStack_8c._1_1_ = (byte)((uint)fVar65 >> 8);
    uStack_8c._2_1_ = (byte)((uint)fVar65 >> 0x10);
    uStack_8c._3_1_ = (byte)((uint)fVar65 >> 0x18);
    uStack_88._0_1_ = SUB41(fVar66,0);
    uStack_88._1_1_ = (byte)((uint)fVar66 >> 8);
    uStack_88._2_1_ = (byte)((uint)fVar66 >> 0x10);
    uStack_88._3_1_ = (byte)((uint)fVar66 >> 0x18);
    uStack_84._0_1_ = SUB41(fVar68,0);
    uStack_84._1_1_ = (byte)((uint)fVar68 >> 8);
    uStack_84._2_1_ = (byte)((uint)fVar68 >> 0x10);
    uStack_84._3_1_ = (byte)((uint)fVar68 >> 0x18);
    *(byte *)(param_1 + 0xd) = (byte)uStack_88 & bVar93 | bVar34;
    *(byte *)((long)param_1 + 0x69) = uStack_88._1_1_ & bVar94 | (byte)uVar20;
    *(byte *)((long)param_1 + 0x6a) = uStack_88._2_1_ & bVar95 | (byte)uVar21;
    *(byte *)((long)param_1 + 0x6b) = uStack_88._3_1_ & bVar96 | (byte)uVar22;
    *(byte *)((long)param_1 + 0x6c) = (byte)uStack_84 & bVar97 | (byte)uVar23;
    *(byte *)((long)param_1 + 0x6d) = uStack_84._1_1_ & bVar98 | (byte)uVar24;
    *(byte *)((long)param_1 + 0x6e) = uStack_84._2_1_ & bVar99 | (byte)uVar25;
    *(byte *)((long)param_1 + 0x6f) = uStack_84._3_1_ & bVar100 | (byte)uVar26;
    *(byte *)(param_1 + 0xc) = (byte)local_90 & bVar85 | bVar30;
    *(byte *)((long)param_1 + 0x61) = local_90._1_1_ & bVar86 | (byte)uVar13;
    *(byte *)((long)param_1 + 0x62) = local_90._2_1_ & bVar87 | (byte)uVar14;
    *(byte *)((long)param_1 + 99) = local_90._3_1_ & bVar88 | (byte)uVar15;
    *(byte *)((long)param_1 + 100) = (byte)uStack_8c & bVar89 | (byte)uVar16;
    *(byte *)((long)param_1 + 0x65) = uStack_8c._1_1_ & bVar90 | (byte)uVar17;
    *(byte *)((long)param_1 + 0x66) = uStack_8c._2_1_ & bVar91 | (byte)uVar18;
    *(byte *)((long)param_1 + 0x67) = uStack_8c._3_1_ & bVar92 | (byte)uVar19;
  }
  else {
    fVar36 = fVar37 * fVar47 + fVar59 * fVar79 + fVar70 * fVar46;
    fVar50 = fVar39 * fVar47 + fVar81 * fVar79 + fVar75 * fVar46;
    fVar63 = fVar51 * fVar47 + fVar43 * fVar79 + fVar101 * fVar46;
    fVar79 = fVar37 * fVar77 + fVar59 * fVar42 + fVar70 * fVar29;
    fVar58 = fVar39 * fVar77 + fVar81 * fVar42 + fVar75 * fVar29;
    fVar29 = fVar51 * fVar77 + fVar43 * fVar42 + fVar101 * fVar29;
    fVar61 = fVar36 * -fVar27;
    fVar48 = fVar50 * -fVar27;
    fVar62 = fVar63 * -fVar27;
    fVar42 = fVar79 * -fVar27;
    fVar47 = fVar58 * -fVar27;
    fVar38 = fVar29 * -fVar27;
    local_d0 = fVar79;
    fStack_cc = fVar58;
    fStack_c8 = fVar29;
    local_90 = fVar64;
    uStack_8c = fVar65;
    uStack_88 = fVar66;
    uStack_84 = fVar68;
    fVar77 = sqrtf(fVar62 * fVar62 + fVar61 * fVar61 + fVar48 * fVar48);
    fVar46 = 1.0;
    fVar27 = DAT_01d4c708;
    if (DAT_01d4c708 < fVar77) {
      fVar46 = sinf(fVar77);
      fVar46 = fVar46 / fVar77;
    }
    uVar31 = (undefined1)((uint)fVar71 >> 8);
    uVar32 = (undefined1)((uint)fVar71 >> 0x10);
    uVar33 = (undefined1)((uint)fVar71 >> 0x18);
    fVar43 = fVar48 * fVar46;
    fVar59 = fVar61 * fVar46;
    fVar46 = fVar62 * fVar46;
    fVar77 = cosf(fVar77);
    fVar37 = sqrtf(fVar38 * fVar38 + fVar42 * fVar42 + fVar47 * fVar47);
    fVar39 = 1.0;
    if (fVar27 < fVar37) {
      fVar39 = sinf(fVar37);
      fVar39 = fVar39 / fVar37;
    }
    fVar69 = fVar42 * fVar39;
    fVar70 = fVar47 * fVar39;
    fVar39 = fVar38 * fVar39;
    fVar37 = cosf(fVar37);
    fVar51 = fVar43 + fVar43;
    fVar27 = fVar59 + fVar59;
    fStack_bc = fVar46 * (fVar46 + fVar46);
    local_c0 = fVar77 * (fVar46 + fVar46);
    uStack_c4 = 0;
    uStack_b4 = 0;
    uStack_104 = 0;
    local_f4 = 0;
    local_d4 = 0x3f800000;
    local_d0 = (1.0 - fVar43 * fVar51) - fStack_bc;
    fStack_cc = fVar43 * fVar27 + local_c0;
    local_c0 = fVar43 * fVar27 - local_c0;
    local_a8 = 1.0 - fVar59 * fVar27;
    fStack_c8 = fVar46 * fVar27 - fVar77 * fVar51;
    uStack_e4 = 0;
    uStack_e0 = 0;
    local_dc = 0;
    fStack_bc = local_a8 - fStack_bc;
    fStack_b8 = fVar46 * fVar51 + fVar77 * fVar27;
    local_ac = fVar46 * fVar51 - fVar77 * fVar27;
    local_a8 = local_a8 - fVar43 * fVar51;
    local_b0 = fVar46 * fVar27 + fVar77 * fVar51;
    fVar27 = (fVar46 * fVar70 + fVar59 * fVar37 + fVar77 * fVar69) - fVar43 * fVar39;
    fVar51 = (fVar59 * fVar39 + fVar77 * fVar70 + fVar43 * fVar37) - fVar46 * fVar69;
    fVar81 = (fVar43 * fVar69 + fVar46 * fVar37 + fVar77 * fVar39) - fVar59 * fVar70;
    fVar77 = ((fVar77 * fVar37 - fVar59 * fVar69) - fVar43 * fVar70) - fVar46 * fVar39;
    fVar37 = fVar51 + fVar51;
    fVar46 = fVar27 + fVar27;
    local_fc = fVar81 * (fVar81 + fVar81);
    local_100 = fVar77 * (fVar81 + fVar81);
    local_110 = (1.0 - fVar51 * fVar37) - local_fc;
    fStack_10c = fVar51 * fVar46 + local_100;
    local_100 = fVar51 * fVar46 - local_100;
    fStack_e8 = 1.0 - fVar27 * fVar46;
    local_fc = fStack_e8 - local_fc;
    fStack_e8 = fStack_e8 - fVar51 * fVar37;
    local_f8 = fVar81 * fVar37 + fVar77 * fVar46;
    local_f0 = fVar81 * fVar46 + fVar77 * fVar37;
    fStack_ec = fVar81 * fVar37 - fVar77 * fVar46;
    local_a4 = 0;
    uStack_a0 = 0;
    local_9c = 0;
    local_94 = 0x3f800000;
    fStack_108 = fVar81 * fVar46 - fVar77 * fVar37;
    param_1[1] = (ulong)(uint)fStack_c8;
    *param_1 = CONCAT44(fStack_cc,local_d0);
    param_1[3] = (ulong)(uint)fStack_b8;
    param_1[2] = CONCAT44(fStack_bc,local_c0);
    param_1[5] = (ulong)(uint)local_a8;
    param_1[4] = CONCAT44(local_ac,local_b0);
    auVar28._0_4_ = fVar71 * *(float *)(param_3 + 0x6c);
    auVar28._4_4_ =
         (float)(CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(SUB41(fVar71,0),fVar71))))
                >> 0x20) * *(float *)(param_3 + 0x70);
    auVar28._8_4_ = fVar71 * *(float *)(param_3 + 0x74);
    auVar28._12_4_ =
         (float)(CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(SUB41(fVar71,0),fVar71))))
                >> 0x20) * *(float *)(param_3 + 0x78);
    auVar3[8] = 0xf3;
    auVar3._0_8_ = 0xc2fefff3c2fefff3;
    auVar3[9] = 0xff;
    auVar3[10] = 0xfe;
    auVar3[0xb] = 0xc2;
    auVar3[0xc] = 0xf3;
    auVar3[0xd] = 0xff;
    auVar3[0xe] = 0xfe;
    auVar3[0xf] = 0xc2;
    auVar40 = NEON_fmax(auVar3,auVar28,4);
    auVar4[8] = 0xf3;
    auVar4._0_8_ = 0x42fefff342fefff3;
    auVar4[9] = 0xff;
    auVar4[10] = 0xfe;
    auVar4[0xb] = 0x42;
    auVar4[0xc] = 0xf3;
    auVar4[0xd] = 0xff;
    auVar4[0xe] = 0xfe;
    auVar4[0xf] = 0x42;
    auVar40 = NEON_fmin(auVar40,auVar4,4);
    fVar27 = auVar40._0_4_ + 0.5;
    fVar77 = auVar40._4_4_ + 0.5;
    fVar46 = auVar40._8_4_ + 0.5;
    fVar37 = auVar40._12_4_ + 0.5;
    iVar1 = (int)fVar27 + ((int)fVar27 >> 0x1f);
    iVar2 = (int)fVar77 + ((int)fVar77 >> 0x1f);
    iVar6 = (int)fVar46 + ((int)fVar46 >> 0x1f);
    iVar7 = (int)fVar37 + ((int)fVar37 >> 0x1f);
    auVar5[4] = (char)iVar2;
    auVar5._0_4_ = iVar1;
    auVar5[5] = (char)((uint)iVar2 >> 8);
    auVar5[6] = (char)((uint)iVar2 >> 0x10);
    auVar5[7] = (char)((uint)iVar2 >> 0x18);
    auVar5[8] = (char)iVar6;
    auVar5[9] = (char)((uint)iVar6 >> 8);
    auVar5[10] = (char)((uint)iVar6 >> 0x10);
    auVar5[0xb] = (char)((uint)iVar6 >> 0x18);
    auVar5[0xc] = (char)iVar7;
    auVar5[0xd] = (char)((uint)iVar7 >> 8);
    auVar5[0xe] = (char)((uint)iVar7 >> 0x10);
    auVar5[0xf] = (char)((uint)iVar7 >> 0x18);
    auVar52 = NEON_scvtf(auVar5,4);
    fVar27 = auVar40._0_4_ - auVar52._0_4_;
    fVar77 = auVar40._4_4_ - auVar52._4_4_;
    fVar46 = auVar40._8_4_ - auVar52._8_4_;
    fVar37 = auVar40._12_4_ - auVar52._12_4_;
    fVar39 = fVar27 * fVar27;
    fVar43 = fVar77 * fVar77;
    fVar59 = fVar46 * fVar46;
    fVar51 = fVar37 * fVar37;
    fVar27 = fVar27 * (fVar39 * (fVar39 * 0.023093348 + 20.202066) + 1513.9069);
    fVar77 = fVar77 * (fVar43 * (fVar43 * 0.023093348 + 20.202066) + 1513.9069);
    fVar46 = fVar46 * (fVar59 * (fVar59 * 0.023093348 + 20.202066) + 1513.9069);
    auVar35._0_4_ = (fVar39 * (fVar39 + 233.1842) + 4368.2114) - fVar27;
    auVar35._4_4_ = (fVar43 * (fVar43 + 233.1842) + 4368.2114) - fVar77;
    auVar35._8_4_ = (fVar59 * (fVar59 + 233.1842) + 4368.2114) - fVar46;
    auVar35._12_4_ =
         (fVar51 * (fVar51 + 233.1842) + 4368.2114) -
         fVar37 * (fVar51 * (fVar51 * 0.023093348 + 20.202066) + 1513.9069);
    auVar52 = NEON_frecpe(auVar35,4);
    auVar40 = NEON_frecps(auVar35,auVar52,4);
    fVar27 = auVar52._0_4_ * auVar40._0_4_ * fVar27;
    fVar77 = auVar52._4_4_ * auVar40._4_4_ * fVar77;
    fVar46 = auVar52._8_4_ * auVar40._8_4_ * fVar46;
    fStack_188 = (float)*(undefined8 *)(param_3 + 0x98);
    local_190 = (float)*(undefined8 *)(param_3 + 0x90);
    fStack_18c = (float)((ulong)*(undefined8 *)(param_3 + 0x90) >> 0x20);
    uVar11 = *(undefined8 *)(param_3 + 0x84);
    uVar12 = *(undefined8 *)(param_3 + 0x8c);
    fVar79 = fVar36 - fVar79;
    fVar58 = fVar50 - fVar58;
    fVar29 = fVar63 - fVar29;
    fVar37 = sqrtf(DAT_01d4c104);
    fVar39 = fVar36 * fVar36;
    fVar43 = fVar50 * fVar50;
    fVar59 = fVar63 * fVar63;
    fVar27 = fVar36 * (fVar57 - (fVar27 + fVar27 + fVar57) * (float)(iVar1 * 0x800000 + (int)fVar57)
                      );
    fVar77 = fVar50 * (fVar73 - (fVar77 + fVar77 + fVar73) * (float)(iVar2 * 0x800000 + (int)fVar73)
                      );
    fVar46 = fVar63 * (fVar74 - (fVar46 + fVar46 + fVar74) * (float)(iVar6 * 0x800000 + (int)fVar74)
                      );
    local_1a0 = (float)uVar11;
    fStack_19c = (float)((ulong)uVar11 >> 0x20);
    fStack_198 = (float)uVar12;
    fVar51 = fVar79 * fVar79;
    fVar81 = fVar58 * fVar58;
    fVar57 = fVar29 * fVar29;
    fVar27 = fVar27 * fVar27;
    fVar77 = fVar77 * fVar77;
    fVar46 = fVar46 * fVar46;
    fVar69 = fVar79 * local_1a0 * fVar79 * local_1a0;
    fVar58 = fVar58 * fStack_19c * fVar58 * fStack_19c;
    fVar70 = fVar29 * fStack_198 * fVar29 * fStack_198;
    fVar73 = fVar36 * local_190 * fVar36 * local_190;
    fVar50 = fVar50 * fStack_18c * fVar50 * fStack_18c;
    fVar74 = fVar63 * fStack_188 * fVar63 * fStack_188;
    fVar29 = (fVar61 + fVar42) * 0.5;
    fVar42 = (fVar48 + fVar47) * 0.5;
    fVar79 = (fVar62 + fVar38) * 0.5;
    fVar61 = fVar59 + fVar39 + fVar43 + fVar37;
    fVar48 = fVar59 + fVar39 + fVar43 + fVar37;
    fVar62 = fVar59 + fVar39 + fVar43 + fVar37;
    fVar63 = fVar59 + fVar39 + fVar43 + fVar37;
    fVar36 = fVar37 + fVar74 + fVar73 + fVar50;
    fVar39 = fVar37 + fVar70 + fVar69 + fVar58;
    fVar38 = fVar37 + fVar46 + fVar27 + fVar77;
    fVar43 = (fVar57 + fVar51 + fVar81 + fVar37) * fVar39;
    fVar59 = (fVar57 + fVar51 + fVar81 + fVar37) * (fVar37 + fVar70 + fVar69 + fVar58);
    fVar71 = (fVar57 + fVar51 + fVar81 + fVar37) * (fVar37 + fVar70 + fVar69 + fVar58);
    fVar51 = (fVar57 + fVar51 + fVar81 + fVar37) * (fVar37 + fVar70 + fVar69 + fVar58);
    fVar81 = fVar61 * fVar38;
    fVar47 = fVar48 * (fVar37 + fVar46 + fVar27 + fVar77);
    fVar58 = fVar62 * (fVar37 + fVar46 + fVar27 + fVar77);
    fVar27 = fVar63 * (fVar37 + fVar46 + fVar27 + fVar77);
    auVar44._0_4_ = fVar61 * fVar36;
    auVar44._4_4_ = fVar48 * (fVar37 + fVar74 + fVar73 + fVar50);
    auVar44._8_4_ = fVar62 * (fVar37 + fVar74 + fVar73 + fVar50);
    auVar44._12_4_ = fVar63 * (fVar37 + fVar74 + fVar73 + fVar50);
    auVar8._4_4_ = fVar59;
    auVar8._0_4_ = fVar43;
    auVar8._8_4_ = fVar71;
    auVar8._12_4_ = fVar51;
    auVar82 = NEON_frsqrte(auVar8,4);
    auVar40 = NEON_frsqrte(auVar44,4);
    auVar84._0_4_ = auVar82._0_4_ * fVar43;
    auVar84._4_4_ = auVar82._4_4_ * fVar59;
    auVar84._8_4_ = auVar82._8_4_ * fVar71;
    auVar84._12_4_ = auVar82._12_4_ * fVar51;
    auVar45._0_4_ = auVar44._0_4_ * auVar40._0_4_;
    auVar45._4_4_ = auVar44._4_4_ * auVar40._4_4_;
    auVar45._8_4_ = auVar44._8_4_ * auVar40._8_4_;
    auVar45._12_4_ = auVar44._12_4_ * auVar40._12_4_;
    auVar67 = NEON_frsqrts(auVar84,auVar82,4);
    auVar83 = NEON_frsqrts(auVar45,auVar40,4);
    fStack_11c = (float)(CONCAT17((char)((uint)fVar42 >> 0x18),
                                  CONCAT16((char)((uint)fVar42 >> 0x10),
                                           CONCAT15((char)((uint)fVar42 >> 8),
                                                    CONCAT14(SUB41(fVar42,0),fVar29)))) >> 0x20);
    auVar9._4_4_ = fVar47;
    auVar9._0_4_ = fVar81;
    auVar9._8_4_ = fVar58;
    auVar9._12_4_ = fVar27;
    auVar52 = NEON_frsqrte(auVar9,4);
    fVar47 = auVar52._4_4_ * fVar47;
    fVar58 = auVar52._8_4_ * fVar58;
    fVar27 = auVar52._12_4_ * fVar27;
    fVar46 = (float)param_2[1] * fVar39 * auVar82._0_4_ * auVar67._0_4_;
    fVar48 = (float)param_2[1] * (float)(*param_2 * 2 + -1) * fVar36 * auVar40._0_4_ * auVar83._0_4_
             - fVar46;
    auVar10[4] = SUB41(fVar47,0);
    auVar10._0_4_ = auVar52._0_4_ * fVar81;
    auVar10[5] = (char)((uint)fVar47 >> 8);
    auVar10[6] = (char)((uint)fVar47 >> 0x10);
    auVar10[7] = (char)((uint)fVar47 >> 0x18);
    auVar10[8] = SUB41(fVar58,0);
    auVar10[9] = (char)((uint)fVar58 >> 8);
    auVar10[10] = (char)((uint)fVar58 >> 0x10);
    auVar10[0xb] = (char)((uint)fVar58 >> 0x18);
    auVar10[0xc] = SUB41(fVar27,0);
    auVar10[0xd] = (char)((uint)fVar27 >> 8);
    auVar10[0xe] = (char)((uint)fVar27 >> 0x10);
    auVar10[0xf] = (char)((uint)fVar27 >> 0x18);
    auVar40 = NEON_frsqrts(auVar10,auVar52,4);
    fVar36 = fVar29 * fVar48;
    fVar37 = fVar42 * fVar48;
    fVar39 = fVar79 * fVar48;
    fVar63 = fVar48 * fVar29;
    fVar38 = auVar52._0_4_ * auVar40._0_4_ * fVar38;
    fVar62 = fVar46 - local_90;
    fVar77 = fVar48 * (fVar79 * fVar79 + fVar29 * fVar29 + fVar42 * fVar42);
    fVar58 = fVar46 - uStack_8c;
    fVar43 = fVar38 + fVar46 + local_90;
    fVar47 = fVar38 + fVar46 + uStack_88;
    fVar27 = (fVar77 - fVar46) - fVar38;
    fVar38 = fVar38 + fVar46 + uStack_8c;
    fVar61 = fVar48 * fStack_11c;
    *(float *)((ulong)local_148 | 4) = fVar39;
    fVar48 = fVar48 * fVar79;
    uStack_88 = fVar46 - uStack_88;
    param_1[0xd] = CONCAT44(uStack_104,
                            ((fVar37 - fVar63 * fVar79) + fVar62 * fStack_c8) - fVar46 * fStack_108)
    ;
    param_1[0xc] = CONCAT44(((-(fVar63 * fVar42) - fVar39) + fVar62 * fStack_cc) -
                            fVar46 * fStack_10c,
                            fVar77 + ((fVar62 * local_d0 - fVar63 * fVar29) - fVar46 * local_110));
    param_1[0xf] = CONCAT44(local_f4,((-(fVar61 * fVar79) - fVar36) + fVar58 * fStack_b8) -
                                     fVar46 * local_f8);
    param_1[0xe] = CONCAT44(fVar77 + (((-(fVar61 * fStack_11c) - 0.0) + fVar58 * fStack_bc) -
                                     fVar46 * local_fc),
                            ((-(fVar61 * fVar29) - -fVar39) + fVar58 * local_c0) -
                            fVar46 * local_100);
    param_1[0x11] =
         CONCAT44(uStack_e4,
                  fVar77 + (((-(fVar48 * fVar79) - 0.0) + uStack_88 * local_a8) - fVar46 * fStack_e8
                           ));
    param_1[0x10] =
         CONCAT44(((-(fVar48 * fStack_11c) - -fVar36) + uStack_88 * local_ac) - fVar46 * fStack_ec,
                  ((-(fVar48 * fVar29) - fVar37) + uStack_88 * local_b0) - fVar46 * local_f0);
    param_1[0x13] = CONCAT44(uStack_c4,(-fVar37 - fVar63 * fVar79) + fVar43 * fStack_c8);
    param_1[0x12] =
         CONCAT44((fVar39 - fVar63 * fVar42) + fVar43 * fStack_cc,
                  fVar27 + (0.0 - fVar63 * fVar29) + fVar43 * local_d0);
    param_1[0x15] = CONCAT44(uStack_b4,(fVar36 - fVar61 * fVar79) + fVar38 * fStack_b8);
    param_1[0x14] =
         CONCAT44(fVar27 + (0.0 - fVar61 * fStack_11c) + fVar38 * fStack_bc,
                  (-fVar39 - fVar61 * fVar29) + fVar38 * local_c0);
    param_1[0x17] = CONCAT44(local_a4,fVar27 + (0.0 - fVar48 * fVar79) + fVar47 * local_a8);
    param_1[0x16] =
         CONCAT44((-fVar36 - fVar48 * fStack_11c) + fVar47 * local_ac,
                  (fVar37 - fVar48 * fVar29) + fVar47 * local_b0);
  }
  fVar49 = fVar49 - fVar64;
  fVar55 = fVar55 - fVar65;
  fVar56 = fVar56 - fVar66;
  fVar41 = fVar41 - fVar68;
  *(byte *)(param_1 + 0x19) = SUB41(fVar56,0) & bVar93;
  *(byte *)((long)param_1 + 0xc9) = (byte)((uint)fVar56 >> 8) & bVar94;
  *(byte *)((long)param_1 + 0xca) = (byte)((uint)fVar56 >> 0x10) & bVar95;
  *(byte *)((long)param_1 + 0xcb) = (byte)((uint)fVar56 >> 0x18) & bVar96;
  *(byte *)((long)param_1 + 0xcc) = SUB41(fVar41,0) & bVar97;
  *(byte *)((long)param_1 + 0xcd) = (byte)((uint)fVar41 >> 8) & bVar98;
  *(byte *)((long)param_1 + 0xce) = (byte)((uint)fVar41 >> 0x10) & bVar99;
  *(byte *)((long)param_1 + 0xcf) = (byte)((uint)fVar41 >> 0x18) & bVar100;
  *(byte *)(param_1 + 0x18) = SUB41(fVar49,0) & bVar85;
  *(byte *)((long)param_1 + 0xc1) = (byte)((uint)fVar49 >> 8) & bVar86;
  *(byte *)((long)param_1 + 0xc2) = (byte)((uint)fVar49 >> 0x10) & bVar87;
  *(byte *)((long)param_1 + 0xc3) = (byte)((uint)fVar49 >> 0x18) & bVar88;
  *(byte *)((long)param_1 + 0xc4) = SUB41(fVar55,0) & bVar89;
  *(byte *)((long)param_1 + 0xc5) = (byte)((uint)fVar55 >> 8) & bVar90;
  *(byte *)((long)param_1 + 0xc6) = (byte)((uint)fVar55 >> 0x10) & bVar91;
  *(byte *)((long)param_1 + 199) = (byte)((uint)fVar55 >> 0x18) & bVar92;
  return;
}


