/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc2f70; name: FUN_00fc2f70
 */


bool FUN_00fc2f70(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float local_70;
  float fStack_68;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar15 = param_2[-1];
    lVar12 = *param_1;
    lVar18 = FUN_00fba2d0(lVar15 + 0x280);
    if (lVar18 == 0) {
      lVar18 = FUN_01225e70(lVar15);
      FUN_01223ca0(lVar18 + 0x10);
      auVar21 = FUN_01223380();
      fStack_68 = auVar21._8_4_;
      local_70 = auVar21._0_4_;
      lVar18 = FUN_00fba2d0(lVar12 + 0x280);
      if (lVar18 != 0) goto LAB_00fc2fec;
LAB_00fc32c0:
      lVar18 = FUN_01225e70(lVar12);
      FUN_01223ca0(lVar18 + 0x10);
      auVar21 = FUN_01223380();
      auVar20 = auVar21._0_12_;
    }
    else {
      fStack_68 = SUB164(*(undefined1 (*) [16])(lVar18 + 0xb0),8);
      local_70 = SUB164(*(undefined1 (*) [16])(lVar18 + 0xb0),0);
      lVar18 = FUN_00fba2d0(lVar12 + 0x280);
      if (lVar18 == 0) goto LAB_00fc32c0;
LAB_00fc2fec:
      auVar20 = SUB1612(*(undefined1 (*) [16])(lVar18 + 0xb0),0);
    }
    fVar23 = (float)((undefined8 *)*param_3)[1];
    fVar22 = (float)*(undefined8 *)*param_3;
    local_70 = fVar22 - local_70;
    fStack_68 = fVar23 - fStack_68;
    local_70 = local_70 * local_70;
    fStack_68 = fStack_68 * fStack_68;
    auVar7._4_4_ = 0;
    auVar7._0_4_ = local_70;
    auVar7._8_4_ = fStack_68;
    auVar7._12_4_ = 0;
    auVar8._4_4_ = 0;
    auVar8._0_4_ = local_70;
    auVar8._8_4_ = fStack_68;
    auVar8._12_4_ = 0;
    auVar24 = NEON_ext(auVar7,auVar8,8,1);
    fVar22 = fVar22 - auVar20._0_4_;
    fVar23 = fVar23 - auVar20._8_4_;
    fVar22 = fVar22 * fVar22;
    fVar23 = fVar23 * fVar23;
    auVar9._4_4_ = 0;
    auVar9._0_4_ = fVar22;
    auVar9._8_4_ = fVar23;
    auVar9._12_4_ = 0;
    auVar10._4_4_ = 0;
    auVar10._0_4_ = fVar22;
    auVar10._8_4_ = fVar23;
    auVar10._12_4_ = 0;
    auVar21 = NEON_ext(auVar9,auVar10,8,1);
    if (auVar24._0_4_ + local_70 + auVar24._4_4_ + 0.0 <
        auVar21._0_4_ + fVar22 + auVar21._4_4_ + 0.0) {
      lVar18 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = lVar18;
    }
    break;
  case 3:
    FUN_00fc23e0(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_00fc2820(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00fc2b50(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_00fc23e0(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar18 = 0;
      iVar19 = 0;
      plVar11 = param_1 + 3;
      plVar14 = param_1 + 2;
      do {
        plVar13 = plVar11;
        lVar16 = *plVar13;
        lVar15 = *plVar14;
        lVar12 = FUN_00fba2d0(lVar16 + 0x280);
        if (lVar12 == 0) {
          lVar12 = FUN_01225e70(lVar16);
          FUN_01223ca0(lVar12 + 0x10);
          auVar21 = FUN_01223380();
          fStack_68 = auVar21._8_4_;
          local_70 = auVar21._0_4_;
          lVar12 = FUN_00fba2d0(lVar15 + 0x280);
          if (lVar12 != 0) goto LAB_00fc304c;
LAB_00fc3078:
          lVar12 = FUN_01225e70(lVar15);
          FUN_01223ca0(lVar12 + 0x10);
          auVar21 = FUN_01223380();
          auVar20 = auVar21._0_12_;
        }
        else {
          fStack_68 = SUB164(*(undefined1 (*) [16])(lVar12 + 0xb0),8);
          local_70 = SUB164(*(undefined1 (*) [16])(lVar12 + 0xb0),0);
          lVar12 = FUN_00fba2d0(lVar15 + 0x280);
          if (lVar12 == 0) goto LAB_00fc3078;
LAB_00fc304c:
          auVar20 = SUB1612(*(undefined1 (*) [16])(lVar12 + 0xb0),0);
        }
        fVar22 = (float)*(undefined8 *)*param_3;
        local_70 = fVar22 - local_70;
        fVar23 = (float)((undefined8 *)*param_3)[1];
        fStack_68 = fVar23 - fStack_68;
        local_70 = local_70 * local_70;
        fStack_68 = fStack_68 * fStack_68;
        auVar21._4_4_ = 0;
        auVar21._0_4_ = local_70;
        auVar21._8_4_ = fStack_68;
        auVar21._12_4_ = 0;
        auVar24._4_4_ = 0;
        auVar24._0_4_ = local_70;
        auVar24._8_4_ = fStack_68;
        auVar24._12_4_ = 0;
        auVar21 = NEON_ext(auVar21,auVar24,8,1);
        fVar22 = fVar22 - auVar20._0_4_;
        fVar23 = fVar23 - auVar20._8_4_;
        fVar22 = fVar22 * fVar22;
        fVar23 = fVar23 * fVar23;
        auVar1._4_4_ = 0;
        auVar1._0_4_ = fVar22;
        auVar1._8_4_ = fVar23;
        auVar1._12_4_ = 0;
        auVar2._4_4_ = 0;
        auVar2._0_4_ = fVar22;
        auVar2._8_4_ = fVar23;
        auVar2._12_4_ = 0;
        auVar24 = NEON_ext(auVar1,auVar2,8,1);
        if (auVar21._0_4_ + local_70 + auVar21._4_4_ + 0.0 <
            auVar24._0_4_ + fVar22 + auVar24._4_4_ + 0.0) {
          lVar15 = *plVar13;
          lVar12 = lVar18;
          do {
            lVar16 = lVar12;
            *(undefined8 *)((long)param_1 + lVar16 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar16 + 0x10);
            if (lVar16 == -0x10) {
              *param_1 = lVar15;
              goto joined_r0x00fc3230;
            }
            lVar17 = *(long *)((long)param_1 + lVar16 + 8);
            lVar12 = FUN_00fba2d0(lVar15 + 0x280);
            if (lVar12 == 0) {
              lVar12 = FUN_01225e70(lVar15);
              FUN_01223ca0(lVar12 + 0x10);
              auVar21 = FUN_01223380();
              fStack_68 = auVar21._8_4_;
              local_70 = auVar21._0_4_;
              lVar12 = FUN_00fba2d0(lVar17 + 0x280);
              if (lVar12 != 0) goto LAB_00fc3148;
LAB_00fc3174:
              lVar12 = FUN_01225e70(lVar17);
              FUN_01223ca0(lVar12 + 0x10);
              auVar21 = FUN_01223380();
              auVar20 = auVar21._0_12_;
            }
            else {
              fStack_68 = SUB164(*(undefined1 (*) [16])(lVar12 + 0xb0),8);
              local_70 = SUB164(*(undefined1 (*) [16])(lVar12 + 0xb0),0);
              lVar12 = FUN_00fba2d0(lVar17 + 0x280);
              if (lVar12 == 0) goto LAB_00fc3174;
LAB_00fc3148:
              auVar20 = SUB1612(*(undefined1 (*) [16])(lVar12 + 0xb0),0);
            }
            fVar23 = (float)*(undefined8 *)*param_3;
            fVar22 = (float)((undefined8 *)*param_3)[1];
            local_70 = fVar23 - local_70;
            fStack_68 = fVar22 - fStack_68;
            local_70 = local_70 * local_70;
            fStack_68 = fStack_68 * fStack_68;
            auVar3._4_4_ = 0;
            auVar3._0_4_ = local_70;
            auVar3._8_4_ = fStack_68;
            auVar3._12_4_ = 0;
            auVar4._4_4_ = 0;
            auVar4._0_4_ = local_70;
            auVar4._8_4_ = fStack_68;
            auVar4._12_4_ = 0;
            auVar21 = NEON_ext(auVar3,auVar4,8,1);
            fVar23 = fVar23 - auVar20._0_4_;
            fVar22 = fVar22 - auVar20._8_4_;
            fVar23 = fVar23 * fVar23;
            fVar22 = fVar22 * fVar22;
            auVar5._4_4_ = 0;
            auVar5._0_4_ = fVar23;
            auVar5._8_4_ = fVar22;
            auVar5._12_4_ = 0;
            auVar6._4_4_ = 0;
            auVar6._0_4_ = fVar23;
            auVar6._8_4_ = fVar22;
            auVar6._12_4_ = 0;
            auVar24 = NEON_ext(auVar5,auVar6,8,1);
            lVar12 = lVar16 + -8;
          } while (auVar21._0_4_ + local_70 + auVar21._4_4_ + 0.0 <
                   auVar24._0_4_ + fVar23 + auVar24._4_4_ + 0.0);
          *(long *)((long)param_1 + lVar16 + 0x10) = lVar15;
joined_r0x00fc3230:
          iVar19 = iVar19 + 1;
          if (iVar19 == 8) {
            return plVar13 + 1 == param_2;
          }
        }
        lVar18 = lVar18 + 8;
        plVar11 = plVar13 + 1;
        plVar14 = plVar13;
      } while (plVar13 + 1 != param_2);
    }
  }
  return true;
}


