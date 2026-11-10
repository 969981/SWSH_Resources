/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5fa50; name: FUN_00e5fa50
 */


/* WARNING: Removing unreachable block (ram,0x00e5fdac) */

void FUN_00e5fa50(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 uVar16;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [12];
  float fVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar33;
  int iVar34;
  float fVar35;
  int iVar36;
  undefined1 auVar31 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar39;
  int iVar44;
  int iVar45;
  undefined8 uVar46;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int iVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fStack_6c;
  float fStack_5c;
  float fStack_54;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  if ((*(char *)(param_1 + 0xd58) != '\0') && (*(char *)(param_1 + 0xbdc) != '\0')) {
    auVar29 = *(undefined1 (*) [16])(param_1 + 0xb0);
    FUN_00f51a00(*(undefined8 *)PTR_DAT_0271fc30,param_1);
    auVar5 = *(undefined1 (*) [16])(param_1 + 0xb0);
    fVar26 = auVar29._0_4_ - auVar5._0_4_;
    fVar35 = auVar29._8_4_ - auVar5._8_4_;
    fVar15 = fVar26 * fVar26;
    fVar3 = fVar35 * fVar35;
    uVar16 = (undefined1)((uint)fVar3 >> 8);
    uVar17 = (undefined1)((uint)fVar3 >> 0x10);
    uVar18 = (undefined1)((uint)fVar3 >> 0x18);
    auVar28._4_4_ = 0;
    auVar28._0_4_ = fVar15;
    auVar28[8] = SUB41(fVar3,0);
    auVar28[9] = uVar16;
    auVar28[10] = uVar17;
    auVar28[0xb] = uVar18;
    auVar28._12_4_ = 0;
    auVar41._4_4_ = 0;
    auVar41._0_4_ = fVar15;
    auVar41[8] = SUB41(fVar3,0);
    auVar41[9] = uVar16;
    auVar41[10] = uVar17;
    auVar41[0xb] = uVar18;
    auVar41._12_4_ = 0;
    auVar28 = NEON_ext(auVar28,auVar41,8,1);
    fVar15 = auVar28._0_4_ + fVar15;
    fVar3 = auVar28._4_4_ + 0.0;
    fVar13 = fVar15 + fVar3;
    fVar15 = fVar15 + fVar3;
    fStack_6c = (float)(CONCAT17((char)((uint)fVar15 >> 0x18),
                                 CONCAT16((char)((uint)fVar15 >> 0x10),
                                          CONCAT15((char)((uint)fVar15 >> 8),
                                                   CONCAT14(SUB41(fVar15,0),fVar13)))) >> 0x20);
    uVar46 = auVar5._8_8_;
    uVar12 = auVar5._0_8_;
    if (0.0 < fVar13) {
      uStack_38 = auVar29._8_8_;
      local_40 = auVar29._0_8_;
      lVar9 = *(long *)(param_1 + 0xc30);
      if (lVar9 == 0) {
LAB_00e5fb7c:
        lVar9 = *(long *)(param_1 + 0xc30);
        local_40 = uVar12;
        uStack_38 = uVar46;
        if (lVar9 != 0) {
          plVar10 = (long *)(lVar9 + 0x48);
          (**(code **)(*plVar10 + 0x10))(plVar10);
          lVar9 = *(long *)(lVar9 + 0x60);
          if (lVar9 != 0) {
            uVar7 = FUN_015b5320(lVar9);
            lVar9 = lVar9 + -0x50;
            if ((uVar7 & 1) == 0) {
              lVar9 = 0;
            }
          }
          (**(code **)(*plVar10 + 0x18))(plVar10);
          if (lVar9 != 0) {
            local_28 = *(long *)PTR_DAT_0271fc60;
            iVar6 = FUN_006c8060(*(undefined8 *)(param_1 + 0x288),&local_40,lVar9 + 0xb0,2,0,0,
                                 &local_28,1,0,0,1,0);
            if (iVar6 != 0) {
              *(undefined1 *)(param_1 + 0x218) = 0;
              *(undefined1 *)(param_1 + 0xb32) = 1;
              iVar6 = *(int *)(param_1 + 0xc00);
              goto joined_r0x00e5fe08;
            }
          }
        }
      }
      else {
        plVar10 = (long *)(lVar9 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        lVar9 = *(long *)(lVar9 + 0x60);
        if (lVar9 != 0) {
          uVar7 = FUN_015b5320(lVar9);
          lVar9 = lVar9 + -0x50;
          if ((uVar7 & 1) == 0) {
            lVar9 = 0;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10);
        if (lVar9 == 0) goto LAB_00e5fb7c;
        local_28 = *(long *)PTR_DAT_0271fc60;
        iVar6 = FUN_006c8060(*(undefined8 *)(param_1 + 0x288),&local_40,lVar9 + 0xb0,2,0,0,&local_28
                             ,1,0,0,1,0);
        if (iVar6 == 0) goto LAB_00e5fb7c;
      }
      if ((*(char *)(param_1 + 0xbd1) == '\0') && (*(int *)(param_1 + 0x5b8) == 3)) {
LAB_00e5fc40:
        *(undefined1 *)(param_1 + 0x218) = 0;
LAB_00e5fe10:
        *(undefined1 *)(param_1 + 0xb32) = 1;
      }
      else {
        lVar9 = *(long *)(*(long *)(param_1 + 0xb20) + 0x80);
        if ((lVar9 != 0) && (puVar11 = *(undefined8 **)(lVar9 + 0x60), puVar11 != (undefined8 *)0x0)
           ) {
          plVar10 = (long *)(**(code **)*puVar11)(puVar11);
          if (((*PTR_DAT_02715280 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_02715280), iVar6 != 0)) {
            uVar8 = FUN_01590a70();
            *(undefined8 *)PTR_DAT_02715288 = uVar8;
            __cxa_guard_release(PTR_DAT_02715280);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)PTR_DAT_02715288) {
              local_40 = 0;
              uStack_38 = 0;
              puVar11[5] = uVar46;
              puVar11[4] = uVar12;
              uVar12 = *(undefined8 *)(param_1 + 0x288);
              lVar9 = puVar11[1];
              if (lVar9 != 0) {
                (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
              }
              local_28 = lVar9;
              uVar7 = FUN_006c7610(uVar12,2,&local_28,&local_40);
              if (local_28 != 0) {
                (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
                local_28 = 0;
              }
              if ((uVar7 & 1) == 0) goto LAB_00e5fe10;
              fVar15 = (float)local_40;
              auVar29._0_4_ = fVar15 * fVar15;
              auVar29._4_4_ = 0;
              fVar3 = (float)uStack_38;
              auVar29._8_4_ = fVar3 * fVar3;
              fVar4 = (float)((ulong)uStack_38 >> 0x20);
              auVar29._12_4_ = fVar4 * fVar4;
              auVar28 = NEON_ext(auVar29,auVar29,8,1);
              fVar25 = auVar28._0_4_ + auVar29._0_4_;
              fVar32 = auVar28._4_4_ + 0.0;
              fVar14 = fVar25 + fVar32;
              fVar25 = fVar25 + fVar32;
              if ((fVar14 != 0.0) && (fVar13 != 0.0)) {
                auVar30._8_8_ = CONCAT44(fVar25,fVar14);
                auVar30._0_8_ = CONCAT44(fVar25,fVar14);
                auVar48._8_8_ = CONCAT44(fStack_6c,fVar13);
                auVar48._0_8_ = CONCAT44(fStack_6c,fVar13);
                auVar28 = NEON_frsqrte(auVar30,4);
                auVar40._0_4_ = auVar28._0_4_ * fVar14;
                auVar40._4_4_ = auVar28._4_4_ * fVar25;
                auVar40._8_4_ = auVar28._8_4_ * fVar14;
                auVar40._12_4_ = auVar28._12_4_ * fVar25;
                auVar41 = NEON_frsqrts(auVar28,auVar40,4);
                auVar37._0_4_ = auVar28._0_4_ * auVar41._0_4_;
                auVar37._4_4_ = auVar28._4_4_ * auVar41._4_4_;
                auVar37._8_4_ = auVar28._8_4_ * auVar41._8_4_;
                auVar37._12_4_ = auVar28._12_4_ * auVar41._12_4_;
                auVar42._0_4_ = fVar14 * auVar37._0_4_;
                auVar42._4_4_ = fVar25 * auVar37._4_4_;
                auVar42._8_4_ = fVar14 * auVar37._8_4_;
                auVar42._12_4_ = fVar25 * auVar37._12_4_;
                iVar6 = -(uint)(fVar14 == 0.0);
                iVar33 = -(uint)(fVar25 == 0.0);
                iVar34 = -(uint)(fVar14 == 0.0);
                iVar36 = -(uint)(fVar25 == 0.0);
                auVar28 = NEON_frsqrts(auVar37,auVar42,4);
                fVar15 = fVar15 * auVar37._0_4_ * auVar28._0_4_;
                fVar14 = auVar37._4_4_ * auVar28._4_4_ * 0.0;
                fVar3 = fVar3 * auVar37._8_4_ * auVar28._8_4_;
                fVar4 = fVar4 * auVar37._12_4_ * auVar28._12_4_;
                auVar28 = NEON_frsqrte(auVar48,4);
                auVar43._0_4_ = auVar28._0_4_ * fVar13;
                auVar43._4_4_ = auVar28._4_4_ * fStack_6c;
                auVar43._8_4_ = auVar28._8_4_ * fVar13;
                auVar43._12_4_ = auVar28._12_4_ * fStack_6c;
                auVar41 = NEON_frsqrts(auVar28,auVar43,4);
                auVar38._0_4_ = auVar28._0_4_ * auVar41._0_4_;
                auVar38._4_4_ = auVar28._4_4_ * auVar41._4_4_;
                auVar38._8_4_ = auVar28._8_4_ * auVar41._8_4_;
                auVar38._12_4_ = auVar28._12_4_ * auVar41._12_4_;
                iVar39 = -(uint)(fVar13 == 0.0);
                iVar44 = -(uint)(fStack_6c == 0.0);
                iVar45 = -(uint)(fVar13 == 0.0);
                iVar47 = -(uint)(fStack_6c == 0.0);
                auVar49._0_4_ = fVar13 * auVar38._0_4_;
                auVar49._4_4_ = fStack_6c * auVar38._4_4_;
                auVar49._8_4_ = fVar13 * auVar38._8_4_;
                auVar49._12_4_ = fStack_6c * auVar38._12_4_;
                auVar28 = NEON_frsqrts(auVar38,auVar49,4);
                fVar26 = fVar26 * auVar38._0_4_ * auVar28._0_4_;
                fVar13 = auVar38._4_4_ * auVar28._4_4_ * 0.0;
                fVar35 = fVar35 * auVar38._8_4_ * auVar28._8_4_;
                fVar25 = auVar38._12_4_ * auVar28._12_4_ * 0.0;
                fVar26 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) &
                                         ~(byte)((uint)iVar39 >> 0x18),
                                         CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                                  ~(byte)((uint)iVar39 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar26 >> 8) &
                                                           ~(byte)((uint)iVar39 >> 8),
                                                           SUB41(fVar26,0) & ~(byte)iVar39)));
                auVar27._0_8_ =
                     CONCAT17((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                              CONCAT16((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10),
                                       CONCAT15((byte)((uint)fVar13 >> 8) &
                                                ~(byte)((uint)iVar44 >> 8),
                                                CONCAT14(SUB41(fVar13,0) & ~(byte)iVar44,fVar26))));
                auVar27[8] = SUB41(fVar35,0) & ~(byte)iVar45;
                auVar27[9] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar45 >> 8);
                auVar27[10] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
                auVar27[0xb] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
                auVar31[0xc] = SUB41(fVar25,0) & ~(byte)iVar47;
                auVar31._0_12_ = auVar27;
                auVar31[0xd] = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar47 >> 8);
                auVar31[0xe] = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
                auVar31[0xf] = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
                fVar26 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18)
                                         ,CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                                   ~(byte)((uint)iVar6 >> 0x10),
                                                   CONCAT11((byte)((uint)fVar15 >> 8) &
                                                            ~(byte)((uint)iVar6 >> 8),
                                                            SUB41(fVar15,0) & ~(byte)iVar6))) *
                         fVar26;
                fVar15 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) &
                                         ~(byte)((uint)iVar33 >> 0x18),
                                         CONCAT12((byte)((uint)fVar14 >> 0x10) &
                                                  ~(byte)((uint)iVar33 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar14 >> 8) &
                                                           ~(byte)((uint)iVar33 >> 8),
                                                           SUB41(fVar14,0) & ~(byte)iVar33))) *
                         (float)((ulong)auVar27._0_8_ >> 0x20);
                uVar16 = (undefined1)((uint)fVar15 >> 8);
                uVar17 = (undefined1)((uint)fVar15 >> 0x10);
                uVar18 = (undefined1)((uint)fVar15 >> 0x18);
                fVar3 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                                        CONCAT12((byte)((uint)fVar3 >> 0x10) &
                                                 ~(byte)((uint)iVar34 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar3 >> 8) &
                                                          ~(byte)((uint)iVar34 >> 8),
                                                          SUB41(fVar3,0) & ~(byte)iVar34))) *
                        auVar27._8_4_;
                uVar19 = (undefined1)((uint)fVar3 >> 8);
                uVar20 = (undefined1)((uint)fVar3 >> 0x10);
                uVar21 = (undefined1)((uint)fVar3 >> 0x18);
                fVar35 = (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18)
                                         ,CONCAT12((byte)((uint)fVar4 >> 0x10) &
                                                   ~(byte)((uint)iVar36 >> 0x10),
                                                   CONCAT11((byte)((uint)fVar4 >> 8) &
                                                            ~(byte)((uint)iVar36 >> 8),
                                                            SUB41(fVar4,0) & ~(byte)iVar36))) *
                         auVar31._12_4_;
                uVar22 = (undefined1)((uint)fVar35 >> 8);
                uVar23 = (undefined1)((uint)fVar35 >> 0x10);
                uVar24 = (undefined1)((uint)fVar35 >> 0x18);
                auVar1[4] = SUB41(fVar15,0);
                auVar1._0_4_ = fVar26;
                auVar1[5] = uVar16;
                auVar1[6] = uVar17;
                auVar1[7] = uVar18;
                auVar1[8] = SUB41(fVar3,0);
                auVar1[9] = uVar19;
                auVar1[10] = uVar20;
                auVar1[0xb] = uVar21;
                auVar1[0xc] = SUB41(fVar35,0);
                auVar1[0xd] = uVar22;
                auVar1[0xe] = uVar23;
                auVar1[0xf] = uVar24;
                auVar2[4] = SUB41(fVar15,0);
                auVar2._0_4_ = fVar26;
                auVar2[5] = uVar16;
                auVar2[6] = uVar17;
                auVar2[7] = uVar18;
                auVar2[8] = SUB41(fVar3,0);
                auVar2[9] = uVar19;
                auVar2[10] = uVar20;
                auVar2[0xb] = uVar21;
                auVar2[0xc] = SUB41(fVar35,0);
                auVar2[0xd] = uVar22;
                auVar2[0xe] = uVar23;
                auVar2[0xf] = uVar24;
                auVar28 = NEON_ext(auVar1,auVar2,8,1);
                fVar26 = auVar28._0_4_ + fVar26 + auVar28._4_4_ + fVar15;
                uVar16 = 0;
                if (-1.0 <= fVar26) {
                  uVar16 = SUB41(fVar26,0);
                }
                FUN_01590400(uVar16);
                if ((float)CONCAT13(extraout_var_01,
                                    CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
                    (*(float *)PTR_FloatDegree180_027194f0 / *(float *)PTR_FloatPi_02715160) <= 30.0
                   ) goto LAB_00e5fc40;
                fStack_5c = auVar5._4_4_;
                fStack_54 = auVar5._12_4_;
                fStack_5c = fStack_5c + (float)((ulong)local_40 >> 0x20);
                fStack_54 = fStack_54 + (float)((ulong)uStack_38 >> 0x20);
                *(undefined1 *)(param_1 + 0xc0) = 1;
                *(ulong *)(param_1 + 0xb8) =
                     CONCAT17((char)((uint)fStack_54 >> 0x18),
                              CONCAT16((char)((uint)fStack_54 >> 0x10),
                                       CONCAT15((char)((uint)fStack_54 >> 8),
                                                CONCAT14(SUB41(fStack_54,0),
                                                         auVar5._8_4_ + (float)uStack_38))));
                *(ulong *)(param_1 + 0xb0) =
                     CONCAT17((char)((uint)fStack_5c >> 0x18),
                              CONCAT16((char)((uint)fStack_5c >> 0x10),
                                       CONCAT15((char)((uint)fStack_5c >> 8),
                                                CONCAT14(SUB41(fStack_5c,0),
                                                         auVar5._0_4_ + (float)local_40))));
                iVar6 = *(int *)(param_1 + 0xc00);
                goto joined_r0x00e5fe08;
              }
              break;
            }
          }
        }
      }
    }
  }
  iVar6 = *(int *)(param_1 + 0xc00);
joined_r0x00e5fe08:
  if (iVar6 == 3) {
    local_40 = 0x538b73ebb59bd5b;
    FUN_00dc0720(param_1,&local_40);
    *(undefined4 *)(param_1 + 0xc00) = 0;
  }
  else if ((iVar6 == 1) && (1.0 <= *(float *)(param_1 + 0x5c4))) {
    local_40 = 0x538b73ebb59bd5b;
    FUN_00dc0b40(param_1,&local_40,param_1 + 0xc08);
    local_40 = 0x538b73ebb59bd5b;
    FUN_00dc04c0(param_1,&local_40,1,0,0);
    local_40 = 0x538b73ebb59bd5b;
    lVar9 = FUN_00dc0e00(param_1,&local_40);
    if (lVar9 != 0) {
      fVar26 = *(float *)(param_1 + 0xc28);
      FUN_00794670();
      lVar9 = FUN_00794780(lVar9);
      if (lVar9 != 0) {
        *(ulong *)(lVar9 + 0x128) = (ulong)(uint)fVar26;
        *(ulong *)(lVar9 + 0x120) =
             CONCAT17((char)((uint)fVar26 >> 0x18),
                      CONCAT16((char)((uint)fVar26 >> 0x10),
                               CONCAT15((char)((uint)fVar26 >> 8),CONCAT14(SUB41(fVar26,0),fVar26)))
                     );
        *(undefined8 *)(lVar9 + 0x138) = *(undefined8 *)(lVar9 + 0x138);
        *(ulong *)(lVar9 + 0x130) = CONCAT44(fVar26,fVar26);
        fVar15 = fVar26 * *(float *)(lVar9 + 0xf4);
        fVar3 = *(float *)(lVar9 + 0xfc) * 0.0;
        *(ulong *)(lVar9 + 0x148) =
             CONCAT17((char)((uint)fVar3 >> 0x18),
                      CONCAT16((char)((uint)fVar3 >> 0x10),
                               CONCAT15((char)((uint)fVar3 >> 8),
                                        CONCAT14(SUB41(fVar3,0),fVar26 * *(float *)(lVar9 + 0xf8))))
                     );
        *(ulong *)(lVar9 + 0x140) =
             CONCAT17((char)((uint)fVar15 >> 0x18),
                      CONCAT16((char)((uint)fVar15 >> 0x10),
                               CONCAT15((char)((uint)fVar15 >> 8),
                                        CONCAT14(SUB41(fVar15,0),fVar26 * *(float *)(lVar9 + 0xf0)))
                              ));
      }
    }
    *(undefined4 *)(param_1 + 0xc00) = 2;
  }
  return;
}


