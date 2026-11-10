/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0027d300; name: FUN_0027d300
 */


uint FUN_0027d300(undefined4 param_1,undefined1 (*param_2) [12],undefined8 param_3,
                 undefined8 *param_4,undefined8 param_5,long param_6,undefined1 (*param_7) [16],
                 float *param_8,undefined8 param_9,undefined8 param_10,byte param_11,float *param_12
                 ,undefined8 param_13)

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
  undefined2 uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  float *pfVar25;
  uint uVar26;
  ulong uVar27;
  long *plVar28;
  float fVar29;
  float fVar30;
  float fVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  byte bVar36;
  byte bVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  int iVar57;
  float fVar59;
  undefined1 auVar58 [16];
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined8 uVar69;
  undefined1 auVar70 [16];
  byte local_2430 [24];
  byte local_2418 [8];
  undefined *local_2410;
  float *pfStack_2408;
  float *pfStack_2400;
  ulong local_23f8;
  undefined8 local_23f0;
  ulong uStack_23e8;
  undefined8 local_23e0;
  ulong uStack_23d8;
  long local_1bf8 [37];
  undefined8 local_1ad0;
  float local_1ac0 [2];
  undefined8 local_1ab8;
  float local_1ab0;
  float fStack_1aac;
  float fStack_1aa8;
  float fStack_1aa4;
  float local_1aa0;
  float fStack_1a9c;
  float fStack_1a98;
  float fStack_1a94;
  float local_1a90;
  float fStack_1a8c;
  float fStack_1a88;
  float fStack_1a84;
  undefined8 local_1a80;
  undefined8 uStack_1a78;
  long local_1a70;
  undefined8 local_1a68;
  undefined4 local_12c8;
  undefined4 local_1248;
  undefined8 local_1240;
  ulong uStack_1238;
  undefined1 (*local_1230) [12];
  undefined8 local_1228;
  undefined8 local_1220;
  byte bStack_1218;
  byte bStack_1217;
  undefined8 local_1210 [544];
  undefined1 local_110;
  undefined8 *local_108;
  ulong local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  long *local_e8;
  long lStack_e0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
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
  
  fVar52 = *(float *)(param_7[1] + 4);
  uStack_a0 = *(undefined8 *)(param_8 + 4);
  auVar64 = *param_7;
  local_b0 = *param_8;
  fStack_ac = param_8[1];
  fStack_a8 = param_8[2];
  fStack_a4 = param_8[3];
  auVar58._0_4_ = -local_b0;
  auVar58._4_4_ = -fStack_ac;
  auVar58._8_4_ = -fStack_a8;
  uStack_88 = auVar64._8_8_;
  local_90 = auVar64._0_8_;
  uStack_78 = (ulong)(uint)*(float *)(param_7[1] + 8);
  uStack_80 = CONCAT17((char)((uint)fVar52 >> 0x18),
                       CONCAT16((char)((uint)fVar52 >> 0x10),
                                CONCAT15((char)((uint)fVar52 >> 8),*(undefined5 *)param_7[1])));
  local_68 = CONCAT44(param_1,param_1);
  uStack_98 = (ulong)(uint)param_8[6];
  fVar50 = *(float *)param_7[1] - param_8[4];
  fVar52 = fVar52 - param_8[5];
  fVar54 = *(float *)(param_7[1] + 8) - param_8[6];
  fVar29 = auVar64._4_4_;
  fVar30 = auVar64._8_4_;
  fVar33 = auVar64._12_4_;
  auVar58._12_4_ = 0;
  fVar60 = fStack_a4 * fStack_a4 + -0.5;
  auVar65 = NEON_ext(auVar58,auVar58,8,1);
  auVar67._4_4_ = fVar52;
  auVar67._0_4_ = fVar50;
  auVar67._8_4_ = fVar54;
  auVar67._12_4_ = 0;
  auVar11._4_4_ = fVar52;
  auVar11._0_4_ = fVar50;
  auVar11._8_4_ = fVar54;
  auVar11._12_4_ = 0;
  auVar70 = NEON_ext(auVar67,auVar11,8,1);
  fVar51 = auVar58._0_4_ * fVar50;
  fVar53 = auVar58._4_4_ * fVar52;
  fVar66 = auVar58._0_4_ * fVar52 - auVar58._4_4_ * fVar50;
  uVar69 = NEON_ext(CONCAT44(auVar58._4_4_ * fVar54 - auVar58._8_4_ * fVar52,fVar66),
                    CONCAT44(auVar65._4_4_ * fVar52 - auVar58._4_4_ * auVar70._4_4_,
                             auVar65._0_4_ * fVar50 - auVar58._0_4_ * auVar70._0_4_),4,1);
  auVar62._0_4_ = fVar50 * fVar60 + (float)uVar69 * fStack_a4;
  auVar62._4_4_ = fVar52 * fVar60 + (float)((ulong)uVar69 >> 0x20) * fStack_a4;
  auVar62._8_4_ = fVar54 * fVar60 + fVar66 * fStack_a4;
  auVar62._12_4_ = fStack_a4 * 0.0 + 0.0;
  auVar70 = NEON_ext(auVar62,auVar62,8,1);
  auVar12._4_4_ = fVar53;
  auVar12._0_4_ = fVar51;
  auVar12._8_4_ = auVar58._8_4_ * fVar54;
  auVar12._12_4_ = 0;
  auVar13._4_4_ = fVar53;
  auVar13._0_4_ = fVar51;
  auVar13._8_4_ = auVar58._8_4_ * fVar54;
  auVar13._12_4_ = 0;
  auVar67 = NEON_ext(auVar12,auVar13,8,1);
  fVar52 = fVar51 + fVar53 + auVar67._0_4_ + auVar67._4_4_;
  fVar60 = auVar58._0_4_ * fVar52 + auVar62._0_4_;
  fVar66 = auVar58._4_4_ * fVar52 + auVar62._4_4_;
  fVar50 = auVar58._8_4_ * fVar52 + auVar70._0_4_;
  fVar52 = fVar52 * 0.0 + 0.0;
  auVar14._4_4_ = fVar66;
  auVar14._0_4_ = fVar60;
  auVar14._8_4_ = fVar50;
  auVar14._12_4_ = fVar52;
  auVar15._4_4_ = fVar66;
  auVar15._0_4_ = fVar60;
  auVar15._8_4_ = fVar50;
  auVar15._12_4_ = fVar52;
  auVar70 = NEON_ext(auVar14,auVar15,8,1);
  auVar31._0_12_ = auVar64._0_12_;
  auVar31._12_4_ = 0;
  fVar52 = auVar64._0_4_;
  auVar68._0_4_ = fVar52 * auVar58._0_4_;
  auVar68._4_4_ = fVar29 * auVar58._4_4_;
  auVar68._8_4_ = fVar30 * auVar58._8_4_;
  auVar68._12_4_ = 0;
  auVar67 = NEON_ext(auVar68,auVar68,8,1);
  fVar60 = fVar60 + fVar60;
  fVar66 = fVar66 + fVar66;
  fVar55 = auVar70._0_4_ + auVar70._0_4_;
  auVar64 = NEON_ext(auVar31,auVar31,8,1);
  fVar50 = fVar29 * auVar58._0_4_ - fVar52 * auVar58._4_4_;
  uVar69 = NEON_ext(CONCAT44(fVar30 * auVar58._4_4_ - fVar29 * auVar58._8_4_,fVar50),
                    CONCAT44(fVar29 * auVar65._4_4_ - auVar64._4_4_ * auVar58._4_4_,
                             fVar52 * auVar65._0_4_ - auVar64._0_4_ * auVar58._0_4_),4,1);
  fVar51 = fVar33 * fStack_a4 - (auVar68._0_4_ + auVar68._4_4_ + auVar67._0_4_ + auVar67._4_4_);
  auVar63._0_8_ = CONCAT44(ABS(fVar66 - param_12[5]),ABS(fVar60 - param_12[4]));
  auVar63._8_4_ = ABS(fVar55 - param_12[6]);
  auVar63._12_4_ = ABS(0.0 - param_12[7]);
  fVar53 = fVar52 * fStack_a4 + auVar58._0_4_ * fVar33 + (float)uVar69;
  fVar54 = fVar29 * fStack_a4 + auVar58._4_4_ * fVar33 + (float)((ulong)uVar69 >> 0x20);
  fVar50 = fVar30 * fStack_a4 + auVar58._8_4_ * fVar33 + fVar50;
  auVar64 = NEON_ext(auVar63,auVar63,8,1);
  fVar52 = (float)*param_4;
  fVar29 = (float)((ulong)*param_4 >> 0x20);
  uVar69 = NEON_fmaxp(auVar64._0_8_,auVar63._0_8_,4);
  uVar69 = NEON_fmaxp(uVar69,uVar69,4);
  auVar65._0_4_ = fVar53 * *param_12;
  auVar65._4_4_ = fVar54 * param_12[1];
  auVar65._8_4_ = fVar50 * param_12[2];
  auVar65._12_4_ = fVar51 * param_12[3];
  auVar64 = NEON_ext(auVar65,auVar65,8,1);
  iVar10 = -(uint)(fVar52 * 0.2 < (float)uVar69);
  iVar57 = -(uint)(auVar65._0_4_ + auVar65._4_4_ + auVar64._0_4_ + auVar64._4_4_ < 0.9998);
  bVar36 = (byte)((uint)iVar57 >> 0x10) | (byte)((uint)iVar10 >> 0x10);
  bVar37 = (byte)((uint)iVar57 >> 0x18) | (byte)((uint)iVar10 >> 0x18);
  uVar9 = CONCAT11((byte)((uint)iVar57 >> 8) | (byte)((uint)iVar10 >> 8),(byte)iVar57 | (byte)iVar10
                  );
  iVar10 = -(uint)(CONCAT13(bVar37,CONCAT12(bVar36,uVar9)) == -1);
  iVar57 = -(uint)(CONCAT13(bVar37,CONCAT12(bVar36,uVar9)) == -1);
  uVar38 = (undefined1)iVar57;
  uVar39 = (undefined1)((uint)iVar57 >> 8);
  uVar40 = (undefined1)((uint)iVar57 >> 0x10);
  uVar41 = (undefined1)((uint)iVar57 >> 0x18);
  iVar57 = -(uint)(CONCAT13(bVar37,CONCAT12(bVar36,uVar9)) == -1);
  uVar42 = (undefined1)iVar57;
  uVar43 = (undefined1)((uint)iVar57 >> 8);
  uVar44 = (undefined1)((uint)iVar57 >> 0x10);
  uVar45 = (undefined1)((uint)iVar57 >> 0x18);
  iVar57 = -(uint)(CONCAT13(bVar37,CONCAT12(bVar36,uVar9)) == -1);
  uVar46 = (undefined1)iVar57;
  uVar47 = (undefined1)((uint)iVar57 >> 8);
  uVar48 = (undefined1)((uint)iVar57 >> 0x10);
  uVar49 = (undefined1)((uint)iVar57 >> 0x18);
  auVar64[4] = uVar38;
  auVar64._0_4_ = iVar10;
  auVar64[5] = uVar39;
  auVar64[6] = uVar40;
  auVar64[7] = uVar41;
  auVar64[8] = uVar42;
  auVar64[9] = uVar43;
  auVar64[10] = uVar44;
  auVar64[0xb] = uVar45;
  auVar64[0xc] = uVar46;
  auVar64[0xd] = uVar47;
  auVar64[0xe] = uVar48;
  auVar64[0xf] = uVar49;
  auVar70[4] = uVar38;
  auVar70._0_4_ = iVar10;
  auVar70[5] = uVar39;
  auVar70[6] = uVar40;
  auVar70[7] = uVar41;
  auVar70[8] = uVar42;
  auVar70[9] = uVar43;
  auVar70[10] = uVar44;
  auVar70[0xb] = uVar45;
  auVar70[0xc] = uVar46;
  auVar70[0xd] = uVar47;
  auVar70[0xe] = uVar48;
  auVar70[0xf] = uVar49;
  NEON_ext(auVar64,auVar70,8,1);
  if (CONCAT13(uVar46,CONCAT12(uVar42,CONCAT11(uVar38,(char)iVar10))) == -1) {
    local_b8 = CONCAT44(fVar29 * 0.05,fVar52 * 0.05);
    *(undefined1 *)((long)param_12 + 0x3e) = 0;
    param_12[2] = fVar50;
    param_12[3] = fVar51;
    *param_12 = fVar53;
    param_12[1] = fVar54;
    *(ulong *)(param_12 + 6) = (ulong)(uint)fVar55;
    *(ulong *)(param_12 + 4) = CONCAT44(fVar66,fVar60);
    fVar33 = *(float *)(param_7[1] + 4) - param_8[5];
    fVar66 = *param_8;
    fVar55 = param_8[1];
    fVar50 = *(float *)param_7[1] - param_8[4];
    fVar53 = *(float *)(param_7[1] + 8) - param_8[6];
    fVar52 = param_8[2];
    fVar54 = param_8[3];
    fVar33 = fVar33 + fVar33;
    fVar50 = fVar50 + fVar50;
    fVar53 = fVar53 + fVar53;
    fVar29 = fVar54 * fVar54 + -0.5;
    fVar60 = (fVar50 * -fVar66 - fVar33 * fVar55) - fVar53 * fVar52;
    local_c0 = (fVar29 * fVar53 + fVar54 * (fVar50 * fVar55 - fVar33 * fVar66)) - fVar60 * fVar52;
    fVar30 = *(float *)*param_7;
    fVar51 = *(float *)(*param_7 + 4);
    local_c8 = (fVar29 * fVar50 + fVar54 * (fVar33 * fVar52 - fVar53 * fVar55)) - fVar60 * fVar66;
    fStack_c4 = (fVar29 * fVar33 + fVar54 * (fVar53 * fVar66 - fVar50 * fVar52)) - fVar60 * fVar55;
    fVar29 = *(float *)(*param_7 + 8);
    fVar50 = *(float *)(*param_7 + 0xc);
    local_d8 = ((fVar54 * fVar30 - fVar50 * fVar66) - fVar29 * fVar55) + fVar51 * fVar52;
    fStack_d4 = ((fVar54 * fVar51 - fVar50 * fVar55) - fVar30 * fVar52) + fVar29 * fVar66;
    local_d0 = ((fVar54 * fVar29 - fVar50 * fVar52) - fVar51 * fVar66) + fVar30 * fVar55;
    fStack_cc = fVar54 * fVar50 + fVar30 * fVar66 + fVar51 * fVar55 + fVar29 * fVar52;
    plVar28 = *(long **)(param_6 + 8);
    local_e8 = plVar28;
    lStack_e0 = param_6;
    fabsf(*(float *)(param_6 + 0x14));
    fabsf(*(float *)(param_6 + 0x18));
    local_f4 = 1.0 / *(float *)(param_6 + 0x10);
    local_f8 = 1.0 / *(float *)(param_6 + 0x14);
    local_f0 = 1.0 / *(float *)(param_6 + 0x18);
    local_108 = local_1210;
    local_100 = 0x44000000000;
    local_110 = 1;
                    /* try { // try from 0027d858 to 0027d8eb has its CatchHandler @ 0027dd18 */
    (**(code **)(*plVar28 + 0x70))(local_2418,plVar28);
    local_2410 = PTR_DAT_02711f18 + 0x10;
    pfStack_2408 = &local_f8;
    pfStack_2400 = param_8;
    (**(code **)(*local_e8 + 0x70))(local_2430);
    local_2410 = PTR_DAT_02711f20 + 0x10;
    local_23f8 = CONCAT71(local_23f8._1_7_,~local_2430[0]) & 0xffffffffffffff01;
    FUN_0026ae60(&local_23f0,&local_68,&local_b8,&local_90,&local_b0,param_12,param_9,local_1210,
                 param_13);
    lVar22 = (long)&local_12c8 + 3;
    lVar21 = 0x80;
    local_1248 = 0;
    bStack_1218 = param_11 & 1;
    do {
      *(undefined4 *)(lVar22 + -3) = 0xffffffff;
      lVar22 = lVar22 + 4;
      lVar21 = lVar21 + -4;
    } while (lVar21 != 0);
    local_1220 = param_10;
    bStack_1217 = ~local_2418[0] & 1;
    auVar16 = *param_2;
    fVar50 = auVar16._0_4_ - (float)local_1a80;
    fVar30 = auVar16._4_4_ - (float)((ulong)local_1a80 >> 0x20);
    fVar33 = auVar16._8_4_ - (float)uStack_1a78;
    fVar51 = 0.0 - (float)((ulong)uStack_1a78 >> 0x20);
    auVar32._0_4_ = local_1ab0 * fVar50;
    auVar32._4_4_ = fStack_1aac * fVar30;
    auVar32._8_4_ = fStack_1aa8 * fVar33;
    auVar32._12_4_ = fStack_1aa4 * fVar51;
    auVar64 = NEON_ext(auVar32,auVar32,8,1);
    fVar52 = auVar64._0_4_ + auVar64._4_4_;
    auVar34._0_4_ = fVar50 * local_1aa0;
    auVar34._4_4_ = fVar30 * fStack_1a9c;
    auVar34._8_4_ = fVar33 * fStack_1a98;
    auVar34._12_4_ = fVar51 * fStack_1a94;
    auVar64 = NEON_ext(auVar34,auVar34,8,1);
    fVar29 = auVar64._0_4_ + auVar64._4_4_;
    fVar50 = fVar50 * local_1a90;
    fVar30 = fVar30 * fStack_1a8c;
    auVar5._4_4_ = fVar30;
    auVar5._0_4_ = fVar50;
    auVar5._8_4_ = fVar33 * fStack_1a88;
    auVar5._12_4_ = fVar51 * fStack_1a84;
    auVar6._4_4_ = fVar30;
    auVar6._0_4_ = fVar50;
    auVar6._8_4_ = fVar33 * fStack_1a88;
    auVar6._12_4_ = fVar51 * fStack_1a84;
    auVar64 = NEON_ext(auVar5,auVar6,8,1);
    uStack_1238 = (ulong)(uint)(fVar50 + fVar30 + auVar64._0_4_ + auVar64._4_4_);
    local_1240 = NEON_ext(CONCAT44(auVar32._0_4_ + auVar32._4_4_ + fVar52,
                                   auVar32._0_4_ + auVar32._4_4_ + fVar52),
                          CONCAT44(auVar34._0_4_ + auVar34._4_4_ + fVar29,
                                   auVar34._0_4_ + auVar34._4_4_ + fVar29),4,1);
                    /* try { // try from 0027d9ac to 0027d9d3 has its CatchHandler @ 0027dd08 */
    local_1230 = param_2;
    local_1228 = param_3;
    FUN_001b0d40(local_2430,&local_d8,param_5);
    FUN_00251d90(&local_f8,param_8,local_2430,0,&local_2410);
                    /* try { // try from 0027d9d4 to 0027d9db has its CatchHandler @ 0027dcf8 */
    FUN_0026cb80(&local_23f0);
    iVar10 = (int)local_1a68;
    if ((int)local_1a68 != 0) {
      uVar17 = local_1a68._4_4_;
      uVar27 = (ulong)local_1a68._4_4_;
      if (1 < local_1a68._4_4_) {
        iVar57 = -1;
        uVar19 = 1;
        do {
          lVar22 = local_1bf8[uVar19];
          if ((float)*(undefined8 *)(local_1bf8[uVar19 + 1] + 0x28) <
              (float)*(undefined8 *)(lVar22 + 0x28)) {
            local_1bf8[uVar19] = local_1bf8[uVar19 + 1];
            local_1bf8[uVar19 + 1] = lVar22;
            if (-1 < (int)uVar19 + -2) {
              uVar23 = (long)iVar57 + 1;
              plVar28 = local_1bf8 + (long)iVar57 + 1;
              do {
                uVar1 = uVar23 & 0xffffffff;
                lVar22 = local_1bf8[uVar1 + 1];
                if ((float)*(undefined8 *)(*plVar28 + 0x28) <= (float)*(undefined8 *)(lVar22 + 0x28)
                   ) break;
                uVar23 = uVar23 - 1;
                local_1bf8[uVar1 + 1] = *plVar28;
                *plVar28 = lVar22;
                plVar28 = plVar28 + -1;
              } while (0 < (long)uVar23);
            }
          }
          uVar19 = uVar19 + 1;
          iVar57 = iVar57 + 1;
        } while (uVar19 != uVar27);
      }
      lVar22 = local_1a70;
      if (uVar17 == 0) {
        local_1a68._4_4_ = 0;
      }
      else {
        uVar19 = 0;
        uVar23 = 0xffffffff;
        do {
          puVar20 = (undefined8 *)local_1bf8[uVar19 + 1];
          puVar20[2] = 0;
          iVar10 = *(int *)((long)puVar20 + 0x34) - *(int *)(puVar20 + 6);
          puVar20[3] = puVar20;
          puVar20[4] = puVar20;
          *(int *)(puVar20 + 7) = iVar10;
          if (uVar19 != 0) {
            lVar21 = 0;
            do {
              lVar24 = (local_1bf8 + 1)[uVar23 + lVar21];
              pfVar25 = *(float **)(lVar24 + 0x20);
              auVar35._0_4_ = (float)*puVar20 * *pfVar25;
              auVar35._4_4_ = (float)((ulong)*puVar20 >> 0x20) * pfVar25[1];
              auVar35._8_4_ = (float)puVar20[1] * pfVar25[2];
              auVar35._12_4_ = (float)((ulong)puVar20[1] >> 0x20) * pfVar25[3];
              auVar64 = NEON_ext(auVar35,auVar35,8,1);
              if (local_1ac0[0] <= auVar35._0_4_ + auVar35._4_4_ + auVar64._0_4_ + auVar64._4_4_) {
                *(undefined8 **)(lVar24 + 0x10) = puVar20;
                *(undefined8 **)(pfVar25 + 6) = puVar20;
                puVar20[4] = pfVar25;
                *(int *)(*(long *)(lVar24 + 0x20) + 0x38) =
                     *(int *)(*(long *)(lVar24 + 0x20) + 0x38) + iVar10;
                break;
              }
              lVar21 = lVar21 + -1;
            } while ((int)uVar19 + (int)lVar21 != 0);
          }
          uVar23 = (ulong)((int)uVar23 + 1);
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar27);
        uVar19 = 0;
        do {
          lVar21 = local_1bf8[uVar19 + 1];
          if (lVar21 != 0 && *(long *)(lVar21 + 0x20) == lVar21) {
            for (lVar24 = *(long *)(lVar21 + 0x10); lVar24 != 0; lVar24 = *(long *)(lVar24 + 0x10))
            {
              uVar23 = (ulong)*(uint *)(lVar21 + 0x30);
              uVar17 = *(uint *)(lVar21 + 0x34);
              if (*(uint *)(lVar21 + 0x30) < uVar17) {
                uVar18 = *(uint *)(lVar24 + 0x34);
                do {
                  uVar26 = *(uint *)(lVar24 + 0x30);
                  if (uVar26 < uVar18) {
                    lVar3 = lVar22 + uVar23 * 0x40;
                    do {
                      __dest = (void *)(lVar22 + (ulong)uVar26 * 0x40);
                      fVar52 = (float)*(undefined8 *)((long)__dest + 0x10) -
                               *(float *)(lVar3 + 0x10);
                      fVar29 = (float)((ulong)*(undefined8 *)((long)__dest + 0x10) >> 0x20) -
                               *(float *)(lVar3 + 0x14);
                      fVar50 = (float)*(undefined8 *)((long)__dest + 0x18) -
                               *(float *)(lVar3 + 0x18);
                      fVar30 = (float)((ulong)*(undefined8 *)((long)__dest + 0x18) >> 0x20) -
                               *(float *)(lVar3 + 0x1c);
                      fVar52 = fVar52 * fVar52;
                      fVar29 = fVar29 * fVar29;
                      fVar50 = fVar50 * fVar50;
                      fVar30 = fVar30 * fVar30;
                      auVar7._4_4_ = fVar29;
                      auVar7._0_4_ = fVar52;
                      auVar7._8_4_ = fVar50;
                      auVar7._12_4_ = fVar30;
                      auVar8._4_4_ = fVar29;
                      auVar8._0_4_ = fVar52;
                      auVar8._8_4_ = fVar50;
                      auVar8._12_4_ = fVar30;
                      auVar64 = NEON_ext(auVar7,auVar8,8,1);
                      if (fVar52 + fVar29 + auVar64._0_4_ + auVar64._4_4_ < (float)local_1ab8) {
                        memcpy(__dest,(void *)(lVar22 + (ulong)(uVar18 - 1) * 0x40),0x34);
                        uVar18 = *(int *)(lVar24 + 0x34) - 1;
                        uVar26 = uVar26 - 1;
                        *(uint *)(lVar24 + 0x34) = uVar18;
                      }
                      uVar26 = uVar26 + 1;
                    } while (uVar26 < uVar18);
                    uVar17 = *(uint *)(lVar21 + 0x34);
                  }
                  uVar23 = uVar23 + 1;
                } while (uVar23 < uVar17);
              }
              lVar21 = lVar24;
            }
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar27);
        iVar10 = (int)local_1a68;
      }
                    /* try { // try from 0027dc68 to 0027dc6f has its CatchHandler @ 0027dcf8 */
      FUN_00292960(local_1ad0,local_1a70,iVar10,local_1bf8 + 1,local_1a68._4_4_,&local_1ab8,
                   local_1ac0,6);
      local_1a68 = 0;
    }
    puVar20 = local_108;
    if ((-1 < (long)local_100) && ((local_100 & 0x7fffffff00000000) != 0)) {
      if (local_1210 == local_108) {
        local_110 = 0;
      }
      else if (local_108 != (undefined8 *)0x0) {
                    /* try { // try from 0027dc9c to 0027dcaf has its CatchHandler @ 0027dcf4 */
        plVar28 = (long *)FUN_00400d30();
        (**(code **)(*plVar28 + 0x18))(plVar28,puVar20);
      }
    }
  }
  else {
    uStack_23d8 = (ulong)(uint)fVar55;
    local_23e0 = CONCAT44(fVar66,fVar60);
    fVar66 = fVar53 + fVar53;
    fVar55 = fVar54 + fVar54;
    fVar56 = fVar50 + fVar50;
    fVar33 = fVar54 * fVar55;
    fVar60 = fVar50 * fVar56;
    uVar69 = NEON_fmov(0x3f800000,4);
    fVar30 = fVar54 * fVar66 - fVar51 * fVar56;
    fVar61 = (float)uVar69 - fVar53 * fVar66;
    fVar59 = (float)((ulong)uVar69 >> 0x20);
    pfStack_2408 = (float *)(ulong)(uint)(fVar50 * fVar66 - fVar51 * fVar55);
    local_23f8 = (ulong)(uint)(fVar50 * fVar55 + fVar51 * fVar66);
    local_2410 = (undefined *)
                 NEON_ext(CONCAT44((fVar59 - fVar33) - fVar60,((float)uVar69 - fVar33) - fVar60),
                          CONCAT44(fVar54 * fVar66 + fVar51 * fVar56,
                                   fVar54 * fVar66 + fVar51 * fVar56),4,1);
    pfStack_2400 = (float *)NEON_ext(CONCAT17((char)((uint)fVar30 >> 0x18),
                                              CONCAT16((char)((uint)fVar30 >> 0x10),
                                                       CONCAT15((char)((uint)fVar30 >> 8),
                                                                CONCAT14(SUB41(fVar30,0),
                                                                         fVar54 * fVar66 -
                                                                         fVar51 * fVar56)))),
                                     CONCAT44((fVar59 - fVar53 * fVar66) - fVar60,fVar61 - fVar60),4
                                     ,1);
    uStack_23e8 = (ulong)(uint)(fVar61 - fVar33);
    local_23f0 = NEON_ext(CONCAT44(fVar50 * fVar66 + fVar51 * fVar55,
                                   fVar50 * fVar66 + fVar51 * fVar55),
                          CONCAT44(fVar50 * fVar55 - fVar51 * fVar66,
                                   fVar50 * fVar55 - fVar51 * fVar66),4,1);
    local_1210[0] = CONCAT44(fVar29 * 0.6,fVar52 * 0.6);
    uVar17 = (uint)*(byte *)((long)param_12 + 0x3e);
    if (*(byte *)((long)param_12 + 0x3e) != 0) {
      uVar27 = 0;
      do {
        while( true ) {
          pbVar2 = (byte *)((long)param_12 + uVar27 + 0x38);
          uVar26 = (uint)uVar27;
          uVar18 = uVar26;
          if (uVar17 - 2 <= uVar26) {
            uVar18 = uVar17 - 2;
          }
          bVar36 = *pbVar2;
          pfVar25 = param_12 +
                    (ulong)*(byte *)((long)param_12 + (ulong)(uVar18 + 1) + 0x38) * 100 + 0x10;
          Hint_Prefetch(pfVar25,0,0,0);
          Hint_Prefetch(pfVar25 + 0x20,0,0,0);
          Hint_Prefetch(pfVar25 + 0x40,0,0,0);
          fVar52 = (float)FUN_00292800(pfVar25,param_12 + (ulong)bVar36 * 100 + 0x10,&local_2410,
                                       local_1210,&local_68);
          if ((param_12 + (ulong)bVar36 * 100 + 0x10)[0x60] == 0.0) break;
          param_12[(ulong)bVar36 + 8] = fVar52;
          uVar17 = (uint)*(byte *)((long)param_12 + 0x3e);
          uVar27 = (ulong)(uVar26 + 1);
          if (uVar17 <= uVar26 + 1) goto LAB_0027dcb8;
        }
        bVar4 = *(char *)((long)param_12 + 0x3e) - 1;
        *(byte *)((long)param_12 + 0x3e) = bVar4;
        bVar37 = *(byte *)((long)param_12 + (ulong)bVar4 + 0x38);
        *(byte *)((long)param_12 + (ulong)bVar4 + 0x38) = bVar36;
        *pbVar2 = bVar37;
        uVar17 = (uint)*(byte *)((long)param_12 + 0x3e);
      } while (uVar26 < uVar17);
    }
  }
LAB_0027dcb8:
  uVar17 = FUN_00293090(param_12,param_9,&local_b0);
  return uVar17 & 1;
}


