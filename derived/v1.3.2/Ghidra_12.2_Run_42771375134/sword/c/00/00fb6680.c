/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb6680; name: FUN_00fb6680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fb6680(long param_1)

{
  float *pfVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined2 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  long lVar25;
  ulong *puVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long *plVar32;
  uint uVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 *local_140;
  undefined8 uStack_138;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 **local_a0 [3];
  undefined8 *local_88;
  undefined8 uStack_80;
  
  if (*(int *)(param_1 + 0x54) == 2) {
    if (*(char *)(param_1 + 0x5b) == '\0') {
      iVar28 = *(int *)(param_1 + 0x288);
      iVar27 = *(int *)(param_1 + 0xcf4);
      if (iVar27 < iVar28) goto LAB_00fb66cc;
    }
    else {
      iVar28 = 1;
      iVar27 = *(int *)(param_1 + 0xcf4);
      if (iVar27 < 1) {
LAB_00fb66cc:
        iVar5 = iVar28;
        if (iVar27 + 1 <= iVar28) {
          iVar5 = iVar27 + 1;
        }
        iVar15 = 0;
        if (-2 < iVar27) {
          iVar15 = iVar5;
        }
        *(int *)(param_1 + 0xcf4) = iVar15;
        *(float *)(param_1 + 0xd00) =
             *(float *)(param_1 + 0xcfc) +
             ((float)iVar15 / (float)iVar28) *
             (*(float *)(param_1 + 0x290) - *(float *)(param_1 + 0xcfc));
        FUN_00dab3a0(*(undefined8 *)(param_1 + 0x70));
        FUN_00fb7690((float)*(int *)(param_1 + 0xcf4) / (float)iVar28,param_1,param_1 + 0x1730);
        FUN_00dab3f0(*(undefined8 *)(param_1 + 0x70),param_1 + 0x1730);
      }
    }
    iVar27 = *(int *)(param_1 + 0x2150);
    if (-1 < iVar27) {
      iVar28 = *(int *)(param_1 + 0x288);
      fVar58 = (float)iVar28;
      if (iVar27 + 1 <= iVar28) {
        iVar28 = iVar27 + 1;
      }
      *(int *)(param_1 + 0x2150) = iVar28;
      *(float *)(param_1 + 0x215c) =
           *(float *)(param_1 + 0x2154) +
           (*(float *)(param_1 + 0x2158) - *(float *)(param_1 + 0x2154)) * ((float)iVar28 / fVar58);
      FUN_00dab3a0(*(undefined8 *)(param_1 + 0x70));
      if (*(int *)(param_1 + 0x288) <= *(int *)(param_1 + 0x2150)) {
        *(undefined4 *)(param_1 + 0x2150) = 0xffffffff;
      }
    }
  }
  if ((*(long *)(param_1 + 0x2178) != 0) && (*(char *)(*(long *)(param_1 + 0x2178) + 0x170) != '\0')
     ) {
    local_88 = &local_110;
    local_110 = (undefined8 ***)0x0;
    uStack_108 = 0;
    local_a0[0] = &local_140;
    uStack_138 = _UNK_01d49df8;
    local_140 = _DAT_01d49df0;
    uVar22 = (**(code **)(param_1 + 0xb0))(param_1 + 0xd0,&local_88,local_a0);
    if ((uVar22 & 1) != 0) {
      fVar37 = SUB84(local_140,0);
      fVar58 = fVar37 * fVar37;
      fVar39 = (float)((ulong)local_140 >> 0x20);
      fVar38 = fVar39 * fVar39;
      uVar45 = (undefined1)((uint)fVar38 >> 8);
      uVar46 = (undefined1)((uint)fVar38 >> 0x10);
      uVar47 = (undefined1)((uint)fVar38 >> 0x18);
      fVar41 = (float)uStack_138;
      fVar35 = fVar41 * fVar41;
      uVar48 = (undefined1)((uint)fVar35 >> 8);
      uVar49 = (undefined1)((uint)fVar35 >> 0x10);
      uVar50 = (undefined1)((uint)fVar35 >> 0x18);
      fVar43 = (float)((ulong)uStack_138 >> 0x20);
      fVar36 = fVar43 * fVar43;
      uVar51 = (undefined1)((uint)fVar36 >> 8);
      uVar52 = (undefined1)((uint)fVar36 >> 0x10);
      uVar53 = (undefined1)((uint)fVar36 >> 0x18);
      auVar54[4] = SUB41(fVar38,0);
      auVar54._0_4_ = fVar58;
      auVar54[5] = uVar45;
      auVar54[6] = uVar46;
      auVar54[7] = uVar47;
      auVar54[8] = SUB41(fVar35,0);
      auVar54[9] = uVar48;
      auVar54[10] = uVar49;
      auVar54[0xb] = uVar50;
      auVar54[0xc] = SUB41(fVar36,0);
      auVar54[0xd] = uVar51;
      auVar54[0xe] = uVar52;
      auVar54[0xf] = uVar53;
      auVar60[4] = SUB41(fVar38,0);
      auVar60._0_4_ = fVar58;
      auVar60[5] = uVar45;
      auVar60[6] = uVar46;
      auVar60[7] = uVar47;
      auVar60[8] = SUB41(fVar35,0);
      auVar60[9] = uVar48;
      auVar60[10] = uVar49;
      auVar60[0xb] = uVar50;
      auVar60[0xc] = SUB41(fVar36,0);
      auVar60[0xd] = uVar51;
      auVar60[0xe] = uVar52;
      auVar60[0xf] = uVar53;
      auVar54 = NEON_ext(auVar54,auVar60,8,1);
      fVar58 = auVar54._0_4_ + fVar58;
      fVar38 = auVar54._4_4_ + fVar38;
      fVar35 = fVar58 + fVar38;
      fVar58 = fVar58 + fVar38;
      uVar45 = SUB41(fVar58,0);
      uVar46 = (undefined1)((uint)fVar58 >> 8);
      uVar47 = (undefined1)((uint)fVar58 >> 0x10);
      uVar48 = (undefined1)((uint)fVar58 >> 0x18);
      if (fVar35 <= 0.0) goto LAB_00fb6fa4;
      auVar6[4] = uVar45;
      auVar6._0_4_ = fVar35;
      auVar6[5] = uVar46;
      auVar6[6] = uVar47;
      auVar6[7] = uVar48;
      auVar6[8] = SUB41(fVar35,0);
      auVar6[9] = (char)((uint)fVar35 >> 8);
      auVar6[10] = (char)((uint)fVar35 >> 0x10);
      auVar6[0xb] = (char)((uint)fVar35 >> 0x18);
      auVar6[0xc] = uVar45;
      auVar6[0xd] = uVar46;
      auVar6[0xe] = uVar47;
      auVar6[0xf] = uVar48;
      auVar54 = NEON_frsqrte(auVar6,4);
      auVar59._0_4_ = fVar35 * auVar54._0_4_;
      auVar59._4_4_ = fVar58 * auVar54._4_4_;
      auVar59._8_4_ = fVar35 * auVar54._8_4_;
      uVar13 = (undefined2)(CONCAT15(uVar46,CONCAT14(uVar45,fVar35)) >> 0x20);
      auVar59._12_4_ = (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) * auVar54._12_4_;
      auVar60 = NEON_frsqrts(auVar54,auVar59,4);
      auVar55._0_4_ = auVar54._0_4_ * auVar60._0_4_;
      auVar55._4_4_ = auVar54._4_4_ * auVar60._4_4_;
      auVar55._8_4_ = auVar54._8_4_ * auVar60._8_4_;
      auVar55._12_4_ = auVar54._12_4_ * auVar60._12_4_;
      auVar61._0_4_ = fVar35 * auVar55._0_4_;
      auVar61._4_4_ = fVar58 * auVar55._4_4_;
      auVar61._8_4_ = fVar35 * auVar55._8_4_;
      auVar61._12_4_ = (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) * auVar55._12_4_;
      iVar27 = -(uint)(fVar35 == 0.0);
      iVar28 = -(uint)(fVar58 == 0.0);
      iVar5 = -(uint)(fVar35 == 0.0);
      iVar15 = -(uint)((float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) == 0.0);
      auVar54 = NEON_frsqrts(auVar55,auVar61,4);
      fVar37 = fVar37 * auVar55._0_4_ * auVar54._0_4_;
      fVar39 = fVar39 * auVar55._4_4_ * auVar54._4_4_;
      fVar41 = fVar41 * auVar55._8_4_ * auVar54._8_4_;
      fVar43 = fVar43 * auVar55._12_4_ * auVar54._12_4_;
      local_140 = (undefined8 *)
                  CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                           CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                    CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                             CONCAT14(SUB41(fVar39,0) & ~(byte)iVar28,
                                                      CONCAT13((byte)((uint)fVar37 >> 0x18) &
                                                               ~(byte)((uint)iVar27 >> 0x18),
                                                               CONCAT12((byte)((uint)fVar37 >> 0x10)
                                                                        & ~(byte)((uint)iVar27 >>
                                                                                 0x10),
                                                                        CONCAT11((byte)((uint)fVar37
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar27 >> 8),SUB41(fVar37,0) & ~(byte)iVar27))))))
                          );
      uStack_138 = CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                            CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                     CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar15 >> 8)
                                              ,CONCAT14(SUB41(fVar43,0) & ~(byte)iVar15,
                                                        CONCAT13((byte)((uint)fVar41 >> 0x18) &
                                                                 ~(byte)((uint)iVar5 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar41 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar5 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar41 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                                  SUB41(fVar41,0) & ~(byte)iVar5)))))));
      if (*(char *)(param_1 + 0xcc0) != '\0') {
        fVar58 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
        fVar35 = (float)((ulong)_DAT_02a613d0 >> 0x20);
        uVar22 = (ulong)-(fVar35 * (fVar58 / *(float *)PTR_FloatDegree180_027194f0));
        pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar22 >> 0x18 & 0xff) * 0x10);
        fVar58 = (float)((uint)uVar22 & 0xffffff) * DAT_01d4bc78;
        fVar38 = (*pfVar1 + pfVar1[2] * fVar58) * 0.0;
        fVar58 = (pfVar1[1] + pfVar1[3] * fVar58) * 0.0;
        local_110 = (undefined8 ***)
                    CONCAT44((float)((ulong)_DAT_02a613c0 >> 0x20) + 0.0,
                             (float)_DAT_02a613c0 + (fVar38 - fVar58));
        uStack_108 = CONCAT44((float)((ulong)uRam0000000002a613c8 >> 0x20) + 0.0,
                              (float)uRam0000000002a613c8 + fVar58 + fVar38);
        lVar31 = *(long *)(param_1 + 0x25c0);
        fVar58 = *(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0;
        auVar54 = FUN_00a92cd0(fVar58 * (fVar35 + 0.0),
                               SUB41(fVar58 * ((float)_DAT_02a613d0 + 0.0),0));
        *(undefined1 *)(lVar31 + 0xc0) = 1;
        *(undefined1 (*) [16])(lVar31 + 0xa0) = auVar54;
      }
      fVar58 = *(float *)(param_1 + 0x270);
      lVar31 = *(long *)(param_1 + 0x25c0);
      *(undefined1 *)(lVar31 + 0xc0) = 1;
      *(ulong *)(lVar31 + 0xb8) =
           CONCAT44(uStack_108._4_4_ + (float)((ulong)uStack_138 >> 0x20) * fVar58,
                    (float)uStack_108 + (float)uStack_138 * fVar58);
      *(ulong *)(lVar31 + 0xb0) =
           CONCAT44(local_110._4_4_ + (float)((ulong)local_140 >> 0x20) * fVar58,
                    (float)local_110 + SUB84(local_140,0) * fVar58);
    }
  }
  if ((*(long *)(param_1 + 0x2398) != 0) && (*(char *)(*(long *)(param_1 + 0x2398) + 0x170) != '\0')
     ) {
    local_88 = &local_110;
    local_a0[0] = &local_140;
    uVar22 = (**(code **)(param_1 + 0xb0))(param_1 + 0xd0,&local_88,local_a0);
    if ((uVar22 & 1) != 0) {
      fVar58 = *(float *)(param_1 + 0x274);
      fVar38 = (float)_DAT_01d4b580;
      uVar22 = (ulong)_DAT_01d4b580 >> 0x20;
      fVar35 = (float)_UNK_01d4b588;
      uVar29 = (ulong)_UNK_01d4b588 >> 0x20;
      lVar31 = *(long *)(param_1 + 0x25d0);
      *(undefined1 *)(lVar31 + 0xc0) = 1;
      *(ulong *)(lVar31 + 0xb8) =
           CONCAT44((float)((ulong)uStack_108 >> 0x20) + (float)uVar29 * fVar58,
                    (float)uStack_108 + fVar35 * fVar58);
      *(ulong *)(lVar31 + 0xb0) =
           CONCAT44((float)((ulong)local_110 >> 0x20) + (float)uVar22 * fVar58,
                    SUB84(local_110,0) + fVar38 * fVar58);
    }
  }
  if ((*(long *)(param_1 + 0x24a8) != 0) && (*(char *)(*(long *)(param_1 + 0x24a8) + 0x170) != '\0')
     ) {
    local_88 = &local_110;
    local_a0[0] = &local_140;
    uVar22 = (**(code **)(param_1 + 0x130))(param_1 + 0x150,&local_88,local_a0);
    if ((uVar22 & 1) != 0) {
      fVar37 = SUB84(local_140,0);
      fVar58 = fVar37 * fVar37;
      fVar39 = (float)((ulong)local_140 >> 0x20);
      fVar38 = fVar39 * fVar39;
      uVar45 = (undefined1)((uint)fVar38 >> 8);
      uVar46 = (undefined1)((uint)fVar38 >> 0x10);
      uVar47 = (undefined1)((uint)fVar38 >> 0x18);
      fVar41 = (float)uStack_138;
      fVar35 = fVar41 * fVar41;
      uVar48 = (undefined1)((uint)fVar35 >> 8);
      uVar49 = (undefined1)((uint)fVar35 >> 0x10);
      uVar50 = (undefined1)((uint)fVar35 >> 0x18);
      fVar43 = (float)((ulong)uStack_138 >> 0x20);
      fVar36 = fVar43 * fVar43;
      uVar51 = (undefined1)((uint)fVar36 >> 8);
      uVar52 = (undefined1)((uint)fVar36 >> 0x10);
      uVar53 = (undefined1)((uint)fVar36 >> 0x18);
      auVar7[4] = SUB41(fVar38,0);
      auVar7._0_4_ = fVar58;
      auVar7[5] = uVar45;
      auVar7[6] = uVar46;
      auVar7[7] = uVar47;
      auVar7[8] = SUB41(fVar35,0);
      auVar7[9] = uVar48;
      auVar7[10] = uVar49;
      auVar7[0xb] = uVar50;
      auVar7[0xc] = SUB41(fVar36,0);
      auVar7[0xd] = uVar51;
      auVar7[0xe] = uVar52;
      auVar7[0xf] = uVar53;
      auVar8[4] = SUB41(fVar38,0);
      auVar8._0_4_ = fVar58;
      auVar8[5] = uVar45;
      auVar8[6] = uVar46;
      auVar8[7] = uVar47;
      auVar8[8] = SUB41(fVar35,0);
      auVar8[9] = uVar48;
      auVar8[10] = uVar49;
      auVar8[0xb] = uVar50;
      auVar8[0xc] = SUB41(fVar36,0);
      auVar8[0xd] = uVar51;
      auVar8[0xe] = uVar52;
      auVar8[0xf] = uVar53;
      auVar54 = NEON_ext(auVar7,auVar8,8,1);
      fVar58 = auVar54._0_4_ + fVar58;
      fVar38 = auVar54._4_4_ + fVar38;
      fVar35 = fVar58 + fVar38;
      fVar58 = fVar58 + fVar38;
      uVar45 = SUB41(fVar58,0);
      uVar46 = (undefined1)((uint)fVar58 >> 8);
      uVar47 = (undefined1)((uint)fVar58 >> 0x10);
      uVar48 = (undefined1)((uint)fVar58 >> 0x18);
      if (fVar35 <= 0.0) {
LAB_00fb6fa4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      auVar9[4] = uVar45;
      auVar9._0_4_ = fVar35;
      auVar9[5] = uVar46;
      auVar9[6] = uVar47;
      auVar9[7] = uVar48;
      auVar9[8] = SUB41(fVar35,0);
      auVar9[9] = (char)((uint)fVar35 >> 8);
      auVar9[10] = (char)((uint)fVar35 >> 0x10);
      auVar9[0xb] = (char)((uint)fVar35 >> 0x18);
      auVar9[0xc] = uVar45;
      auVar9[0xd] = uVar46;
      auVar9[0xe] = uVar47;
      auVar9[0xf] = uVar48;
      auVar54 = NEON_frsqrte(auVar9,4);
      auVar62._0_4_ = fVar35 * auVar54._0_4_;
      auVar62._4_4_ = fVar58 * auVar54._4_4_;
      auVar62._8_4_ = fVar35 * auVar54._8_4_;
      uVar13 = (undefined2)(CONCAT15(uVar46,CONCAT14(uVar45,fVar35)) >> 0x20);
      auVar62._12_4_ = (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) * auVar54._12_4_;
      auVar60 = NEON_frsqrts(auVar54,auVar62,4);
      auVar56._0_4_ = auVar54._0_4_ * auVar60._0_4_;
      auVar56._4_4_ = auVar54._4_4_ * auVar60._4_4_;
      auVar56._8_4_ = auVar54._8_4_ * auVar60._8_4_;
      auVar56._12_4_ = auVar54._12_4_ * auVar60._12_4_;
      auVar63._0_4_ = fVar35 * auVar56._0_4_;
      auVar63._4_4_ = fVar58 * auVar56._4_4_;
      auVar63._8_4_ = fVar35 * auVar56._8_4_;
      auVar63._12_4_ = (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) * auVar56._12_4_;
      iVar27 = -(uint)(fVar35 == 0.0);
      iVar28 = -(uint)(fVar58 == 0.0);
      iVar5 = -(uint)(fVar35 == 0.0);
      iVar15 = -(uint)((float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) == 0.0);
      auVar54 = NEON_frsqrts(auVar56,auVar63,4);
      fVar37 = fVar37 * auVar56._0_4_ * auVar54._0_4_;
      fVar39 = fVar39 * auVar56._4_4_ * auVar54._4_4_;
      fVar41 = fVar41 * auVar56._8_4_ * auVar54._8_4_;
      fVar43 = fVar43 * auVar56._12_4_ * auVar54._12_4_;
      fVar38 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                               CONCAT12((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar37 >> 8) &
                                                  ~(byte)((uint)iVar27 >> 8),
                                                  SUB41(fVar37,0) & ~(byte)iVar27)));
      local_140 = (undefined8 *)
                  CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                           CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                    CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                             CONCAT14(SUB41(fVar39,0) & ~(byte)iVar28,fVar38))));
      fVar35 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                               CONCAT12((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                        CONCAT11((byte)((uint)fVar41 >> 8) &
                                                 ~(byte)((uint)iVar5 >> 8),
                                                 SUB41(fVar41,0) & ~(byte)iVar5)));
      uStack_138 = CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                            CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                     CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar15 >> 8)
                                              ,CONCAT14(SUB41(fVar43,0) & ~(byte)iVar15,fVar35))));
      fVar58 = *(float *)(param_1 + 0x278);
      lVar31 = *(long *)(param_1 + 0x25d8);
      *(ulong *)(lVar31 + 0xb8) =
           CONCAT44(uStack_108._4_4_ + (float)((ulong)uStack_138 >> 0x20) * fVar58,
                    (float)uStack_108 + fVar35 * fVar58);
      *(ulong *)(lVar31 + 0xb0) =
           CONCAT44(local_110._4_4_ + (float)((ulong)local_140 >> 0x20) * fVar58,
                    (float)local_110 + fVar38 * fVar58);
      *(undefined1 *)(lVar31 + 0xc0) = 1;
    }
  }
  puVar19 = PTR_DAT_02710848;
  if (*(char *)(param_1 + 0x2160) != '\0') {
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    lVar31 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
    if (lVar31 == 0) {
      FUN_0101cb00(0,&local_88);
    }
    else {
      plVar32 = (long *)(lVar31 + 0x48);
      (**(code **)(*plVar32 + 0x10))(plVar32);
      FUN_0101cb00(lVar31,&local_88);
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
    fVar58 = *(float *)(param_1 + 0x2164) + *(float *)(param_1 + 0x280);
    uVar33 = (uint)fVar58;
    *(float *)(param_1 + 0x2164) = fVar58 - (float)(int)uVar33;
    fVar58 = DAT_01d4c098;
    uVar18 = _UNK_01d4a7a8;
    uVar17 = _DAT_01d4a7a0;
    uVar16 = _UNK_01d4a1b8;
    uVar24 = _DAT_01d4a1b0;
    if (uVar33 != 0) {
      uVar34 = 0;
      do {
        local_110 = local_a0;
        puVar26 = *(ulong **)(*(long *)puVar19 + 0x98);
        uVar22 = *puVar26;
        uVar29 = puVar26[1];
        do {
          uVar30 = uVar22 ^ uVar29;
          iVar28 = (int)uVar29;
          iVar27 = (int)uVar22;
          uVar29 = uVar30 >> 0x1b | uVar30 << 0x25;
          uVar22 = uVar30 ^ (uVar22 >> 0x28 | uVar22 << 0x18) ^ uVar30 << 0x10;
          uVar3 = iVar27 + iVar28 & 0x7fff;
        } while (20000 < uVar3);
        *puVar26 = uVar22;
        puVar26[1] = uVar29;
        puVar26 = *(ulong **)(*(long *)puVar19 + 0x98);
        uVar22 = *puVar26;
        uVar29 = puVar26[1];
        do {
          uVar30 = uVar22 ^ uVar29;
          iVar28 = (int)uVar29;
          iVar27 = (int)uVar22;
          uVar29 = uVar30 >> 0x1b | uVar30 << 0x25;
          uVar22 = uVar30 ^ (uVar22 >> 0x28 | uVar22 << 0x18) ^ uVar30 << 0x10;
          uVar4 = iVar27 + iVar28 & 0x7fff;
        } while (20000 < uVar4);
        *puVar26 = uVar22;
        puVar26[1] = uVar29;
        fVar35 = *(float *)(param_1 + 0x284);
        fVar38 = ((float)(int)(uVar3 - 10000) / fVar58) * fVar35;
        uVar14 = *(undefined4 *)(param_1 + 0x27c);
        local_140 = &local_b0;
        uVar22 = (**(code **)(param_1 + 0xb0))(param_1 + 0xd0,&local_110,&local_140);
        if ((uVar22 & 1) != 0) {
          fVar43 = (float)local_b0;
          fVar36 = fVar43 * fVar43;
          fVar40 = (float)((ulong)local_b0 >> 0x20);
          fVar37 = fVar40 * fVar40;
          uVar45 = (undefined1)((uint)fVar37 >> 8);
          uVar46 = (undefined1)((uint)fVar37 >> 0x10);
          uVar47 = (undefined1)((uint)fVar37 >> 0x18);
          fVar42 = (float)uStack_a8;
          fVar39 = fVar42 * fVar42;
          uVar48 = (undefined1)((uint)fVar39 >> 8);
          uVar49 = (undefined1)((uint)fVar39 >> 0x10);
          uVar50 = (undefined1)((uint)fVar39 >> 0x18);
          fVar44 = (float)((ulong)uStack_a8 >> 0x20);
          fVar41 = fVar44 * fVar44;
          uVar51 = (undefined1)((uint)fVar41 >> 8);
          uVar52 = (undefined1)((uint)fVar41 >> 0x10);
          uVar53 = (undefined1)((uint)fVar41 >> 0x18);
          auVar10[4] = SUB41(fVar37,0);
          auVar10._0_4_ = fVar36;
          auVar10[5] = uVar45;
          auVar10[6] = uVar46;
          auVar10[7] = uVar47;
          auVar10[8] = SUB41(fVar39,0);
          auVar10[9] = uVar48;
          auVar10[10] = uVar49;
          auVar10[0xb] = uVar50;
          auVar10[0xc] = SUB41(fVar41,0);
          auVar10[0xd] = uVar51;
          auVar10[0xe] = uVar52;
          auVar10[0xf] = uVar53;
          auVar11[4] = SUB41(fVar37,0);
          auVar11._0_4_ = fVar36;
          auVar11[5] = uVar45;
          auVar11[6] = uVar46;
          auVar11[7] = uVar47;
          auVar11[8] = SUB41(fVar39,0);
          auVar11[9] = uVar48;
          auVar11[10] = uVar49;
          auVar11[0xb] = uVar50;
          auVar11[0xc] = SUB41(fVar41,0);
          auVar11[0xd] = uVar51;
          auVar11[0xe] = uVar52;
          auVar11[0xf] = uVar53;
          auVar54 = NEON_ext(auVar10,auVar11,8,1);
          fVar36 = auVar54._0_4_ + fVar36;
          fVar37 = auVar54._4_4_ + fVar37;
          fVar39 = fVar36 + fVar37;
          fVar36 = fVar36 + fVar37;
          uVar45 = SUB41(fVar36,0);
          uVar46 = (undefined1)((uint)fVar36 >> 8);
          uVar47 = (undefined1)((uint)fVar36 >> 0x10);
          uVar48 = (undefined1)((uint)fVar36 >> 0x18);
          if (fVar39 <= 0.0) goto LAB_00fb6fa4;
          auVar12[4] = uVar45;
          auVar12._0_4_ = fVar39;
          auVar12[5] = uVar46;
          auVar12[6] = uVar47;
          auVar12[7] = uVar48;
          auVar12[8] = SUB41(fVar39,0);
          auVar12[9] = (char)((uint)fVar39 >> 8);
          auVar12[10] = (char)((uint)fVar39 >> 0x10);
          auVar12[0xb] = (char)((uint)fVar39 >> 0x18);
          auVar12[0xc] = uVar45;
          auVar12[0xd] = uVar46;
          auVar12[0xe] = uVar47;
          auVar12[0xf] = uVar48;
          auVar54 = NEON_frsqrte(auVar12,4);
          auVar64._0_4_ = fVar39 * auVar54._0_4_;
          auVar64._4_4_ = fVar36 * auVar54._4_4_;
          auVar64._8_4_ = fVar39 * auVar54._8_4_;
          uVar13 = (undefined2)(CONCAT15(uVar46,CONCAT14(uVar45,fVar39)) >> 0x20);
          auVar64._12_4_ = (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) * auVar54._12_4_;
          auVar60 = NEON_frsqrts(auVar54,auVar64,4);
          auVar57._0_4_ = auVar54._0_4_ * auVar60._0_4_;
          auVar57._4_4_ = auVar54._4_4_ * auVar60._4_4_;
          auVar57._8_4_ = auVar54._8_4_ * auVar60._8_4_;
          auVar57._12_4_ = auVar54._12_4_ * auVar60._12_4_;
          auVar65._0_4_ = fVar39 * auVar57._0_4_;
          auVar65._4_4_ = fVar36 * auVar57._4_4_;
          auVar65._8_4_ = fVar39 * auVar57._8_4_;
          auVar65._12_4_ = (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) * auVar57._12_4_;
          iVar27 = -(uint)(fVar39 == 0.0);
          iVar28 = -(uint)(fVar36 == 0.0);
          iVar5 = -(uint)(fVar39 == 0.0);
          iVar15 = -(uint)((float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) == 0.0);
          auVar54 = NEON_frsqrts(auVar57,auVar65,4);
          fVar43 = fVar43 * auVar57._0_4_ * auVar54._0_4_;
          fVar40 = fVar40 * auVar57._4_4_ * auVar54._4_4_;
          fVar42 = fVar42 * auVar57._8_4_ * auVar54._8_4_;
          fVar44 = fVar44 * auVar57._12_4_ * auVar54._12_4_;
          fVar36 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                                   CONCAT12((byte)((uint)fVar43 >> 0x10) &
                                            ~(byte)((uint)iVar27 >> 0x10),
                                            CONCAT11((byte)((uint)fVar43 >> 8) &
                                                     ~(byte)((uint)iVar27 >> 8),
                                                     SUB41(fVar43,0) & ~(byte)iVar27)));
          local_b0 = CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                              CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                       CONCAT15((byte)((uint)fVar40 >> 8) &
                                                ~(byte)((uint)iVar28 >> 8),
                                                CONCAT14(SUB41(fVar40,0) & ~(byte)iVar28,fVar36))));
          fVar39 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                                   CONCAT12((byte)((uint)fVar42 >> 0x10) &
                                            ~(byte)((uint)iVar5 >> 0x10),
                                            CONCAT11((byte)((uint)fVar42 >> 8) &
                                                     ~(byte)((uint)iVar5 >> 8),
                                                     SUB41(fVar42,0) & ~(byte)iVar5)));
          uStack_a8 = CONCAT17((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                               CONCAT16((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10)
                                        ,CONCAT15((byte)((uint)fVar44 >> 8) &
                                                  ~(byte)((uint)iVar15 >> 8),
                                                  CONCAT14(SUB41(fVar44,0) & ~(byte)iVar15,fVar39)))
                              );
          fVar41 = *(float *)(param_1 + 0x284);
          fVar36 = fVar38 + SUB84(local_a0[0],0) + fVar36 * fVar41;
          fVar37 = (float)(CONCAT17((char)((uint)uVar14 >> 0x18),
                                    CONCAT16((char)((uint)uVar14 >> 0x10),
                                             CONCAT15((char)((uint)uVar14 >> 8),
                                                      CONCAT14((char)uVar14,fVar38)))) >> 0x20) +
                   (float)((ulong)local_a0[0] >> 0x20) + (float)((ulong)local_b0 >> 0x20) * fVar41;
          fVar39 = ((float)(int)(uVar4 - 10000) / fVar58) * fVar35 + SUB84(local_a0[1],0) +
                   fVar39 * fVar41;
          fVar41 = (float)((ulong)local_a0[1] >> 0x20) + 0.0 +
                   (float)((ulong)uStack_a8 >> 0x20) * fVar41;
          fVar38 = fVar37 + (float)((ulong)uVar24 >> 0x20);
          fVar35 = fVar41 + (float)((ulong)uVar16 >> 0x20);
          local_d0 = CONCAT44(fVar37 + (float)((ulong)uVar17 >> 0x20),fVar36 + (float)uVar17);
          uStack_c8 = CONCAT44(fVar41 + (float)((ulong)uVar18 >> 0x20),fVar39 + (float)uVar18);
          uStack_b8 = CONCAT17((char)((uint)fVar35 >> 0x18),
                               CONCAT16((char)((uint)fVar35 >> 0x10),
                                        CONCAT15((char)((uint)fVar35 >> 8),
                                                 CONCAT14(SUB41(fVar35,0),fVar39 + (float)uVar16))))
          ;
          uStack_c0 = CONCAT17((char)((uint)fVar38 >> 0x18),
                               CONCAT16((char)((uint)fVar38 >> 0x10),
                                        CONCAT15((char)((uint)fVar38 >> 8),
                                                 CONCAT14(SUB41(fVar38,0),fVar36 + (float)uVar24))))
          ;
          FUN_006c5c60(&local_110);
          FUN_006c83a0(*(undefined8 *)(param_1 + 0x90),&uStack_c0,&local_d0,4,&local_110);
          uVar22 = FUN_006c5d60(&local_110);
          if ((uVar22 & 1) != 0) {
            FUN_006c5d20(&local_140,&local_110);
            uVar21 = uStack_138;
            puVar20 = local_140;
            plVar32 = (long *)(param_1 + 0x2600);
            if (((((*(long *)(param_1 + 0x2600) != 0) &&
                  (plVar32 = (long *)(param_1 + 0x2608), *(long *)(param_1 + 0x2608) != 0)) &&
                 (plVar32 = (long *)(param_1 + 0x2610), *(long *)(param_1 + 0x2610) != 0)) &&
                (((plVar32 = (long *)(param_1 + 0x2618), *(long *)(param_1 + 0x2618) != 0 &&
                  (plVar32 = (long *)(param_1 + 0x2620), *(long *)(param_1 + 0x2620) != 0)) &&
                 ((plVar32 = (long *)(param_1 + 0x2628), *(long *)(param_1 + 0x2628) != 0 &&
                  ((plVar32 = (long *)(param_1 + 0x2630), *(long *)(param_1 + 0x2630) != 0 &&
                   (plVar32 = (long *)(param_1 + 0x2638), *(long *)(param_1 + 0x2638) != 0))))))))
               && ((plVar32 = (long *)(param_1 + 0x2640), *(long *)(param_1 + 0x2640) != 0 &&
                   (((((plVar32 = (long *)(param_1 + 0x2648), *(long *)(param_1 + 0x2648) != 0 &&
                       (plVar32 = (long *)(param_1 + 0x2650), *(long *)(param_1 + 0x2650) != 0)) &&
                      (plVar32 = (long *)(param_1 + 0x2658), *(long *)(param_1 + 0x2658) != 0)) &&
                     ((plVar32 = (long *)(param_1 + 0x2660), *(long *)(param_1 + 0x2660) != 0 &&
                      (plVar32 = (long *)(param_1 + 0x2668), *(long *)(param_1 + 0x2668) != 0)))) &&
                    (plVar32 = (long *)(param_1 + 0x2670), *(long *)(param_1 + 0x2670) != 0)))))) {
              if (*(long *)(param_1 + 0x2678) != 0) goto LAB_00fb6ef0;
              plVar32 = (long *)(param_1 + 0x2678);
            }
            lVar31 = FUN_00ad95d0(&local_140,*(undefined8 *)(param_1 + 8));
            if (lVar31 != 0) {
              (**(code **)(*(long *)(lVar31 + 0x48) + 0x10))();
            }
            if (*plVar32 != 0) {
              (**(code **)(*(long *)(*plVar32 + 0x48) + 0x18))();
              *plVar32 = 0;
            }
            *plVar32 = lVar31;
            FUN_010257f0(lVar31,&local_88);
            lVar31 = *plVar32;
            puVar23 = (undefined8 *)
                      FUN_00add530(&local_140,*(undefined8 *)(lVar31 + 8),param_1 + 0x98);
            if (puVar23 != (undefined8 *)0x0) {
              (**(code **)(puVar23[9] + 0x10))();
            }
            local_140 = puVar23;
            FUN_006d9640(lVar31,&local_140);
            if (local_140 != (undefined8 *)0x0) {
              (**(code **)(local_140[9] + 0x18))();
              local_140 = (undefined8 *)0x0;
            }
            FUN_00794370(puVar23,param_1 + 0x2280);
            FUN_00794790(puVar23,*(undefined8 *)(param_1 + 0x78));
            FUN_007946a0(puVar23,1);
            lVar31 = *plVar32;
            *(undefined1 *)(lVar31 + 0xc0) = 1;
            *(undefined8 *)(lVar31 + 0xb8) = uVar21;
            *(undefined8 **)(lVar31 + 0xb0) = puVar20;
          }
LAB_00fb6ef0:
          FUN_006c5c80(&local_110);
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 < uVar33);
    }
    lVar31 = 0;
    lVar2 = param_1 + 0x2600;
    do {
      if (*(long *)(lVar2 + lVar31) != 0) {
        uVar24 = FUN_015bee50(*(long *)(lVar2 + lVar31),&local_110);
        lVar25 = FUN_00794780();
        if (lVar25 == 0) {
          FUN_00794740(uVar24);
          FUN_00fb7c10(*(undefined8 *)(lVar2 + lVar31),&local_110);
          lVar25 = *(long *)(lVar2 + lVar31);
          *(undefined8 *)(lVar2 + lVar31) = 0;
          if (lVar25 != 0) {
            (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))();
          }
        }
      }
      lVar31 = lVar31 + 8;
    } while (lVar31 != 0x80);
  }
  FUN_00fb6fc0(param_1);
  return;
}


