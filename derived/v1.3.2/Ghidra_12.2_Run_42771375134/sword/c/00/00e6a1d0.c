/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e6a1d0; name: FUN_00e6a1d0
 */


undefined1  [16] FUN_00e6a1d0(long param_1,undefined8 *param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar22;
  int iVar25;
  int iVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar27;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uStack_58 = param_2[1];
  local_60 = *param_2;
  if (param_3 != 0) {
    iVar6 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x8b8);
      if (*(long *)(lVar7 + 0xf8) != 0) {
        plVar8 = *(long **)(lVar7 + 0xf0);
        do {
          if (((*plVar8 != 0) &&
              (puVar5 = *(undefined8 **)(*plVar8 + 0x60), puVar5 != (undefined8 *)0x0)) &&
             (uVar2 = FUN_0156b540(puVar5), (uVar2 & 1) != 0)) {
            plVar3 = (long *)(**(code **)*puVar5)(puVar5);
            lVar4 = FUN_00e6a8c0();
            for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
              if (plVar3 == (long *)lVar4) {
                if (*(char *)((long)puVar5 + 0x862) == '\0') {
                  fVar17 = (float)((ulong)uStack_58 >> 0x20);
                  fVar15 = (float)((ulong)local_60 >> 0x20);
                  fVar10 = (float)local_60 - (float)puVar5[0xc];
                  fVar11 = fVar15 - (float)((ulong)puVar5[0xc] >> 0x20);
                  fVar12 = (float)uStack_58 - (float)puVar5[0xd];
                  fVar13 = fVar17 - (float)((ulong)puVar5[0xd] >> 0x20);
                  fVar14 = fVar10 * fVar10;
                  fVar16 = fVar11 * fVar11;
                  auVar18._4_4_ = fVar16;
                  auVar18._0_4_ = fVar14;
                  auVar18._8_4_ = fVar12 * fVar12;
                  auVar18._12_4_ = fVar13 * fVar13;
                  auVar24._4_4_ = fVar16;
                  auVar24._0_4_ = fVar14;
                  auVar24._8_4_ = fVar12 * fVar12;
                  auVar24._12_4_ = fVar13 * fVar13;
                  auVar18 = NEON_ext(auVar18,auVar24,8,1);
                  fVar14 = auVar18._0_4_ + fVar14;
                  fVar16 = auVar18._4_4_ + fVar16;
                  fVar9 = fVar14 + fVar16;
                  fVar14 = fVar14 + fVar16;
                  auVar19._8_8_ = CONCAT44(fVar14,fVar9);
                  auVar19._0_8_ = CONCAT44(fVar14,fVar9);
                  if ((SQRT(fVar9) < *(float *)(puVar5 + 0x10e)) && (fVar9 != 0.0)) {
                    auVar18 = NEON_frsqrte(auVar19,4);
                    fVar16 = *(float *)(puVar5 + 0x10e) - SQRT(fVar9);
                    auVar23._0_4_ = fVar9 * auVar18._0_4_;
                    auVar23._4_4_ = fVar14 * auVar18._4_4_;
                    auVar23._8_4_ = fVar9 * auVar18._8_4_;
                    auVar23._12_4_ = fVar14 * auVar18._12_4_;
                    auVar24 = NEON_frsqrts(auVar18,auVar23,4);
                    auVar21._0_4_ = auVar18._0_4_ * auVar24._0_4_;
                    auVar21._4_4_ = auVar18._4_4_ * auVar24._4_4_;
                    auVar21._8_4_ = auVar18._8_4_ * auVar24._8_4_;
                    auVar21._12_4_ = auVar18._12_4_ * auVar24._12_4_;
                    iVar22 = -(uint)(fVar9 == 0.0);
                    iVar25 = -(uint)(fVar14 == 0.0);
                    iVar26 = -(uint)(fVar9 == 0.0);
                    iVar27 = -(uint)(fVar14 == 0.0);
                    auVar20._0_4_ = fVar9 * auVar21._0_4_;
                    auVar20._4_4_ = fVar14 * auVar21._4_4_;
                    auVar20._8_4_ = fVar9 * auVar21._8_4_;
                    auVar20._12_4_ = fVar14 * auVar21._12_4_;
                    auVar18 = NEON_frsqrts(auVar21,auVar20,4);
                    fVar10 = fVar10 * auVar21._0_4_ * auVar18._0_4_;
                    fVar11 = fVar11 * auVar21._4_4_ * auVar18._4_4_;
                    fVar12 = fVar12 * auVar21._8_4_ * auVar18._8_4_;
                    fVar13 = fVar13 * auVar21._12_4_ * auVar18._12_4_;
                    fVar9 = (float)CONCAT13((byte)((uint)fVar10 >> 0x18) &
                                            ~(byte)((uint)iVar22 >> 0x18),
                                            CONCAT12((byte)((uint)fVar10 >> 0x10) &
                                                     ~(byte)((uint)iVar22 >> 0x10),
                                                     CONCAT11((byte)((uint)fVar10 >> 8) &
                                                              ~(byte)((uint)iVar22 >> 8),
                                                              SUB41(fVar10,0) & ~(byte)iVar22)));
                    fVar14 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) &
                                             ~(byte)((uint)iVar26 >> 0x18),
                                             CONCAT12((byte)((uint)fVar12 >> 0x10) &
                                                      ~(byte)((uint)iVar26 >> 0x10),
                                                      CONCAT11((byte)((uint)fVar12 >> 8) &
                                                               ~(byte)((uint)iVar26 >> 8),
                                                               SUB41(fVar12,0) & ~(byte)iVar26)));
                    uStack_58 = CONCAT44(fVar17 + (float)(CONCAT17((byte)((uint)fVar13 >> 0x18) &
                                                                   ~(byte)((uint)iVar27 >> 0x18),
                                                                   CONCAT16((byte)((uint)fVar13 >>
                                                                                  0x10) &
                                                                            ~(byte)((uint)iVar27 >>
                                                                                   0x10),
                                                                            CONCAT15((byte)((uint)
                                                  fVar13 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                                  CONCAT14(SUB41(fVar13,0) & ~(byte)iVar27,fVar14)))
                                                  ) >> 0x20) * fVar16,
                                         (float)uStack_58 + fVar14 * fVar16);
                    local_60 = CONCAT44(fVar15 + (float)(CONCAT17((byte)((uint)fVar11 >> 0x18) &
                                                                  ~(byte)((uint)iVar25 >> 0x18),
                                                                  CONCAT16((byte)((uint)fVar11 >>
                                                                                 0x10) &
                                                                           ~(byte)((uint)iVar25 >>
                                                                                  0x10),
                                                                           CONCAT15((byte)((uint)
                                                  fVar11 >> 8) & ~(byte)((uint)iVar25 >> 8),
                                                  CONCAT14(SUB41(fVar11,0) & ~(byte)iVar25,fVar9))))
                                                  >> 0x20) * fVar16,(float)local_60 + fVar9 * fVar16
                                       );
                  }
                }
                break;
              }
            }
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != (long *)(*(long *)(lVar7 + 0xf0) + *(long *)(lVar7 + 0xf8) * 8));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != param_3);
  }
  auVar1._8_8_ = uStack_58;
  auVar1._0_8_ = local_60;
  return auVar1;
}


