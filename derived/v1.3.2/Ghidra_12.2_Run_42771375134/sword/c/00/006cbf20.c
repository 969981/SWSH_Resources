/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cbf20; name: FUN_006cbf20
 */


undefined8 FUN_006cbf20(long param_1,long param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 uVar7;
  undefined1 extraout_b0;
  undefined1 uVar8;
  undefined1 extraout_var;
  undefined1 uVar9;
  undefined1 extraout_var_00;
  undefined1 uVar10;
  undefined1 extraout_var_01;
  undefined1 uVar11;
  undefined1 extraout_var_02;
  undefined1 uVar12;
  undefined1 extraout_var_03;
  undefined1 uVar13;
  undefined1 extraout_var_04;
  undefined1 uVar14;
  undefined1 extraout_var_05;
  undefined1 uVar15;
  undefined1 extraout_var_06;
  undefined1 uVar16;
  undefined1 extraout_var_07;
  undefined1 uVar17;
  undefined1 extraout_var_08;
  undefined1 uVar18;
  undefined1 extraout_var_09;
  undefined1 uVar19;
  undefined1 extraout_var_10;
  undefined1 uVar20;
  undefined1 extraout_var_11;
  undefined1 uVar21;
  undefined1 extraout_var_12;
  undefined1 uVar22;
  undefined1 extraout_var_13;
  float fVar23;
  float fVar30;
  int iVar32;
  undefined1 auVar26 [16];
  int iVar24;
  float fVar25;
  undefined1 auVar27 [16];
  int iVar31;
  int iVar33;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar34 [16];
  float fVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar51;
  float fVar52;
  undefined1 auVar46 [16];
  float fVar53;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fStack_6c;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if (((*(uint *)(param_2 + 0x1b0) & *(uint *)(param_1 + 0x1b4)) != 0) &&
     ((*(char *)(param_1 + 0x218) == '\0' || (*(int *)(param_1 + 0x21c) == 0)))) {
    iVar24 = *(int *)(param_2 + 0x90);
    iVar31 = *(int *)(param_1 + 0x90);
    if ((iVar24 == 1) && (iVar31 == 1)) {
      fVar2 = ((float)*(undefined8 *)(param_1 + 0xa0) + *(float *)(param_1 + 0x70)) -
              (*(float *)(param_2 + 0xa0) + *(float *)(param_2 + 0x70));
      fVar6 = ((float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20) + *(float *)(param_1 + 0x74))
              - (*(float *)(param_2 + 0xa4) + *(float *)(param_2 + 0x74));
      fVar3 = ((float)*(undefined8 *)(param_1 + 0xa8) + *(float *)(param_1 + 0x78)) -
              (*(float *)(param_2 + 0xa8) + *(float *)(param_2 + 0x78));
      fVar25 = ((float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20) + *(float *)(param_1 + 0x7c)
               ) - (*(float *)(param_2 + 0xac) + *(float *)(param_2 + 0x7c));
      auVar26._0_4_ = fVar2 * fVar2;
      auVar26._4_4_ = fVar6 * fVar6;
      auVar26._8_4_ = fVar3 * fVar3;
      auVar26._12_4_ = fVar25 * fVar25;
      auVar34 = NEON_ext(auVar26,auVar26,8,1);
      fVar23 = auVar34._0_4_ + auVar26._0_4_;
      fVar30 = auVar34._4_4_ + auVar26._4_4_;
      fVar5 = fVar23 + fVar30;
      fVar23 = fVar23 + fVar30;
      auVar27._8_8_ = CONCAT44(fVar23,fVar5);
      auVar27._0_8_ = CONCAT44(fVar23,fVar5);
      fVar30 = SQRT(fVar5);
      if ((DAT_01d4c708 < fVar30) &&
         (fVar41 = *(float *)(param_2 + 0xb0) + *(float *)(param_1 + 0xb0), fVar30 < fVar41)) {
        auVar34 = NEON_frsqrte(auVar27,4);
        auVar54._0_4_ = fVar5 * auVar34._0_4_;
        auVar54._4_4_ = fVar23 * auVar34._4_4_;
        auVar54._8_4_ = fVar5 * auVar34._8_4_;
        auVar54._12_4_ = fVar23 * auVar34._12_4_;
        auVar55 = NEON_frsqrts(auVar34,auVar54,4);
        fVar30 = (fVar41 - fVar30) + 0.5;
        auVar46._0_4_ = auVar34._0_4_ * auVar55._0_4_;
        auVar46._4_4_ = auVar34._4_4_ * auVar55._4_4_;
        auVar46._8_4_ = auVar34._8_4_ * auVar55._8_4_;
        auVar46._12_4_ = auVar34._12_4_ * auVar55._12_4_;
        auVar56._0_4_ = fVar5 * auVar46._0_4_;
        auVar56._4_4_ = fVar23 * auVar46._4_4_;
        auVar56._8_4_ = fVar5 * auVar46._8_4_;
        auVar56._12_4_ = fVar23 * auVar46._12_4_;
        iVar24 = -(uint)(fVar5 == 0.0);
        iVar31 = -(uint)(fVar23 == 0.0);
        iVar32 = -(uint)(fVar5 == 0.0);
        iVar33 = -(uint)(fVar23 == 0.0);
        auVar34 = NEON_frsqrts(auVar46,auVar56,4);
        fVar2 = fVar2 * auVar46._0_4_ * auVar34._0_4_;
        fVar6 = fVar6 * auVar46._4_4_ * auVar34._4_4_;
        fVar3 = fVar3 * auVar46._8_4_ * auVar34._8_4_;
        fVar25 = fVar25 * auVar46._12_4_ * auVar34._12_4_;
        fVar2 = (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                                CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10)
                                         ,CONCAT11((byte)((uint)fVar2 >> 8) &
                                                   ~(byte)((uint)iVar24 >> 8),
                                                   SUB41(fVar2,0) & ~(byte)iVar24))) * fVar30;
        uVar7 = SUB41(fVar2,0);
        uVar8 = (undefined1)((uint)fVar2 >> 8);
        uVar9 = (undefined1)((uint)fVar2 >> 0x10);
        uVar10 = (undefined1)((uint)fVar2 >> 0x18);
        fVar2 = (float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                                CONCAT12((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10)
                                         ,CONCAT11((byte)((uint)fVar6 >> 8) &
                                                   ~(byte)((uint)iVar31 >> 8),
                                                   SUB41(fVar6,0) & ~(byte)iVar31))) * fVar30;
        uVar11 = SUB41(fVar2,0);
        uVar12 = (undefined1)((uint)fVar2 >> 8);
        uVar13 = (undefined1)((uint)fVar2 >> 0x10);
        uVar14 = (undefined1)((uint)fVar2 >> 0x18);
        fVar2 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                                CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10)
                                         ,CONCAT11((byte)((uint)fVar3 >> 8) &
                                                   ~(byte)((uint)iVar32 >> 8),
                                                   SUB41(fVar3,0) & ~(byte)iVar32))) * fVar30;
        uVar15 = SUB41(fVar2,0);
        uVar16 = (undefined1)((uint)fVar2 >> 8);
        uVar17 = (undefined1)((uint)fVar2 >> 0x10);
        uVar18 = (undefined1)((uint)fVar2 >> 0x18);
        fVar30 = (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                                 CONCAT12((byte)((uint)fVar25 >> 0x10) &
                                          ~(byte)((uint)iVar33 >> 0x10),
                                          CONCAT11((byte)((uint)fVar25 >> 8) &
                                                   ~(byte)((uint)iVar33 >> 8),
                                                   SUB41(fVar25,0) & ~(byte)iVar33))) * fVar30;
        uVar19 = SUB41(fVar30,0);
        uVar20 = (undefined1)((uint)fVar30 >> 8);
        uVar21 = (undefined1)((uint)fVar30 >> 0x10);
        uVar22 = (undefined1)((uint)fVar30 >> 0x18);
LAB_006cc2a8:
        param_3[1] = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18
                                                  ,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
        *param_3 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
        return 1;
      }
    }
    else {
      if ((iVar24 == 4) && (iVar31 == 1)) {
        uVar4 = FUN_006cca70(param_1,param_2,param_3);
        return uVar4;
      }
      if ((iVar24 == 2) && (iVar31 == 1)) {
        fVar2 = (float)*(undefined8 *)(param_1 + 0xa0) + *(float *)(param_1 + 0x70);
        fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20) + *(float *)(param_1 + 0x74)
        ;
        fVar3 = (float)*(undefined8 *)(param_1 + 0xa8) + *(float *)(param_1 + 0x78);
        fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20) +
                 *(float *)(param_1 + 0x7c);
        fVar45 = *(float *)(param_2 + 0xc0) + *(float *)(param_2 + 0x70);
        fVar51 = *(float *)(param_2 + 0xc4) + *(float *)(param_2 + 0x74);
        fVar52 = *(float *)(param_2 + 200) + *(float *)(param_2 + 0x78);
        fVar53 = *(float *)(param_2 + 0xcc) + *(float *)(param_2 + 0x7c);
        fVar30 = *(float *)(param_2 + 0x100);
        fVar41 = fVar2 - fVar45;
        fVar38 = fVar6 - fVar51;
        fVar39 = fVar3 - fVar52;
        fVar40 = fVar25 - fVar53;
        auVar57._0_4_ = *(float *)(param_2 + 0xd0) * fVar41;
        auVar57._4_4_ = *(float *)(param_2 + 0xd4) * fVar38;
        auVar57._8_4_ = *(float *)(param_2 + 0xd8) * fVar39;
        auVar57._12_4_ = *(float *)(param_2 + 0xdc) * fVar40;
        auVar34 = NEON_ext(auVar57,auVar57,8,1);
        fVar23 = auVar34._0_4_ + auVar57._0_4_ + auVar34._4_4_ + auVar57._4_4_;
        fVar5 = fVar30;
        if (fVar23 <= fVar30) {
          fVar5 = fVar23;
        }
        fVar23 = -fVar30;
        if (-fVar30 <= fVar5) {
          fVar23 = fVar5;
        }
        fVar59 = *(float *)(param_2 + 0x104);
        auVar58._0_4_ = *(float *)(param_2 + 0xe0) * fVar41;
        auVar58._4_4_ = *(float *)(param_2 + 0xe4) * fVar38;
        auVar58._8_4_ = *(float *)(param_2 + 0xe8) * fVar39;
        auVar58._12_4_ = *(float *)(param_2 + 0xec) * fVar40;
        auVar34 = NEON_ext(auVar58,auVar58,8,1);
        fVar60 = (float)*(undefined8 *)(param_2 + 0xf0);
        auVar35._0_4_ = fVar60 * fVar41;
        fVar41 = (float)((ulong)*(undefined8 *)(param_2 + 0xf0) >> 0x20);
        auVar35._4_4_ = fVar41 * fVar38;
        fVar38 = (float)*(undefined8 *)(param_2 + 0xf8);
        auVar35._8_4_ = fVar38 * fVar39;
        auVar35._12_4_ = (float)((ulong)*(undefined8 *)(param_2 + 0xf8) >> 0x20) * fVar40;
        fVar30 = auVar34._0_4_ + auVar58._0_4_ + auVar34._4_4_ + auVar58._4_4_;
        fVar5 = fVar59;
        if (fVar30 <= fVar59) {
          fVar5 = fVar30;
        }
        fVar30 = -fVar59;
        if (-fVar59 <= fVar5) {
          fVar30 = fVar5;
        }
        auVar34 = NEON_ext(auVar35,auVar35,8,1);
        fVar40 = *(float *)(param_2 + 0x108);
        fVar39 = auVar34._0_4_ + auVar35._0_4_ + auVar34._4_4_ + auVar35._4_4_;
        fVar5 = fVar40;
        if (fVar39 <= fVar40) {
          fVar5 = fVar39;
        }
        fVar39 = -fVar40;
        if (-fVar40 <= fVar5) {
          fVar39 = fVar5;
        }
        fVar40 = fVar45 + fVar23 * *(float *)(param_2 + 0xd0) + fVar30 * *(float *)(param_2 + 0xe0)
                 + fVar39 * fVar60;
        fVar45 = fVar51 + fVar23 * *(float *)(param_2 + 0xd4) + fVar30 * *(float *)(param_2 + 0xe4)
                 + fVar39 * fVar41;
        fVar38 = fVar52 + fVar23 * *(float *)(param_2 + 0xd8) + fVar30 * *(float *)(param_2 + 0xe8)
                 + fVar39 * fVar38;
        fVar39 = fVar53 + 0.0 + 0.0 + 0.0;
        fVar5 = fVar40 - fVar2;
        fVar23 = fVar45 - fVar6;
        fVar30 = fVar38 - fVar3;
        fVar41 = fVar39 - fVar25;
        auVar42._0_4_ = fVar5 * fVar5;
        auVar42._4_4_ = fVar23 * fVar23;
        auVar42._8_4_ = fVar30 * fVar30;
        auVar42._12_4_ = fVar41 * fVar41;
        fVar5 = *(float *)(param_1 + 0xb0);
        auVar34 = NEON_ext(auVar42,auVar42,8,1);
        if (auVar34._0_4_ + auVar42._0_4_ + auVar34._4_4_ + auVar42._4_4_ <= fVar5 * fVar5) {
          fVar2 = fVar2 - fVar40;
          fVar6 = fVar6 - fVar45;
          fVar3 = fVar3 - fVar38;
          fVar25 = fVar25 - fVar39;
          auVar36._0_4_ = fVar2 * fVar2;
          auVar36._4_4_ = fVar6 * fVar6;
          auVar36._8_4_ = fVar3 * fVar3;
          auVar36._12_4_ = fVar25 * fVar25;
          auVar34 = NEON_ext(auVar36,auVar36,8,1);
          fVar30 = auVar34._0_4_ + auVar36._0_4_;
          fVar41 = auVar34._4_4_ + auVar36._4_4_;
          fVar23 = fVar30 + fVar41;
          fVar30 = fVar30 + fVar41;
          auVar37._8_8_ = CONCAT44(fVar30,fVar23);
          auVar37._0_8_ = CONCAT44(fVar30,fVar23);
          auVar34 = NEON_frsqrte(auVar37,4);
          auVar47._0_4_ = auVar34._0_4_ * fVar23;
          auVar47._4_4_ = auVar34._4_4_ * fVar30;
          auVar47._8_4_ = auVar34._8_4_ * fVar23;
          auVar47._12_4_ = auVar34._12_4_ * fVar30;
          auVar55 = NEON_frsqrts(auVar34,auVar47,4);
          auVar43._0_4_ = auVar34._0_4_ * auVar55._0_4_;
          auVar43._4_4_ = auVar34._4_4_ * auVar55._4_4_;
          auVar43._8_4_ = auVar34._8_4_ * auVar55._8_4_;
          auVar43._12_4_ = auVar34._12_4_ * auVar55._12_4_;
          auVar48._0_4_ = fVar23 * auVar43._0_4_;
          auVar48._4_4_ = fVar30 * auVar43._4_4_;
          auVar48._8_4_ = fVar23 * auVar43._8_4_;
          auVar48._12_4_ = fVar30 * auVar43._12_4_;
          auVar34 = NEON_frsqrts(auVar43,auVar48,4);
          iVar24 = -(uint)(fVar23 == 0.0);
          iVar31 = -(uint)(fVar30 == 0.0);
          iVar32 = -(uint)(fVar23 == 0.0);
          iVar33 = -(uint)(fVar30 == 0.0);
          fVar2 = fVar2 * auVar43._0_4_ * auVar34._0_4_;
          fVar6 = fVar6 * auVar43._4_4_ * auVar34._4_4_;
          fVar3 = fVar3 * auVar43._8_4_ * auVar34._8_4_;
          fVar25 = fVar25 * auVar43._12_4_ * auVar34._12_4_;
          fVar5 = (fVar5 - SQRT(fVar23)) + 0.5;
          fVar2 = (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                                  CONCAT12((byte)((uint)fVar2 >> 0x10) &
                                           ~(byte)((uint)iVar24 >> 0x10),
                                           CONCAT11((byte)((uint)fVar2 >> 8) &
                                                    ~(byte)((uint)iVar24 >> 8),
                                                    SUB41(fVar2,0) & ~(byte)iVar24))) * fVar5;
          uVar7 = SUB41(fVar2,0);
          uVar8 = (undefined1)((uint)fVar2 >> 8);
          uVar9 = (undefined1)((uint)fVar2 >> 0x10);
          uVar10 = (undefined1)((uint)fVar2 >> 0x18);
          fVar2 = (float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                                  CONCAT12((byte)((uint)fVar6 >> 0x10) &
                                           ~(byte)((uint)iVar31 >> 0x10),
                                           CONCAT11((byte)((uint)fVar6 >> 8) &
                                                    ~(byte)((uint)iVar31 >> 8),
                                                    SUB41(fVar6,0) & ~(byte)iVar31))) * fVar5;
          uVar11 = SUB41(fVar2,0);
          uVar12 = (undefined1)((uint)fVar2 >> 8);
          uVar13 = (undefined1)((uint)fVar2 >> 0x10);
          uVar14 = (undefined1)((uint)fVar2 >> 0x18);
          fVar2 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                                  CONCAT12((byte)((uint)fVar3 >> 0x10) &
                                           ~(byte)((uint)iVar32 >> 0x10),
                                           CONCAT11((byte)((uint)fVar3 >> 8) &
                                                    ~(byte)((uint)iVar32 >> 8),
                                                    SUB41(fVar3,0) & ~(byte)iVar32))) * fVar5;
          uVar15 = SUB41(fVar2,0);
          uVar16 = (undefined1)((uint)fVar2 >> 8);
          uVar17 = (undefined1)((uint)fVar2 >> 0x10);
          uVar18 = (undefined1)((uint)fVar2 >> 0x18);
          fVar5 = (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                                  CONCAT12((byte)((uint)fVar25 >> 0x10) &
                                           ~(byte)((uint)iVar33 >> 0x10),
                                           CONCAT11((byte)((uint)fVar25 >> 8) &
                                                    ~(byte)((uint)iVar33 >> 8),
                                                    SUB41(fVar25,0) & ~(byte)iVar33))) * fVar5;
          uVar19 = SUB41(fVar5,0);
          uVar20 = (undefined1)((uint)fVar5 >> 8);
          uVar21 = (undefined1)((uint)fVar5 >> 0x10);
          uVar22 = (undefined1)((uint)fVar5 >> 0x18);
          goto LAB_006cc2a8;
        }
      }
      else {
        if (iVar24 != 3) {
          return 0;
        }
        if (iVar31 != 1) {
          return 0;
        }
        auVar34 = *(undefined1 (*) [16])(param_2 + 0x120);
        auVar55 = *(undefined1 (*) [16])(param_2 + 0x130);
        fVar23 = *(float *)(param_1 + 0xb0);
        auVar1 = *(undefined1 (*) [16])(param_2 + 0x70);
        local_50 = auVar1._0_4_;
        local_30 = *(float *)(param_2 + 0x110) + local_50;
        fStack_4c = auVar1._4_4_;
        fStack_2c = *(float *)(param_2 + 0x114) + fStack_4c;
        fStack_48 = auVar1._8_4_;
        fStack_28 = *(float *)(param_2 + 0x118) + fStack_48;
        fStack_44 = auVar1._12_4_;
        fStack_24 = fStack_44 + 0.0;
        local_40 = auVar34._0_4_ + local_50;
        fStack_3c = auVar34._4_4_ + fStack_4c;
        fStack_38 = auVar34._8_4_ + fStack_48;
        fStack_34 = fStack_44 + 0.0;
        local_50 = auVar55._0_4_ + local_50;
        fStack_4c = auVar55._4_4_ + fStack_4c;
        fStack_48 = auVar55._8_4_ + fStack_48;
        fStack_44 = fStack_44 + 0.0;
        auVar34 = *(undefined1 (*) [16])(param_1 + 0x70);
        fVar2 = (float)*(undefined8 *)(param_1 + 0xa0) + auVar34._0_4_;
        fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20) + auVar34._4_4_;
        uVar7 = (undefined1)((uint)fVar6 >> 8);
        uVar8 = (undefined1)((uint)fVar6 >> 0x10);
        uVar9 = (undefined1)((uint)fVar6 >> 0x18);
        fVar3 = (float)*(undefined8 *)(param_1 + 0xa8) + auVar34._8_4_;
        fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20) + auVar34._12_4_;
        uVar10 = (undefined1)((uint)fVar25 >> 8);
        uVar11 = (undefined1)((uint)fVar25 >> 0x10);
        uVar12 = (undefined1)((uint)fVar25 >> 0x18);
        uStack_58 = CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14(SUB41(fVar25,0),fVar3))
                                            ));
        uStack_60 = CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(SUB41(fVar6,0),fVar2))));
        FUN_006ccd80(&uStack_60,&local_30,&local_40,&local_50);
        fStack_6c = (float)(CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(SUB41(fVar6,0),
                                                                                  fVar2)))) >> 0x20)
        ;
        fStack_64 = (float)(CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14(SUB41(fVar25,0)
                                                                                     ,fVar3)))) >>
                           0x20);
        fVar2 = (float)CONCAT13(extraout_var_01,
                                CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) -
                fVar2;
        fStack_6c = (float)CONCAT13(extraout_var_05,
                                    CONCAT12(extraout_var_04,
                                             CONCAT11(extraout_var_03,extraout_var_02))) - fStack_6c
        ;
        fVar3 = (float)CONCAT13(extraout_var_09,
                                CONCAT12(extraout_var_08,CONCAT11(extraout_var_07,extraout_var_06)))
                - fVar3;
        fStack_64 = (float)CONCAT13(extraout_var_13,
                                    CONCAT12(extraout_var_12,
                                             CONCAT11(extraout_var_11,extraout_var_10))) - fStack_64
        ;
        auVar34._0_4_ = fVar2 * fVar2;
        auVar34._4_4_ = fStack_6c * fStack_6c;
        auVar34._8_4_ = fVar3 * fVar3;
        auVar34._12_4_ = fStack_64 * fStack_64;
        auVar55 = NEON_ext(auVar34,auVar34,8,1);
        fVar25 = auVar55._0_4_ + auVar34._0_4_;
        fVar5 = auVar55._4_4_ + auVar34._4_4_;
        fVar6 = fVar25 + fVar5;
        fVar25 = fVar25 + fVar5;
        if (fVar6 <= fVar23 * fVar23) {
          auVar55._8_8_ = CONCAT44(fVar25,fVar6);
          auVar55._0_8_ = CONCAT44(fVar25,fVar6);
          if (DAT_01d4c708 < SQRT(fVar6)) {
            auVar34 = NEON_frsqrte(auVar55,4);
            auVar49._0_4_ = fVar6 * auVar34._0_4_;
            auVar49._4_4_ = fVar25 * auVar34._4_4_;
            auVar49._8_4_ = fVar6 * auVar34._8_4_;
            auVar49._12_4_ = fVar25 * auVar34._12_4_;
            auVar55 = NEON_frsqrts(auVar34,auVar49,4);
            auVar44._0_4_ = auVar34._0_4_ * auVar55._0_4_;
            auVar44._4_4_ = auVar34._4_4_ * auVar55._4_4_;
            auVar44._8_4_ = auVar34._8_4_ * auVar55._8_4_;
            auVar44._12_4_ = auVar34._12_4_ * auVar55._12_4_;
            auVar50._0_4_ = fVar6 * auVar44._0_4_;
            auVar50._4_4_ = fVar25 * auVar44._4_4_;
            auVar50._8_4_ = fVar6 * auVar44._8_4_;
            auVar50._12_4_ = fVar25 * auVar44._12_4_;
            iVar24 = -(uint)(fVar6 == 0.0);
            iVar31 = -(uint)(fVar25 == 0.0);
            iVar32 = -(uint)(fVar6 == 0.0);
            iVar33 = -(uint)(fVar25 == 0.0);
            auVar28[0] = ~(byte)iVar24;
            auVar28[1] = ~(byte)((uint)iVar24 >> 8);
            auVar28[2] = ~(byte)((uint)iVar24 >> 0x10);
            auVar28[3] = ~(byte)((uint)iVar24 >> 0x18);
            auVar28[4] = ~(byte)iVar31;
            auVar28[5] = ~(byte)((uint)iVar31 >> 8);
            auVar28[6] = ~(byte)((uint)iVar31 >> 0x10);
            auVar28[7] = ~(byte)((uint)iVar31 >> 0x18);
            auVar28[8] = ~(byte)iVar32;
            auVar28[9] = ~(byte)((uint)iVar32 >> 8);
            auVar28[10] = ~(byte)((uint)iVar32 >> 0x10);
            auVar28[0xb] = ~(byte)((uint)iVar32 >> 0x18);
            auVar28[0xc] = ~(byte)iVar33;
            auVar28[0xd] = ~(byte)((uint)iVar33 >> 8);
            auVar28[0xe] = ~(byte)((uint)iVar33 >> 0x10);
            auVar28[0xf] = ~(byte)((uint)iVar33 >> 0x18);
            auVar34 = NEON_frsqrts(auVar44,auVar50,4);
            auVar29._8_4_ = 0x80000000;
            auVar29._0_8_ = 0x8000000080000000;
            auVar29._12_4_ = 0x80000000;
            fVar25 = -(fStack_6c * auVar44._4_4_ * auVar34._4_4_);
            fVar3 = -(fVar3 * auVar44._8_4_ * auVar34._8_4_);
            fVar5 = -(fStack_64 * auVar44._12_4_ * auVar34._12_4_);
            auVar1[4] = SUB41(fVar25,0);
            auVar1._0_4_ = -(fVar2 * auVar44._0_4_ * auVar34._0_4_);
            auVar1[5] = (char)((uint)fVar25 >> 8);
            auVar1[6] = (char)((uint)fVar25 >> 0x10);
            auVar1[7] = (char)((uint)fVar25 >> 0x18);
            auVar1[8] = SUB41(fVar3,0);
            auVar1[9] = (char)((uint)fVar3 >> 8);
            auVar1[10] = (char)((uint)fVar3 >> 0x10);
            auVar1[0xb] = (char)((uint)fVar3 >> 0x18);
            auVar1[0xc] = SUB41(fVar5,0);
            auVar1[0xd] = (char)((uint)fVar5 >> 8);
            auVar1[0xe] = (char)((uint)fVar5 >> 0x10);
            auVar1[0xf] = (char)((uint)fVar5 >> 0x18);
            auVar29 = auVar29 ^ (auVar29 ^ auVar1) & auVar28;
            fVar2 = (fVar23 - SQRT(fVar6)) + 0.5;
            fVar6 = auVar29._0_4_ * fVar2;
            uVar7 = SUB41(fVar6,0);
            uVar8 = (undefined1)((uint)fVar6 >> 8);
            uVar9 = (undefined1)((uint)fVar6 >> 0x10);
            uVar10 = (undefined1)((uint)fVar6 >> 0x18);
            fVar6 = auVar29._4_4_ * fVar2;
            uVar11 = SUB41(fVar6,0);
            uVar12 = (undefined1)((uint)fVar6 >> 8);
            uVar13 = (undefined1)((uint)fVar6 >> 0x10);
            uVar14 = (undefined1)((uint)fVar6 >> 0x18);
            fVar6 = auVar29._8_4_ * fVar2;
            uVar15 = SUB41(fVar6,0);
            uVar16 = (undefined1)((uint)fVar6 >> 8);
            uVar17 = (undefined1)((uint)fVar6 >> 0x10);
            uVar18 = (undefined1)((uint)fVar6 >> 0x18);
            fVar2 = auVar29._12_4_ * fVar2;
            uVar19 = SUB41(fVar2,0);
            uVar20 = (undefined1)((uint)fVar2 >> 8);
            uVar21 = (undefined1)((uint)fVar2 >> 0x10);
            uVar22 = (undefined1)((uint)fVar2 >> 0x18);
            goto LAB_006cc2a8;
          }
        }
      }
    }
  }
  return 0;
}


