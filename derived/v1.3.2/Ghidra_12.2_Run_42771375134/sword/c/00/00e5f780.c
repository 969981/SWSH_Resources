/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5f780; name: FUN_00e5f780
 */


void FUN_00e5f780(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar19;
  int iVar20;
  undefined1 auVar18 [16];
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar28;
  undefined8 local_40;
  float fStack_38;
  float fStack_34;
  undefined8 local_28;
  
  if ((((*(char *)(param_1 + 0xbd0) == '\0') && (*(long *)(param_1 + 0xb20) != 0)) &&
      (lVar8 = *(long *)(*(long *)(param_1 + 0xb20) + 0x80), lVar8 != 0)) &&
     (puVar10 = *(undefined8 **)(lVar8 + 0x60), puVar10 != (undefined8 *)0x0)) {
    plVar9 = (long *)(**(code **)*puVar10)(puVar10);
    if (((*PTR_DAT_02715280 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_02715280), iVar4 != 0)) {
      uVar7 = FUN_01590a70();
      *(undefined8 *)PTR_DAT_02715288 = uVar7;
      __cxa_guard_release(PTR_DAT_02715280);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)PTR_DAT_02715288) {
        if (puVar10[0x22] != 0) {
          uVar7 = *(undefined8 *)(param_1 + 0xb0);
          fStack_38 = (float)*(undefined8 *)(param_1 + 0xb8);
          fStack_34 = (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20);
          auVar25 = *(undefined1 (*) [16])(param_1 + 0xa80);
          fVar12 = (float)uVar7;
          fVar14 = (float)((ulong)uVar7 >> 0x20);
          fVar16 = 0.0;
          fVar13 = auVar25._0_4_;
          fVar1 = fVar13 - fVar12;
          fVar15 = auVar25._8_4_;
          fVar2 = fVar15 - fStack_38;
          fVar3 = auVar25._12_4_ - fStack_34;
          fVar28 = fVar1 * fVar1;
          fVar17 = *(float *)(param_1 + 0x4ec) + 10.0;
          auVar25._4_4_ = 0;
          auVar25._0_4_ = fVar28;
          auVar25._8_4_ = fVar2 * fVar2;
          auVar25._12_4_ = fVar3 * fVar3;
          auVar23._4_4_ = 0;
          auVar23._0_4_ = fVar28;
          auVar23._8_4_ = fVar2 * fVar2;
          auVar23._12_4_ = fVar3 * fVar3;
          auVar25 = NEON_ext(auVar25,auVar23,8,1);
          fVar28 = auVar25._0_4_ + fVar28;
          fVar27 = auVar25._4_4_ + 0.0;
          fVar11 = fVar28 + fVar27;
          fVar28 = fVar28 + fVar27;
          if (fVar17 * fVar17 < fVar11) {
            auVar26._8_8_ = CONCAT44(fVar28,fVar11);
            auVar26._0_8_ = CONCAT44(fVar28,fVar11);
            auVar25 = NEON_frsqrte(auVar26,4);
            auVar22._0_4_ = fVar11 * auVar25._0_4_;
            auVar22._4_4_ = fVar28 * auVar25._4_4_;
            auVar22._8_4_ = fVar11 * auVar25._8_4_;
            auVar22._12_4_ = fVar28 * auVar25._12_4_;
            auVar23 = NEON_frsqrts(auVar25,auVar22,4);
            auVar18._0_4_ = auVar25._0_4_ * auVar23._0_4_;
            auVar18._4_4_ = auVar25._4_4_ * auVar23._4_4_;
            auVar18._8_4_ = auVar25._8_4_ * auVar23._8_4_;
            auVar18._12_4_ = auVar25._12_4_ * auVar23._12_4_;
            auVar24._0_4_ = fVar11 * auVar18._0_4_;
            auVar24._4_4_ = fVar28 * auVar18._4_4_;
            auVar24._8_4_ = fVar11 * auVar18._8_4_;
            auVar24._12_4_ = fVar28 * auVar18._12_4_;
            auVar25 = NEON_frsqrts(auVar18,auVar24,4);
            fVar1 = fVar1 * auVar18._0_4_ * auVar25._0_4_;
            fVar15 = auVar18._4_4_ * auVar25._4_4_ * 0.0;
            fVar2 = fVar2 * auVar18._8_4_ * auVar25._8_4_;
            fVar3 = fVar3 * auVar18._12_4_ * auVar25._12_4_;
            iVar4 = -(uint)(fVar11 == 0.0);
            iVar19 = -(uint)(fVar28 == 0.0);
            iVar20 = -(uint)(fVar11 == 0.0);
            iVar21 = -(uint)(fVar28 == 0.0);
            fVar13 = fVar12 + (float)CONCAT13((byte)((uint)fVar1 >> 0x18) &
                                              ~(byte)((uint)iVar4 >> 0x18),
                                              CONCAT12((byte)((uint)fVar1 >> 0x10) &
                                                       ~(byte)((uint)iVar4 >> 0x10),
                                                       CONCAT11((byte)((uint)fVar1 >> 8) &
                                                                ~(byte)((uint)iVar4 >> 8),
                                                                SUB41(fVar1,0) & ~(byte)iVar4))) *
                              fVar17;
            fVar14 = fVar14 + (float)CONCAT13((byte)((uint)fVar15 >> 0x18) &
                                              ~(byte)((uint)iVar19 >> 0x18),
                                              CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                                       ~(byte)((uint)iVar19 >> 0x10),
                                                       CONCAT11((byte)((uint)fVar15 >> 8) &
                                                                ~(byte)((uint)iVar19 >> 8),
                                                                SUB41(fVar15,0) & ~(byte)iVar19))) *
                              fVar17;
            fVar15 = fStack_38 +
                     (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                     CONCAT12((byte)((uint)fVar2 >> 0x10) &
                                              ~(byte)((uint)iVar20 >> 0x10),
                                              CONCAT11((byte)((uint)fVar2 >> 8) &
                                                       ~(byte)((uint)iVar20 >> 8),
                                                       SUB41(fVar2,0) & ~(byte)iVar20))) * fVar17;
            fVar16 = fStack_34 +
                     (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                     CONCAT12((byte)((uint)fVar3 >> 0x10) &
                                              ~(byte)((uint)iVar21 >> 0x10),
                                              CONCAT11((byte)((uint)fVar3 >> 8) &
                                                       ~(byte)((uint)iVar21 >> 8),
                                                       SUB41(fVar3,0) & ~(byte)iVar21))) * fVar17;
          }
          local_40 = CONCAT44(fVar14,fVar13);
          local_28 = *(undefined8 *)(param_1 + 0x1a0);
          fStack_38 = fVar15;
          fStack_34 = fVar16;
          uVar6 = FUN_00fa3c10(&local_28,&local_40);
          if ((uVar6 & 1) == 0) {
            *(undefined1 *)(param_1 + 0xb32) = 1;
            return;
          }
          *(ulong *)(param_1 + 0xb8) = CONCAT44(fStack_34,fStack_38);
          *(undefined8 *)(param_1 + 0xb0) = local_40;
          *(undefined1 *)(param_1 + 0xc0) = 1;
          return;
        }
        break;
      }
    }
  }
  if ((*(long *)(param_1 + 0x360) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x360) + 0x80), lVar8 != 0)) {
    plVar9 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    puVar10 = *(undefined8 **)(lVar8 + 0x60);
    if (puVar10 != (undefined8 *)0x0) {
      plVar5 = (long *)(**(code **)*puVar10)(puVar10);
      if (((*PTR_DAT_02715290 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_02715290), iVar4 != 0)) {
        uVar7 = FUN_01590a70();
        *(undefined8 *)PTR_DAT_02715298 = uVar7;
        __cxa_guard_release(PTR_DAT_02715290);
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)PTR_DAT_02715298) {
          puVar10 = puVar10 + -10;
          goto LAB_00e5f86c;
        }
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_00e5f86c:
    (**(code **)(*plVar9 + 0x18))(plVar9);
    if (puVar10 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar10 + 0xc) = 1;
    }
  }
  FUN_00f4e560(param_1 + 0xc38,param_1);
  FUN_00f51850(*(undefined8 *)PTR_DAT_0271fc30,param_1);
  *(undefined1 *)(param_1 + 0xb31) = 0;
  *(undefined4 *)(param_1 + 0xb34) = 0;
  if ((*(char *)(param_1 + 0xbd8) != '\0') && (*(char *)(param_1 + 0xbd9) != '\0')) {
    FUN_00db6d40(param_1,1);
  }
  *(undefined4 *)(param_1 + 0x8a0) = 1;
  return;
}


