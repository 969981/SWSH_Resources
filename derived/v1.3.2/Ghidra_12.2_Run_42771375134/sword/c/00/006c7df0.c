/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c7df0; name: FUN_006c7df0
 */


undefined8
FUN_006c7df0(long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],uint param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar14;
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar18;
  int iVar21;
  int iVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_02715298;
  puVar2 = PTR_DAT_02715290;
  if (*(long *)(*(long *)(param_1 + 0xa8) + 0x48) != 0) {
    auVar1 = *param_2;
    auVar10 = NEON_ext(auVar1,auVar1,8,1);
    auVar19 = *param_3;
    auVar15 = NEON_ext(auVar19,auVar19,8,1);
    fVar9 = auVar19._0_4_ - auVar1._0_4_;
    fVar12 = auVar19._4_4_ - auVar1._4_4_;
    fVar13 = auVar15._0_4_ - auVar10._0_4_;
    auVar19._0_4_ = fVar9 * fVar9;
    auVar19._4_4_ = fVar12 * fVar12;
    auVar19._8_4_ = fVar13 * fVar13;
    auVar19._12_4_ = 0;
    auVar15 = NEON_ext(auVar19,auVar19,8,1);
    fVar14 = auVar15._0_4_ + auVar19._0_4_;
    fVar17 = auVar15._4_4_ + auVar19._4_4_;
    fVar8 = fVar14 + fVar17;
    fVar14 = fVar14 + fVar17;
    auVar15._8_8_ = CONCAT44(fVar14,fVar8);
    auVar15._0_8_ = CONCAT44(fVar14,fVar8);
    plVar7 = *(long **)(*(long *)(param_1 + 0xa8) + 0x40);
    auVar19 = NEON_frsqrte(auVar15,4);
    auVar24._0_4_ = auVar19._0_4_ * fVar8;
    auVar24._4_4_ = auVar19._4_4_ * fVar14;
    auVar24._8_4_ = auVar19._8_4_ * fVar8;
    auVar24._12_4_ = auVar19._12_4_ * fVar14;
    auVar15 = NEON_frsqrts(auVar19,auVar24,4);
    auVar20._0_4_ = auVar19._0_4_ * auVar15._0_4_;
    auVar20._4_4_ = auVar19._4_4_ * auVar15._4_4_;
    auVar20._8_4_ = auVar19._8_4_ * auVar15._8_4_;
    auVar20._12_4_ = auVar19._12_4_ * auVar15._12_4_;
    auVar25._0_4_ = fVar8 * auVar20._0_4_;
    auVar25._4_4_ = fVar14 * auVar20._4_4_;
    auVar25._8_4_ = fVar8 * auVar20._8_4_;
    auVar25._12_4_ = fVar14 * auVar20._12_4_;
    auVar19 = NEON_frsqrts(auVar20,auVar25,4);
    fVar9 = fVar9 * auVar20._0_4_ * auVar19._0_4_;
    fVar12 = fVar12 * auVar20._4_4_ * auVar19._4_4_;
    fVar13 = fVar13 * auVar20._8_4_ * auVar19._8_4_;
    fVar17 = auVar20._12_4_ * auVar19._12_4_ * 0.0;
    iVar18 = -(uint)(fVar8 == 0.0);
    iVar21 = -(uint)(fVar14 == 0.0);
    iVar22 = -(uint)(fVar8 == 0.0);
    iVar23 = -(uint)(fVar14 == 0.0);
    uStack_68 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                                CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                         ~(byte)((uint)iVar22 >> 0x10),
                                         CONCAT11((byte)((uint)fVar13 >> 8) &
                                                  ~(byte)((uint)iVar22 >> 8),
                                                  SUB41(fVar13,0) & ~(byte)iVar22)));
    uStack_64 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                                CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                         ~(byte)((uint)iVar23 >> 0x10),
                                         CONCAT11((byte)((uint)fVar17 >> 8) &
                                                  ~(byte)((uint)iVar23 >> 8),
                                                  SUB41(fVar17,0) & ~(byte)iVar23)));
    local_70 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                               CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                                        CONCAT11((byte)((uint)fVar9 >> 8) &
                                                 ~(byte)((uint)iVar18 >> 8),
                                                 SUB41(fVar9,0) & ~(byte)iVar18)));
    uStack_6c = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                CONCAT12((byte)((uint)fVar12 >> 0x10) &
                                         ~(byte)((uint)iVar21 >> 0x10),
                                         CONCAT11((byte)((uint)fVar12 >> 8) &
                                                  ~(byte)((uint)iVar21 >> 8),
                                                  SUB41(fVar12,0) & ~(byte)iVar21)));
    do {
      if ((*plVar7 != 0) && (puVar6 = *(undefined8 **)(*plVar7 + 0x60), puVar6 != (undefined8 *)0x0)
         ) {
        plVar5 = (long *)(**(code **)*puVar6)(puVar6);
        if (((*puVar2 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar2), iVar18 != 0)) {
          uVar4 = FUN_01590a70();
          *(undefined8 *)puVar3 = uVar4;
          __cxa_guard_release(puVar2);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)puVar3) {
            if (((*(int *)(puVar6 + 8) == 1) && (*(char *)(puVar6 + 2) != '\0')) &&
               ((*(uint *)(puVar6 + 0x2c) & param_4) != 0)) {
              fVar14 = auVar1._0_4_ - (*(float *)(puVar6 + 10) + *(float *)(puVar6 + 4));
              fVar9 = auVar1._4_4_ -
                      (*(float *)((long)puVar6 + 0x54) + *(float *)((long)puVar6 + 0x24));
              fVar12 = auVar10._0_4_ - (*(float *)(puVar6 + 0xb) + *(float *)(puVar6 + 5));
              fVar13 = 0.0 - (*(float *)((long)puVar6 + 0x5c) + *(float *)((long)puVar6 + 0x2c));
              auVar16._0_4_ = fVar14 * local_70;
              auVar16._4_4_ = fVar9 * uStack_6c;
              auVar16._8_4_ = fVar12 * uStack_68;
              auVar16._12_4_ = fVar13 * uStack_64;
              auVar19 = NEON_ext(auVar16,auVar16,8,1);
              auVar11._0_4_ = fVar14 * fVar14;
              auVar11._4_4_ = fVar9 * fVar9;
              auVar11._8_4_ = fVar12 * fVar12;
              auVar11._12_4_ = fVar13 * fVar13;
              auVar15 = NEON_ext(auVar11,auVar11,8,1);
              fVar14 = auVar19._0_4_ + auVar16._0_4_ + auVar19._4_4_ + auVar16._4_4_;
              fVar9 = (auVar15._0_4_ + auVar11._0_4_ + auVar15._4_4_ + auVar11._4_4_) -
                      *(float *)(puVar6 + 0xc) * *(float *)(puVar6 + 0xc);
              if (((fVar14 <= 0.0) || (fVar9 <= 0.0)) &&
                 (fVar9 = fVar14 * fVar14 - fVar9, 0.0 <= fVar9)) {
                fVar12 = SQRT(fVar9);
                if (NAN(fVar12)) {
                  fVar12 = sqrtf(fVar9);
                }
                fVar12 = -fVar14 - fVar12;
                if (fVar12 <= 0.0) {
                  fVar12 = 0.0;
                }
                if (fVar12 <= SQRT(fVar8)) {
                  return 1;
                }
              }
            }
            break;
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != (long *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x40) +
                               *(long *)(*(long *)(param_1 + 0xa8) + 0x48) * 8));
  }
  return 0;
}


