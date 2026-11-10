/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00289f30; name: FUN_00289f30
 */


uint FUN_00289f30(long param_1,long param_2,undefined1 (*param_3) [16],float *param_4,float *param_5
                 ,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

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
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  bool bVar15;
  undefined1 *puVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  uint uVar25;
  ulong uVar26;
  float *pfVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  float fVar32;
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  byte bVar35;
  byte bVar36;
  undefined1 uVar37;
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
  int iVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined8 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  float fVar74;
  undefined4 local_2958;
  undefined4 uStack_2954;
  undefined4 local_2950;
  undefined4 uStack_294c;
  undefined4 local_2948;
  undefined4 uStack_2944;
  undefined4 local_2940;
  undefined4 uStack_293c;
  undefined4 local_2938;
  float fStack_2934;
  float local_2930;
  float fStack_292c;
  float local_2928;
  float fStack_2924;
  float local_2920;
  undefined8 local_2918;
  undefined8 local_2910;
  undefined8 local_2908;
  undefined8 local_2900;
  undefined4 local_28f8;
  float local_28f0;
  float fStack_28ec;
  float local_28e8;
  float local_28e0;
  float local_28dc;
  float local_28d8;
  undefined *local_28d0;
  ulong uStack_28c8;
  undefined8 *local_28c0;
  ulong uStack_28b8;
  undefined8 local_28b0;
  ulong uStack_28a8;
  undefined8 uStack_28a0;
  ulong uStack_2898;
  undefined4 local_25ac [16];
  undefined1 local_256c [16];
  int local_255c;
  undefined1 auStack_2550 [2040];
  long local_1d58 [37];
  undefined8 local_1c30;
  float local_1c20 [2];
  undefined8 local_1c18 [9];
  long local_1bd0;
  undefined8 local_1bc8;
  undefined8 local_16a0;
  ulong uStack_1698;
  undefined8 local_1690;
  undefined8 local_1688;
  undefined1 auStack_1680 [1024];
  undefined1 local_1280;
  undefined1 *local_1278;
  ulong local_1270;
  undefined8 local_1260 [544];
  undefined1 local_160;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  float local_b0;
  float fStack_ac;
  undefined8 local_a8;
  
  fVar71 = *(float *)param_3[1];
  fVar69 = *(float *)(param_1 + 4);
  auVar50 = *param_3;
  uStack_e8 = *(undefined8 *)(param_4 + 2);
  fVar57 = (float)((ulong)uStack_e8 >> 0x20);
  local_f0 = *(undefined8 *)param_4;
  fVar52 = -(float)local_f0;
  fVar54 = -(float)((ulong)local_f0 >> 0x20);
  fVar56 = -(float)uStack_e8;
  auVar13 = *(undefined1 (*) [12])param_3[1];
  pfVar27 = (float *)*param_6;
  fVar72 = *(float *)*(undefined1 (*) [12])(param_4 + 4);
  auVar14 = *(undefined1 (*) [12])(param_4 + 4);
  fVar55 = auVar50._12_4_;
  local_a8 = CONCAT44(fVar69,fVar69);
  fVar70 = *param_5;
  uStack_b8 = (ulong)(uint)auVar13._8_4_;
  local_c0 = auVar13._0_8_;
  uStack_c8 = auVar50._8_8_;
  local_d0 = auVar50._0_8_;
  auVar58._0_4_ = auVar13._0_4_ - auVar14._0_4_;
  auVar58._4_4_ = auVar13._4_4_ - auVar14._4_4_;
  auVar58._8_4_ = auVar13._8_4_ - auVar14._8_4_;
  auVar58._12_4_ = 0;
  auVar66 = NEON_ext(auVar58,auVar58,8,1);
  uStack_d8 = (ulong)(uint)auVar14._8_4_;
  local_e0 = auVar14._0_8_;
  fVar34 = fVar57 * fVar57 + -0.5;
  auVar64._4_4_ = fVar54;
  auVar64._0_4_ = fVar52;
  auVar64._8_4_ = fVar56;
  auVar64._12_4_ = 0;
  auVar67._4_4_ = fVar54;
  auVar67._0_4_ = fVar52;
  auVar67._8_4_ = fVar56;
  auVar67._12_4_ = 0;
  auVar64 = NEON_ext(auVar64,auVar67,8,1);
  auVar59._0_4_ = fVar52 * auVar58._0_4_;
  auVar59._4_4_ = fVar54 * auVar58._4_4_;
  auVar59._8_4_ = fVar56 * auVar58._8_4_;
  auVar59._12_4_ = 0;
  fVar68 = fVar52 * auVar58._4_4_ - fVar54 * auVar58._0_4_;
  uVar65 = NEON_ext(CONCAT44(fVar54 * auVar58._8_4_ - fVar56 * auVar58._4_4_,fVar68),
                    CONCAT44(auVar64._4_4_ * auVar58._4_4_ - fVar54 * auVar66._4_4_,
                             auVar64._0_4_ * auVar58._0_4_ - fVar52 * auVar66._0_4_),4,1);
  auVar63._0_4_ = auVar58._0_4_ * fVar34 + (float)uVar65 * fVar57;
  auVar63._4_4_ = auVar58._4_4_ * fVar34 + (float)((ulong)uVar65 >> 0x20) * fVar57;
  auVar63._8_4_ = auVar58._8_4_ * fVar34 + fVar68 * fVar57;
  auVar63._12_4_ = fVar57 * 0.0 + 0.0;
  auVar66 = NEON_ext(auVar63,auVar63,8,1);
  auVar67 = NEON_ext(auVar59,auVar59,8,1);
  fVar33 = auVar50._4_4_;
  fVar34 = auVar59._0_4_ + auVar59._4_4_ + auVar67._0_4_ + auVar67._4_4_;
  fVar53 = auVar50._8_4_;
  auVar60._0_4_ = auVar63._0_4_ + fVar52 * fVar34;
  auVar60._4_4_ = auVar63._4_4_ + fVar54 * fVar34;
  auVar60._8_4_ = auVar66._0_4_ + fVar56 * fVar34;
  auVar60._12_4_ = fVar34 * 0.0 + 0.0;
  auVar66 = NEON_ext(auVar60,auVar60,8,1);
  auVar31._0_12_ = auVar50._0_12_;
  auVar31._12_4_ = 0;
  fVar34 = auVar50._0_4_;
  uVar73 = CONCAT44(auVar60._4_4_ + auVar60._4_4_,auVar60._0_4_ + auVar60._0_4_);
  fVar74 = auVar66._0_4_ + auVar66._0_4_;
  auVar61._0_4_ = fVar34 * fVar52;
  auVar61._4_4_ = fVar33 * fVar54;
  auVar61._8_4_ = fVar53 * fVar56;
  auVar61._12_4_ = 0;
  uVar26 = (ulong)(uint)fVar74;
  auVar50 = NEON_ext(auVar61,auVar61,8,1);
  auVar66 = NEON_ext(auVar31,auVar31,8,1);
  fVar68 = fVar33 * fVar52 - fVar34 * fVar54;
  uVar65 = NEON_ext(CONCAT44(fVar53 * fVar54 - fVar33 * fVar56,fVar68),
                    CONCAT44(fVar33 * auVar64._4_4_ - auVar66._4_4_ * fVar54,
                             fVar34 * auVar64._0_4_ - auVar66._0_4_ * fVar52),4,1);
  fVar32 = fVar55 * fVar57 - (auVar61._0_4_ + auVar61._4_4_ + auVar50._0_4_ + auVar50._4_4_);
  fVar34 = fVar34 * fVar57 + fVar52 * fVar55 + (float)uVar65;
  fVar33 = fVar33 * fVar57 + fVar54 * fVar55 + (float)((ulong)uVar65 >> 0x20);
  fVar68 = fVar53 * fVar57 + fVar56 * fVar55 + fVar68;
  fVar53 = ABS((auVar60._0_4_ + auVar60._0_4_) - (float)*(undefined8 *)(pfVar27 + 4));
  fVar55 = ABS((auVar60._4_4_ + auVar60._4_4_) -
               (float)((ulong)*(undefined8 *)(pfVar27 + 4) >> 0x20));
  fVar57 = ABS(fVar74 - (float)*(undefined8 *)(pfVar27 + 6));
  fVar52 = ABS(0.0 - (float)((ulong)*(undefined8 *)(pfVar27 + 6) >> 0x20));
  auVar11._4_4_ = fVar55;
  auVar11._0_4_ = fVar53;
  auVar11._8_4_ = fVar57;
  auVar11._12_4_ = fVar52;
  auVar12._4_4_ = fVar55;
  auVar12._0_4_ = fVar53;
  auVar12._8_4_ = fVar57;
  auVar12._12_4_ = fVar52;
  auVar50 = NEON_ext(auVar11,auVar12,8,1);
  uVar65 = NEON_fmaxp(auVar50._0_8_,CONCAT44(fVar55,fVar53),4);
  auVar51._0_4_ = fVar34 * *pfVar27;
  auVar51._4_4_ = fVar33 * pfVar27[1];
  auVar51._8_4_ = fVar68 * pfVar27[2];
  auVar51._12_4_ = fVar32 * pfVar27[3];
  uVar65 = NEON_fmaxp(uVar65,uVar65,4);
  iVar10 = -(uint)(fVar69 * 0.02 < (float)uVar65);
  auVar50 = NEON_ext(auVar51,auVar51,8,1);
  iVar49 = -(uint)(auVar51._0_4_ + auVar51._4_4_ + auVar50._0_4_ + auVar50._4_4_ < 0.9998);
  bVar35 = (byte)((uint)iVar49 >> 0x10) | (byte)((uint)iVar10 >> 0x10);
  bVar36 = (byte)((uint)iVar49 >> 0x18) | (byte)((uint)iVar10 >> 0x18);
  uVar9 = CONCAT11((byte)((uint)iVar49 >> 8) | (byte)((uint)iVar10 >> 8),(byte)iVar49 | (byte)iVar10
                  );
  iVar10 = -(uint)(CONCAT13(bVar36,CONCAT12(bVar35,uVar9)) == -1);
  iVar49 = -(uint)(CONCAT13(bVar36,CONCAT12(bVar35,uVar9)) == -1);
  uVar37 = (undefined1)iVar49;
  uVar38 = (undefined1)((uint)iVar49 >> 8);
  uVar39 = (undefined1)((uint)iVar49 >> 0x10);
  uVar40 = (undefined1)((uint)iVar49 >> 0x18);
  iVar49 = -(uint)(CONCAT13(bVar36,CONCAT12(bVar35,uVar9)) == -1);
  uVar41 = (undefined1)iVar49;
  uVar42 = (undefined1)((uint)iVar49 >> 8);
  uVar43 = (undefined1)((uint)iVar49 >> 0x10);
  uVar44 = (undefined1)((uint)iVar49 >> 0x18);
  iVar49 = -(uint)(CONCAT13(bVar36,CONCAT12(bVar35,uVar9)) == -1);
  uVar45 = (undefined1)iVar49;
  uVar46 = (undefined1)((uint)iVar49 >> 8);
  uVar47 = (undefined1)((uint)iVar49 >> 0x10);
  uVar48 = (undefined1)((uint)iVar49 >> 0x18);
  auVar50[4] = uVar37;
  auVar50._0_4_ = iVar10;
  auVar50[5] = uVar38;
  auVar50[6] = uVar39;
  auVar50[7] = uVar40;
  auVar50[8] = uVar41;
  auVar50[9] = uVar42;
  auVar50[10] = uVar43;
  auVar50[0xb] = uVar44;
  auVar50[0xc] = uVar45;
  auVar50[0xd] = uVar46;
  auVar50[0xe] = uVar47;
  auVar50[0xf] = uVar48;
  auVar66[4] = uVar37;
  auVar66._0_4_ = iVar10;
  auVar66[5] = uVar38;
  auVar66[6] = uVar39;
  auVar66[7] = uVar40;
  auVar66[8] = uVar41;
  auVar66[9] = uVar42;
  auVar66[10] = uVar43;
  auVar66[0xb] = uVar44;
  auVar66[0xc] = uVar45;
  auVar66[0xd] = uVar46;
  auVar66[0xe] = uVar47;
  auVar66[0xf] = uVar48;
  NEON_ext(auVar50,auVar66,8,1);
  local_b0 = fVar70;
  fStack_ac = fVar70;
  if (CONCAT13(uVar45,CONCAT12(uVar41,CONCAT11(uVar37,(char)iVar10))) != -1) {
    fVar71 = fVar34 + fVar34;
    fVar53 = fVar33 + fVar33;
    fVar55 = fVar68 + fVar68;
    fVar57 = fVar33 * fVar53;
    fVar52 = fVar68 * fVar55;
    uVar65 = NEON_fmov(0x3f800000,4);
    fVar56 = (float)((ulong)uVar65 >> 0x20);
    fVar54 = (float)uVar65 - fVar34 * fVar71;
    uStack_28c8 = (ulong)(uint)(fVar68 * fVar71 - fVar32 * fVar53);
    local_28b0 = NEON_ext(CONCAT44(fVar68 * fVar71 + fVar32 * fVar53,
                                   fVar68 * fVar71 + fVar32 * fVar53),
                          CONCAT44(fVar68 * fVar53 - fVar32 * fVar71,
                                   fVar68 * fVar53 - fVar32 * fVar71),4,1);
    uStack_28b8 = (ulong)(uint)(fVar68 * fVar53 + fVar32 * fVar71);
    local_28d0 = (undefined *)
                 NEON_ext(CONCAT44((fVar56 - fVar57) - fVar52,((float)uVar65 - fVar57) - fVar52),
                          CONCAT44(fVar33 * fVar71 + fVar32 * fVar55,
                                   fVar33 * fVar71 + fVar32 * fVar55),4,1);
    local_28c0 = (undefined8 *)
                 NEON_ext(CONCAT44(fVar33 * fVar71 - fVar32 * fVar55,
                                   fVar33 * fVar71 - fVar32 * fVar55),
                          CONCAT44((fVar56 - fVar34 * fVar71) - fVar52,fVar54 - fVar52),4,1);
    uStack_28a8 = (ulong)(uint)(fVar54 - fVar57);
    local_1260[0] = CONCAT44(fVar69 * 0.05,fVar69 * 0.05);
    local_148 = CONCAT44(fVar69 + fVar70,fVar69 + fVar70);
    uVar18 = (uint)*(byte *)((long)pfVar27 + 0x3e);
    uStack_28a0 = uVar73;
    uStack_2898 = uVar26;
    if (*(byte *)((long)pfVar27 + 0x3e) != 0) {
      uVar26 = 0;
      do {
        while( true ) {
          pbVar2 = (byte *)((long)pfVar27 + uVar26 + 0x38);
          uVar25 = (uint)uVar26;
          uVar19 = uVar25;
          if (uVar18 - 2 <= uVar25) {
            uVar19 = uVar18 - 2;
          }
          bVar35 = *pbVar2;
          pfVar20 = pfVar27 + (ulong)*(byte *)((long)pfVar27 + (ulong)(uVar19 + 1) + 0x38) * 100 +
                              0x10;
          Hint_Prefetch(pfVar20,0,0,0);
          Hint_Prefetch(pfVar20 + 0x20,0,0,0);
          Hint_Prefetch(pfVar20 + 0x40,0,0,0);
          fVar34 = (float)FUN_00292800(pfVar20,pfVar27 + (ulong)bVar35 * 100 + 0x10,&local_28d0,
                                       local_1260,&local_148);
          if ((pfVar27 + (ulong)bVar35 * 100 + 0x10)[0x60] == 0.0) break;
          pfVar27[(ulong)bVar35 + 8] = fVar34;
          uVar18 = (uint)*(byte *)((long)pfVar27 + 0x3e);
          uVar26 = (ulong)(uVar25 + 1);
          if (uVar18 <= uVar25 + 1) goto LAB_0028a9d4;
        }
        bVar4 = *(char *)((long)pfVar27 + 0x3e) - 1;
        *(byte *)((long)pfVar27 + 0x3e) = bVar4;
        bVar36 = *(byte *)((long)pfVar27 + (ulong)bVar4 + 0x38);
        *(byte *)((long)pfVar27 + (ulong)bVar4 + 0x38) = bVar35;
        *pbVar2 = bVar36;
        uVar18 = (uint)*(byte *)((long)pfVar27 + 0x3e);
      } while (uVar25 < uVar18);
    }
    goto LAB_0028a9d4;
  }
  local_f8 = CONCAT44(fVar69 * 0.001,fVar69 * 0.001);
  fVar53 = *(float *)(param_3[1] + 4);
  fVar55 = *(float *)(param_3[1] + 8);
  lVar28 = *(long *)(param_2 + 0x30);
  fVar62 = param_4[5];
  fVar74 = param_4[6];
  fVar57 = param_4[2];
  fVar52 = param_4[3];
  fVar56 = *param_4;
  fVar54 = param_4[1];
  local_148 = 0x3f800000;
  local_138 = 0x3f800000;
  local_128 = 0x3f8000003f800000;
  local_140 = 0;
  local_130 = 0;
  local_120 = 0;
  local_118 = 0x3f80000000000000;
  local_110 = 0;
  local_108 = 0x3f80000000000000;
  local_100 = 0;
  if (((*(float *)(param_2 + 4) == 1.0) && (*(float *)(param_2 + 8) == 1.0)) &&
     (*(float *)(param_2 + 0xc) == 1.0)) {
    bVar15 = true;
  }
  else {
    FUN_001b0f90(&local_148,(float *)(param_2 + 4),param_2 + 0x10);
    bVar15 = false;
  }
  local_158 = local_1260;
  *(undefined1 *)((long)pfVar27 + 0x3e) = 0;
  *(ulong *)(pfVar27 + 2) = CONCAT44(fVar32,fVar68);
  *(ulong *)pfVar27 = CONCAT44(fVar33,fVar34);
  *(ulong *)(pfVar27 + 6) = uVar26;
  *(undefined8 *)(pfVar27 + 4) = uVar73;
  local_150 = 0x44000000000;
  local_160 = 1;
  uStack_28b8 = *(ulong *)(lVar28 + 0x50);
  uStack_28c8 = CONCAT44(uStack_28c8._4_4_,2);
  local_28c0 = &local_148;
  local_28d0 = PTR_DAT_02711f40 + 0x10;
  local_28b0 = CONCAT71(local_28b0._1_7_,bVar15);
  local_255c = 0;
                    /* try { // try from 0028a408 to 0028a433 has its CatchHandler @ 0028aa30 */
  FUN_0026ae60(auStack_2550,&local_b0,&local_f8,&local_d0,&local_f0,pfVar27,param_7,local_1260,
               param_8);
  fVar71 = fVar71 - fVar72;
  fVar53 = fVar53 - fVar62;
  fVar55 = fVar55 - fVar74;
  local_28f0 = fVar69 + fVar70;
  fVar71 = fVar71 + fVar71;
  fVar53 = fVar53 + fVar53;
  fVar55 = fVar55 + fVar55;
  fVar34 = fVar52 * fVar52 + -0.5;
  local_1278 = auStack_1680;
  fVar68 = fVar71 * fVar56 + fVar53 * fVar54 + fVar55 * fVar57;
  local_28e0 = fVar56 * fVar68 + (fVar71 * fVar34 - fVar52 * (fVar55 * fVar54 - fVar53 * fVar57));
  local_28dc = fVar54 * fVar68 + (fVar53 * fVar34 - fVar52 * (fVar71 * fVar57 - fVar55 * fVar56));
  local_28d8 = (fVar55 * fVar34 - fVar52 * (fVar53 * fVar56 - fVar71 * fVar54)) + fVar57 * fVar68;
  fVar34 = local_b0 + (float)local_a8;
  fVar68 = fStack_ac + (float)((ulong)local_a8 >> 0x20);
  fVar68 = fVar68 * fVar68;
  uStack_1698 = (ulong)(uint)local_28d8;
  local_16a0 = CONCAT44(local_28dc,local_28e0);
  local_1270 = 0x4000000000;
  local_1690 = local_a8;
  local_2918 = 0x3f800000;
  local_2910 = 0;
  local_1280 = 1;
  local_1688 = CONCAT17((char)((uint)fVar68 >> 0x18),
                        CONCAT16((char)((uint)fVar68 >> 0x10),
                                 CONCAT15((char)((uint)fVar68 >> 8),
                                          CONCAT14(SUB41(fVar68,0),fVar34 * fVar34))));
  local_28f8 = 0x3f800000;
  local_2908 = 0x3f800000;
  local_2900 = 0;
  fStack_28ec = local_28f0;
  local_28e8 = local_28f0;
  if (bVar15) {
    local_2900._4_4_ = 0;
    local_2900._0_4_ = 0;
    local_2908._4_4_ = 0;
    local_2910._4_4_ = 0;
    local_2910._0_4_ = 0;
    local_2918._4_4_ = 0;
    local_2908._0_4_ = 0x3f800000;
    local_2918._0_4_ = 0x3f800000;
  }
  else {
                    /* try { // try from 0028a598 to 0028a5af has its CatchHandler @ 0028aa2c */
    FUN_002228b0(&local_148,&local_28e0,&local_28f0,&local_2918);
  }
                    /* try { // try from 0028a60c to 0028a623 has its CatchHandler @ 0028aa40 */
  local_2958 = (undefined4)local_2918;
  uStack_2954 = local_2918._4_4_;
  local_2950 = (undefined4)local_2910;
  uStack_294c = local_2910._4_4_;
  local_2948 = (undefined4)local_2908;
  uStack_2944 = local_2908._4_4_;
  local_2940 = (undefined4)local_2900;
  uStack_293c = local_2900._4_4_;
  local_2938 = local_28f8;
  fStack_2934 = local_28e0;
  local_2930 = local_28dc;
  fStack_292c = local_28d8;
  local_2928 = local_28f0;
  fStack_2924 = fStack_28ec;
  local_2920 = local_28e8;
  (*(code *)(&PTR_LAB_025e4e70)[*(ushort *)(lVar28 + 8) - 3])(lVar28,&local_2958,&local_28d0,1,1);
  iVar10 = local_255c;
  if (local_255c != 0) {
    lVar28 = 0;
    lVar29 = 0x264;
    lVar30 = 0x24;
    do {
                    /* try { // try from 0028a658 to 0028a65f has its CatchHandler @ 0028aa44 */
      FUN_0026dc40(auStack_2550,(long)&local_28d0 + lVar30,local_25ac[lVar28],local_256c[lVar28],
                   (long)&local_28d0 + lVar29);
      lVar28 = lVar28 + 1;
      lVar29 = lVar29 + 0xc;
      lVar30 = lVar30 + 0x24;
    } while (iVar10 != (int)lVar28);
    local_255c = 0;
  }
                    /* try { // try from 0028a678 to 0028a67f has its CatchHandler @ 0028aa40 */
  FUN_0026eba0(auStack_2550);
  iVar10 = (int)local_1bc8;
  if ((int)local_1bc8 != 0) {
    uVar18 = local_1bc8._4_4_;
    uVar26 = (ulong)local_1bc8._4_4_;
    if (1 < local_1bc8._4_4_) {
      iVar49 = -1;
      uVar21 = 1;
      do {
        lVar28 = local_1d58[uVar21];
        if ((float)*(undefined8 *)(local_1d58[uVar21 + 1] + 0x28) <
            (float)*(undefined8 *)(lVar28 + 0x28)) {
          local_1d58[uVar21] = local_1d58[uVar21 + 1];
          local_1d58[uVar21 + 1] = lVar28;
          if (-1 < (int)uVar21 + -2) {
            uVar23 = (long)iVar49 + 1;
            plVar17 = local_1d58 + (long)iVar49 + 1;
            do {
              uVar1 = uVar23 & 0xffffffff;
              lVar28 = local_1d58[uVar1 + 1];
              if ((float)*(undefined8 *)(*plVar17 + 0x28) <= (float)*(undefined8 *)(lVar28 + 0x28))
              break;
              uVar23 = uVar23 - 1;
              local_1d58[uVar1 + 1] = *plVar17;
              *plVar17 = lVar28;
              plVar17 = plVar17 + -1;
            } while (0 < (long)uVar23);
          }
        }
        uVar21 = uVar21 + 1;
        iVar49 = iVar49 + 1;
      } while (uVar21 != uVar26);
    }
    lVar28 = local_1bd0;
    if (uVar18 == 0) {
      local_1bc8._4_4_ = 0;
    }
    else {
      uVar21 = 0;
      uVar23 = 0xffffffff;
      do {
        puVar22 = (undefined8 *)local_1d58[uVar21 + 1];
        puVar22[2] = 0;
        iVar10 = *(int *)((long)puVar22 + 0x34) - *(int *)(puVar22 + 6);
        puVar22[3] = puVar22;
        puVar22[4] = puVar22;
        *(int *)(puVar22 + 7) = iVar10;
        if (uVar21 != 0) {
          lVar29 = 0;
          do {
            lVar30 = (local_1d58 + 1)[uVar23 + lVar29];
            puVar24 = *(undefined8 **)(lVar30 + 0x20);
            fVar34 = (float)*puVar22 * (float)*puVar24;
            fVar68 = (float)((ulong)*puVar22 >> 0x20) * (float)((ulong)*puVar24 >> 0x20);
            fVar71 = (float)puVar22[1] * (float)puVar24[1];
            fVar33 = (float)((ulong)puVar22[1] >> 0x20) * (float)((ulong)puVar24[1] >> 0x20);
            auVar7._4_4_ = fVar68;
            auVar7._0_4_ = fVar34;
            auVar7._8_4_ = fVar71;
            auVar7._12_4_ = fVar33;
            auVar8._4_4_ = fVar68;
            auVar8._0_4_ = fVar34;
            auVar8._8_4_ = fVar71;
            auVar8._12_4_ = fVar33;
            auVar50 = NEON_ext(auVar7,auVar8,8,1);
            if (local_1c20[0] <= fVar34 + fVar68 + auVar50._0_4_ + auVar50._4_4_) {
              *(undefined8 **)(lVar30 + 0x10) = puVar22;
              puVar24[3] = puVar22;
              puVar22[4] = puVar24;
              *(int *)(*(long *)(lVar30 + 0x20) + 0x38) =
                   *(int *)(*(long *)(lVar30 + 0x20) + 0x38) + iVar10;
              break;
            }
            lVar29 = lVar29 + -1;
          } while ((int)uVar21 + (int)lVar29 != 0);
        }
        uVar23 = (ulong)((int)uVar23 + 1);
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar26);
      uVar21 = 0;
      do {
        lVar29 = local_1d58[uVar21 + 1];
        if (lVar29 != 0 && *(long *)(lVar29 + 0x20) == lVar29) {
          for (lVar30 = *(long *)(lVar29 + 0x10); lVar30 != 0; lVar30 = *(long *)(lVar30 + 0x10)) {
            uVar23 = (ulong)*(uint *)(lVar29 + 0x30);
            uVar18 = *(uint *)(lVar29 + 0x34);
            if (*(uint *)(lVar29 + 0x30) < uVar18) {
              uVar19 = *(uint *)(lVar30 + 0x34);
              do {
                uVar25 = *(uint *)(lVar30 + 0x30);
                if (uVar25 < uVar19) {
                  lVar3 = lVar28 + uVar23 * 0x40;
                  do {
                    __dest = (void *)(lVar28 + (ulong)uVar25 * 0x40);
                    fVar34 = (float)*(undefined8 *)((long)__dest + 0x10) - *(float *)(lVar3 + 0x10);
                    fVar68 = (float)((ulong)*(undefined8 *)((long)__dest + 0x10) >> 0x20) -
                             *(float *)(lVar3 + 0x14);
                    fVar71 = (float)*(undefined8 *)((long)__dest + 0x18) - *(float *)(lVar3 + 0x18);
                    fVar33 = (float)((ulong)*(undefined8 *)((long)__dest + 0x18) >> 0x20) -
                             *(float *)(lVar3 + 0x1c);
                    fVar34 = fVar34 * fVar34;
                    fVar68 = fVar68 * fVar68;
                    fVar71 = fVar71 * fVar71;
                    fVar33 = fVar33 * fVar33;
                    auVar5._4_4_ = fVar68;
                    auVar5._0_4_ = fVar34;
                    auVar5._8_4_ = fVar71;
                    auVar5._12_4_ = fVar33;
                    auVar6._4_4_ = fVar68;
                    auVar6._0_4_ = fVar34;
                    auVar6._8_4_ = fVar71;
                    auVar6._12_4_ = fVar33;
                    auVar50 = NEON_ext(auVar5,auVar6,8,1);
                    if (fVar34 + fVar68 + auVar50._0_4_ + auVar50._4_4_ < (float)local_1c18[0]) {
                      memcpy(__dest,(void *)(lVar28 + (ulong)(uVar19 - 1) * 0x40),0x34);
                      uVar19 = *(int *)(lVar30 + 0x34) - 1;
                      uVar25 = uVar25 - 1;
                      *(uint *)(lVar30 + 0x34) = uVar19;
                    }
                    uVar25 = uVar25 + 1;
                  } while (uVar25 < uVar19);
                  uVar18 = *(uint *)(lVar29 + 0x34);
                }
                uVar23 = uVar23 + 1;
              } while (uVar23 < uVar18);
            }
            lVar29 = lVar30;
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar26);
      iVar10 = (int)local_1bc8;
    }
                    /* try { // try from 0028a920 to 0028a927 has its CatchHandler @ 0028aa40 */
    FUN_00292960(local_1c30,local_1bd0,iVar10,local_1d58 + 1,local_1bc8._4_4_,local_1c18,local_1c20,
                 1);
    local_1bc8 = 0;
  }
  puVar16 = local_1278;
  local_28d0 = PTR_DAT_02711f40 + 0x10;
  if (((long)local_1270 < 0) || ((local_1270 & 0x7fffffff00000000) == 0)) {
LAB_0028a97c:
    puVar22 = local_158;
  }
  else {
    if (auStack_1680 != local_1278) {
      if (local_1278 != (undefined1 *)0x0) {
                    /* try { // try from 0028a968 to 0028a97b has its CatchHandler @ 0028aa28 */
        plVar17 = (long *)FUN_00400d30();
        (**(code **)(*plVar17 + 0x18))(plVar17,puVar16);
      }
      goto LAB_0028a97c;
    }
    local_1280 = 0;
    puVar22 = local_158;
  }
  local_158 = puVar22;
  if ((-1 < local_150) && ((local_150._4_4_ & 0x7fffffff) != 0)) {
    if (local_1260 == puVar22) {
      local_160 = 0;
    }
    else if (puVar22 != (undefined8 *)0x0) {
                    /* try { // try from 0028a9a4 to 0028a9b7 has its CatchHandler @ 0028aa24 */
      plVar17 = (long *)FUN_00400d30();
      (**(code **)(*plVar17 + 0x18))(plVar17,puVar22);
    }
  }
LAB_0028a9d4:
  uVar18 = FUN_00293400(pfVar27,param_7,&local_d0,&local_f0,&local_a8);
  return uVar18 & 1;
}


