/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8a1a0; name: FUN_00e8a1a0
 */


void FUN_00e8a1a0(undefined4 param_1,long param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  undefined4 extraout_s0;
  float fVar11;
  undefined4 extraout_var;
  float fVar12;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar19;
  int iVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  plVar7 = *(long **)(param_2 + 0x70);
  FUN_00a92cd0(param_1,0,ZEXT816(0));
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x70) + 0xa0);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x70) + 0xa8);
  *(ulong *)(param_2 + 0xe8) = CONCAT44(extraout_var_01,extraout_var_00);
  *(ulong *)(param_2 + 0xe0) = CONCAT44(extraout_var,extraout_s0);
  *(undefined8 *)(param_2 + 0xd0) = uVar2;
  *(undefined8 *)(param_2 + 0xd8) = uVar3;
  fVar13 = (float)*(undefined8 *)(param_2 + 0x80) - (float)plVar7[0x16];
  fVar14 = (float)*(undefined8 *)(param_2 + 0x88) - (float)plVar7[0x17];
  fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 0x88) >> 0x20) -
           (float)((ulong)plVar7[0x17] >> 0x20);
  fVar11 = fVar13 * fVar13;
  auVar17._4_4_ = 0;
  auVar17._0_4_ = fVar11;
  auVar17._8_4_ = fVar14 * fVar14;
  auVar17._12_4_ = fVar15 * fVar15;
  auVar25._4_4_ = 0;
  auVar25._0_4_ = fVar11;
  auVar25._8_4_ = fVar14 * fVar14;
  auVar25._12_4_ = fVar15 * fVar15;
  auVar17 = NEON_ext(auVar17,auVar25,8,1);
  fVar11 = auVar17._0_4_ + fVar11;
  fVar12 = auVar17._4_4_ + 0.0;
  fVar10 = fVar11 + fVar12;
  fVar11 = fVar11 + fVar12;
  auVar18._8_8_ = CONCAT44(fVar11,fVar10);
  auVar18._0_8_ = CONCAT44(fVar11,fVar10);
  auVar17 = NEON_frsqrte(auVar18,4);
  auVar24._0_4_ = auVar17._0_4_ * fVar10;
  auVar24._4_4_ = auVar17._4_4_ * fVar11;
  auVar24._8_4_ = auVar17._8_4_ * fVar10;
  auVar24._12_4_ = auVar17._12_4_ * fVar11;
  auVar25 = NEON_frsqrts(auVar17,auVar24,4);
  auVar23._0_4_ = auVar17._0_4_ * auVar25._0_4_;
  auVar23._4_4_ = auVar17._4_4_ * auVar25._4_4_;
  auVar23._8_4_ = auVar17._8_4_ * auVar25._8_4_;
  auVar23._12_4_ = auVar17._12_4_ * auVar25._12_4_;
  auVar26._0_4_ = fVar10 * auVar23._0_4_;
  auVar26._4_4_ = fVar11 * auVar23._4_4_;
  auVar26._8_4_ = fVar10 * auVar23._8_4_;
  auVar26._12_4_ = fVar11 * auVar23._12_4_;
  iVar16 = -(uint)(fVar10 == 0.0);
  iVar19 = -(uint)(fVar11 == 0.0);
  iVar20 = -(uint)(fVar10 == 0.0);
  iVar21 = -(uint)(fVar11 == 0.0);
  auVar17 = NEON_frsqrts(auVar23,auVar26,4);
  fVar13 = fVar13 * auVar23._0_4_ * auVar17._0_4_;
  fVar12 = auVar23._4_4_ * auVar17._4_4_ * 0.0;
  fVar14 = fVar14 * auVar23._8_4_ * auVar17._8_4_;
  fVar15 = fVar15 * auVar23._12_4_ * auVar17._12_4_;
  fVar22 = *(float *)(param_2 + 0x9c);
  fVar11 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                             SUB41(fVar13,0) & ~(byte)iVar16)));
  fVar13 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                           CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                                    CONCAT11((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                             SUB41(fVar14,0) & ~(byte)iVar20)));
  iVar16 = (int)(SQRT(fVar10) / *(float *)(param_2 + 0x94));
  if (iVar16 == 0) {
    iVar16 = 1;
  }
  *(int *)(param_2 + 0x100) = iVar16;
  fVar14 = (float)iVar16;
  if ((fVar22 != 0.0) && (fVar14 < fVar22)) {
    *(int *)(param_2 + 0x100) = (int)fVar22;
    fVar14 = (float)(int)fVar22;
  }
  fVar14 = SQRT(fVar10) / fVar14;
  lVar8 = *(long *)(param_2 + 0xc0);
  *(ulong *)(param_2 + 0xf8) =
       CONCAT44((float)(CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                 CONCAT16((byte)((uint)fVar15 >> 0x10) &
                                          ~(byte)((uint)iVar21 >> 0x10),
                                          CONCAT15((byte)((uint)fVar15 >> 8) &
                                                   ~(byte)((uint)iVar21 >> 8),
                                                   CONCAT14(SUB41(fVar15,0) & ~(byte)iVar21,fVar13))
                                         )) >> 0x20) * fVar14,fVar13 * fVar14);
  *(ulong *)(param_2 + 0xf0) =
       CONCAT44((float)(CONCAT17((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                 CONCAT16((byte)((uint)fVar12 >> 0x10) &
                                          ~(byte)((uint)iVar19 >> 0x10),
                                          CONCAT15((byte)((uint)fVar12 >> 8) &
                                                   ~(byte)((uint)iVar19 >> 8),
                                                   CONCAT14(SUB41(fVar12,0) & ~(byte)iVar19,fVar11))
                                         )) >> 0x20) * fVar14,fVar11 * fVar14);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar16 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar8 + 0x58);
        lVar6 = FUN_00c781c0();
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_00e8a310;
          if (plVar9 == (long *)lVar6) break;
          plVar9 = (long *)*plVar9;
        }
        iVar19 = *piVar1;
        if (iVar19 != iVar16) break;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar8 = *(long *)(lVar8 + 0x60);
          if (lVar8 != 0) {
            FUN_0069c580(lVar8 + -0x50,0);
            (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
            cVar4 = *(char *)(param_2 + 0x99);
            goto joined_r0x00e8a308;
          }
          goto LAB_00e8a310;
        }
        iVar16 = iVar19;
        if (iVar19 == 0) goto LAB_00e8a310;
      }
      ClearExclusiveLocal();
      iVar16 = iVar19;
    } while (iVar19 != 0);
  }
LAB_00e8a310:
  FUN_0069c580(0,0);
  cVar4 = *(char *)(param_2 + 0x99);
joined_r0x00e8a308:
  if (cVar4 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e8a354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x180))(*(undefined4 *)PTR_DAT_0271ecc8,plVar7,PTR_DAT_0271e870);
  return;
}


