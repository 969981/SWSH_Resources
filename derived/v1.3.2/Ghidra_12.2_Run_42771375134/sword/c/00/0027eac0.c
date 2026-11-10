/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0027eac0; name: FUN_0027eac0
 */


uint FUN_0027eac0(undefined4 param_1,undefined1 (*param_2) [12],undefined8 param_3,
                 undefined8 *param_4,undefined8 param_5,long param_6,undefined1 (*param_7) [16],
                 float *param_8,undefined8 param_9,undefined8 param_10,undefined8 param_11,
                 byte param_12,byte param_13,float *param_14,undefined8 param_15)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  void *__dest;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined2 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  long *plVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong uVar27;
  float *pfVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  byte bVar45;
  byte bVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  float fVar59;
  int iVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  float fVar68;
  undefined1 auVar69 [16];
  undefined8 uVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined *local_27e0;
  ulong uStack_27d8;
  undefined8 local_27d0;
  ulong local_27c8;
  ulong local_27c0;
  ulong uStack_27b8;
  undefined8 local_27b0;
  ulong uStack_27a8;
  undefined4 local_24bc [16];
  undefined1 local_247c [16];
  int local_246c;
  undefined1 auStack_2460 [2040];
  long local_1c68 [37];
  undefined8 local_1b40;
  float local_1b30 [2];
  undefined8 local_1b28;
  float local_1b20;
  float fStack_1b1c;
  float fStack_1b18;
  float fStack_1b14;
  float local_1b10;
  float fStack_1b0c;
  float fStack_1b08;
  float fStack_1b04;
  float local_1b00;
  float fStack_1afc;
  float fStack_1af8;
  float fStack_1af4;
  undefined8 local_1af0;
  undefined8 uStack_1ae8;
  long local_1ae0;
  undefined8 local_1ad8;
  undefined4 local_1338;
  undefined4 local_12b8;
  undefined8 local_12b0;
  ulong uStack_12a8;
  undefined1 (*local_12a0) [12];
  undefined8 local_1298;
  undefined8 local_1290;
  byte bStack_1288;
  undefined1 uStack_1287;
  undefined1 *local_1280;
  undefined8 local_1270 [544];
  undefined1 local_170;
  undefined8 *local_168;
  ulong local_160;
  undefined1 auStack_158 [64];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 local_68;
  
  uStack_80 = *(undefined8 *)param_7[1];
  uStack_a0 = *(undefined8 *)(param_8 + 4);
  uStack_78 = (ulong)(uint)*(float *)(param_7[1] + 8);
  auVar15 = *param_7;
  local_b0 = *param_8;
  fStack_ac = param_8[1];
  fStack_a8 = param_8[2];
  fStack_a4 = param_8[3];
  fVar64 = -local_b0;
  fVar65 = -fStack_ac;
  uVar47 = (undefined1)((uint)fVar65 >> 8);
  uVar48 = (undefined1)((uint)fVar65 >> 0x10);
  uVar49 = (undefined1)((uint)fVar65 >> 0x18);
  fVar66 = -fStack_a8;
  uVar50 = (undefined1)((uint)fVar66 >> 8);
  uVar51 = (undefined1)((uint)fVar66 >> 0x10);
  uVar53 = (undefined1)((uint)fVar66 >> 0x18);
  uStack_88 = auVar15._8_8_;
  local_90 = auVar15._0_8_;
  uStack_98 = (ulong)(uint)param_8[6];
  fVar38 = (float)uStack_80 - param_8[4];
  fVar40 = (float)((ulong)uStack_80 >> 0x20) - param_8[5];
  fVar42 = *(float *)(param_7[1] + 8) - param_8[6];
  fVar37 = auVar15._12_4_;
  fVar59 = fStack_a4 * fStack_a4 + -0.5;
  auVar67[4] = SUB41(fVar65,0);
  auVar67._0_4_ = fVar64;
  auVar67[5] = uVar47;
  auVar67[6] = uVar48;
  auVar67[7] = uVar49;
  auVar67[8] = SUB41(fVar66,0);
  auVar67[9] = uVar50;
  auVar67[10] = uVar51;
  auVar67[0xb] = uVar53;
  auVar67._12_4_ = 0;
  auVar14[4] = SUB41(fVar65,0);
  auVar14._0_4_ = fVar64;
  auVar14[5] = uVar47;
  auVar14[6] = uVar48;
  auVar14[7] = uVar49;
  auVar14[8] = SUB41(fVar66,0);
  auVar14[9] = uVar50;
  auVar14[10] = uVar51;
  auVar14[0xb] = uVar53;
  auVar14._12_4_ = 0;
  auVar67 = NEON_ext(auVar67,auVar14,8,1);
  auVar71._4_4_ = fVar40;
  auVar71._0_4_ = fVar38;
  auVar71._8_4_ = fVar42;
  auVar71._12_4_ = 0;
  auVar69._4_4_ = fVar40;
  auVar69._0_4_ = fVar38;
  auVar69._8_4_ = fVar42;
  auVar69._12_4_ = 0;
  auVar71 = NEON_ext(auVar71,auVar69,8,1);
  fVar39 = fVar64 * fVar38;
  fVar41 = fVar65 * fVar40;
  fVar68 = fVar64 * fVar40 - fVar65 * fVar38;
  uVar70 = NEON_ext(CONCAT44(fVar65 * fVar42 - fVar66 * fVar40,fVar68),
                    CONCAT44(auVar67._4_4_ * fVar40 - fVar65 * auVar71._4_4_,
                             auVar67._0_4_ * fVar38 - fVar64 * auVar71._0_4_),4,1);
  auVar62._0_4_ = fVar38 * fVar59 + (float)uVar70 * fStack_a4;
  auVar62._4_4_ = fVar40 * fVar59 + (float)((ulong)uVar70 >> 0x20) * fStack_a4;
  auVar62._8_4_ = fVar42 * fVar59 + fVar68 * fStack_a4;
  auVar62._12_4_ = fStack_a4 * 0.0 + 0.0;
  auVar71 = NEON_ext(auVar62,auVar62,8,1);
  auVar9._4_4_ = fVar41;
  auVar9._0_4_ = fVar39;
  auVar9._8_4_ = fVar66 * fVar42;
  auVar9._12_4_ = 0;
  auVar10._4_4_ = fVar41;
  auVar10._0_4_ = fVar39;
  auVar10._8_4_ = fVar66 * fVar42;
  auVar10._12_4_ = 0;
  auVar69 = NEON_ext(auVar9,auVar10,8,1);
  fVar42 = auVar15._4_4_;
  fVar38 = fVar39 + fVar41 + auVar69._0_4_ + auVar69._4_4_;
  fVar41 = auVar15._8_4_;
  fVar59 = fVar64 * fVar38 + auVar62._0_4_;
  fVar68 = fVar65 * fVar38 + auVar62._4_4_;
  fVar39 = fVar66 * fVar38 + auVar71._0_4_;
  fVar38 = fVar38 * 0.0 + 0.0;
  auVar11._4_4_ = fVar68;
  auVar11._0_4_ = fVar59;
  auVar11._8_4_ = fVar39;
  auVar11._12_4_ = fVar38;
  auVar12._4_4_ = fVar68;
  auVar12._0_4_ = fVar59;
  auVar12._8_4_ = fVar39;
  auVar12._12_4_ = fVar38;
  auVar71 = NEON_ext(auVar11,auVar12,8,1);
  local_68 = CONCAT44(param_1,param_1);
  auVar33._0_12_ = auVar15._0_12_;
  auVar33._12_4_ = 0;
  fVar39 = auVar15._0_4_;
  auVar72._0_4_ = fVar39 * fVar64;
  auVar72._4_4_ = fVar42 * fVar65;
  auVar72._8_4_ = fVar41 * fVar66;
  auVar72._12_4_ = 0;
  auVar69 = NEON_ext(auVar72,auVar72,8,1);
  fVar59 = fVar59 + fVar59;
  fVar68 = fVar68 + fVar68;
  fVar43 = auVar71._0_4_ + auVar71._0_4_;
  auVar71 = NEON_ext(auVar33,auVar33,8,1);
  fVar40 = fVar42 * fVar64 - fVar39 * fVar65;
  fVar38 = fVar42 * auVar67._4_4_ - auVar71._4_4_ * fVar65;
  uVar70 = NEON_ext(CONCAT44(fVar41 * fVar65 - fVar42 * fVar66,fVar40),
                    CONCAT17((char)((uint)fVar38 >> 0x18),
                             CONCAT16((char)((uint)fVar38 >> 0x10),
                                      CONCAT15((char)((uint)fVar38 >> 8),
                                               CONCAT14(SUB41(fVar38,0),
                                                        fVar39 * auVar67._0_4_ -
                                                        auVar71._0_4_ * fVar64)))),4,1);
  fVar38 = fVar37 * fStack_a4 - (auVar72._0_4_ + auVar72._4_4_ + auVar69._0_4_ + auVar69._4_4_);
  fVar39 = fVar39 * fStack_a4 + fVar64 * fVar37 + (float)uVar70;
  fVar42 = fVar42 * fStack_a4 + fVar65 * fVar37 + (float)((ulong)uVar70 >> 0x20);
  fVar40 = fVar41 * fStack_a4 + fVar66 * fVar37 + fVar40;
  fVar64 = ABS(fVar59 - (float)*(undefined8 *)(param_14 + 4));
  fVar65 = ABS(fVar68 - (float)((ulong)*(undefined8 *)(param_14 + 4) >> 0x20));
  fVar66 = ABS(fVar43 - (float)*(undefined8 *)(param_14 + 6));
  fVar41 = ABS(0.0 - (float)((ulong)*(undefined8 *)(param_14 + 6) >> 0x20));
  auVar18._4_4_ = fVar65;
  auVar18._0_4_ = fVar64;
  auVar18._8_4_ = fVar66;
  auVar18._12_4_ = fVar41;
  auVar19._4_4_ = fVar65;
  auVar19._0_4_ = fVar64;
  auVar19._8_4_ = fVar66;
  auVar19._12_4_ = fVar41;
  auVar71 = NEON_ext(auVar18,auVar19,8,1);
  uVar70 = NEON_fmaxp(auVar71._0_8_,CONCAT44(fVar65,fVar64),4);
  fVar64 = (float)*param_4;
  uVar70 = NEON_fmaxp(uVar70,uVar70,4);
  iVar17 = -(uint)(fVar64 * 0.2 < (float)uVar70);
  auVar63._0_4_ = fVar39 * *param_14;
  auVar63._4_4_ = fVar42 * param_14[1];
  auVar63._8_4_ = fVar40 * param_14[2];
  auVar63._12_4_ = fVar38 * param_14[3];
  auVar71 = NEON_ext(auVar63,auVar63,8,1);
  iVar60 = -(uint)(auVar63._0_4_ + auVar63._4_4_ + auVar71._0_4_ + auVar71._4_4_ < 0.9998);
  bVar45 = (byte)((uint)iVar60 >> 0x10) | (byte)((uint)iVar17 >> 0x10);
  bVar46 = (byte)((uint)iVar60 >> 0x18) | (byte)((uint)iVar17 >> 0x18);
  uVar13 = CONCAT11((byte)((uint)iVar60 >> 8) | (byte)((uint)iVar17 >> 8),
                    (byte)iVar60 | (byte)iVar17);
  iVar17 = -(uint)(CONCAT13(bVar46,CONCAT12(bVar45,uVar13)) == -1);
  iVar60 = -(uint)(CONCAT13(bVar46,CONCAT12(bVar45,uVar13)) == -1);
  uVar47 = (undefined1)iVar60;
  uVar48 = (undefined1)((uint)iVar60 >> 8);
  uVar49 = (undefined1)((uint)iVar60 >> 0x10);
  uVar50 = (undefined1)((uint)iVar60 >> 0x18);
  iVar60 = -(uint)(CONCAT13(bVar46,CONCAT12(bVar45,uVar13)) == -1);
  uVar51 = (undefined1)iVar60;
  uVar53 = (undefined1)((uint)iVar60 >> 8);
  uVar52 = (undefined1)((uint)iVar60 >> 0x10);
  uVar54 = (undefined1)((uint)iVar60 >> 0x18);
  iVar60 = -(uint)(CONCAT13(bVar46,CONCAT12(bVar45,uVar13)) == -1);
  uVar55 = (undefined1)iVar60;
  uVar56 = (undefined1)((uint)iVar60 >> 8);
  uVar57 = (undefined1)((uint)iVar60 >> 0x10);
  uVar58 = (undefined1)((uint)iVar60 >> 0x18);
  auVar15[4] = uVar47;
  auVar15._0_4_ = iVar17;
  auVar15[5] = uVar48;
  auVar15[6] = uVar49;
  auVar15[7] = uVar50;
  auVar15[8] = uVar51;
  auVar15[9] = uVar53;
  auVar15[10] = uVar52;
  auVar15[0xb] = uVar54;
  auVar15[0xc] = uVar55;
  auVar15[0xd] = uVar56;
  auVar15[0xe] = uVar57;
  auVar15[0xf] = uVar58;
  auVar16[4] = uVar47;
  auVar16._0_4_ = iVar17;
  auVar16[5] = uVar48;
  auVar16[6] = uVar49;
  auVar16[7] = uVar50;
  auVar16[8] = uVar51;
  auVar16[9] = uVar53;
  auVar16[10] = uVar52;
  auVar16[0xb] = uVar54;
  auVar16[0xc] = uVar55;
  auVar16[0xd] = uVar56;
  auVar16[0xe] = uVar57;
  auVar16[0xf] = uVar58;
  NEON_ext(auVar15,auVar16,8,1);
  fVar65 = (float)((ulong)*param_4 >> 0x20);
  if (CONCAT13(uVar55,CONCAT12(uVar51,CONCAT11(uVar47,(char)iVar17))) == -1) {
    local_b8 = CONCAT44(fVar65 * 0.05,fVar64 * 0.05);
    *(undefined1 *)((long)param_14 + 0x3e) = 0;
    param_14[2] = fVar40;
    param_14[3] = fVar38;
    *param_14 = fVar39;
    param_14[1] = fVar42;
    *(ulong *)(param_14 + 6) = (ulong)(uint)fVar43;
    *(ulong *)(param_14 + 4) = CONCAT44(fVar68,fVar59);
    lVar32 = *(long *)(param_6 + 0x30);
    fVar65 = *(float *)*param_7;
    fVar38 = *(float *)(*param_7 + 4);
    fVar64 = fVar38 + fVar38;
    fVar66 = *(float *)(*param_7 + 8);
    fVar39 = *(float *)(*param_7 + 0xc);
    fVar40 = fVar65 + fVar65;
    local_d8 = fVar66 * (fVar66 + fVar66);
    fStack_dc = (fVar66 + fVar66) * fVar39;
    fStack_e4 = fVar40 * fVar38 + fStack_dc;
    local_e0 = fVar40 * fVar66 - fVar64 * fVar39;
    fStack_dc = fVar40 * fVar38 - fStack_dc;
    local_c8 = 1.0 - fVar65 * fVar40;
    local_e8 = (1.0 - fVar38 * fVar64) - local_d8;
    local_d8 = local_c8 - local_d8;
    fStack_d4 = fVar64 * fVar66 + fVar40 * fVar39;
    local_d0 = fVar40 * fVar66 + fVar64 * fVar39;
    fStack_cc = fVar64 * fVar66 - fVar40 * fVar39;
    local_c8 = local_c8 - fVar38 * fVar64;
    local_c4 = *(undefined4 *)param_7[1];
    local_c0 = *(undefined4 *)(param_7[1] + 4);
    local_bc = *(undefined4 *)(param_7[1] + 8);
    fVar65 = *param_8;
    fVar38 = param_8[1];
    fVar64 = fVar38 + fVar38;
    fVar66 = param_8[2];
    fVar39 = param_8[3];
    fVar40 = fVar65 + fVar65;
    local_108 = fVar66 * (fVar66 + fVar66);
    local_10c = (fVar66 + fVar66) * fVar39;
    local_114 = fVar40 * fVar38 + local_10c;
    local_10c = fVar40 * fVar38 - local_10c;
    local_f8 = 1.0 - fVar65 * fVar40;
    local_104 = fVar64 * fVar66 + fVar40 * fVar39;
    local_fc = fVar64 * fVar66 - fVar40 * fVar39;
    local_118 = (1.0 - fVar38 * fVar64) - local_108;
    local_110 = fVar40 * fVar66 - fVar64 * fVar39;
    local_108 = local_f8 - local_108;
    local_100 = fVar40 * fVar66 + fVar64 * fVar39;
    local_f8 = local_f8 - fVar38 * fVar64;
    local_f4 = param_8[4];
    local_f0 = param_8[5];
    local_ec = param_8[6];
                    /* try { // try from 0027efa8 to 0027efcf has its CatchHandler @ 0027f4dc */
    FUN_00231f40(auStack_158,param_5,&local_e8,&local_118,param_11,param_13 & 1);
    local_160 = 0x44000000000;
    local_168 = local_1270;
    local_170 = 1;
    local_27c8 = *(ulong *)(lVar32 + 0x50);
    uStack_27d8 = CONCAT44(uStack_27d8._4_4_,2);
    local_27d0 = param_11;
    local_246c = 0;
    local_27e0 = PTR_DAT_02711f28 + 0x10;
    local_27c0 = CONCAT71(local_27c0._1_7_,param_13) & 0xffffffffffffff01;
                    /* try { // try from 0027f02c to 0027f057 has its CatchHandler @ 0027f4cc */
    FUN_0026ae60(auStack_2460,&local_68,&local_b8,&local_90,&local_b0,param_14,param_9,local_1270,
                 param_15);
    lVar31 = (long)&local_1338 + 3;
    lVar26 = 0x80;
    local_12b8 = 0;
    do {
      *(undefined4 *)(lVar31 + -3) = 0xffffffff;
      lVar31 = lVar31 + 4;
      lVar26 = lVar26 + -4;
    } while (lVar26 != 0);
    bStack_1288 = param_12 & 1;
    local_1290 = param_10;
    uStack_1287 = 1;
    auVar20 = *param_2;
    local_1280 = auStack_158;
    fVar38 = auVar20._0_4_ - (float)local_1af0;
    fVar66 = auVar20._4_4_ - (float)((ulong)local_1af0 >> 0x20);
    fVar39 = auVar20._8_4_ - (float)uStack_1ae8;
    fVar40 = 0.0 - (float)((ulong)uStack_1ae8 >> 0x20);
    auVar34._0_4_ = local_1b20 * fVar38;
    auVar34._4_4_ = fStack_1b1c * fVar66;
    auVar34._8_4_ = fStack_1b18 * fVar39;
    auVar34._12_4_ = fStack_1b14 * fVar40;
    auVar71 = NEON_ext(auVar34,auVar34,8,1);
    fVar64 = auVar71._0_4_ + auVar71._4_4_;
    auVar35._0_4_ = fVar38 * local_1b10;
    auVar35._4_4_ = fVar66 * fStack_1b0c;
    auVar35._8_4_ = fVar39 * fStack_1b08;
    auVar35._12_4_ = fVar40 * fStack_1b04;
    auVar71 = NEON_ext(auVar35,auVar35,8,1);
    fVar65 = auVar71._0_4_ + auVar71._4_4_;
    fVar38 = fVar38 * local_1b00;
    fVar66 = fVar66 * fStack_1afc;
    auVar5._4_4_ = fVar66;
    auVar5._0_4_ = fVar38;
    auVar5._8_4_ = fVar39 * fStack_1af8;
    auVar5._12_4_ = fVar40 * fStack_1af4;
    auVar6._4_4_ = fVar66;
    auVar6._0_4_ = fVar38;
    auVar6._8_4_ = fVar39 * fStack_1af8;
    auVar6._12_4_ = fVar40 * fStack_1af4;
    auVar71 = NEON_ext(auVar5,auVar6,8,1);
    uStack_12a8 = (ulong)(uint)(fVar38 + fVar66 + auVar71._0_4_ + auVar71._4_4_);
    local_12b0 = NEON_ext(CONCAT44(auVar34._0_4_ + auVar34._4_4_ + fVar64,
                                   auVar34._0_4_ + auVar34._4_4_ + fVar64),
                          CONCAT44(auVar35._0_4_ + auVar35._4_4_ + fVar65,
                                   auVar35._0_4_ + auVar35._4_4_ + fVar65),4,1);
                    /* try { // try from 0027f134 to 0027f14f has its CatchHandler @ 0027f4e0 */
    local_12a0 = param_2;
    local_1298 = param_3;
    (*(code *)(&PTR_LAB_025e4de8)[*(ushort *)(lVar32 + 8) - 3])(lVar32,auStack_158,&local_27e0,1,1);
    iVar17 = local_246c;
    if (local_246c != 0) {
      lVar31 = 0;
      lVar26 = 0x264;
      lVar32 = 0x24;
      do {
                    /* try { // try from 0027f184 to 0027f18b has its CatchHandler @ 0027f4f0 */
        FUN_0026d240(auStack_2460,(long)&local_27e0 + lVar32,local_24bc[lVar31],local_247c[lVar31],
                     (long)&local_27e0 + lVar26);
        lVar31 = lVar31 + 1;
        lVar26 = lVar26 + 0xc;
        lVar32 = lVar32 + 0x24;
      } while (iVar17 != (int)lVar31);
      local_246c = 0;
    }
                    /* try { // try from 0027f1a4 to 0027f1ab has its CatchHandler @ 0027f4e0 */
    FUN_0026cb80(auStack_2460);
    iVar17 = (int)local_1ad8;
    if ((int)local_1ad8 != 0) {
      uVar22 = local_1ad8._4_4_;
      uVar30 = (ulong)local_1ad8._4_4_;
      if (1 < local_1ad8._4_4_) {
        iVar60 = -1;
        uVar24 = 1;
        do {
          lVar31 = local_1c68[uVar24];
          if ((float)*(undefined8 *)(local_1c68[uVar24 + 1] + 0x28) <
              (float)*(undefined8 *)(lVar31 + 0x28)) {
            local_1c68[uVar24] = local_1c68[uVar24 + 1];
            local_1c68[uVar24 + 1] = lVar31;
            if (-1 < (int)uVar24 + -2) {
              uVar27 = (long)iVar60 + 1;
              plVar21 = local_1c68 + (long)iVar60 + 1;
              do {
                uVar1 = uVar27 & 0xffffffff;
                lVar31 = local_1c68[uVar1 + 1];
                if ((float)*(undefined8 *)(*plVar21 + 0x28) <= (float)*(undefined8 *)(lVar31 + 0x28)
                   ) break;
                uVar27 = uVar27 - 1;
                local_1c68[uVar1 + 1] = *plVar21;
                *plVar21 = lVar31;
                plVar21 = plVar21 + -1;
              } while (0 < (long)uVar27);
            }
          }
          uVar24 = uVar24 + 1;
          iVar60 = iVar60 + 1;
        } while (uVar24 != uVar30);
      }
      lVar31 = local_1ae0;
      if (uVar22 == 0) {
        local_1ad8._4_4_ = 0;
      }
      else {
        uVar24 = 0;
        uVar27 = 0xffffffff;
        do {
          puVar25 = (undefined8 *)local_1c68[uVar24 + 1];
          puVar25[2] = 0;
          iVar17 = *(int *)((long)puVar25 + 0x34) - *(int *)(puVar25 + 6);
          puVar25[3] = puVar25;
          puVar25[4] = puVar25;
          *(int *)(puVar25 + 7) = iVar17;
          if (uVar24 != 0) {
            lVar26 = 0;
            do {
              lVar32 = (local_1c68 + 1)[uVar27 + lVar26];
              pfVar28 = *(float **)(lVar32 + 0x20);
              auVar36._0_4_ = (float)*puVar25 * *pfVar28;
              auVar36._4_4_ = (float)((ulong)*puVar25 >> 0x20) * pfVar28[1];
              auVar36._8_4_ = (float)puVar25[1] * pfVar28[2];
              auVar36._12_4_ = (float)((ulong)puVar25[1] >> 0x20) * pfVar28[3];
              auVar71 = NEON_ext(auVar36,auVar36,8,1);
              if (local_1b30[0] <= auVar36._0_4_ + auVar36._4_4_ + auVar71._0_4_ + auVar71._4_4_) {
                *(undefined8 **)(lVar32 + 0x10) = puVar25;
                *(undefined8 **)(pfVar28 + 6) = puVar25;
                puVar25[4] = pfVar28;
                *(int *)(*(long *)(lVar32 + 0x20) + 0x38) =
                     *(int *)(*(long *)(lVar32 + 0x20) + 0x38) + iVar17;
                break;
              }
              lVar26 = lVar26 + -1;
            } while ((int)uVar24 + (int)lVar26 != 0);
          }
          uVar27 = (ulong)((int)uVar27 + 1);
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar30);
        uVar24 = 0;
        do {
          lVar26 = local_1c68[uVar24 + 1];
          if (lVar26 != 0 && *(long *)(lVar26 + 0x20) == lVar26) {
            for (lVar32 = *(long *)(lVar26 + 0x10); lVar32 != 0; lVar32 = *(long *)(lVar32 + 0x10))
            {
              uVar27 = (ulong)*(uint *)(lVar26 + 0x30);
              uVar22 = *(uint *)(lVar26 + 0x34);
              if (*(uint *)(lVar26 + 0x30) < uVar22) {
                uVar23 = *(uint *)(lVar32 + 0x34);
                do {
                  uVar29 = *(uint *)(lVar32 + 0x30);
                  if (uVar29 < uVar23) {
                    lVar3 = lVar31 + uVar27 * 0x40;
                    do {
                      __dest = (void *)(lVar31 + (ulong)uVar29 * 0x40);
                      fVar64 = (float)*(undefined8 *)((long)__dest + 0x10) -
                               *(float *)(lVar3 + 0x10);
                      fVar65 = (float)((ulong)*(undefined8 *)((long)__dest + 0x10) >> 0x20) -
                               *(float *)(lVar3 + 0x14);
                      fVar38 = (float)*(undefined8 *)((long)__dest + 0x18) -
                               *(float *)(lVar3 + 0x18);
                      fVar66 = (float)((ulong)*(undefined8 *)((long)__dest + 0x18) >> 0x20) -
                               *(float *)(lVar3 + 0x1c);
                      fVar64 = fVar64 * fVar64;
                      fVar65 = fVar65 * fVar65;
                      fVar38 = fVar38 * fVar38;
                      fVar66 = fVar66 * fVar66;
                      auVar7._4_4_ = fVar65;
                      auVar7._0_4_ = fVar64;
                      auVar7._8_4_ = fVar38;
                      auVar7._12_4_ = fVar66;
                      auVar8._4_4_ = fVar65;
                      auVar8._0_4_ = fVar64;
                      auVar8._8_4_ = fVar38;
                      auVar8._12_4_ = fVar66;
                      auVar71 = NEON_ext(auVar7,auVar8,8,1);
                      if (fVar64 + fVar65 + auVar71._0_4_ + auVar71._4_4_ < (float)local_1b28) {
                        memcpy(__dest,(void *)(lVar31 + (ulong)(uVar23 - 1) * 0x40),0x34);
                        uVar23 = *(int *)(lVar32 + 0x34) - 1;
                        uVar29 = uVar29 - 1;
                        *(uint *)(lVar32 + 0x34) = uVar23;
                      }
                      uVar29 = uVar29 + 1;
                    } while (uVar29 < uVar23);
                    uVar22 = *(uint *)(lVar26 + 0x34);
                  }
                  uVar27 = uVar27 + 1;
                } while (uVar27 < uVar22);
              }
              lVar26 = lVar32;
            }
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar30);
        iVar17 = (int)local_1ad8;
      }
                    /* try { // try from 0027f43c to 0027f443 has its CatchHandler @ 0027f4e0 */
      FUN_00292960(local_1b40,local_1ae0,iVar17,local_1c68 + 1,local_1ad8._4_4_,&local_1b28,
                   local_1b30,6);
      local_1ad8 = 0;
    }
    puVar25 = local_168;
    if ((-1 < (long)local_160) && ((local_160 & 0x7fffffff00000000) != 0)) {
      if (local_1270 == local_168) {
        local_170 = 0;
      }
      else if (local_168 != (undefined8 *)0x0) {
                    /* try { // try from 0027f470 to 0027f483 has its CatchHandler @ 0027f4c8 */
        plVar21 = (long *)FUN_00400d30();
        (**(code **)(*plVar21 + 0x18))(plVar21,puVar25);
      }
    }
  }
  else {
    uStack_27a8 = (ulong)(uint)fVar43;
    local_27b0 = CONCAT44(fVar68,fVar59);
    fVar68 = fVar39 + fVar39;
    fVar43 = fVar42 + fVar42;
    fVar44 = fVar40 + fVar40;
    fVar37 = fVar42 * fVar43;
    fVar59 = fVar40 * fVar44;
    uVar70 = NEON_fmov(0x3f800000,4);
    fVar61 = (float)uVar70 - fVar39 * fVar68;
    fVar66 = (float)((ulong)uVar70 >> 0x20);
    fVar41 = (fVar66 - fVar37) - fVar59;
    local_27c8 = (ulong)(uint)(fVar40 * fVar43 + fVar38 * fVar68);
    local_27e0 = (undefined *)
                 NEON_ext(CONCAT17((char)((uint)fVar41 >> 0x18),
                                   CONCAT16((char)((uint)fVar41 >> 0x10),
                                            CONCAT15((char)((uint)fVar41 >> 8),
                                                     CONCAT14(SUB41(fVar41,0),
                                                              ((float)uVar70 - fVar37) - fVar59)))),
                          CONCAT44(fVar42 * fVar68 + fVar38 * fVar44,
                                   fVar42 * fVar68 + fVar38 * fVar44),4,1);
    local_27d0 = NEON_ext(CONCAT44(fVar42 * fVar68 - fVar38 * fVar44,
                                   fVar42 * fVar68 - fVar38 * fVar44),
                          CONCAT44((fVar66 - fVar39 * fVar68) - fVar59,fVar61 - fVar59),4,1);
    uStack_27d8 = (ulong)(uint)(fVar40 * fVar68 - fVar38 * fVar43);
    local_27c0 = NEON_ext(CONCAT44(fVar40 * fVar68 + fVar38 * fVar43,
                                   fVar40 * fVar68 + fVar38 * fVar43),
                          CONCAT44(fVar40 * fVar43 - fVar38 * fVar68,
                                   fVar40 * fVar43 - fVar38 * fVar68),4,1);
    uStack_27b8 = (ulong)(uint)(fVar61 - fVar37);
    local_1270[0] = CONCAT44(fVar65 * 0.8,fVar64 * 0.8);
    uVar22 = (uint)*(byte *)((long)param_14 + 0x3e);
    if (*(byte *)((long)param_14 + 0x3e) != 0) {
      uVar30 = 0;
      do {
        while( true ) {
          pbVar2 = (byte *)((long)param_14 + uVar30 + 0x38);
          uVar29 = (uint)uVar30;
          uVar23 = uVar29;
          if (uVar22 - 2 <= uVar29) {
            uVar23 = uVar22 - 2;
          }
          bVar45 = *pbVar2;
          pfVar28 = param_14 +
                    (ulong)*(byte *)((long)param_14 + (ulong)(uVar23 + 1) + 0x38) * 100 + 0x10;
          Hint_Prefetch(pfVar28,0,0,0);
          Hint_Prefetch(pfVar28 + 0x20,0,0,0);
          Hint_Prefetch(pfVar28 + 0x40,0,0,0);
          fVar64 = (float)FUN_00292800(pfVar28,param_14 + (ulong)bVar45 * 100 + 0x10,&local_27e0,
                                       local_1270,&local_68);
          if ((param_14 + (ulong)bVar45 * 100 + 0x10)[0x60] == 0.0) break;
          param_14[(ulong)bVar45 + 8] = fVar64;
          uVar22 = (uint)*(byte *)((long)param_14 + 0x3e);
          uVar30 = (ulong)(uVar29 + 1);
          if (uVar22 <= uVar29 + 1) goto LAB_0027f48c;
        }
        bVar4 = *(char *)((long)param_14 + 0x3e) - 1;
        *(byte *)((long)param_14 + 0x3e) = bVar4;
        bVar46 = *(byte *)((long)param_14 + (ulong)bVar4 + 0x38);
        *(byte *)((long)param_14 + (ulong)bVar4 + 0x38) = bVar45;
        *pbVar2 = bVar46;
        uVar22 = (uint)*(byte *)((long)param_14 + 0x3e);
      } while (uVar29 < uVar22);
    }
  }
LAB_0027f48c:
  uVar22 = FUN_00293090(param_14,param_9,&local_b0);
  return uVar22 & 1;
}


