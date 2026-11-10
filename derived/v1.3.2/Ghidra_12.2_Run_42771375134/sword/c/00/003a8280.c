/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a8280; name: FUN_003a8280
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_003a8280(long param_1,undefined1 (*param_2) [12],undefined8 param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  ulong uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  undefined1 auVar51 [16];
  float fVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 uVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined8 uVar58;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined *local_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x40) == 0) ||
     (uVar23 = FUN_003a3bf0((int *)(param_1 + 0x10),param_2,param_3), (uVar23 & 1) != 0)) {
    if (*(int *)(param_1 + 0x1edc) == 0) {
      uVar22 = 1;
    }
    else {
      uVar22 = 1;
      fVar41 = (float)_DAT_01d4a810;
      fVar42 = (float)((ulong)_DAT_01d4a810 >> 0x20);
      fVar43 = (float)_UNK_01d4a818;
      fVar44 = (float)((ulong)_UNK_01d4a818 >> 0x20);
      uStack_100 = param_3;
      switch(*(undefined2 *)(param_2[8] + 2)) {
      case 0:
        fVar41 = *(float *)(param_2[9] + 4) * *(float *)(param_2[9] + 4);
        local_e0 = CONCAT44(fVar41,fVar41);
        local_f0 = *(undefined8 *)(param_2[8] + 4);
        uStack_e8 = (ulong)*(uint *)param_2[9];
        local_f8 = *(undefined8 *)(param_1 + 0x1ea0);
        local_110 = PTR_DAT_02712710 + 0x10;
        local_108 = &local_f0;
                    /* try { // try from 003a834c to 003a835b has its CatchHandler @ 003a8978 */
        uVar22 = FUN_0039c8a0(auStack_130,*(undefined8 *)(param_1 + 0x1f10),
                              *(undefined8 *)(param_1 + 0x1f08),*(undefined8 *)(param_1 + 0x1ee0),
                              &local_f0,&local_110);
        break;
      case 2:
        fVar44 = *(float *)param_2[1];
        fVar43 = *(float *)(param_2[1] + 4);
        local_e0 = *(ulong *)param_2[1];
        fVar41 = *(float *)param_2[10];
        pauVar1 = (undefined1 (*) [12])(param_2[9] + 4);
        local_f0 = *(undefined8 *)*pauVar1;
        fVar48 = *(float *)(param_2[10] + 4) * DAT_01d4be58;
        fVar24 = *(float *)param_2[5] + *(float *)param_2[5];
        fVar42 = *(float *)(param_2[1] + 8);
        uStack_c0 = CONCAT44(fVar48,fVar48);
        uStack_d8 = (ulong)(uint)fVar42;
        fVar31 = (float)(local_e0 >> 0x20);
        fVar30 = ABS(fVar31);
        local_b0 = CONCAT44(fVar30,ABS((float)local_e0));
        uStack_a8 = (ulong)(uint)ABS(fVar42);
        uStack_e8 = (ulong)(uint)fVar41;
        local_d0 = CONCAT44(fVar42,fVar31);
        uStack_c8 = local_e0 & 0xffffffff;
        uStack_98 = (ulong)(uint)ABS((float)local_e0);
        uStack_a0 = CONCAT44(ABS(fVar42),fVar30);
        uStack_b8 = (ulong)(uint)fVar48;
        if (DAT_01d4c18c <= fVar24) {
          fVar24 = DAT_01d4c18c;
          if (fVar44 < 0.0) {
            fVar24 = DAT_01d4c5a8;
          }
          fVar48 = *(float *)*pauVar1;
          if (fVar44 != 0.0) {
            fVar48 = fVar24;
          }
          fVar44 = DAT_01d4c18c;
          if (fVar43 < 0.0) {
            fVar44 = DAT_01d4c5a8;
          }
          fVar30 = *(float *)(param_2[9] + 8);
          if (fVar43 != 0.0) {
            fVar30 = fVar44;
          }
          if (fVar42 != 0.0) {
            fVar41 = (float)(&DAT_01cd50a8)[0.0 <= fVar42];
          }
        }
        else {
          fVar48 = *(float *)*pauVar1 + fVar24 * fVar44;
          fVar30 = *(float *)(param_2[9] + 8) + fVar24 * fVar43;
          fVar41 = fVar41 + fVar24 * fVar42;
        }
        auVar29._4_4_ = fVar30;
        auVar29._0_4_ = fVar48;
        auVar29._8_4_ = fVar41;
        auVar29._12_4_ = 0;
        auVar2._12_4_ = 0;
        auVar2._0_12_ = *pauVar1;
        auVar53 = NEON_fmin(auVar2,auVar29,4);
        auVar3._12_4_ = 0;
        auVar3._0_12_ = *pauVar1;
        auVar38 = NEON_fmax(auVar3,auVar29,4);
        uStack_88 = auVar53._8_8_;
        local_90 = auVar53._0_8_;
        uStack_78 = auVar38._8_8_;
        uStack_80 = auVar38._0_8_;
        local_f8 = *(undefined8 *)(param_1 + 0x1ea0);
        local_110 = PTR_DAT_02712720 + 0x10;
        local_108 = &local_f0;
                    /* try { // try from 003a889c to 003a88ab has its CatchHandler @ 003a8970 */
        uVar22 = FUN_0039c580(auStack_128,*(undefined8 *)(param_1 + 0x1f10),
                              *(undefined8 *)(param_1 + 0x1f08),*(undefined8 *)(param_1 + 0x1ee0),
                              &local_f0,&local_110);
        break;
      case 3:
        if (*(short *)param_2[8] == 0) {
          local_f0 = CONCAT44((*(float *)(param_2[6] + 4) + *(float *)(param_2[7] + 4)) * 0.5,
                              (*(float *)param_2[6] + *(float *)param_2[7]) * 0.5);
          local_e0 = CONCAT44((*(float *)(param_2[7] + 4) - *(float *)(param_2[6] + 4)) * 0.5,
                              (*(float *)param_2[7] - *(float *)param_2[6]) * 0.5);
          uStack_e8 = (ulong)(uint)((*(float *)(param_2[6] + 8) + *(float *)(param_2[7] + 8)) * 0.5)
          ;
          uStack_d8 = (ulong)(uint)((*(float *)(param_2[7] + 8) - *(float *)(param_2[6] + 8)) * 0.5)
          ;
          local_f8 = *(undefined8 *)(param_1 + 0x1ea0);
          local_110 = PTR_DAT_02712728 + 0x10;
          local_108 = &local_f0;
                    /* try { // try from 003a8940 to 003a894f has its CatchHandler @ 003a8968 */
          uVar22 = FUN_0039c2f0(auStack_120,*(undefined8 *)(param_1 + 0x1f10),
                                *(undefined8 *)(param_1 + 0x1f08),*(undefined8 *)(param_1 + 0x1ee0),
                                &local_f0,&local_110);
        }
        else {
          local_e0 = *(ulong *)param_2[4];
          uStack_d8 = (ulong)*(uint *)(param_2[4] + 8);
          fVar30 = *(float *)*param_2;
          fVar32 = *(float *)(*param_2 + 4);
          local_f0 = *(undefined8 *)*param_2;
          fVar34 = *(float *)(*param_2 + 8);
          uStack_e8 = (ulong)(uint)fVar34;
          auVar5._12_4_ = 0;
          auVar5._0_12_ = *param_2;
          auVar6._12_4_ = 0;
          auVar6._0_12_ = *param_2;
          auVar38 = NEON_ext(auVar5,auVar6,8,1);
          uStack_c0 = CONCAT44(*(float *)(param_2[2] + 4),*(float *)(param_2[1] + 4));
          uVar17 = NEON_rev64(auVar38._0_8_,4);
          local_b0 = CONCAT44(*(float *)(param_2[2] + 8),*(float *)(param_2[1] + 8));
          uVar37 = NEON_ext(uVar17,*(undefined8 *)*param_2,4,1);
          uVar17 = NEON_ext(*(undefined8 *)*param_2,uVar17,4,1);
          fVar49 = ABS(*(float *)param_2[1]) + fVar41;
          fVar54 = ABS(*(float *)param_2[2]) + fVar42;
          auVar51._0_8_ = CONCAT44(fVar54,fVar49);
          auVar51._8_4_ = ABS(*(float *)param_2[3]) + fVar43;
          auVar51._12_4_ = fVar44 + 0.0;
          uStack_c8 = (ulong)(uint)*(float *)param_2[3];
          local_d0 = CONCAT44(*(float *)param_2[2],*(float *)param_2[1]);
          uStack_b8 = (ulong)(uint)*(float *)(param_2[3] + 4);
          auVar38 = NEON_ext(auVar51,auVar51,8,1);
          fVar45 = ABS(*(float *)(param_2[1] + 4)) + fVar41;
          fVar46 = ABS(*(float *)(param_2[2] + 4)) + fVar42;
          fVar47 = ABS(*(float *)(param_2[3] + 4)) + fVar43;
          fVar48 = fVar44 + 0.0;
          uVar39 = NEON_rev64(auVar38._0_8_,4);
          uStack_a8 = (ulong)(uint)*(float *)(param_2[3] + 8);
          uStack_98 = auVar51._8_8_;
          auVar25._0_4_ = fVar30 * fVar49;
          auVar25._4_4_ = fVar32 * fVar54;
          auVar25._8_4_ = fVar34 * auVar51._8_4_;
          auVar25._12_4_ = auVar51._12_4_ * 0.0;
          auVar20._4_4_ = fVar46;
          auVar20._0_4_ = fVar45;
          auVar20._8_4_ = fVar47;
          auVar20._12_4_ = fVar48;
          auVar21._4_4_ = fVar46;
          auVar21._0_4_ = fVar45;
          auVar21._8_4_ = fVar47;
          auVar21._12_4_ = fVar48;
          auVar57 = NEON_ext(auVar20,auVar21,8,1);
          fVar41 = ABS(*(float *)(param_2[1] + 8)) + fVar41;
          fVar42 = ABS(*(float *)(param_2[2] + 8)) + fVar42;
          fVar43 = ABS(*(float *)(param_2[3] + 8)) + fVar43;
          fVar44 = fVar44 + 0.0;
          fVar35 = fVar30 * fVar45;
          fVar36 = fVar32 * fVar46;
          uVar58 = NEON_ext(uVar39,auVar51._0_8_,4,1);
          uVar39 = NEON_ext(auVar51._0_8_,uVar39,4,1);
          auVar38 = NEON_ext(auVar25,auVar25,8,1);
          fVar31 = fVar30 * fVar41;
          fVar33 = fVar32 * fVar42;
          uStack_88 = CONCAT44(fVar48,fVar47);
          local_90 = CONCAT44(fVar46,fVar45);
          uStack_78 = CONCAT44(fVar44,fVar43);
          uStack_80 = CONCAT44(fVar42,fVar41);
          fVar24 = auVar38._0_4_ + auVar38._4_4_;
          auVar11._4_4_ = fVar36;
          auVar11._0_4_ = fVar35;
          auVar11._8_4_ = fVar34 * fVar47;
          auVar11._12_4_ = fVar48 * 0.0;
          auVar12._4_4_ = fVar36;
          auVar12._0_4_ = fVar35;
          auVar12._8_4_ = fVar34 * fVar47;
          auVar12._12_4_ = fVar48 * 0.0;
          auVar38 = NEON_ext(auVar11,auVar12,8,1);
          fVar48 = auVar38._0_4_ + auVar38._4_4_;
          auVar15._4_4_ = fVar42;
          auVar15._0_4_ = fVar41;
          auVar15._8_4_ = fVar43;
          auVar15._12_4_ = fVar44;
          auVar16._4_4_ = fVar42;
          auVar16._0_4_ = fVar41;
          auVar16._8_4_ = fVar43;
          auVar16._12_4_ = fVar44;
          auVar53 = NEON_ext(auVar15,auVar16,8,1);
          uVar55 = NEON_rev64(auVar57._0_8_,4);
          auVar7._4_4_ = fVar33;
          auVar7._0_4_ = fVar31;
          auVar7._8_4_ = fVar34 * fVar43;
          auVar7._12_4_ = fVar44 * 0.0;
          auVar8._4_4_ = fVar33;
          auVar8._0_4_ = fVar31;
          auVar8._8_4_ = fVar34 * fVar43;
          auVar8._12_4_ = fVar44 * 0.0;
          auVar38 = NEON_ext(auVar7,auVar8,8,1);
          uVar50 = NEON_rev64(auVar53._0_8_,4);
          uVar40 = NEON_ext(uVar55,CONCAT44(fVar46,fVar45),4,1);
          uVar55 = NEON_ext(CONCAT44(fVar46,fVar45),uVar55,4,1);
          uVar56 = NEON_ext(uVar50,CONCAT44(fVar42,fVar41),4,1);
          uVar50 = NEON_ext(CONCAT44(fVar42,fVar41),uVar50,4,1);
          local_70 = NEON_ext(CONCAT44(auVar25._0_4_ + auVar25._4_4_ + fVar24,
                                       auVar25._0_4_ + auVar25._4_4_ + fVar24),
                              CONCAT44(fVar35 + fVar36 + fVar48,fVar35 + fVar36 + fVar48),4,1);
          uStack_68 = (ulong)(uint)(fVar31 + fVar33 + auVar38._0_4_ + auVar38._4_4_);
          fVar44 = (float)uVar37;
          fVar24 = (float)((ulong)uVar37 >> 0x20);
          fVar48 = (float)uVar17;
          fVar31 = (float)((ulong)uVar17 >> 0x20);
          uStack_58 = CONCAT44(fVar31 * 0.0 + (float)((ulong)uVar39 >> 0x20) * 0.0,
                               fVar48 * fVar49 + fVar30 * (float)uVar39);
          uStack_60 = CONCAT44(fVar24 * auVar51._8_4_ + fVar34 * (float)((ulong)uVar58 >> 0x20),
                               fVar44 * fVar54 + fVar32 * (float)uVar58);
          auVar26._0_8_ =
               CONCAT44(fVar24 * fVar43 + fVar34 * (float)((ulong)uVar56 >> 0x20),
                        fVar44 * fVar42 + fVar32 * (float)uVar56);
          auVar26._8_4_ = fVar48 * fVar41 + fVar30 * (float)uVar50;
          auVar26._12_4_ = fVar31 * 0.0 + (float)((ulong)uVar50 >> 0x20) * 0.0;
          uStack_48 = CONCAT44(fVar31 * 0.0 + (float)((ulong)uVar55 >> 0x20) * 0.0,
                               fVar48 * fVar45 + fVar30 * (float)uVar55);
          local_50 = CONCAT44(fVar24 * fVar47 + fVar34 * (float)((ulong)uVar40 >> 0x20),
                              fVar44 * fVar46 + fVar32 * (float)uVar40);
          uStack_38 = auVar26._8_8_;
          local_f8 = *(undefined8 *)(param_1 + 0x1ea0);
          local_110 = PTR_DAT_02712718 + 0x10;
          local_108 = &local_f0;
                    /* try { // try from 003a8614 to 003a8623 has its CatchHandler @ 003a896c */
          uStack_a0 = auVar51._0_8_;
          uStack_40 = auVar26._0_8_;
          uVar22 = FUN_0039c0e0(auStack_118,*(undefined8 *)(param_1 + 0x1f10),
                                *(undefined8 *)(param_1 + 0x1f08),*(undefined8 *)(param_1 + 0x1ee0),
                                &local_f0,&local_110);
        }
        break;
      case 4:
        local_e0 = *(ulong *)param_2[4];
        uStack_d8 = (ulong)*(uint *)(param_2[4] + 8);
        fVar30 = *(float *)*param_2;
        fVar32 = *(float *)(*param_2 + 4);
        local_f0 = *(undefined8 *)*param_2;
        fVar34 = *(float *)(*param_2 + 8);
        uStack_e8 = (ulong)(uint)fVar34;
        auVar38._12_4_ = 0;
        auVar38._0_12_ = *param_2;
        auVar53._12_4_ = 0;
        auVar53._0_12_ = *param_2;
        auVar38 = NEON_ext(auVar38,auVar53,8,1);
        uStack_c0 = CONCAT44(*(float *)(param_2[2] + 4),*(float *)(param_2[1] + 4));
        uVar17 = NEON_rev64(auVar38._0_8_,4);
        local_b0 = CONCAT44(*(float *)(param_2[2] + 8),*(float *)(param_2[1] + 8));
        uVar37 = NEON_ext(uVar17,*(undefined8 *)*param_2,4,1);
        uVar17 = NEON_ext(*(undefined8 *)*param_2,uVar17,4,1);
        fVar49 = ABS(*(float *)param_2[1]) + fVar41;
        fVar54 = ABS(*(float *)param_2[2]) + fVar42;
        auVar52._0_8_ = CONCAT44(fVar54,fVar49);
        auVar52._8_4_ = ABS(*(float *)param_2[3]) + fVar43;
        auVar52._12_4_ = fVar44 + 0.0;
        uStack_c8 = (ulong)(uint)*(float *)param_2[3];
        local_d0 = CONCAT44(*(float *)param_2[2],*(float *)param_2[1]);
        uStack_b8 = (ulong)(uint)*(float *)(param_2[3] + 4);
        auVar38 = NEON_ext(auVar52,auVar52,8,1);
        fVar45 = ABS(*(float *)(param_2[1] + 4)) + fVar41;
        fVar46 = ABS(*(float *)(param_2[2] + 4)) + fVar42;
        fVar47 = ABS(*(float *)(param_2[3] + 4)) + fVar43;
        fVar48 = fVar44 + 0.0;
        uVar39 = NEON_rev64(auVar38._0_8_,4);
        uStack_a8 = (ulong)(uint)*(float *)(param_2[3] + 8);
        uStack_98 = auVar52._8_8_;
        auVar27._0_4_ = fVar30 * fVar49;
        auVar27._4_4_ = fVar32 * fVar54;
        auVar27._8_4_ = fVar34 * auVar52._8_4_;
        auVar27._12_4_ = auVar52._12_4_ * 0.0;
        auVar18._4_4_ = fVar46;
        auVar18._0_4_ = fVar45;
        auVar18._8_4_ = fVar47;
        auVar18._12_4_ = fVar48;
        auVar19._4_4_ = fVar46;
        auVar19._0_4_ = fVar45;
        auVar19._8_4_ = fVar47;
        auVar19._12_4_ = fVar48;
        auVar57 = NEON_ext(auVar18,auVar19,8,1);
        fVar41 = ABS(*(float *)(param_2[1] + 8)) + fVar41;
        fVar42 = ABS(*(float *)(param_2[2] + 8)) + fVar42;
        fVar43 = ABS(*(float *)(param_2[3] + 8)) + fVar43;
        fVar44 = fVar44 + 0.0;
        fVar35 = fVar30 * fVar45;
        fVar36 = fVar32 * fVar46;
        uVar58 = NEON_ext(uVar39,auVar52._0_8_,4,1);
        uVar39 = NEON_ext(auVar52._0_8_,uVar39,4,1);
        auVar38 = NEON_ext(auVar27,auVar27,8,1);
        fVar31 = fVar30 * fVar41;
        fVar33 = fVar32 * fVar42;
        uStack_88 = CONCAT44(fVar48,fVar47);
        local_90 = CONCAT44(fVar46,fVar45);
        uStack_78 = CONCAT44(fVar44,fVar43);
        uStack_80 = CONCAT44(fVar42,fVar41);
        fVar24 = auVar38._0_4_ + auVar38._4_4_;
        auVar9._4_4_ = fVar36;
        auVar9._0_4_ = fVar35;
        auVar9._8_4_ = fVar34 * fVar47;
        auVar9._12_4_ = fVar48 * 0.0;
        auVar10._4_4_ = fVar36;
        auVar10._0_4_ = fVar35;
        auVar10._8_4_ = fVar34 * fVar47;
        auVar10._12_4_ = fVar48 * 0.0;
        auVar38 = NEON_ext(auVar9,auVar10,8,1);
        fVar48 = auVar38._0_4_ + auVar38._4_4_;
        auVar13._4_4_ = fVar42;
        auVar13._0_4_ = fVar41;
        auVar13._8_4_ = fVar43;
        auVar13._12_4_ = fVar44;
        auVar14._4_4_ = fVar42;
        auVar14._0_4_ = fVar41;
        auVar14._8_4_ = fVar43;
        auVar14._12_4_ = fVar44;
        auVar53 = NEON_ext(auVar13,auVar14,8,1);
        uVar55 = NEON_rev64(auVar57._0_8_,4);
        auVar57._4_4_ = fVar33;
        auVar57._0_4_ = fVar31;
        auVar57._8_4_ = fVar34 * fVar43;
        auVar57._12_4_ = fVar44 * 0.0;
        auVar4._4_4_ = fVar33;
        auVar4._0_4_ = fVar31;
        auVar4._8_4_ = fVar34 * fVar43;
        auVar4._12_4_ = fVar44 * 0.0;
        auVar38 = NEON_ext(auVar57,auVar4,8,1);
        uVar50 = NEON_rev64(auVar53._0_8_,4);
        uVar40 = NEON_ext(uVar55,CONCAT44(fVar46,fVar45),4,1);
        uVar55 = NEON_ext(CONCAT44(fVar46,fVar45),uVar55,4,1);
        uVar56 = NEON_ext(uVar50,CONCAT44(fVar42,fVar41),4,1);
        uVar50 = NEON_ext(CONCAT44(fVar42,fVar41),uVar50,4,1);
        local_70 = NEON_ext(CONCAT44(auVar27._0_4_ + auVar27._4_4_ + fVar24,
                                     auVar27._0_4_ + auVar27._4_4_ + fVar24),
                            CONCAT44(fVar35 + fVar36 + fVar48,fVar35 + fVar36 + fVar48),4,1);
        uStack_68 = (ulong)(uint)(fVar31 + fVar33 + auVar38._0_4_ + auVar38._4_4_);
        fVar44 = (float)uVar37;
        fVar24 = (float)((ulong)uVar37 >> 0x20);
        fVar48 = (float)uVar17;
        fVar31 = (float)((ulong)uVar17 >> 0x20);
        uStack_58 = CONCAT44(fVar31 * 0.0 + (float)((ulong)uVar39 >> 0x20) * 0.0,
                             fVar48 * fVar49 + fVar30 * (float)uVar39);
        uStack_60 = CONCAT44(fVar24 * auVar52._8_4_ + fVar34 * (float)((ulong)uVar58 >> 0x20),
                             fVar44 * fVar54 + fVar32 * (float)uVar58);
        auVar28._0_8_ =
             CONCAT44(fVar24 * fVar43 + fVar34 * (float)((ulong)uVar56 >> 0x20),
                      fVar44 * fVar42 + fVar32 * (float)uVar56);
        auVar28._8_4_ = fVar48 * fVar41 + fVar30 * (float)uVar50;
        auVar28._12_4_ = fVar31 * 0.0 + (float)((ulong)uVar50 >> 0x20) * 0.0;
        uStack_48 = CONCAT44(fVar31 * 0.0 + (float)((ulong)uVar55 >> 0x20) * 0.0,
                             fVar48 * fVar45 + fVar30 * (float)uVar55);
        local_50 = CONCAT44(fVar24 * fVar47 + fVar34 * (float)((ulong)uVar40 >> 0x20),
                            fVar44 * fVar46 + fVar32 * (float)uVar40);
        uStack_38 = auVar28._8_8_;
        local_f8 = *(undefined8 *)(param_1 + 0x1ea0);
        local_110 = PTR_DAT_02712718 + 0x10;
        local_108 = &local_f0;
                    /* try { // try from 003a880c to 003a881b has its CatchHandler @ 003a8974 */
        uStack_a0 = auVar52._0_8_;
        uStack_40 = auVar28._0_8_;
        uVar22 = FUN_0039c0e0(auStack_138,*(undefined8 *)(param_1 + 0x1f10),
                              *(undefined8 *)(param_1 + 0x1f08),*(undefined8 *)(param_1 + 0x1ee0),
                              &local_f0,&local_110);
      }
    }
  }
  else {
    uVar22 = 0;
  }
  return uVar22 & 1;
}


