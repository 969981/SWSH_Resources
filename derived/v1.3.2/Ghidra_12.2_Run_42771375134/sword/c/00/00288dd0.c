/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00288dd0; name: FUN_00288dd0
 */


uint FUN_00288dd0(long param_1,long param_2,undefined1 (*param_3) [16],float *param_4,float *param_5
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined1 *puVar19;
  long *plVar20;
  uint uVar21;
  uint uVar22;
  float *pfVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  undefined8 *puVar30;
  uint uVar31;
  ulong uVar32;
  float *pfVar33;
  undefined *puVar34;
  float fVar35;
  undefined1 auVar36 [16];
  float fVar37;
  int iVar38;
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  int iVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  undefined *local_2530;
  undefined8 *puStack_2528;
  float *pfStack_2520;
  ulong local_2518;
  undefined8 local_2510;
  ulong uStack_2508;
  undefined8 local_2500;
  ulong uStack_24f8;
  long local_1d18 [37];
  undefined8 local_1bf0;
  float local_1be0 [2];
  undefined8 local_1bd8 [9];
  long local_1b90;
  undefined8 local_1b88;
  undefined8 local_1660;
  ulong uStack_1658;
  undefined8 local_1650;
  undefined8 local_1648;
  undefined1 auStack_1640 [1024];
  undefined1 local_1240;
  undefined1 *local_1238;
  ulong local_1230;
  undefined8 local_1218 [544];
  undefined1 local_118;
  undefined8 *local_110;
  undefined8 local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  undefined8 local_e8;
  float local_e0;
  long *local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  float local_78;
  float fStack_74;
  undefined8 local_70;
  byte local_68 [8];
  
  uStack_90 = *(undefined8 *)param_3[1];
  uStack_b8 = *(undefined8 *)(param_4 + 2);
  local_c0 = *(undefined8 *)param_4;
  uStack_88 = (ulong)(uint)*(float *)(param_3[1] + 8);
  fVar40 = -(float)local_c0;
  fVar43 = -(float)((ulong)local_c0 >> 0x20);
  fVar46 = -(float)uStack_b8;
  fVar54 = (float)((ulong)uStack_b8 >> 0x20);
  auVar18 = *(undefined1 (*) [12])(param_4 + 4);
  auVar50._12_4_ = -fVar54;
  auVar50._8_4_ = fVar46;
  auVar50._4_4_ = fVar43;
  auVar50._0_4_ = fVar40;
  auVar51._0_12_ = auVar50._0_12_;
  auVar14 = *param_3;
  fVar35 = *(float *)(param_1 + 4);
  fVar53 = auVar14._12_4_;
  pfVar33 = (float *)*param_6;
  local_70 = CONCAT44(fVar35,fVar35);
  local_78 = *param_5;
  uStack_98 = auVar14._8_8_;
  local_a0 = auVar14._0_8_;
  fVar41 = (float)uStack_90 - auVar18._0_4_;
  fVar44 = (float)((ulong)uStack_90 >> 0x20) - auVar18._4_4_;
  fVar47 = *(float *)(param_3[1] + 8) - auVar18._8_4_;
  auVar58._4_4_ = fVar44;
  auVar58._0_4_ = fVar41;
  auVar58._8_4_ = fVar47;
  auVar58._12_4_ = 0;
  auVar56._4_4_ = fVar44;
  auVar56._0_4_ = fVar41;
  auVar56._8_4_ = fVar47;
  auVar56._12_4_ = 0;
  auVar58 = NEON_ext(auVar58,auVar56,8,1);
  uStack_a8 = (ulong)(uint)auVar18._8_4_;
  uStack_b0 = auVar18._0_8_;
  auVar51._12_4_ = 0;
  fVar37 = fVar54 * fVar54 + -0.5;
  auVar56 = NEON_ext(auVar51,auVar51,8,1);
  fVar42 = fVar40 * fVar41;
  fVar45 = fVar43 * fVar44;
  fVar60 = fVar40 * fVar44 - fVar43 * fVar41;
  uVar57 = NEON_ext(CONCAT44(fVar43 * fVar47 - fVar46 * fVar44,fVar60),
                    CONCAT44(auVar56._4_4_ * fVar44 - fVar43 * auVar58._4_4_,
                             auVar56._0_4_ * fVar41 - fVar40 * auVar58._0_4_),4,1);
  auVar55._0_4_ = fVar41 * fVar37 + (float)uVar57 * fVar54;
  auVar55._4_4_ = fVar44 * fVar37 + (float)((ulong)uVar57 >> 0x20) * fVar54;
  auVar55._8_4_ = fVar47 * fVar37 + fVar60 * fVar54;
  auVar55._12_4_ = fVar54 * 0.0 + 0.0;
  auVar58 = NEON_ext(auVar55,auVar55,8,1);
  auVar59._4_4_ = fVar45;
  auVar59._0_4_ = fVar42;
  auVar59._8_4_ = fVar46 * fVar47;
  auVar59._12_4_ = 0;
  auVar11._4_4_ = fVar45;
  auVar11._0_4_ = fVar42;
  auVar11._8_4_ = fVar46 * fVar47;
  auVar11._12_4_ = 0;
  auVar59 = NEON_ext(auVar59,auVar11,8,1);
  fVar44 = auVar14._4_4_;
  fVar37 = fVar42 + fVar45 + auVar59._0_4_ + auVar59._4_4_;
  fVar42 = auVar14._8_4_;
  fVar47 = auVar55._0_4_ + fVar40 * fVar37;
  fVar60 = auVar55._4_4_ + fVar43 * fVar37;
  fVar41 = auVar58._0_4_ + fVar46 * fVar37;
  fVar37 = fVar37 * 0.0 + 0.0;
  auVar12._4_4_ = fVar60;
  auVar12._0_4_ = fVar47;
  auVar12._8_4_ = fVar41;
  auVar12._12_4_ = fVar37;
  auVar13._4_4_ = fVar60;
  auVar13._0_4_ = fVar47;
  auVar13._8_4_ = fVar41;
  auVar13._12_4_ = fVar37;
  auVar58 = NEON_ext(auVar12,auVar13,8,1);
  auVar36._0_12_ = auVar14._0_12_;
  auVar36._12_4_ = 0;
  auVar59 = NEON_ext(auVar36,auVar36,8,1);
  fVar37 = auVar14._0_4_;
  fVar45 = fVar37 * fVar40;
  fVar61 = fVar44 * fVar43;
  fVar47 = fVar47 + fVar47;
  fVar60 = fVar60 + fVar60;
  fVar48 = auVar58._0_4_ + auVar58._0_4_;
  fVar41 = fVar44 * fVar40 - fVar37 * fVar43;
  auVar16._4_4_ = fVar61;
  auVar16._0_4_ = fVar45;
  auVar16._8_4_ = fVar42 * fVar46;
  auVar16._12_4_ = 0;
  auVar17._4_4_ = fVar61;
  auVar17._0_4_ = fVar45;
  auVar17._8_4_ = fVar42 * fVar46;
  auVar17._12_4_ = 0;
  auVar58 = NEON_ext(auVar16,auVar17,8,1);
  uVar57 = NEON_ext(CONCAT44(fVar42 * fVar43 - fVar44 * fVar46,fVar41),
                    CONCAT44(fVar44 * auVar56._4_4_ - auVar59._4_4_ * fVar43,
                             fVar37 * auVar56._0_4_ - auVar59._0_4_ * fVar40),4,1);
  fVar45 = fVar53 * fVar54 - (fVar45 + fVar61 + auVar58._0_4_ + auVar58._4_4_);
  fVar37 = fVar37 * fVar54 + fVar40 * fVar53 + (float)uVar57;
  fVar44 = fVar44 * fVar54 + fVar43 * fVar53 + (float)((ulong)uVar57 >> 0x20);
  fVar41 = fVar42 * fVar54 + fVar46 * fVar53 + fVar41;
  fVar42 = ABS(fVar47 - (float)*(undefined8 *)(pfVar33 + 4));
  fVar53 = ABS(fVar60 - (float)((ulong)*(undefined8 *)(pfVar33 + 4) >> 0x20));
  fVar54 = ABS(fVar48 - (float)*(undefined8 *)(pfVar33 + 6));
  fVar40 = ABS(0.0 - (float)((ulong)*(undefined8 *)(pfVar33 + 6) >> 0x20));
  auVar14._4_4_ = fVar53;
  auVar14._0_4_ = fVar42;
  auVar14._8_4_ = fVar54;
  auVar14._12_4_ = fVar40;
  auVar15._4_4_ = fVar53;
  auVar15._0_4_ = fVar42;
  auVar15._8_4_ = fVar54;
  auVar15._12_4_ = fVar40;
  auVar58 = NEON_ext(auVar14,auVar15,8,1);
  uVar57 = NEON_fmaxp(auVar58._0_8_,CONCAT44(fVar53,fVar42),4);
  auVar52._0_4_ = fVar37 * *pfVar33;
  auVar52._4_4_ = fVar44 * pfVar33[1];
  auVar52._8_4_ = fVar41 * pfVar33[2];
  auVar52._12_4_ = fVar45 * pfVar33[3];
  uVar57 = NEON_fmaxp(uVar57,uVar57,4);
  auVar58 = NEON_ext(auVar52,auVar52,8,1);
  iVar38 = -(uint)(fVar35 * 0.02 < (float)uVar57);
  iVar49 = -(uint)(auVar52._0_4_ + auVar52._4_4_ + auVar58._0_4_ + auVar58._4_4_ < 0.9998);
  iVar38 = CONCAT13((byte)((uint)iVar49 >> 0x18) | (byte)((uint)iVar38 >> 0x18),
                    CONCAT12((byte)((uint)iVar49 >> 0x10) | (byte)((uint)iVar38 >> 0x10),
                             CONCAT11((byte)((uint)iVar49 >> 8) | (byte)((uint)iVar38 >> 8),
                                      (byte)iVar49 | (byte)iVar38)));
  auVar39._0_4_ = -(uint)(iVar38 == -1);
  auVar39._4_4_ = -(uint)(iVar38 == -1);
  auVar39._8_4_ = -(uint)(iVar38 == -1);
  auVar39._12_4_ = -(uint)(iVar38 == -1);
  NEON_ext(auVar39,auVar39,8,1);
  fStack_74 = local_78;
  if (CONCAT13((char)auVar39._12_4_,
               CONCAT12((char)auVar39._8_4_,CONCAT11((char)auVar39._4_4_,(char)auVar39._0_4_))) !=
      -1) {
    fVar40 = fVar37 + fVar37;
    fVar43 = fVar44 + fVar44;
    fVar46 = fVar41 + fVar41;
    uStack_24f8 = (ulong)(uint)fVar48;
    local_2500 = CONCAT44(fVar60,fVar47);
    uVar57 = NEON_fmov(0x3f800000,4);
    fVar54 = (float)((ulong)uVar57 >> 0x20);
    fVar42 = fVar44 * fVar43;
    fVar53 = fVar41 * fVar46;
    fVar47 = (float)uVar57 - fVar37 * fVar40;
    local_2518 = (ulong)(uint)(fVar41 * fVar43 + fVar45 * fVar40);
    local_2530 = (undefined *)
                 NEON_ext(CONCAT44((fVar54 - fVar42) - fVar53,((float)uVar57 - fVar42) - fVar53),
                          CONCAT44(fVar44 * fVar40 + fVar45 * fVar46,
                                   fVar44 * fVar40 + fVar45 * fVar46),4,1);
    pfStack_2520 = (float *)NEON_ext(CONCAT44(fVar44 * fVar40 - fVar45 * fVar46,
                                              fVar44 * fVar40 - fVar45 * fVar46),
                                     CONCAT44((fVar54 - fVar37 * fVar40) - fVar53,fVar47 - fVar53),4
                                     ,1);
    uStack_2508 = (ulong)(uint)(fVar47 - fVar42);
    puStack_2528 = (undefined8 *)(ulong)(uint)(fVar41 * fVar40 - fVar45 * fVar43);
    local_2510 = NEON_ext(CONCAT44(fVar41 * fVar40 + fVar45 * fVar43,
                                   fVar41 * fVar40 + fVar45 * fVar43),
                          CONCAT44(fVar41 * fVar43 - fVar45 * fVar40,
                                   fVar41 * fVar43 - fVar45 * fVar40),4,1);
    local_1218[0] = CONCAT44(fVar35 * 0.05,fVar35 * 0.05);
    local_e8 = CONCAT44(fVar35 + local_78,fVar35 + local_78);
    uVar21 = (uint)*(byte *)((long)pfVar33 + 0x3e);
    if (*(byte *)((long)pfVar33 + 0x3e) != 0) {
      uVar32 = 0;
      do {
        while( true ) {
          pbVar2 = (byte *)((long)pfVar33 + uVar32 + 0x38);
          uVar31 = (uint)uVar32;
          uVar22 = uVar31;
          if (uVar21 - 2 <= uVar31) {
            uVar22 = uVar21 - 2;
          }
          bVar4 = *pbVar2;
          pfVar23 = pfVar33 + (ulong)*(byte *)((long)pfVar33 + (ulong)(uVar22 + 1) + 0x38) * 100 +
                              0x10;
          Hint_Prefetch(pfVar23,0,0,0);
          Hint_Prefetch(pfVar23 + 0x20,0,0,0);
          Hint_Prefetch(pfVar23 + 0x40,0,0,0);
          fVar37 = (float)FUN_00292800(pfVar23,pfVar33 + (ulong)bVar4 * 100 + 0x10,&local_2530,
                                       local_1218,&local_e8);
          if ((pfVar33 + (ulong)bVar4 * 100 + 0x10)[0x60] == 0.0) break;
          pfVar33[(ulong)bVar4 + 8] = fVar37;
          uVar21 = (uint)*(byte *)((long)pfVar33 + 0x3e);
          uVar32 = (ulong)(uVar31 + 1);
          if (uVar21 <= uVar31 + 1) goto LAB_00289724;
        }
        bVar6 = *(char *)((long)pfVar33 + 0x3e) - 1;
        *(byte *)((long)pfVar33 + 0x3e) = bVar6;
        bVar5 = *(byte *)((long)pfVar33 + (ulong)bVar6 + 0x38);
        *(byte *)((long)pfVar33 + (ulong)bVar6 + 0x38) = bVar4;
        *pbVar2 = bVar5;
        uVar21 = (uint)*(byte *)((long)pfVar33 + 0x3e);
      } while (uVar31 < uVar21);
    }
    goto LAB_00289724;
  }
  *(undefined1 *)((long)pfVar33 + 0x3e) = 0;
  pfVar33[2] = fVar41;
  pfVar33[3] = fVar45;
  *pfVar33 = fVar37;
  pfVar33[1] = fVar44;
  *(ulong *)(pfVar33 + 6) = (ulong)(uint)fVar48;
  *(ulong *)(pfVar33 + 4) = CONCAT44(fVar60,fVar47);
  local_c8 = CONCAT44(fVar35 * 0.001,fVar35 * 0.001);
  local_d8 = *(long **)(param_2 + 8);
  lStack_d0 = param_2;
  fabsf(*(float *)(param_2 + 0x14));
  fabsf(*(float *)(param_2 + 0x18));
  local_e8 = CONCAT44(1.0 / *(float *)(param_2 + 0x10),1.0 / *(float *)(param_2 + 0x14));
  local_e0 = 1.0 / *(float *)(param_2 + 0x18);
  fVar35 = *(float *)(param_3[1] + 4) - param_4[5];
  fVar37 = *(float *)param_3[1] - param_4[4];
  fVar41 = *(float *)(param_3[1] + 8) - param_4[6];
  fVar44 = param_4[2];
  fVar42 = param_4[3];
  fVar37 = fVar37 + fVar37;
  fVar35 = fVar35 + fVar35;
  fVar41 = fVar41 + fVar41;
  fVar53 = fVar42 * fVar42 + -0.5;
  fVar45 = *param_4;
  fVar40 = param_4[1];
  fVar47 = fVar37 * fVar45 + fVar35 * fVar40 + fVar41 * fVar44;
  fVar43 = fVar45 * fVar47 + (fVar37 * fVar53 - fVar42 * (fVar41 * fVar40 - fVar35 * fVar44));
  fVar54 = (fVar41 * fVar53 - fVar42 * (fVar35 * fVar45 - fVar37 * fVar40)) + fVar44 * fVar47;
  fVar37 = fVar40 * fVar47 + (fVar35 * fVar53 - fVar42 * (fVar37 * fVar44 - fVar41 * fVar45));
  fStack_ec = *(float *)(param_1 + 4) + *param_5;
  local_100 = fVar43 - fStack_ec;
  fStack_fc = fVar37 - fStack_ec;
  local_f8 = fVar54 - fStack_ec;
  fStack_f4 = fStack_ec + fVar43;
  local_f0 = fStack_ec + fVar37;
  fStack_ec = fStack_ec + fVar54;
  local_110 = local_1218;
  local_108 = 0x44000000000;
  local_118 = 1;
  local_2530 = PTR_DAT_02711f30 + 0x10;
  puStack_2528 = &local_e8;
                    /* try { // try from 00289308 to 00289363 has its CatchHandler @ 0028976c */
  pfStack_2520 = param_4;
  (**(code **)(*local_d8 + 0x70))(local_68);
  puVar34 = PTR_DAT_02711f38;
  local_2530 = PTR_DAT_02711f38 + 0x10;
  local_2518 = CONCAT71(local_2518._1_7_,~local_68[0]) & 0xffffffffffffff01;
  FUN_0026ae60(&local_2510,&local_78,&local_c8,&local_a0,&local_c0,pfVar33,param_7,local_1218,0);
  uStack_1658 = (ulong)(uint)fVar54;
  local_1660 = CONCAT44(fVar37,fVar43);
  fVar37 = local_78 + (float)local_70;
  fVar35 = fStack_74 + (float)((ulong)local_70 >> 0x20);
  local_1238 = auStack_1640;
  local_1230 = 0x4000000000;
  local_1650 = local_70;
  local_1240 = 1;
  local_1648 = CONCAT44(fVar35 * fVar35,fVar37 * fVar37);
                    /* try { // try from 002893c0 to 002893df has its CatchHandler @ 0028977c */
  FUN_00251d90(&local_e8,param_4,&local_100,0,&local_2530);
  FUN_0026eba0(&local_2510);
  iVar38 = (int)local_1b88;
  if ((int)local_1b88 != 0) {
    uVar21 = local_1b88._4_4_;
    uVar32 = (ulong)local_1b88._4_4_;
    if (1 < local_1b88._4_4_) {
      iVar49 = -1;
      uVar24 = 1;
      do {
        lVar26 = local_1d18[uVar24];
        if ((float)*(undefined8 *)(local_1d18[uVar24 + 1] + 0x28) <
            (float)*(undefined8 *)(lVar26 + 0x28)) {
          local_1d18[uVar24] = local_1d18[uVar24 + 1];
          local_1d18[uVar24 + 1] = lVar26;
          if (-1 < (int)uVar24 + -2) {
            uVar27 = (long)iVar49 + 1;
            plVar20 = local_1d18 + (long)iVar49 + 1;
            do {
              uVar1 = uVar27 & 0xffffffff;
              lVar26 = local_1d18[uVar1 + 1];
              if ((float)*(undefined8 *)(*plVar20 + 0x28) <= (float)*(undefined8 *)(lVar26 + 0x28))
              break;
              uVar27 = uVar27 - 1;
              local_1d18[uVar1 + 1] = *plVar20;
              *plVar20 = lVar26;
              plVar20 = plVar20 + -1;
            } while (0 < (long)uVar27);
          }
        }
        uVar24 = uVar24 + 1;
        iVar49 = iVar49 + 1;
      } while (uVar24 != uVar32);
    }
    lVar26 = local_1b90;
    if (uVar21 == 0) {
      local_1b88._4_4_ = 0;
    }
    else {
      uVar24 = 0;
      uVar27 = 0xffffffff;
      do {
        puVar25 = (undefined8 *)local_1d18[uVar24 + 1];
        puVar25[2] = 0;
        iVar38 = *(int *)((long)puVar25 + 0x34) - *(int *)(puVar25 + 6);
        puVar25[3] = puVar25;
        puVar25[4] = puVar25;
        *(int *)(puVar25 + 7) = iVar38;
        if (uVar24 != 0) {
          lVar28 = 0;
          do {
            lVar29 = (local_1d18 + 1)[uVar27 + lVar28];
            puVar30 = *(undefined8 **)(lVar29 + 0x20);
            fVar37 = (float)*puVar25 * (float)*puVar30;
            fVar35 = (float)((ulong)*puVar25 >> 0x20) * (float)((ulong)*puVar30 >> 0x20);
            fVar41 = (float)puVar25[1] * (float)puVar30[1];
            fVar44 = (float)((ulong)puVar25[1] >> 0x20) * (float)((ulong)puVar30[1] >> 0x20);
            auVar9._4_4_ = fVar35;
            auVar9._0_4_ = fVar37;
            auVar9._8_4_ = fVar41;
            auVar9._12_4_ = fVar44;
            auVar10._4_4_ = fVar35;
            auVar10._0_4_ = fVar37;
            auVar10._8_4_ = fVar41;
            auVar10._12_4_ = fVar44;
            auVar58 = NEON_ext(auVar9,auVar10,8,1);
            if (local_1be0[0] <= fVar37 + fVar35 + auVar58._0_4_ + auVar58._4_4_) {
              *(undefined8 **)(lVar29 + 0x10) = puVar25;
              puVar30[3] = puVar25;
              puVar25[4] = puVar30;
              *(int *)(*(long *)(lVar29 + 0x20) + 0x38) =
                   *(int *)(*(long *)(lVar29 + 0x20) + 0x38) + iVar38;
              break;
            }
            lVar28 = lVar28 + -1;
          } while ((int)uVar24 + (int)lVar28 != 0);
        }
        uVar27 = (ulong)((int)uVar27 + 1);
        uVar24 = uVar24 + 1;
      } while (uVar24 != uVar32);
      uVar24 = 0;
      do {
        lVar28 = local_1d18[uVar24 + 1];
        if (lVar28 != 0 && *(long *)(lVar28 + 0x20) == lVar28) {
          for (lVar29 = *(long *)(lVar28 + 0x10); lVar29 != 0; lVar29 = *(long *)(lVar29 + 0x10)) {
            uVar27 = (ulong)*(uint *)(lVar28 + 0x30);
            uVar21 = *(uint *)(lVar28 + 0x34);
            if (*(uint *)(lVar28 + 0x30) < uVar21) {
              uVar22 = *(uint *)(lVar29 + 0x34);
              do {
                uVar31 = *(uint *)(lVar29 + 0x30);
                if (uVar31 < uVar22) {
                  lVar3 = lVar26 + uVar27 * 0x40;
                  do {
                    __dest = (void *)(lVar26 + (ulong)uVar31 * 0x40);
                    fVar37 = (float)*(undefined8 *)((long)__dest + 0x10) - *(float *)(lVar3 + 0x10);
                    fVar35 = (float)((ulong)*(undefined8 *)((long)__dest + 0x10) >> 0x20) -
                             *(float *)(lVar3 + 0x14);
                    fVar41 = (float)*(undefined8 *)((long)__dest + 0x18) - *(float *)(lVar3 + 0x18);
                    fVar44 = (float)((ulong)*(undefined8 *)((long)__dest + 0x18) >> 0x20) -
                             *(float *)(lVar3 + 0x1c);
                    fVar37 = fVar37 * fVar37;
                    fVar35 = fVar35 * fVar35;
                    fVar41 = fVar41 * fVar41;
                    fVar44 = fVar44 * fVar44;
                    auVar7._4_4_ = fVar35;
                    auVar7._0_4_ = fVar37;
                    auVar7._8_4_ = fVar41;
                    auVar7._12_4_ = fVar44;
                    auVar8._4_4_ = fVar35;
                    auVar8._0_4_ = fVar37;
                    auVar8._8_4_ = fVar41;
                    auVar8._12_4_ = fVar44;
                    auVar58 = NEON_ext(auVar7,auVar8,8,1);
                    if (fVar37 + fVar35 + auVar58._0_4_ + auVar58._4_4_ < (float)local_1bd8[0]) {
                      memcpy(__dest,(void *)(lVar26 + (ulong)(uVar22 - 1) * 0x40),0x34);
                      uVar22 = *(int *)(lVar29 + 0x34) - 1;
                      uVar31 = uVar31 - 1;
                      *(uint *)(lVar29 + 0x34) = uVar22;
                    }
                    uVar31 = uVar31 + 1;
                  } while (uVar31 < uVar22);
                  uVar21 = *(uint *)(lVar28 + 0x34);
                }
                uVar27 = uVar27 + 1;
              } while (uVar27 < uVar21);
            }
            lVar28 = lVar29;
          }
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 != uVar32);
      puVar34 = PTR_DAT_02711f38;
      iVar38 = (int)local_1b88;
    }
                    /* try { // try from 00289680 to 00289687 has its CatchHandler @ 0028977c */
    FUN_00292960(local_1bf0,local_1b90,iVar38,local_1d18 + 1,local_1b88._4_4_,local_1bd8,local_1be0,
                 1);
    local_1b88 = 0;
  }
  puVar19 = local_1238;
  local_2530 = puVar34 + 0x10;
  if (((long)local_1230 < 0) || ((local_1230 & 0x7fffffff00000000) == 0)) {
LAB_002896d0:
    puVar25 = local_110;
  }
  else {
    if (auStack_1640 != local_1238) {
      if (local_1238 != (undefined1 *)0x0) {
                    /* try { // try from 002896bc to 002896cf has its CatchHandler @ 00289768 */
        plVar20 = (long *)FUN_00400d30();
        (**(code **)(*plVar20 + 0x18))(plVar20,puVar19);
      }
      goto LAB_002896d0;
    }
    local_1240 = 0;
    puVar25 = local_110;
  }
  local_110 = puVar25;
  if ((-1 < local_108) && ((local_108._4_4_ & 0x7fffffff) != 0)) {
    if (local_1218 == puVar25) {
      local_118 = 0;
    }
    else if (puVar25 != (undefined8 *)0x0) {
                    /* try { // try from 002896f8 to 0028970b has its CatchHandler @ 00289764 */
      plVar20 = (long *)FUN_00400d30();
      (**(code **)(*plVar20 + 0x18))(plVar20,puVar25);
    }
  }
LAB_00289724:
  uVar21 = FUN_00293400(pfVar33,param_7,&local_a0,&local_c0,&local_70);
  return uVar21 & 1;
}


