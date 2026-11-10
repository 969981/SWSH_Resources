/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef6b70; name: FUN_00ef6b70
 */


void FUN_00ef6b70(undefined4 param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float fVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  float fVar11;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar18;
  int iVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  plVar6 = *(long **)(param_2 + 0x70);
  FUN_007101c0(plVar6 + 0x14);
  FUN_00a92cd0(extraout_var,0,ZEXT816(0));
  *(ulong *)(param_2 + 0xb8) = CONCAT44(extraout_var_04,extraout_var_02);
  *(ulong *)(param_2 + 0xb0) = CONCAT44(extraout_var_00,extraout_s0);
  FUN_00a92cd0(param_1,0,ZEXT816(0));
  *(ulong *)(param_2 + 200) = CONCAT44(extraout_var_05,extraout_var_03);
  *(ulong *)(param_2 + 0xc0) = CONCAT44(extraout_var_01,extraout_s0_00);
  iVar5 = *(int *)(param_2 + 0x9c);
  fVar12 = (float)*(undefined8 *)(param_2 + 0x80) - (float)plVar6[0x16];
  fVar13 = (float)*(undefined8 *)(param_2 + 0x88) - (float)plVar6[0x17];
  fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 0x88) >> 0x20) -
           (float)((ulong)plVar6[0x17] >> 0x20);
  fVar10 = fVar12 * fVar12;
  auVar16._4_4_ = 0;
  auVar16._0_4_ = fVar10;
  auVar16._8_4_ = fVar13 * fVar13;
  auVar16._12_4_ = fVar14 * fVar14;
  auVar23._4_4_ = 0;
  auVar23._0_4_ = fVar10;
  auVar23._8_4_ = fVar13 * fVar13;
  auVar23._12_4_ = fVar14 * fVar14;
  auVar16 = NEON_ext(auVar16,auVar23,8,1);
  fVar10 = auVar16._0_4_ + fVar10;
  fVar11 = auVar16._4_4_ + 0.0;
  fVar9 = fVar10 + fVar11;
  fVar10 = fVar10 + fVar11;
  auVar17._8_8_ = CONCAT44(fVar10,fVar9);
  auVar17._0_8_ = CONCAT44(fVar10,fVar9);
  auVar16 = NEON_frsqrte(auVar17,4);
  auVar22._0_4_ = auVar16._0_4_ * fVar9;
  auVar22._4_4_ = auVar16._4_4_ * fVar10;
  auVar22._8_4_ = auVar16._8_4_ * fVar9;
  auVar22._12_4_ = auVar16._12_4_ * fVar10;
  auVar23 = NEON_frsqrts(auVar16,auVar22,4);
  auVar21._0_4_ = auVar16._0_4_ * auVar23._0_4_;
  auVar21._4_4_ = auVar16._4_4_ * auVar23._4_4_;
  auVar21._8_4_ = auVar16._8_4_ * auVar23._8_4_;
  auVar21._12_4_ = auVar16._12_4_ * auVar23._12_4_;
  auVar24._0_4_ = fVar9 * auVar21._0_4_;
  auVar24._4_4_ = fVar10 * auVar21._4_4_;
  auVar24._8_4_ = fVar9 * auVar21._8_4_;
  auVar24._12_4_ = fVar10 * auVar21._12_4_;
  iVar15 = -(uint)(fVar9 == 0.0);
  iVar18 = -(uint)(fVar10 == 0.0);
  iVar19 = -(uint)(fVar9 == 0.0);
  iVar20 = -(uint)(fVar10 == 0.0);
  auVar16 = NEON_frsqrts(auVar21,auVar24,4);
  fVar12 = fVar12 * auVar21._0_4_ * auVar16._0_4_;
  fVar11 = auVar21._4_4_ * auVar16._4_4_ * 0.0;
  fVar13 = fVar13 * auVar21._8_4_ * auVar16._8_4_;
  fVar14 = fVar14 * auVar21._12_4_ * auVar16._12_4_;
  fVar10 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                           CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                    CONCAT11((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                             SUB41(fVar12,0) & ~(byte)iVar15)));
  fVar12 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                           CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                    CONCAT11((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                             SUB41(fVar13,0) & ~(byte)iVar19)));
  if ((iVar5 == 0) && (iVar5 = (int)(SQRT(fVar9) / *(float *)(param_2 + 0x94)), iVar5 == 0)) {
    iVar5 = 1;
  }
  fVar9 = SQRT(fVar9) / (float)iVar5;
  lVar7 = *(long *)(param_2 + 0xa0);
  *(ulong *)(param_2 + 0xd8) =
       CONCAT44((float)(CONCAT17((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                 CONCAT16((byte)((uint)fVar14 >> 0x10) &
                                          ~(byte)((uint)iVar20 >> 0x10),
                                          CONCAT15((byte)((uint)fVar14 >> 8) &
                                                   ~(byte)((uint)iVar20 >> 8),
                                                   CONCAT14(SUB41(fVar14,0) & ~(byte)iVar20,fVar12))
                                         )) >> 0x20) * fVar9,fVar12 * fVar9);
  *(ulong *)(param_2 + 0xd0) =
       CONCAT44((float)(CONCAT17((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                 CONCAT16((byte)((uint)fVar11 >> 0x10) &
                                          ~(byte)((uint)iVar18 >> 0x10),
                                          CONCAT15((byte)((uint)fVar11 >> 8) &
                                                   ~(byte)((uint)iVar18 >> 8),
                                                   CONCAT14(SUB41(fVar11,0) & ~(byte)iVar18,fVar10))
                                         )) >> 0x20) * fVar9,fVar10 * fVar9);
  *(int *)(param_2 + 0xe0) = iVar5;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar5 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar8 = *(long **)(lVar7 + 0x58);
        lVar4 = FUN_00c781c0();
        while( true ) {
          if (plVar8 == (long *)0x0) goto LAB_00ef6ce4;
          if (plVar8 == (long *)lVar4) break;
          plVar8 = (long *)*plVar8;
        }
        iVar15 = *piVar1;
        if (iVar15 != iVar5) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            FUN_0069c580(lVar7 + -0x50,0);
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))((long *)(lVar7 + -8));
            cVar2 = *(char *)(param_2 + 0x99);
            goto joined_r0x00ef6cdc;
          }
          goto LAB_00ef6ce4;
        }
        iVar5 = iVar15;
        if (iVar15 == 0) goto LAB_00ef6ce4;
      }
      ClearExclusiveLocal();
      iVar5 = iVar15;
    } while (iVar15 != 0);
  }
LAB_00ef6ce4:
  FUN_0069c580(0,0);
  cVar2 = *(char *)(param_2 + 0x99);
joined_r0x00ef6cdc:
  if (cVar2 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ef6d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x180))(*(undefined4 *)PTR_DAT_0271ecc8,plVar6,PTR_DAT_0271e870);
  return;
}


