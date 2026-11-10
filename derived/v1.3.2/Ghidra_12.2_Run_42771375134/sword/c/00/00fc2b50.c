/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc2b50; name: FUN_00fc2b50
 */


int FUN_00fc2b50(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                undefined8 *param_6)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  undefined1 auVar26 [16];
  float local_70;
  float fStack_68;
  
  iVar15 = FUN_00fc2820();
  lVar19 = *param_5;
  lVar18 = *param_4;
  lVar16 = FUN_00fba2d0(lVar19 + 0x280);
  if (lVar16 == 0) {
    lVar16 = FUN_01225e70(lVar19);
    FUN_01223ca0(lVar16 + 0x10);
    auVar22 = FUN_01223380();
    fVar24 = auVar22._8_4_;
    fVar23 = auVar22._0_4_;
    lVar16 = FUN_00fba2d0(lVar18 + 0x280);
  }
  else {
    fVar24 = SUB164(*(undefined1 (*) [16])(lVar16 + 0xb0),8);
    fVar23 = SUB164(*(undefined1 (*) [16])(lVar16 + 0xb0),0);
    lVar16 = FUN_00fba2d0(lVar18 + 0x280);
  }
  if (lVar16 == 0) {
    lVar16 = FUN_01225e70(lVar18);
    FUN_01223ca0(lVar16 + 0x10);
    auVar22 = FUN_01223380();
    auVar20 = auVar22._0_12_;
  }
  else {
    auVar20 = SUB1612(*(undefined1 (*) [16])(lVar16 + 0xb0),0);
  }
  fVar27 = (float)((undefined8 *)*param_6)[1];
  fVar25 = (float)*(undefined8 *)*param_6;
  fVar23 = fVar25 - fVar23;
  fVar24 = fVar27 - fVar24;
  fVar23 = fVar23 * fVar23;
  fVar24 = fVar24 * fVar24;
  auVar22._4_4_ = 0;
  auVar22._0_4_ = fVar23;
  auVar22._8_4_ = fVar24;
  auVar22._12_4_ = 0;
  auVar26._4_4_ = 0;
  auVar26._0_4_ = fVar23;
  auVar26._8_4_ = fVar24;
  auVar26._12_4_ = 0;
  auVar22 = NEON_ext(auVar22,auVar26,8,1);
  fVar25 = fVar25 - auVar20._0_4_;
  fVar27 = fVar27 - auVar20._8_4_;
  fVar25 = fVar25 * fVar25;
  fVar27 = fVar27 * fVar27;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = fVar25;
  auVar1._8_4_ = fVar27;
  auVar1._12_4_ = 0;
  auVar2._4_4_ = 0;
  auVar2._0_4_ = fVar25;
  auVar2._8_4_ = fVar27;
  auVar2._12_4_ = 0;
  auVar26 = NEON_ext(auVar1,auVar2,8,1);
  iVar17 = iVar15;
  if (auVar22._0_4_ + fVar23 + auVar22._4_4_ + 0.0 < auVar26._0_4_ + fVar25 + auVar26._4_4_ + 0.0) {
    lVar16 = *param_4;
    *param_4 = *param_5;
    *param_5 = lVar16;
    lVar18 = *param_4;
    lVar19 = *param_3;
    lVar16 = FUN_00fba2d0(lVar18 + 0x280);
    if (lVar16 == 0) {
      lVar16 = FUN_01225e70(lVar18);
      FUN_01223ca0(lVar16 + 0x10);
      auVar22 = FUN_01223380();
      auVar20 = auVar22._0_12_;
    }
    else {
      auVar20 = SUB1612(*(undefined1 (*) [16])(lVar16 + 0xb0),0);
    }
    iVar17 = iVar15 + 1;
    lVar16 = FUN_00fba2d0(lVar19 + 0x280);
    if (lVar16 == 0) {
      lVar16 = FUN_01225e70(lVar19);
      FUN_01223ca0(lVar16 + 0x10);
      auVar22 = FUN_01223380();
      auVar21 = auVar22._0_12_;
    }
    else {
      auVar21 = SUB1612(*(undefined1 (*) [16])(lVar16 + 0xb0),0);
    }
    fVar24 = (float)*(undefined8 *)*param_6;
    fVar23 = fVar24 - auVar20._0_4_;
    fVar25 = (float)((undefined8 *)*param_6)[1];
    fVar27 = fVar25 - auVar20._8_4_;
    fVar23 = fVar23 * fVar23;
    fVar27 = fVar27 * fVar27;
    auVar3._4_4_ = 0;
    auVar3._0_4_ = fVar23;
    auVar3._8_4_ = fVar27;
    auVar3._12_4_ = 0;
    auVar4._4_4_ = 0;
    auVar4._0_4_ = fVar23;
    auVar4._8_4_ = fVar27;
    auVar4._12_4_ = 0;
    auVar22 = NEON_ext(auVar3,auVar4,8,1);
    fVar24 = fVar24 - auVar21._0_4_;
    fVar25 = fVar25 - auVar21._8_4_;
    fVar24 = fVar24 * fVar24;
    fVar25 = fVar25 * fVar25;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = fVar24;
    auVar5._8_4_ = fVar25;
    auVar5._12_4_ = 0;
    auVar6._4_4_ = 0;
    auVar6._0_4_ = fVar24;
    auVar6._8_4_ = fVar25;
    auVar6._12_4_ = 0;
    auVar26 = NEON_ext(auVar5,auVar6,8,1);
    if (auVar22._0_4_ + fVar23 + auVar22._4_4_ + 0.0 < auVar26._0_4_ + fVar24 + auVar26._4_4_ + 0.0)
    {
      lVar16 = *param_3;
      *param_3 = *param_4;
      *param_4 = lVar16;
      lVar18 = *param_3;
      lVar19 = *param_2;
      lVar16 = FUN_00fba2d0(lVar18 + 0x280);
      if (lVar16 == 0) {
        lVar16 = FUN_01225e70(lVar18);
        FUN_01223ca0(lVar16 + 0x10);
        auVar22 = FUN_01223380();
        auVar20 = auVar22._0_12_;
      }
      else {
        auVar20 = SUB1612(*(undefined1 (*) [16])(lVar16 + 0xb0),0);
      }
      iVar17 = iVar15 + 2;
      lVar16 = FUN_00fba2d0(lVar19 + 0x280);
      if (lVar16 == 0) {
        lVar16 = FUN_01225e70(lVar19);
        FUN_01223ca0(lVar16 + 0x10);
        auVar22 = FUN_01223380();
        auVar21 = auVar22._0_12_;
      }
      else {
        auVar21 = SUB1612(*(undefined1 (*) [16])(lVar16 + 0xb0),0);
      }
      fVar24 = (float)*(undefined8 *)*param_6;
      fVar23 = fVar24 - auVar20._0_4_;
      fVar25 = (float)((undefined8 *)*param_6)[1];
      fVar27 = fVar25 - auVar20._8_4_;
      fVar23 = fVar23 * fVar23;
      fVar27 = fVar27 * fVar27;
      auVar7._4_4_ = 0;
      auVar7._0_4_ = fVar23;
      auVar7._8_4_ = fVar27;
      auVar7._12_4_ = 0;
      auVar8._4_4_ = 0;
      auVar8._0_4_ = fVar23;
      auVar8._8_4_ = fVar27;
      auVar8._12_4_ = 0;
      auVar22 = NEON_ext(auVar7,auVar8,8,1);
      fVar24 = fVar24 - auVar21._0_4_;
      fVar25 = fVar25 - auVar21._8_4_;
      fVar24 = fVar24 * fVar24;
      fVar25 = fVar25 * fVar25;
      auVar9._4_4_ = 0;
      auVar9._0_4_ = fVar24;
      auVar9._8_4_ = fVar25;
      auVar9._12_4_ = 0;
      auVar10._4_4_ = 0;
      auVar10._0_4_ = fVar24;
      auVar10._8_4_ = fVar25;
      auVar10._12_4_ = 0;
      auVar26 = NEON_ext(auVar9,auVar10,8,1);
      if (auVar22._0_4_ + fVar23 + auVar22._4_4_ + 0.0 <
          auVar26._0_4_ + fVar24 + auVar26._4_4_ + 0.0) {
        lVar16 = *param_2;
        *param_2 = *param_3;
        *param_3 = lVar16;
        lVar19 = *param_2;
        lVar18 = *param_1;
        lVar16 = FUN_00fba2d0(lVar19 + 0x280);
        if (lVar16 == 0) {
          lVar16 = FUN_01225e70(lVar19);
          FUN_01223ca0(lVar16 + 0x10);
          auVar22 = FUN_01223380();
          auVar20 = auVar22._0_12_;
        }
        else {
          auVar20 = SUB1612(*(undefined1 (*) [16])(lVar16 + 0xb0),0);
        }
        iVar17 = iVar15 + 3;
        lVar16 = FUN_00fba2d0(lVar18 + 0x280);
        if (lVar16 == 0) {
          lVar16 = FUN_01225e70(lVar18);
          FUN_01223ca0(lVar16 + 0x10);
          auVar22 = FUN_01223380();
          auVar21 = auVar22._0_12_;
        }
        else {
          auVar21 = SUB1612(*(undefined1 (*) [16])(lVar16 + 0xb0),0);
        }
        local_70 = auVar20._0_4_;
        fStack_68 = auVar20._8_4_;
        fVar23 = (float)*(undefined8 *)*param_6;
        local_70 = fVar23 - local_70;
        fVar24 = (float)((undefined8 *)*param_6)[1];
        fStack_68 = fVar24 - fStack_68;
        local_70 = local_70 * local_70;
        fStack_68 = fStack_68 * fStack_68;
        auVar11._4_4_ = 0;
        auVar11._0_4_ = local_70;
        auVar11._8_4_ = fStack_68;
        auVar11._12_4_ = 0;
        auVar12._4_4_ = 0;
        auVar12._0_4_ = local_70;
        auVar12._8_4_ = fStack_68;
        auVar12._12_4_ = 0;
        auVar26 = NEON_ext(auVar11,auVar12,8,1);
        fVar23 = fVar23 - auVar21._0_4_;
        fVar24 = fVar24 - auVar21._8_4_;
        fVar23 = fVar23 * fVar23;
        fVar24 = fVar24 * fVar24;
        auVar13._4_4_ = 0;
        auVar13._0_4_ = fVar23;
        auVar13._8_4_ = fVar24;
        auVar13._12_4_ = 0;
        auVar14._4_4_ = 0;
        auVar14._0_4_ = fVar23;
        auVar14._8_4_ = fVar24;
        auVar14._12_4_ = 0;
        auVar22 = NEON_ext(auVar13,auVar14,8,1);
        if (auVar26._0_4_ + local_70 + auVar26._4_4_ + 0.0 <
            auVar22._0_4_ + fVar23 + auVar22._4_4_ + 0.0) {
          lVar16 = *param_1;
          iVar17 = iVar15 + 4;
          *param_1 = *param_2;
          *param_2 = lVar16;
        }
      }
    }
  }
  return iVar17;
}


