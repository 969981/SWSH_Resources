/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00269b00; name: FUN_00269b00
 */


uint FUN_00269b00(long param_1,long param_2,undefined1 (*param_3) [16],float *param_4,float *param_5
                 ,undefined8 *param_6,undefined8 param_7)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  void *__dest;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  uint uVar17;
  uint uVar18;
  float *pfVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  uint uVar28;
  ulong uVar29;
  float *pfVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int iVar40;
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  int iVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  undefined1 auVar70 [16];
  float local_1078;
  float fStack_1074;
  float local_1070;
  float local_106c;
  float local_1068;
  float local_1064;
  undefined *local_1060;
  undefined8 *puStack_1058;
  float *pfStack_1050;
  ulong local_1048;
  undefined8 local_1040;
  ulong uStack_1038;
  undefined8 local_1030;
  ulong uStack_1028;
  long local_848 [37];
  undefined8 local_720;
  float local_710 [2];
  undefined8 local_708 [9];
  long local_6c0;
  undefined8 local_6b8;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 *local_188;
  undefined8 local_180;
  ulong uStack_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined1 local_15c;
  undefined8 local_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 local_130;
  undefined8 local_118;
  float local_110;
  long *local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  float local_b0;
  float fStack_ac;
  undefined8 local_a8;
  
  fVar31 = *(float *)(param_1 + 4);
  local_b0 = *param_5;
  local_a8 = CONCAT44(fVar31,fVar31);
  pfVar30 = (float *)*param_6;
  uStack_c0 = *(undefined8 *)param_3[1];
  uStack_b8 = (ulong)(uint)*(float *)(param_3[1] + 8);
  auVar14 = *param_3;
  uStack_c8 = auVar14._8_8_;
  local_d0 = auVar14._0_8_;
  auVar16 = *(undefined1 (*) [12])(param_4 + 4);
  uStack_e8 = *(undefined8 *)(param_4 + 2);
  local_f0 = *(undefined8 *)param_4;
  fVar49 = -(float)local_f0;
  fVar52 = -(float)((ulong)local_f0 >> 0x20);
  fVar55 = -(float)uStack_e8;
  fVar63 = (float)((ulong)uStack_e8 >> 0x20);
  auVar59._12_4_ = -fVar63;
  auVar59._8_4_ = fVar55;
  auVar59._4_4_ = fVar52;
  auVar59._0_4_ = fVar49;
  auVar60._0_12_ = auVar59._0_12_;
  fVar50 = (float)uStack_c0 - auVar16._0_4_;
  fVar53 = (float)((ulong)uStack_c0 >> 0x20) - auVar16._4_4_;
  fVar56 = *(float *)(param_3[1] + 8) - auVar16._8_4_;
  auVar67._4_4_ = fVar53;
  auVar67._0_4_ = fVar50;
  auVar67._8_4_ = fVar56;
  auVar67._12_4_ = 0;
  auVar65._4_4_ = fVar53;
  auVar65._0_4_ = fVar50;
  auVar65._8_4_ = fVar56;
  auVar65._12_4_ = 0;
  auVar67 = NEON_ext(auVar67,auVar65,8,1);
  uStack_d8 = (ulong)(uint)auVar16._8_4_;
  uStack_e0 = auVar16._0_8_;
  fVar62 = auVar14._12_4_;
  auVar60._12_4_ = 0;
  fVar35 = fVar63 * fVar63 + -0.5;
  auVar65 = NEON_ext(auVar60,auVar60,8,1);
  fVar69 = fVar49 * fVar53 - fVar52 * fVar50;
  fVar51 = fVar49 * fVar50;
  fVar54 = fVar52 * fVar53;
  uVar66 = NEON_ext(CONCAT44(fVar52 * fVar56 - fVar55 * fVar53,fVar69),
                    CONCAT44(auVar65._4_4_ * fVar53 - fVar52 * auVar67._4_4_,
                             auVar65._0_4_ * fVar50 - fVar49 * auVar67._0_4_),4,1);
  auVar64._0_4_ = fVar50 * fVar35 + (float)uVar66 * fVar63;
  auVar64._4_4_ = fVar53 * fVar35 + (float)((ulong)uVar66 >> 0x20) * fVar63;
  auVar64._8_4_ = fVar56 * fVar35 + fVar69 * fVar63;
  auVar64._12_4_ = fVar63 * 0.0 + 0.0;
  auVar67 = NEON_ext(auVar64,auVar64,8,1);
  auVar68._4_4_ = fVar54;
  auVar68._0_4_ = fVar51;
  auVar68._8_4_ = fVar55 * fVar56;
  auVar68._12_4_ = 0;
  auVar11._4_4_ = fVar54;
  auVar11._0_4_ = fVar51;
  auVar11._8_4_ = fVar55 * fVar56;
  auVar11._12_4_ = 0;
  auVar68 = NEON_ext(auVar68,auVar11,8,1);
  fVar53 = auVar14._4_4_;
  fVar35 = fVar51 + fVar54 + auVar68._0_4_ + auVar68._4_4_;
  fVar51 = auVar14._8_4_;
  fVar56 = fVar49 * fVar35 + auVar64._0_4_;
  fVar69 = fVar52 * fVar35 + auVar64._4_4_;
  fVar50 = fVar55 * fVar35 + auVar67._0_4_;
  fVar35 = fVar35 * 0.0 + 0.0;
  auVar12._4_4_ = fVar69;
  auVar12._0_4_ = fVar56;
  auVar12._8_4_ = fVar50;
  auVar12._12_4_ = fVar35;
  auVar13._4_4_ = fVar69;
  auVar13._0_4_ = fVar56;
  auVar13._8_4_ = fVar50;
  auVar13._12_4_ = fVar35;
  auVar67 = NEON_ext(auVar12,auVar13,8,1);
  auVar34._0_12_ = auVar14._0_12_;
  auVar34._12_4_ = 0;
  fVar35 = auVar14._0_4_;
  fVar56 = fVar56 + fVar56;
  fVar69 = fVar69 + fVar69;
  fVar57 = auVar67._0_4_ + auVar67._0_4_;
  auVar70._0_4_ = fVar35 * fVar49;
  auVar70._4_4_ = fVar53 * fVar52;
  auVar70._8_4_ = fVar51 * fVar55;
  auVar70._12_4_ = 0;
  auVar67 = NEON_ext(auVar70,auVar70,8,1);
  auVar68 = NEON_ext(auVar34,auVar34,8,1);
  fVar50 = fVar53 * fVar49 - fVar35 * fVar52;
  uVar66 = NEON_ext(CONCAT44(fVar51 * fVar52 - fVar53 * fVar55,fVar50),
                    CONCAT44(fVar53 * auVar65._4_4_ - auVar68._4_4_ * fVar52,
                             fVar35 * auVar65._0_4_ - auVar68._0_4_ * fVar49),4,1);
  fVar54 = fVar62 * fVar63 - (auVar70._0_4_ + auVar70._4_4_ + auVar67._0_4_ + auVar67._4_4_);
  fVar35 = fVar35 * fVar63 + fVar49 * fVar62 + (float)uVar66;
  fVar53 = fVar53 * fVar63 + fVar52 * fVar62 + (float)((ulong)uVar66 >> 0x20);
  fVar50 = fVar51 * fVar63 + fVar55 * fVar62 + fVar50;
  local_f8 = CONCAT44(fVar31 * 0.001,fVar31 * 0.001);
  fVar51 = ABS(fVar56 - (float)*(undefined8 *)(pfVar30 + 4));
  fVar62 = ABS(fVar69 - (float)((ulong)*(undefined8 *)(pfVar30 + 4) >> 0x20));
  fVar63 = ABS(fVar57 - (float)*(undefined8 *)(pfVar30 + 6));
  fVar49 = ABS(0.0 - (float)((ulong)*(undefined8 *)(pfVar30 + 6) >> 0x20));
  auVar14._4_4_ = fVar62;
  auVar14._0_4_ = fVar51;
  auVar14._8_4_ = fVar63;
  auVar14._12_4_ = fVar49;
  auVar15._4_4_ = fVar62;
  auVar15._0_4_ = fVar51;
  auVar15._8_4_ = fVar63;
  auVar15._12_4_ = fVar49;
  auVar67 = NEON_ext(auVar14,auVar15,8,1);
  auVar61._0_4_ = fVar35 * *pfVar30;
  auVar61._4_4_ = fVar53 * pfVar30[1];
  auVar61._8_4_ = fVar50 * pfVar30[2];
  auVar61._12_4_ = fVar54 * pfVar30[3];
  uVar66 = NEON_fmaxp(auVar67._0_8_,CONCAT44(fVar62,fVar51),4);
  auVar67 = NEON_ext(auVar61,auVar61,8,1);
  uVar66 = NEON_fmaxp(uVar66,uVar66,4);
  iVar40 = -(uint)(fVar31 * 0.02 < (float)uVar66);
  iVar58 = -(uint)(auVar61._0_4_ + auVar61._4_4_ + auVar67._0_4_ + auVar67._4_4_ < 0.9998);
  iVar40 = CONCAT13((byte)((uint)iVar58 >> 0x18) | (byte)((uint)iVar40 >> 0x18),
                    CONCAT12((byte)((uint)iVar58 >> 0x10) | (byte)((uint)iVar40 >> 0x10),
                             CONCAT11((byte)((uint)iVar58 >> 8) | (byte)((uint)iVar40 >> 8),
                                      (byte)iVar58 | (byte)iVar40)));
  auVar42._0_4_ = -(uint)(iVar40 == -1);
  auVar42._4_4_ = -(uint)(iVar40 == -1);
  auVar42._8_4_ = -(uint)(iVar40 == -1);
  auVar42._12_4_ = -(uint)(iVar40 == -1);
  NEON_ext(auVar42,auVar42,8,1);
  fStack_ac = local_b0;
  if (CONCAT13((char)auVar42._12_4_,
               CONCAT12((char)auVar42._8_4_,CONCAT11((char)auVar42._4_4_,(char)auVar42._0_4_))) ==
      -1) {
    pfVar30[2] = fVar50;
    pfVar30[3] = fVar54;
    *pfVar30 = fVar35;
    pfVar30[1] = fVar53;
    *(ulong *)(pfVar30 + 6) = (ulong)(uint)fVar57;
    *(ulong *)(pfVar30 + 4) = CONCAT44(fVar69,fVar56);
    *(undefined1 *)((long)pfVar30 + 0x3e) = 0;
    local_108 = *(long **)(param_2 + 8);
    local_100 = param_2;
    fabsf(*(float *)(param_2 + 0x14));
    fabsf(*(float *)(param_2 + 0x18));
    local_118 = CONCAT44(1.0 / *(float *)(param_2 + 0x10),1.0 / *(float *)(param_2 + 0x14));
    local_110 = 1.0 / *(float *)(param_2 + 0x18);
    fVar53 = *(float *)(*param_3 + 0xc);
    fVar35 = *(float *)*param_3;
    fVar54 = fVar53 + fVar53;
    fVar31 = fVar35 + fVar35;
    fVar43 = *(float *)(param_1 + 4);
    fVar50 = *(float *)(param_1 + 8);
    fVar51 = fVar50 * (fVar35 * fVar31 + fVar53 * fVar54 + -1.0);
    fVar62 = fVar50 * (*(float *)(*param_3 + 8) * fVar54 + fVar31 * *(float *)(*param_3 + 4));
    fVar50 = fVar50 * (fVar31 * *(float *)(*param_3 + 8) - fVar54 * *(float *)(*param_3 + 4));
    fVar53 = *(float *)(param_3[1] + 4) - param_4[5];
    fVar35 = *(float *)param_3[1] - param_4[4];
    fVar54 = *(float *)(param_3[1] + 8) - param_4[6];
    fVar35 = fVar35 + fVar35;
    fVar31 = param_4[2];
    fVar63 = param_4[3];
    fVar53 = fVar53 + fVar53;
    fVar54 = fVar54 + fVar54;
    fVar51 = fVar51 + fVar51;
    fVar62 = fVar62 + fVar62;
    fVar50 = fVar50 + fVar50;
    fVar49 = fVar63 * fVar63 + -0.5;
    fVar56 = *param_4;
    fVar52 = param_4[1];
    fVar69 = fVar35 * fVar56 + fVar53 * fVar52 + fVar54 * fVar31;
    fVar55 = fVar56 * fVar69 + (fVar35 * fVar49 - fVar63 * (fVar54 * fVar52 - fVar53 * fVar31));
    fVar57 = fVar52 * fVar69 + (fVar53 * fVar49 - fVar63 * (fVar35 * fVar31 - fVar54 * fVar56));
    fVar53 = (fVar54 * fVar49 - fVar63 * (fVar53 * fVar56 - fVar35 * fVar52)) + fVar31 * fVar69;
    fVar35 = fVar51 * fVar56 + fVar62 * fVar52 + fVar50 * fVar31;
    fVar54 = fVar56 * fVar35 + (fVar51 * fVar49 - fVar63 * (fVar50 * fVar52 - fVar62 * fVar31));
    fVar69 = fVar52 * fVar35 + (fVar62 * fVar49 - fVar63 * (fVar51 * fVar31 - fVar50 * fVar56));
    fVar35 = (fVar50 * fVar49 - fVar63 * (fVar62 * fVar56 - fVar51 * fVar52)) + fVar31 * fVar35;
    fVar50 = *param_5;
    uStack_140 = CONCAT44(fVar57 - fVar69,fVar55 - fVar54);
    local_164 = 0x47f7fffff;
    uStack_178 = (ulong)(uint)fVar53;
    local_180 = CONCAT44(fVar57,fVar55);
    local_130 = local_a8;
    uStack_148 = (ulong)(uint)(fVar53 + fVar35);
    local_150 = CONCAT44(fVar57 + fVar69,fVar55 + fVar54);
    uStack_138 = (ulong)(uint)(fVar53 - fVar35);
    local_168 = (undefined4)local_a8;
    local_170 = CONCAT44(local_168,local_168);
    local_15c = 1;
    local_1060 = PTR_DAT_02711ee0 + 0x10;
    puStack_1058 = &local_118;
                    /* try { // try from 0026a11c to 0026a173 has its CatchHandler @ 0026a858 */
    pfStack_1050 = param_4;
    (**(code **)(*local_108 + 0x70))(&local_1078);
    local_1048 = CONCAT71(local_1048._1_7_,~local_1078._0_1_) & 0xffffffffffffff01;
    local_1060 = PTR_DAT_02711ee8 + 0x10;
    FUN_0026ae60(&local_1040,&local_b0,&local_f8,&local_d0,&local_f0,pfVar30,param_7,0,0);
    fVar35 = (float)local_130 + local_b0;
    fVar31 = (float)((ulong)local_130 >> 0x20) + fStack_ac;
    local_198 = CONCAT44(fVar31,fVar35);
    local_188 = &local_180;
    local_190 = CONCAT44(fVar31 * fVar31,fVar35 * fVar35);
    fVar43 = fVar43 + fVar50;
    fStack_1074 = -fVar43;
    fVar41 = fVar43 + *(float *)(param_1 + 8);
    local_1078 = -fVar41;
    fVar55 = *(float *)(*param_3 + 0xc);
    fVar35 = *(float *)param_3[1];
    fVar52 = *(float *)*param_3;
    fVar32 = *param_4;
    fVar33 = param_4[1];
    fVar36 = param_4[2];
    fVar37 = param_4[3];
    fVar31 = *(float *)(param_3[1] + 4);
    fVar50 = param_4[4];
    fVar53 = param_4[5];
    fVar51 = *(float *)(param_3[1] + 8);
    fVar62 = param_4[6];
    fVar56 = *(float *)(*param_3 + 4);
    fVar49 = *(float *)(*param_3 + 8);
    fVar38 = ((fVar37 * fVar56 - fVar55 * fVar33) - fVar52 * fVar36) + fVar49 * fVar32;
    fVar54 = ((fVar37 * fVar49 - fVar55 * fVar36) - fVar56 * fVar32) + fVar52 * fVar33;
    fVar47 = fVar38 + fVar38;
    fVar69 = fVar54 * (fVar54 + fVar54);
    fVar57 = (fVar41 + fVar41) * 0.5;
    local_1070 = fStack_1074;
    local_106c = fVar41;
    local_1068 = fVar43;
    local_1064 = fVar43;
                    /* try { // try from 0026a27c to 0026a39f has its CatchHandler @ 0026a85c */
    fVar63 = fabsf(fVar57 * ((1.0 - fVar38 * fVar47) - fVar69));
    fVar39 = ((fVar37 * fVar52 - fVar55 * fVar32) - fVar49 * fVar33) + fVar56 * fVar36;
    fVar44 = fVar39 + fVar39;
    fVar48 = fVar37 * fVar55 + fVar52 * fVar32 + fVar56 * fVar33 + fVar49 * fVar36;
    fVar52 = fVar48 * (fVar54 + fVar54);
    fVar46 = (fVar43 + fVar43) * 0.5;
    fVar49 = fabsf(fVar46 * (fVar44 * fVar38 - fVar52));
    fVar56 = fabsf((fVar44 * fVar54 + fVar48 * fVar47) * fVar46);
    fVar52 = fabsf(fVar57 * (fVar44 * fVar38 + fVar52));
    fVar45 = 1.0 - fVar39 * fVar44;
    fVar69 = fabsf(fVar46 * (fVar45 - fVar69));
    fVar55 = fabsf((fVar54 * fVar47 - fVar44 * fVar48) * fVar46);
    fVar57 = fabsf(fVar57 * (fVar44 * fVar54 - fVar48 * fVar47));
    fVar44 = fabsf(fVar46 * (fVar44 * fVar48 + fVar54 * fVar47));
    fVar45 = fabsf((fVar45 - fVar38 * fVar47) * fVar46);
    fVar35 = fVar35 - fVar50;
    fVar43 = (fVar43 - fVar43) * 0.5;
    fVar31 = fVar31 - fVar53;
    fVar35 = fVar35 + fVar35;
    fVar46 = fVar48 * fVar48 + -0.5;
    fVar53 = (fVar41 - fVar41) * 0.5;
    fVar51 = fVar51 - fVar62;
    fVar31 = fVar31 + fVar31;
    fVar51 = fVar51 + fVar51;
    fVar41 = fVar37 * fVar37 + -0.5;
    fVar56 = fVar63 + fVar49 + fVar56;
    fVar45 = fVar57 + fVar44 + fVar45;
    fVar43 = fVar43 + fVar43;
    fVar53 = fVar53 + fVar53;
    fVar63 = fVar46 * fVar43;
    fVar55 = fVar52 + fVar69 + fVar55;
    fVar50 = (fVar35 * -fVar32 - fVar31 * fVar33) - fVar51 * fVar36;
    fVar62 = fVar39 * fVar53 + fVar38 * fVar43 + fVar54 * fVar43;
    local_106c = ((fVar41 * fVar35 + fVar37 * (fVar31 * fVar36 - fVar51 * fVar33)) - fVar50 * fVar32
                 ) + fVar39 * fVar62 +
                     fVar53 * fVar46 + fVar48 * (fVar38 * fVar43 - fVar54 * fVar43);
    local_1068 = ((fVar41 * fVar31 + fVar37 * (fVar51 * fVar32 - fVar35 * fVar36)) - fVar50 * fVar33
                 ) + fVar38 * fVar62 + fVar63 + fVar48 * (fVar54 * fVar53 - fVar39 * fVar43);
    local_1064 = ((fVar41 * fVar51 + fVar37 * (fVar35 * fVar33 - fVar31 * fVar32)) - fVar50 * fVar36
                 ) + fVar63 + fVar48 * (fVar39 * fVar43 - fVar38 * fVar53) + fVar54 * fVar62;
    local_1078 = local_106c - fVar56;
    fStack_1074 = local_1068 - fVar55;
    local_1070 = local_1064 - fVar45;
    local_106c = local_106c + fVar56;
    local_1068 = local_1068 + fVar55;
    local_1064 = local_1064 + fVar45;
                    /* try { // try from 0026a550 to 0026a567 has its CatchHandler @ 0026a854 */
    FUN_00251d90(&local_118,param_4,&local_1078,0,&local_1060);
    iVar40 = (int)local_6b8;
    if ((int)local_6b8 != 0) {
      uVar17 = local_6b8._4_4_;
      uVar29 = (ulong)local_6b8._4_4_;
      if (1 < local_6b8._4_4_) {
        iVar58 = -1;
        uVar20 = 1;
        do {
          lVar22 = local_848[uVar20];
          if ((float)*(undefined8 *)(local_848[uVar20 + 1] + 0x28) <
              (float)*(undefined8 *)(lVar22 + 0x28)) {
            local_848[uVar20] = local_848[uVar20 + 1];
            local_848[uVar20 + 1] = lVar22;
            if (-1 < (int)uVar20 + -2) {
              uVar23 = (long)iVar58 + 1;
              plVar24 = local_848 + (long)iVar58 + 1;
              do {
                uVar1 = uVar23 & 0xffffffff;
                lVar22 = local_848[uVar1 + 1];
                if ((float)*(undefined8 *)(*plVar24 + 0x28) <= (float)*(undefined8 *)(lVar22 + 0x28)
                   ) break;
                uVar23 = uVar23 - 1;
                local_848[uVar1 + 1] = *plVar24;
                *plVar24 = lVar22;
                plVar24 = plVar24 + -1;
              } while (0 < (long)uVar23);
            }
          }
          uVar20 = uVar20 + 1;
          iVar58 = iVar58 + 1;
        } while (uVar20 != uVar29);
      }
      lVar22 = local_6c0;
      if (uVar17 == 0) {
        local_6b8._4_4_ = 0;
      }
      else {
        uVar20 = 0;
        uVar23 = 0xffffffff;
        do {
          puVar21 = (undefined8 *)local_848[uVar20 + 1];
          puVar21[2] = 0;
          iVar40 = *(int *)((long)puVar21 + 0x34) - *(int *)(puVar21 + 6);
          puVar21[3] = puVar21;
          puVar21[4] = puVar21;
          *(int *)(puVar21 + 7) = iVar40;
          if (uVar20 != 0) {
            lVar25 = 0;
            do {
              lVar26 = (local_848 + 1)[uVar23 + lVar25];
              puVar27 = *(undefined8 **)(lVar26 + 0x20);
              fVar35 = (float)*puVar21 * (float)*puVar27;
              fVar31 = (float)((ulong)*puVar21 >> 0x20) * (float)((ulong)*puVar27 >> 0x20);
              fVar50 = (float)puVar21[1] * (float)puVar27[1];
              fVar53 = (float)((ulong)puVar21[1] >> 0x20) * (float)((ulong)puVar27[1] >> 0x20);
              auVar9._4_4_ = fVar31;
              auVar9._0_4_ = fVar35;
              auVar9._8_4_ = fVar50;
              auVar9._12_4_ = fVar53;
              auVar10._4_4_ = fVar31;
              auVar10._0_4_ = fVar35;
              auVar10._8_4_ = fVar50;
              auVar10._12_4_ = fVar53;
              auVar67 = NEON_ext(auVar9,auVar10,8,1);
              if (local_710[0] <= fVar35 + fVar31 + auVar67._0_4_ + auVar67._4_4_) {
                *(undefined8 **)(lVar26 + 0x10) = puVar21;
                puVar27[3] = puVar21;
                puVar21[4] = puVar27;
                *(int *)(*(long *)(lVar26 + 0x20) + 0x38) =
                     *(int *)(*(long *)(lVar26 + 0x20) + 0x38) + iVar40;
                break;
              }
              lVar25 = lVar25 + -1;
            } while ((int)uVar20 + (int)lVar25 != 0);
          }
          uVar23 = (ulong)((int)uVar23 + 1);
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar29);
        uVar20 = 0;
        do {
          lVar25 = local_848[uVar20 + 1];
          if (lVar25 != 0 && *(long *)(lVar25 + 0x20) == lVar25) {
            for (lVar26 = *(long *)(lVar25 + 0x10); lVar26 != 0; lVar26 = *(long *)(lVar26 + 0x10))
            {
              uVar23 = (ulong)*(uint *)(lVar25 + 0x30);
              uVar17 = *(uint *)(lVar25 + 0x34);
              if (*(uint *)(lVar25 + 0x30) < uVar17) {
                uVar18 = *(uint *)(lVar26 + 0x34);
                do {
                  uVar28 = *(uint *)(lVar26 + 0x30);
                  if (uVar28 < uVar18) {
                    lVar3 = lVar22 + uVar23 * 0x40;
                    do {
                      __dest = (void *)(lVar22 + (ulong)uVar28 * 0x40);
                      fVar35 = (float)*(undefined8 *)((long)__dest + 0x10) -
                               *(float *)(lVar3 + 0x10);
                      fVar31 = (float)((ulong)*(undefined8 *)((long)__dest + 0x10) >> 0x20) -
                               *(float *)(lVar3 + 0x14);
                      fVar50 = (float)*(undefined8 *)((long)__dest + 0x18) -
                               *(float *)(lVar3 + 0x18);
                      fVar53 = (float)((ulong)*(undefined8 *)((long)__dest + 0x18) >> 0x20) -
                               *(float *)(lVar3 + 0x1c);
                      fVar35 = fVar35 * fVar35;
                      fVar31 = fVar31 * fVar31;
                      fVar50 = fVar50 * fVar50;
                      fVar53 = fVar53 * fVar53;
                      auVar7._4_4_ = fVar31;
                      auVar7._0_4_ = fVar35;
                      auVar7._8_4_ = fVar50;
                      auVar7._12_4_ = fVar53;
                      auVar8._4_4_ = fVar31;
                      auVar8._0_4_ = fVar35;
                      auVar8._8_4_ = fVar50;
                      auVar8._12_4_ = fVar53;
                      auVar67 = NEON_ext(auVar7,auVar8,8,1);
                      if (fVar35 + fVar31 + auVar67._0_4_ + auVar67._4_4_ < (float)local_708[0]) {
                        memcpy(__dest,(void *)(lVar22 + (ulong)(uVar18 - 1) * 0x40),0x34);
                        uVar18 = *(int *)(lVar26 + 0x34) - 1;
                        uVar28 = uVar28 - 1;
                        *(uint *)(lVar26 + 0x34) = uVar18;
                      }
                      uVar28 = uVar28 + 1;
                    } while (uVar28 < uVar18);
                    uVar17 = *(uint *)(lVar25 + 0x34);
                  }
                  uVar23 = uVar23 + 1;
                } while (uVar23 < uVar17);
              }
              lVar25 = lVar26;
            }
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar29);
        iVar40 = (int)local_6b8;
      }
                    /* try { // try from 0026a7f8 to 0026a7ff has its CatchHandler @ 0026a854 */
      FUN_00292960(local_720,local_6c0,iVar40,local_848 + 1,local_6b8._4_4_,local_708,local_710,3);
      local_6b8 = 0;
    }
  }
  else {
    fVar49 = fVar35 + fVar35;
    fVar52 = fVar53 + fVar53;
    fVar55 = fVar50 + fVar50;
    uStack_1028 = (ulong)(uint)fVar57;
    local_1030 = CONCAT44(fVar69,fVar56);
    uVar66 = NEON_fmov(0x3f800000,4);
    fVar63 = (float)((ulong)uVar66 >> 0x20);
    fVar51 = fVar53 * fVar52;
    fVar62 = fVar50 * fVar55;
    fVar56 = (float)uVar66 - fVar35 * fVar49;
    local_1048 = (ulong)(uint)(fVar50 * fVar52 + fVar54 * fVar49);
    local_1060 = (undefined *)
                 NEON_ext(CONCAT44((fVar63 - fVar51) - fVar62,((float)uVar66 - fVar51) - fVar62),
                          CONCAT44(fVar53 * fVar49 + fVar54 * fVar55,
                                   fVar53 * fVar49 + fVar54 * fVar55),4,1);
    pfStack_1050 = (float *)NEON_ext(CONCAT44(fVar53 * fVar49 - fVar54 * fVar55,
                                              fVar53 * fVar49 - fVar54 * fVar55),
                                     CONCAT44((fVar63 - fVar35 * fVar49) - fVar62,fVar56 - fVar62),4
                                     ,1);
    uStack_1038 = (ulong)(uint)(fVar56 - fVar51);
    puStack_1058 = (undefined8 *)(ulong)(uint)(fVar50 * fVar49 - fVar54 * fVar52);
    local_1040 = NEON_ext(CONCAT44(fVar50 * fVar49 + fVar54 * fVar52,
                                   fVar50 * fVar49 + fVar54 * fVar52),
                          CONCAT44(fVar50 * fVar52 - fVar54 * fVar49,
                                   fVar50 * fVar52 - fVar54 * fVar49),4,1);
    local_180 = CONCAT44(fVar31 * 0.05,fVar31 * 0.05);
    local_118 = CONCAT44(fVar31 + local_b0,fVar31 + local_b0);
    uVar17 = (uint)*(byte *)((long)pfVar30 + 0x3e);
    if (*(byte *)((long)pfVar30 + 0x3e) != 0) {
      uVar29 = 0;
      do {
        while( true ) {
          pbVar2 = (byte *)((long)pfVar30 + uVar29 + 0x38);
          uVar28 = (uint)uVar29;
          uVar18 = uVar28;
          if (uVar17 - 2 <= uVar28) {
            uVar18 = uVar17 - 2;
          }
          bVar4 = *pbVar2;
          pfVar19 = pfVar30 + (ulong)*(byte *)((long)pfVar30 + (ulong)(uVar18 + 1) + 0x38) * 100 +
                              0x10;
          Hint_Prefetch(pfVar19,0,0,0);
          Hint_Prefetch(pfVar19 + 0x20,0,0,0);
          Hint_Prefetch(pfVar19 + 0x40,0,0,0);
          fVar35 = (float)FUN_00292800(pfVar19,pfVar30 + (ulong)bVar4 * 100 + 0x10,&local_1060,
                                       &local_180,&local_118);
          if ((pfVar30 + (ulong)bVar4 * 100 + 0x10)[0x60] == 0.0) break;
          pfVar30[(ulong)bVar4 + 8] = fVar35;
          uVar17 = (uint)*(byte *)((long)pfVar30 + 0x3e);
          uVar29 = (ulong)(uVar28 + 1);
          if (uVar17 <= uVar28 + 1) goto LAB_0026a804;
        }
        bVar6 = *(char *)((long)pfVar30 + 0x3e) - 1;
        *(byte *)((long)pfVar30 + 0x3e) = bVar6;
        bVar5 = *(byte *)((long)pfVar30 + (ulong)bVar6 + 0x38);
        *(byte *)((long)pfVar30 + (ulong)bVar6 + 0x38) = bVar4;
        *pbVar2 = bVar5;
        uVar17 = (uint)*(byte *)((long)pfVar30 + 0x3e);
      } while (uVar28 < uVar17);
    }
  }
LAB_0026a804:
  uVar17 = FUN_00293400(pfVar30,param_7,&local_d0,&local_f0,&local_a8);
  return uVar17 & 1;
}


