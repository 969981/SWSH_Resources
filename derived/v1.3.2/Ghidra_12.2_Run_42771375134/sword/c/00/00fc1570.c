/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc1570; name: FUN_00fc1570
 */


void FUN_00fc1570(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  bool bVar48;
  int iVar49;
  ulong uVar50;
  uint uVar51;
  ulong uVar52;
  long *plVar53;
  long lVar54;
  long *plVar55;
  long *plVar56;
  long lVar57;
  long lVar58;
  long *plVar59;
  long *plVar60;
  long lVar61;
  long lVar62;
  long *plVar63;
  undefined1 auVar64 [12];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar70 [16];
  float local_70;
  float fStack_68;
  
LAB_00fc15b8:
  plVar53 = param_2 + -1;
LAB_00fc15dc:
  plVar56 = param_1;
  lVar54 = (long)param_2 - (long)plVar56;
  uVar52 = lVar54 >> 3;
  switch(uVar52) {
  case 0:
  case 1:
    return;
  case 2:
    lVar62 = param_2[-1];
    lVar58 = *plVar56;
    lVar54 = FUN_00fba2d0(lVar62 + 0x280);
    if (lVar54 == 0) {
      lVar54 = FUN_01225e70(lVar62);
      FUN_01223ca0(lVar54 + 0x10);
      auVar65 = FUN_01223380();
      fVar68 = auVar65._8_4_;
      fVar66 = auVar65._0_4_;
      lVar54 = FUN_00fba2d0(lVar58 + 0x280);
    }
    else {
      fVar68 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),8);
      fVar66 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
      lVar54 = FUN_00fba2d0(lVar58 + 0x280);
    }
    if (lVar54 == 0) {
      lVar54 = FUN_01225e70(lVar58);
      FUN_01223ca0(lVar54 + 0x10);
      auVar65 = FUN_01223380();
      auVar64 = auVar65._0_12_;
    }
    else {
      auVar64 = SUB1612(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
    }
    fVar67 = (float)*(undefined8 *)*param_3;
    fVar66 = fVar67 - fVar66;
    fVar69 = (float)((undefined8 *)*param_3)[1];
    fVar68 = fVar69 - fVar68;
    fVar66 = fVar66 * fVar66;
    fVar68 = fVar68 * fVar68;
    auVar44._4_4_ = 0;
    auVar44._0_4_ = fVar66;
    auVar44._8_4_ = fVar68;
    auVar44._12_4_ = 0;
    auVar45._4_4_ = 0;
    auVar45._0_4_ = fVar66;
    auVar45._8_4_ = fVar68;
    auVar45._12_4_ = 0;
    auVar70 = NEON_ext(auVar44,auVar45,8,1);
    fVar67 = fVar67 - auVar64._0_4_;
    fVar69 = fVar69 - auVar64._8_4_;
    fVar67 = fVar67 * fVar67;
    fVar69 = fVar69 * fVar69;
    auVar46._4_4_ = 0;
    auVar46._0_4_ = fVar67;
    auVar46._8_4_ = fVar69;
    auVar46._12_4_ = 0;
    auVar47._4_4_ = 0;
    auVar47._0_4_ = fVar67;
    auVar47._8_4_ = fVar69;
    auVar47._12_4_ = 0;
    auVar65 = NEON_ext(auVar46,auVar47,8,1);
    if (auVar70._0_4_ + fVar66 + auVar70._4_4_ + 0.0 < auVar65._0_4_ + fVar67 + auVar65._4_4_ + 0.0)
    {
      lVar54 = *plVar56;
      *plVar56 = param_2[-1];
      param_2[-1] = lVar54;
      return;
    }
    return;
  case 3:
    FUN_00fc23e0(plVar56,plVar56 + 1,plVar53,param_3);
    return;
  case 4:
    FUN_00fc2820(plVar56,plVar56 + 1,plVar56 + 2,plVar53,param_3);
    return;
  case 5:
    FUN_00fc2b50(plVar56,plVar56 + 1,plVar56 + 2,plVar56 + 3,plVar53,param_3);
    return;
  }
  if (0xf7 < lVar54) {
    uVar50 = uVar52;
    if ((long)uVar52 < 0) {
      uVar50 = uVar52 + 1;
    }
    plVar55 = (long *)((long)plVar56 + (uVar50 & 0x3ffffffffffffffe) * 4);
    if (lVar54 < 0x1f39) {
      iVar49 = FUN_00fc23e0(plVar56,plVar55,plVar53,param_3);
    }
    else {
      uVar50 = uVar52 + 3;
      if (-1 < (long)uVar52) {
        uVar50 = uVar52;
      }
      lVar54 = (uVar50 & 0x7ffffffffffffffc) * 2;
      iVar49 = FUN_00fc2b50(plVar56,(long)plVar56 + lVar54,plVar55,(long)plVar55 + lVar54,plVar53,
                            param_3);
    }
    lVar62 = *plVar56;
    lVar58 = *plVar55;
    lVar54 = FUN_00fba2d0(lVar62 + 0x280);
    if (lVar54 == 0) {
      lVar54 = FUN_01225e70(lVar62);
      FUN_01223ca0(lVar54 + 0x10);
      auVar65 = FUN_01223380();
      fStack_68 = auVar65._8_4_;
      local_70 = auVar65._0_4_;
      lVar54 = FUN_00fba2d0(lVar58 + 0x280);
      if (lVar54 != 0) goto LAB_00fc168c;
LAB_00fc16b8:
      lVar54 = FUN_01225e70(lVar58);
      FUN_01223ca0(lVar54 + 0x10);
      auVar65 = FUN_01223380();
      auVar64 = auVar65._0_12_;
    }
    else {
      fStack_68 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),8);
      local_70 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
      lVar54 = FUN_00fba2d0(lVar58 + 0x280);
      if (lVar54 == 0) goto LAB_00fc16b8;
LAB_00fc168c:
      auVar64 = SUB1612(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
    }
    fVar66 = (float)*(undefined8 *)*param_3;
    local_70 = fVar66 - local_70;
    fVar68 = (float)((undefined8 *)*param_3)[1];
    fStack_68 = fVar68 - fStack_68;
    local_70 = local_70 * local_70;
    fStack_68 = fStack_68 * fStack_68;
    auVar65._4_4_ = 0;
    auVar65._0_4_ = local_70;
    auVar65._8_4_ = fStack_68;
    auVar65._12_4_ = 0;
    auVar70._4_4_ = 0;
    auVar70._0_4_ = local_70;
    auVar70._8_4_ = fStack_68;
    auVar70._12_4_ = 0;
    auVar65 = NEON_ext(auVar65,auVar70,8,1);
    fVar66 = fVar66 - auVar64._0_4_;
    fVar68 = fVar68 - auVar64._8_4_;
    fVar66 = fVar66 * fVar66;
    fVar68 = fVar68 * fVar68;
    auVar2._4_4_ = 0;
    auVar2._0_4_ = fVar66;
    auVar2._8_4_ = fVar68;
    auVar2._12_4_ = 0;
    auVar3._4_4_ = 0;
    auVar3._0_4_ = fVar66;
    auVar3._8_4_ = fVar68;
    auVar3._12_4_ = 0;
    auVar70 = NEON_ext(auVar2,auVar3,8,1);
    if (auVar70._0_4_ + fVar66 + auVar70._4_4_ + 0.0 <=
        auVar65._0_4_ + local_70 + auVar65._4_4_ + 0.0) {
      plVar59 = param_2 + -2;
      do {
        plVar63 = plVar59;
        if (plVar56 == plVar63) {
          plVar55 = plVar56 + 1;
          lVar62 = *plVar56;
          lVar58 = *plVar53;
          lVar54 = FUN_00fba2d0(lVar62 + 0x280);
          if (lVar54 == 0) {
            lVar54 = FUN_01225e70(lVar62);
            FUN_01223ca0(lVar54 + 0x10);
            auVar65 = FUN_01223380();
            fStack_68 = auVar65._8_4_;
            local_70 = auVar65._0_4_;
            lVar54 = FUN_00fba2d0(lVar58 + 0x280);
            if (lVar54 != 0) goto LAB_00fc1bdc;
LAB_00fc1c08:
            lVar54 = FUN_01225e70(lVar58);
            FUN_01223ca0(lVar54 + 0x10);
            auVar65 = FUN_01223380();
            auVar64 = auVar65._0_12_;
          }
          else {
            fStack_68 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),8);
            local_70 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
            lVar54 = FUN_00fba2d0(lVar58 + 0x280);
            if (lVar54 == 0) goto LAB_00fc1c08;
LAB_00fc1bdc:
            auVar64 = SUB1612(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
          }
          fVar66 = (float)*(undefined8 *)*param_3;
          local_70 = fVar66 - local_70;
          fVar68 = (float)((undefined8 *)*param_3)[1];
          fStack_68 = fVar68 - fStack_68;
          local_70 = local_70 * local_70;
          fStack_68 = fStack_68 * fStack_68;
          auVar20._4_4_ = 0;
          auVar20._0_4_ = local_70;
          auVar20._8_4_ = fStack_68;
          auVar20._12_4_ = 0;
          auVar21._4_4_ = 0;
          auVar21._0_4_ = local_70;
          auVar21._8_4_ = fStack_68;
          auVar21._12_4_ = 0;
          auVar65 = NEON_ext(auVar20,auVar21,8,1);
          fVar66 = fVar66 - auVar64._0_4_;
          fVar68 = fVar68 - auVar64._8_4_;
          fVar66 = fVar66 * fVar66;
          fVar68 = fVar68 * fVar68;
          auVar22._4_4_ = 0;
          auVar22._0_4_ = fVar66;
          auVar22._8_4_ = fVar68;
          auVar22._12_4_ = 0;
          auVar23._4_4_ = 0;
          auVar23._0_4_ = fVar66;
          auVar23._8_4_ = fVar68;
          auVar23._12_4_ = 0;
          auVar70 = NEON_ext(auVar22,auVar23,8,1);
          if (auVar65._0_4_ + local_70 + auVar65._4_4_ + 0.0 <
              auVar70._0_4_ + fVar66 + auVar70._4_4_ + 0.0) goto LAB_00fc1da0;
          if (plVar55 == plVar53) {
            return;
          }
          plVar55 = plVar56 + 2;
          goto LAB_00fc1ca0;
        }
        lVar62 = *plVar63;
        lVar58 = *plVar55;
        lVar54 = FUN_00fba2d0(lVar62 + 0x280);
        if (lVar54 == 0) {
          lVar54 = FUN_01225e70(lVar62);
          FUN_01223ca0(lVar54 + 0x10);
          auVar65 = FUN_01223380();
          fStack_68 = auVar65._8_4_;
          local_70 = auVar65._0_4_;
          lVar54 = FUN_00fba2d0(lVar58 + 0x280);
          if (lVar54 != 0) goto LAB_00fc1794;
LAB_00fc17c0:
          lVar54 = FUN_01225e70(lVar58);
          FUN_01223ca0(lVar54 + 0x10);
          auVar65 = FUN_01223380();
          auVar64 = auVar65._0_12_;
        }
        else {
          fStack_68 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),8);
          local_70 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
          lVar54 = FUN_00fba2d0(lVar58 + 0x280);
          if (lVar54 == 0) goto LAB_00fc17c0;
LAB_00fc1794:
          auVar64 = SUB1612(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
        }
        fVar66 = (float)((undefined8 *)*param_3)[1];
        fVar68 = (float)*(undefined8 *)*param_3;
        local_70 = fVar68 - local_70;
        fStack_68 = fVar66 - fStack_68;
        local_70 = local_70 * local_70;
        fStack_68 = fStack_68 * fStack_68;
        auVar16._4_4_ = 0;
        auVar16._0_4_ = local_70;
        auVar16._8_4_ = fStack_68;
        auVar16._12_4_ = 0;
        auVar17._4_4_ = 0;
        auVar17._0_4_ = local_70;
        auVar17._8_4_ = fStack_68;
        auVar17._12_4_ = 0;
        auVar65 = NEON_ext(auVar16,auVar17,8,1);
        fVar68 = fVar68 - auVar64._0_4_;
        fVar66 = fVar66 - auVar64._8_4_;
        fVar68 = fVar68 * fVar68;
        fVar66 = fVar66 * fVar66;
        auVar18._4_4_ = 0;
        auVar18._0_4_ = fVar68;
        auVar18._8_4_ = fVar66;
        auVar18._12_4_ = 0;
        auVar19._4_4_ = 0;
        auVar19._0_4_ = fVar68;
        auVar19._8_4_ = fVar66;
        auVar19._12_4_ = 0;
        auVar70 = NEON_ext(auVar18,auVar19,8,1);
        plVar59 = plVar63 + -1;
      } while (auVar70._0_4_ + fVar68 + auVar70._4_4_ + 0.0 <=
               auVar65._0_4_ + local_70 + auVar65._4_4_ + 0.0);
      lVar54 = *plVar56;
      iVar49 = iVar49 + 1;
      *plVar56 = *plVar63;
      *plVar63 = lVar54;
      plVar59 = plVar56 + 1;
      if (plVar59 < plVar63) goto LAB_00fc1890;
    }
    else {
      plVar59 = plVar56 + 1;
      plVar63 = plVar53;
      if (plVar59 < plVar53) {
LAB_00fc1890:
        do {
          plVar60 = plVar59 + -1;
          do {
            plVar59 = plVar60;
            lVar62 = plVar59[1];
            lVar58 = *plVar55;
            lVar54 = FUN_00fba2d0(lVar62 + 0x280);
            if (lVar54 == 0) {
              lVar54 = FUN_01225e70(lVar62);
              FUN_01223ca0(lVar54 + 0x10);
              auVar65 = FUN_01223380();
              fStack_68 = auVar65._8_4_;
              local_70 = auVar65._0_4_;
              lVar54 = FUN_00fba2d0(lVar58 + 0x280);
              if (lVar54 != 0) goto LAB_00fc18bc;
LAB_00fc18e8:
              lVar54 = FUN_01225e70(lVar58);
              FUN_01223ca0(lVar54 + 0x10);
              auVar65 = FUN_01223380();
              auVar64 = auVar65._0_12_;
            }
            else {
              fStack_68 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),8);
              local_70 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
              lVar54 = FUN_00fba2d0(lVar58 + 0x280);
              if (lVar54 == 0) goto LAB_00fc18e8;
LAB_00fc18bc:
              auVar64 = SUB1612(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
            }
            plVar60 = plVar59 + 1;
            fVar66 = (float)((undefined8 *)*param_3)[1];
            fVar68 = (float)*(undefined8 *)*param_3;
            local_70 = fVar68 - local_70;
            fStack_68 = fVar66 - fStack_68;
            local_70 = local_70 * local_70;
            fStack_68 = fStack_68 * fStack_68;
            auVar8._4_4_ = 0;
            auVar8._0_4_ = local_70;
            auVar8._8_4_ = fStack_68;
            auVar8._12_4_ = 0;
            auVar9._4_4_ = 0;
            auVar9._0_4_ = local_70;
            auVar9._8_4_ = fStack_68;
            auVar9._12_4_ = 0;
            auVar65 = NEON_ext(auVar8,auVar9,8,1);
            fVar68 = fVar68 - auVar64._0_4_;
            fVar66 = fVar66 - auVar64._8_4_;
            fVar68 = fVar68 * fVar68;
            fVar66 = fVar66 * fVar66;
            auVar10._4_4_ = 0;
            auVar10._0_4_ = fVar68;
            auVar10._8_4_ = fVar66;
            auVar10._12_4_ = 0;
            auVar11._4_4_ = 0;
            auVar11._0_4_ = fVar68;
            auVar11._8_4_ = fVar66;
            auVar11._12_4_ = 0;
            auVar70 = NEON_ext(auVar10,auVar11,8,1);
          } while (auVar65._0_4_ + local_70 + auVar65._4_4_ + 0.0 <
                   auVar70._0_4_ + fVar68 + auVar70._4_4_ + 0.0);
          plVar59 = plVar59 + 2;
          do {
            plVar63 = plVar63 + -1;
            lVar62 = *plVar63;
            lVar58 = *plVar55;
            lVar54 = FUN_00fba2d0(lVar62 + 0x280);
            if (lVar54 == 0) {
              lVar54 = FUN_01225e70(lVar62);
              FUN_01223ca0(lVar54 + 0x10);
              auVar65 = FUN_01223380();
              fStack_68 = auVar65._8_4_;
              local_70 = auVar65._0_4_;
              lVar54 = FUN_00fba2d0(lVar58 + 0x280);
              if (lVar54 != 0) goto LAB_00fc19a4;
LAB_00fc19d0:
              lVar54 = FUN_01225e70(lVar58);
              FUN_01223ca0(lVar54 + 0x10);
              auVar65 = FUN_01223380();
              auVar64 = auVar65._0_12_;
            }
            else {
              fStack_68 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),8);
              local_70 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
              lVar54 = FUN_00fba2d0(lVar58 + 0x280);
              if (lVar54 == 0) goto LAB_00fc19d0;
LAB_00fc19a4:
              auVar64 = SUB1612(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
            }
            fVar66 = (float)*(undefined8 *)*param_3;
            local_70 = fVar66 - local_70;
            fVar68 = (float)((undefined8 *)*param_3)[1];
            fStack_68 = fVar68 - fStack_68;
            local_70 = local_70 * local_70;
            fStack_68 = fStack_68 * fStack_68;
            auVar12._4_4_ = 0;
            auVar12._0_4_ = local_70;
            auVar12._8_4_ = fStack_68;
            auVar12._12_4_ = 0;
            auVar13._4_4_ = 0;
            auVar13._0_4_ = local_70;
            auVar13._8_4_ = fStack_68;
            auVar13._12_4_ = 0;
            auVar65 = NEON_ext(auVar12,auVar13,8,1);
            fVar66 = fVar66 - auVar64._0_4_;
            fVar68 = fVar68 - auVar64._8_4_;
            fVar66 = fVar66 * fVar66;
            fVar68 = fVar68 * fVar68;
            auVar14._4_4_ = 0;
            auVar14._0_4_ = fVar66;
            auVar14._8_4_ = fVar68;
            auVar14._12_4_ = 0;
            auVar15._4_4_ = 0;
            auVar15._0_4_ = fVar66;
            auVar15._8_4_ = fVar68;
            auVar15._12_4_ = 0;
            auVar70 = NEON_ext(auVar14,auVar15,8,1);
          } while (auVar70._0_4_ + fVar66 + auVar70._4_4_ + 0.0 <=
                   auVar65._0_4_ + local_70 + auVar65._4_4_ + 0.0);
          if (plVar63 < plVar60) goto code_r0x00fc1a64;
          lVar54 = *plVar60;
          iVar49 = iVar49 + 1;
          plVar1 = plVar63;
          if (plVar55 != plVar60) {
            plVar1 = plVar55;
          }
          *plVar60 = *plVar63;
          *plVar63 = lVar54;
          plVar55 = plVar1;
        } while( true );
      }
    }
    plVar60 = plVar56 + 1;
    if (plVar60 != plVar55) goto LAB_00fc1a74;
    goto LAB_00fc1b68;
  }
  FUN_00fc23e0(plVar56,plVar56 + 1,plVar56 + 2,param_3);
  if (plVar56 + 3 == param_2) {
    return;
  }
  lVar54 = 0;
  plVar53 = plVar56 + 3;
  plVar55 = plVar56 + 2;
  goto LAB_00fc2048;
LAB_00fc1ca0:
  lVar62 = *plVar56;
  lVar58 = plVar55[-1];
  lVar54 = FUN_00fba2d0(lVar62 + 0x280);
  if (lVar54 == 0) {
    lVar54 = FUN_01225e70(lVar62);
    FUN_01223ca0(lVar54 + 0x10);
    auVar65 = FUN_01223380();
    fStack_68 = auVar65._8_4_;
    local_70 = auVar65._0_4_;
    lVar54 = FUN_00fba2d0(lVar58 + 0x280);
    if (lVar54 != 0) goto LAB_00fc1cc8;
LAB_00fc1cf4:
    lVar54 = FUN_01225e70(lVar58);
    FUN_01223ca0(lVar54 + 0x10);
    auVar65 = FUN_01223380();
    auVar64 = auVar65._0_12_;
  }
  else {
    fStack_68 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),8);
    local_70 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
    lVar54 = FUN_00fba2d0(lVar58 + 0x280);
    if (lVar54 == 0) goto LAB_00fc1cf4;
LAB_00fc1cc8:
    auVar64 = SUB1612(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
  }
  fVar66 = (float)*(undefined8 *)*param_3;
  local_70 = fVar66 - local_70;
  fVar68 = (float)((undefined8 *)*param_3)[1];
  fStack_68 = fVar68 - fStack_68;
  local_70 = local_70 * local_70;
  fStack_68 = fStack_68 * fStack_68;
  auVar24._4_4_ = 0;
  auVar24._0_4_ = local_70;
  auVar24._8_4_ = fStack_68;
  auVar24._12_4_ = 0;
  auVar25._4_4_ = 0;
  auVar25._0_4_ = local_70;
  auVar25._8_4_ = fStack_68;
  auVar25._12_4_ = 0;
  auVar65 = NEON_ext(auVar24,auVar25,8,1);
  fVar66 = fVar66 - auVar64._0_4_;
  fVar68 = fVar68 - auVar64._8_4_;
  fVar66 = fVar66 * fVar66;
  fVar68 = fVar68 * fVar68;
  auVar26._4_4_ = 0;
  auVar26._0_4_ = fVar66;
  auVar26._8_4_ = fVar68;
  auVar26._12_4_ = 0;
  auVar27._4_4_ = 0;
  auVar27._0_4_ = fVar66;
  auVar27._8_4_ = fVar68;
  auVar27._12_4_ = 0;
  auVar70 = NEON_ext(auVar26,auVar27,8,1);
  if (auVar65._0_4_ + local_70 + auVar65._4_4_ + 0.0 < auVar70._0_4_ + fVar66 + auVar70._4_4_ + 0.0)
  goto LAB_00fc1d90;
  plVar55 = plVar55 + 1;
  if (param_2 == plVar55) {
    return;
  }
  goto LAB_00fc1ca0;
LAB_00fc1d90:
  lVar54 = plVar55[-1];
  plVar55[-1] = *plVar53;
  *plVar53 = lVar54;
LAB_00fc1da0:
  if (plVar55 == plVar53) {
    return;
  }
  do {
    param_1 = plVar55 + -1;
    do {
      plVar55 = param_1;
      lVar62 = *plVar56;
      lVar58 = plVar55[1];
      lVar54 = FUN_00fba2d0(lVar62 + 0x280);
      if (lVar54 == 0) {
        lVar54 = FUN_01225e70(lVar62);
        FUN_01223ca0(lVar54 + 0x10);
        auVar65 = FUN_01223380();
        fStack_68 = auVar65._8_4_;
        local_70 = auVar65._0_4_;
        lVar54 = FUN_00fba2d0(lVar58 + 0x280);
        if (lVar54 != 0) goto LAB_00fc1de8;
LAB_00fc1e14:
        lVar54 = FUN_01225e70(lVar58);
        FUN_01223ca0(lVar54 + 0x10);
        auVar65 = FUN_01223380();
        auVar64 = auVar65._0_12_;
      }
      else {
        fStack_68 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),8);
        local_70 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
        lVar54 = FUN_00fba2d0(lVar58 + 0x280);
        if (lVar54 == 0) goto LAB_00fc1e14;
LAB_00fc1de8:
        auVar64 = SUB1612(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
      }
      param_1 = plVar55 + 1;
      fVar66 = (float)((undefined8 *)*param_3)[1];
      fVar68 = (float)*(undefined8 *)*param_3;
      local_70 = fVar68 - local_70;
      fStack_68 = fVar66 - fStack_68;
      local_70 = local_70 * local_70;
      fStack_68 = fStack_68 * fStack_68;
      auVar28._4_4_ = 0;
      auVar28._0_4_ = local_70;
      auVar28._8_4_ = fStack_68;
      auVar28._12_4_ = 0;
      auVar29._4_4_ = 0;
      auVar29._0_4_ = local_70;
      auVar29._8_4_ = fStack_68;
      auVar29._12_4_ = 0;
      auVar65 = NEON_ext(auVar28,auVar29,8,1);
      fVar68 = fVar68 - auVar64._0_4_;
      fVar66 = fVar66 - auVar64._8_4_;
      fVar68 = fVar68 * fVar68;
      fVar66 = fVar66 * fVar66;
      auVar30._4_4_ = 0;
      auVar30._0_4_ = fVar68;
      auVar30._8_4_ = fVar66;
      auVar30._12_4_ = 0;
      auVar31._4_4_ = 0;
      auVar31._0_4_ = fVar68;
      auVar31._8_4_ = fVar66;
      auVar31._12_4_ = 0;
      auVar70 = NEON_ext(auVar30,auVar31,8,1);
    } while (auVar70._0_4_ + fVar68 + auVar70._4_4_ + 0.0 <=
             auVar65._0_4_ + local_70 + auVar65._4_4_ + 0.0);
    plVar55 = plVar55 + 2;
    do {
      lVar62 = *plVar56;
      plVar53 = plVar53 + -1;
      lVar58 = *plVar53;
      lVar54 = FUN_00fba2d0(lVar62 + 0x280);
      if (lVar54 == 0) {
        lVar54 = FUN_01225e70(lVar62);
        FUN_01223ca0(lVar54 + 0x10);
        auVar65 = FUN_01223380();
        fStack_68 = auVar65._8_4_;
        local_70 = auVar65._0_4_;
        lVar54 = FUN_00fba2d0(lVar58 + 0x280);
        if (lVar54 != 0) goto LAB_00fc1ed0;
LAB_00fc1efc:
        lVar54 = FUN_01225e70(lVar58);
        FUN_01223ca0(lVar54 + 0x10);
        auVar65 = FUN_01223380();
        auVar64 = auVar65._0_12_;
      }
      else {
        fStack_68 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),8);
        local_70 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
        lVar54 = FUN_00fba2d0(lVar58 + 0x280);
        if (lVar54 == 0) goto LAB_00fc1efc;
LAB_00fc1ed0:
        auVar64 = SUB1612(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
      }
      fVar66 = (float)*(undefined8 *)*param_3;
      local_70 = fVar66 - local_70;
      fVar68 = (float)((undefined8 *)*param_3)[1];
      fStack_68 = fVar68 - fStack_68;
      local_70 = local_70 * local_70;
      fStack_68 = fStack_68 * fStack_68;
      auVar32._4_4_ = 0;
      auVar32._0_4_ = local_70;
      auVar32._8_4_ = fStack_68;
      auVar32._12_4_ = 0;
      auVar33._4_4_ = 0;
      auVar33._0_4_ = local_70;
      auVar33._8_4_ = fStack_68;
      auVar33._12_4_ = 0;
      auVar65 = NEON_ext(auVar32,auVar33,8,1);
      fVar66 = fVar66 - auVar64._0_4_;
      fVar68 = fVar68 - auVar64._8_4_;
      fVar66 = fVar66 * fVar66;
      fVar68 = fVar68 * fVar68;
      auVar34._4_4_ = 0;
      auVar34._0_4_ = fVar66;
      auVar34._8_4_ = fVar68;
      auVar34._12_4_ = 0;
      auVar35._4_4_ = 0;
      auVar35._0_4_ = fVar66;
      auVar35._8_4_ = fVar68;
      auVar35._12_4_ = 0;
      auVar70 = NEON_ext(auVar34,auVar35,8,1);
    } while (auVar65._0_4_ + local_70 + auVar65._4_4_ + 0.0 <
             auVar70._0_4_ + fVar66 + auVar70._4_4_ + 0.0);
    if (plVar53 <= param_1) break;
    lVar54 = *param_1;
    *param_1 = *plVar53;
    *plVar53 = lVar54;
  } while( true );
  uVar51 = 4;
  goto LAB_00fc1fa0;
code_r0x00fc1a64:
  if (plVar60 == plVar55) goto LAB_00fc1b68;
LAB_00fc1a74:
  lVar62 = *plVar55;
  lVar58 = *plVar60;
  lVar54 = FUN_00fba2d0(lVar62 + 0x280);
  if (lVar54 == 0) {
    lVar54 = FUN_01225e70(lVar62);
    FUN_01223ca0(lVar54 + 0x10);
    auVar65 = FUN_01223380();
    fStack_68 = auVar65._8_4_;
    local_70 = auVar65._0_4_;
    lVar54 = FUN_00fba2d0(lVar58 + 0x280);
    if (lVar54 != 0) goto LAB_00fc1a9c;
LAB_00fc1ac8:
    lVar54 = FUN_01225e70(lVar58);
    FUN_01223ca0(lVar54 + 0x10);
    auVar65 = FUN_01223380();
    auVar64 = auVar65._0_12_;
  }
  else {
    fStack_68 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),8);
    local_70 = SUB164(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
    lVar54 = FUN_00fba2d0(lVar58 + 0x280);
    if (lVar54 == 0) goto LAB_00fc1ac8;
LAB_00fc1a9c:
    auVar64 = SUB1612(*(undefined1 (*) [16])(lVar54 + 0xb0),0);
  }
  fVar66 = (float)*(undefined8 *)*param_3;
  local_70 = fVar66 - local_70;
  fVar68 = (float)((undefined8 *)*param_3)[1];
  fStack_68 = fVar68 - fStack_68;
  local_70 = local_70 * local_70;
  fStack_68 = fStack_68 * fStack_68;
  auVar4._4_4_ = 0;
  auVar4._0_4_ = local_70;
  auVar4._8_4_ = fStack_68;
  auVar4._12_4_ = 0;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = local_70;
  auVar5._8_4_ = fStack_68;
  auVar5._12_4_ = 0;
  auVar65 = NEON_ext(auVar4,auVar5,8,1);
  fVar66 = fVar66 - auVar64._0_4_;
  fVar68 = fVar68 - auVar64._8_4_;
  fVar66 = fVar66 * fVar66;
  fVar68 = fVar68 * fVar68;
  auVar6._4_4_ = 0;
  auVar6._0_4_ = fVar66;
  auVar6._8_4_ = fVar68;
  auVar6._12_4_ = 0;
  auVar7._4_4_ = 0;
  auVar7._0_4_ = fVar66;
  auVar7._8_4_ = fVar68;
  auVar7._12_4_ = 0;
  auVar70 = NEON_ext(auVar6,auVar7,8,1);
  if (auVar65._0_4_ + local_70 + auVar65._4_4_ + 0.0 < auVar70._0_4_ + fVar66 + auVar70._4_4_ + 0.0)
  {
    lVar54 = *plVar60;
    iVar49 = iVar49 + 1;
    *plVar60 = *plVar55;
    *plVar55 = lVar54;
  }
LAB_00fc1b68:
  if (iVar49 == 0) {
    uVar52 = FUN_00fc2f70(plVar56,plVar60,param_3);
    uVar50 = FUN_00fc2f70(plVar60 + 1,param_2,param_3);
    if ((uVar50 & 1) != 0) goto LAB_00fc1fb8;
    param_1 = plVar60 + 1;
    if ((uVar52 & 1) != 0) goto LAB_00fc15dc;
  }
  if ((long)param_2 - (long)plVar60 <= (long)plVar60 - (long)plVar56) {
    FUN_00fc1570(plVar60 + 1,param_2,param_3);
    param_2 = plVar60;
    param_1 = plVar56;
    goto LAB_00fc15b8;
  }
  FUN_00fc1570(plVar56,plVar60,param_3);
  param_1 = plVar60 + 1;
  goto LAB_00fc15dc;
LAB_00fc1fb8:
  bVar48 = (uVar52 & 1) == 0;
  if (bVar48) {
    param_2 = plVar60;
  }
  uVar51 = 1;
  if (bVar48) {
    uVar51 = 2;
  }
  param_1 = plVar56;
  if (4 < uVar51) {
    return;
  }
LAB_00fc1fa0:
  if ((1 << (ulong)uVar51 & 0x15U) == 0) {
    return;
  }
  goto LAB_00fc15b8;
LAB_00fc2048:
  plVar59 = plVar53;
  lVar57 = *plVar59;
  lVar62 = *plVar55;
  lVar58 = FUN_00fba2d0(lVar57 + 0x280);
  if (lVar58 == 0) {
    lVar58 = FUN_01225e70(lVar57);
    FUN_01223ca0(lVar58 + 0x10);
    auVar65 = FUN_01223380();
    fStack_68 = auVar65._8_4_;
    local_70 = auVar65._0_4_;
    lVar58 = FUN_00fba2d0(lVar62 + 0x280);
    if (lVar58 != 0) goto LAB_00fc2074;
LAB_00fc20a0:
    lVar58 = FUN_01225e70(lVar62);
    FUN_01223ca0(lVar58 + 0x10);
    auVar65 = FUN_01223380();
    auVar64 = auVar65._0_12_;
  }
  else {
    fStack_68 = SUB164(*(undefined1 (*) [16])(lVar58 + 0xb0),8);
    local_70 = SUB164(*(undefined1 (*) [16])(lVar58 + 0xb0),0);
    lVar58 = FUN_00fba2d0(lVar62 + 0x280);
    if (lVar58 == 0) goto LAB_00fc20a0;
LAB_00fc2074:
    auVar64 = SUB1612(*(undefined1 (*) [16])(lVar58 + 0xb0),0);
  }
  fVar66 = (float)*(undefined8 *)*param_3;
  local_70 = fVar66 - local_70;
  fVar68 = (float)((undefined8 *)*param_3)[1];
  fStack_68 = fVar68 - fStack_68;
  local_70 = local_70 * local_70;
  fStack_68 = fStack_68 * fStack_68;
  auVar36._4_4_ = 0;
  auVar36._0_4_ = local_70;
  auVar36._8_4_ = fStack_68;
  auVar36._12_4_ = 0;
  auVar37._4_4_ = 0;
  auVar37._0_4_ = local_70;
  auVar37._8_4_ = fStack_68;
  auVar37._12_4_ = 0;
  auVar65 = NEON_ext(auVar36,auVar37,8,1);
  fVar66 = fVar66 - auVar64._0_4_;
  fVar68 = fVar68 - auVar64._8_4_;
  fVar66 = fVar66 * fVar66;
  fVar68 = fVar68 * fVar68;
  auVar38._4_4_ = 0;
  auVar38._0_4_ = fVar66;
  auVar38._8_4_ = fVar68;
  auVar38._12_4_ = 0;
  auVar39._4_4_ = 0;
  auVar39._0_4_ = fVar66;
  auVar39._8_4_ = fVar68;
  auVar39._12_4_ = 0;
  auVar70 = NEON_ext(auVar38,auVar39,8,1);
  if (auVar65._0_4_ + local_70 + auVar65._4_4_ + 0.0 < auVar70._0_4_ + fVar66 + auVar70._4_4_ + 0.0)
  {
    lVar62 = *plVar59;
    lVar58 = lVar54;
    do {
      lVar57 = lVar58;
      *(undefined8 *)((long)plVar56 + lVar57 + 0x18) =
           *(undefined8 *)((long)plVar56 + lVar57 + 0x10);
      if (lVar57 == -0x10) {
        plVar53 = plVar56;
        goto LAB_00fc223c;
      }
      lVar61 = *(long *)((long)plVar56 + lVar57 + 8);
      lVar58 = FUN_00fba2d0(lVar62 + 0x280);
      if (lVar58 == 0) {
        lVar58 = FUN_01225e70(lVar62);
        FUN_01223ca0(lVar58 + 0x10);
        auVar65 = FUN_01223380();
        fStack_68 = auVar65._8_4_;
        local_70 = auVar65._0_4_;
        lVar58 = FUN_00fba2d0(lVar61 + 0x280);
        if (lVar58 != 0) goto LAB_00fc2170;
LAB_00fc219c:
        lVar58 = FUN_01225e70(lVar61);
        FUN_01223ca0(lVar58 + 0x10);
        auVar65 = FUN_01223380();
        auVar64 = auVar65._0_12_;
      }
      else {
        fStack_68 = SUB164(*(undefined1 (*) [16])(lVar58 + 0xb0),8);
        local_70 = SUB164(*(undefined1 (*) [16])(lVar58 + 0xb0),0);
        lVar58 = FUN_00fba2d0(lVar61 + 0x280);
        if (lVar58 == 0) goto LAB_00fc219c;
LAB_00fc2170:
        auVar64 = SUB1612(*(undefined1 (*) [16])(lVar58 + 0xb0),0);
      }
      fVar66 = (float)((undefined8 *)*param_3)[1];
      fVar68 = (float)*(undefined8 *)*param_3;
      local_70 = fVar68 - local_70;
      fStack_68 = fVar66 - fStack_68;
      local_70 = local_70 * local_70;
      fStack_68 = fStack_68 * fStack_68;
      auVar40._4_4_ = 0;
      auVar40._0_4_ = local_70;
      auVar40._8_4_ = fStack_68;
      auVar40._12_4_ = 0;
      auVar41._4_4_ = 0;
      auVar41._0_4_ = local_70;
      auVar41._8_4_ = fStack_68;
      auVar41._12_4_ = 0;
      auVar65 = NEON_ext(auVar40,auVar41,8,1);
      fVar68 = fVar68 - auVar64._0_4_;
      fVar66 = fVar66 - auVar64._8_4_;
      fVar68 = fVar68 * fVar68;
      fVar66 = fVar66 * fVar66;
      auVar42._4_4_ = 0;
      auVar42._0_4_ = fVar68;
      auVar42._8_4_ = fVar66;
      auVar42._12_4_ = 0;
      auVar43._4_4_ = 0;
      auVar43._0_4_ = fVar68;
      auVar43._8_4_ = fVar66;
      auVar43._12_4_ = 0;
      auVar70 = NEON_ext(auVar42,auVar43,8,1);
      lVar58 = lVar57 + -8;
    } while (auVar65._0_4_ + local_70 + auVar65._4_4_ + 0.0 <
             auVar70._0_4_ + fVar68 + auVar70._4_4_ + 0.0);
    plVar53 = (long *)((long)plVar56 + lVar57 + 0x10);
LAB_00fc223c:
    *plVar53 = lVar62;
  }
  lVar54 = lVar54 + 8;
  plVar53 = plVar59 + 1;
  plVar55 = plVar59;
  if (plVar59 + 1 == param_2) {
    return;
  }
  goto LAB_00fc2048;
}


