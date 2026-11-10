/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f37420; name: FUN_00f37420
 */


/* WARNING: Type propagation algorithm not settling */

float FUN_00f37420(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  int iVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  long local_a0 [16];
  
  plVar14 = *(long **)(param_1 + 0x38);
  plVar13 = (long *)(param_1 + 0x40);
  if (plVar14 == plVar13) {
    return -1.0;
  }
  iVar23 = 0;
  plVar15 = plVar14;
  do {
    while( true ) {
      if (plVar15[4] == *param_2) goto LAB_00f374cc;
      iVar23 = iVar23 + 1;
      plVar17 = (long *)plVar15[1];
      if ((long *)plVar15[1] == (long *)0x0) break;
      do {
        plVar15 = plVar17;
        plVar17 = (long *)*plVar15;
      } while ((long *)*plVar15 != (long *)0x0);
LAB_00f374b0:
      if (plVar15 == plVar13) goto LAB_00f374c8;
    }
    plVar17 = plVar15 + 2;
    plVar21 = (long *)*plVar17;
    if ((long *)*plVar21 != plVar15) {
      do {
        lVar18 = *plVar17;
        plVar17 = (long *)(lVar18 + 0x10);
        plVar15 = (long *)*plVar17;
      } while (*plVar15 != lVar18);
      goto LAB_00f374b0;
    }
    plVar15 = plVar21;
  } while (plVar21 != plVar13);
LAB_00f374c8:
  iVar23 = -1;
LAB_00f374cc:
  iVar11 = 0;
  while (plVar14[4] != *param_3) {
    iVar11 = iVar11 + 1;
    plVar15 = (long *)plVar14[1];
    if ((long *)plVar14[1] == (long *)0x0) {
      plVar15 = plVar14 + 2;
      plVar17 = (long *)*plVar15;
      if ((long *)*plVar17 != plVar14) {
        do {
          lVar18 = *plVar15;
          plVar15 = (long *)(lVar18 + 0x10);
          plVar14 = (long *)*plVar15;
        } while (*plVar14 != lVar18);
        goto LAB_00f37528;
      }
      plVar14 = plVar17;
      if (plVar17 == plVar13) {
        return -1.0;
      }
    }
    else {
      do {
        plVar14 = plVar15;
        plVar15 = (long *)*plVar14;
      } while ((long *)*plVar14 != (long *)0x0);
LAB_00f37528:
      if (plVar14 == plVar13) {
        return -1.0;
      }
    }
  }
  if (iVar23 == -1) {
    return -1.0;
  }
  if (iVar11 == -1) {
    return -1.0;
  }
  local_a0[0xe] = 0;
  local_a0[0xf] = 0;
  local_a0[0xc] = 0;
  local_a0[0xd] = 0;
  local_a0[10] = 0;
  local_a0[0xb] = 0;
  local_a0[8] = 0;
  local_a0[9] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  uVar10 = FUN_00f37770(0xbf800000,param_1,iVar23,iVar11,local_a0,0x10);
  if (uVar10 == 0) {
    return -1.0;
  }
  plVar13 = *(long **)(param_1 + 0x38);
  lVar18 = (long)iVar23;
  if (iVar23 < 0) {
    do {
      plVar14 = plVar13;
      plVar15 = (long *)*plVar13;
      if ((long *)*plVar13 == (long *)0x0) {
        do {
          plVar13 = (long *)plVar14[2];
          bVar9 = (long *)*plVar13 == plVar14;
          plVar14 = plVar13;
        } while (bVar9);
      }
      else {
        do {
          plVar13 = plVar15;
          plVar15 = (long *)plVar13[1];
        } while ((long *)plVar13[1] != (long *)0x0);
      }
      bVar9 = lVar18 < -1;
      lVar18 = lVar18 + 1;
    } while (bVar9);
  }
  else {
    plVar14 = plVar13;
    if (iVar23 != 0) {
      do {
        while (plVar15 = (long *)plVar14[1], (long *)plVar14[1] != (long *)0x0) {
          do {
            plVar13 = plVar15;
            plVar15 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
LAB_00f375e0:
          lVar16 = lVar18 + -1;
          bVar9 = lVar18 < 1;
          lVar18 = lVar16;
          plVar14 = plVar13;
          if (lVar16 == 0 || bVar9) goto LAB_00f37634;
        }
        plVar15 = plVar14 + 2;
        plVar13 = (long *)*plVar15;
        if ((long *)*plVar13 != plVar14) {
          do {
            lVar16 = *plVar15;
            plVar15 = (long *)(lVar16 + 0x10);
            plVar13 = (long *)*plVar15;
          } while (*plVar13 != lVar16);
          goto LAB_00f375e0;
        }
        lVar16 = lVar18 + -1;
        bVar9 = 0 < lVar18;
        lVar18 = lVar16;
        plVar14 = plVar13;
      } while (lVar16 != 0 && bVar9);
    }
  }
LAB_00f37634:
  uVar26 = *(undefined8 *)(plVar13[5] + 0x18);
  uVar25 = *(undefined8 *)(plVar13[5] + 0x10);
  fVar24 = 0.0;
  uVar12 = 0;
  do {
    lVar16 = local_a0[uVar12];
    lVar18 = *(long *)(lVar16 + 0x10);
    uVar19 = *(long *)(lVar16 + 0x18) - lVar18;
    if ((int)(uVar19 >> 3) != 0) {
      uVar22 = uVar19 >> 3 & 0xffffffff;
      uVar19 = uVar19 >> 3 & 1;
      if (uVar22 == 1) {
        lVar20 = 0;
      }
      else {
        lVar20 = 0;
        do {
          plVar13 = (long *)(lVar18 + lVar20 * 8);
          lVar20 = lVar20 + 2;
          lVar1 = *plVar13;
          lVar2 = plVar13[1];
          uVar7 = *(undefined8 *)(lVar1 + 0x18);
          fVar31 = (float)uVar7;
          fVar33 = (float)((ulong)uVar7 >> 0x20);
          uVar7 = *(undefined8 *)(lVar1 + 0x10);
          fVar27 = (float)uVar7;
          fVar29 = (float)((ulong)uVar7 >> 0x20);
          fVar28 = fVar27 - (float)uVar25;
          fVar30 = fVar29 - (float)((ulong)uVar25 >> 0x20);
          fVar32 = fVar31 - (float)uVar26;
          fVar34 = fVar33 - (float)((ulong)uVar26 >> 0x20);
          auVar35._0_4_ = fVar28 * fVar28;
          auVar35._4_4_ = fVar30 * fVar30;
          auVar35._8_4_ = fVar32 * fVar32;
          auVar35._12_4_ = fVar34 * fVar34;
          uVar26 = *(undefined8 *)(lVar2 + 0x18);
          uVar25 = *(undefined8 *)(lVar2 + 0x10);
          fVar27 = (float)uVar25 - fVar27;
          fVar29 = (float)((ulong)uVar25 >> 0x20) - fVar29;
          fVar31 = (float)uVar26 - fVar31;
          fVar33 = (float)((ulong)uVar26 >> 0x20) - fVar33;
          auVar37 = NEON_ext(auVar35,auVar35,8,1);
          fVar27 = fVar27 * fVar27;
          fVar29 = fVar29 * fVar29;
          fVar31 = fVar31 * fVar31;
          fVar33 = fVar33 * fVar33;
          auVar36._4_4_ = fVar29;
          auVar36._0_4_ = fVar27;
          auVar36._8_4_ = fVar31;
          auVar36._12_4_ = fVar33;
          auVar6._4_4_ = fVar29;
          auVar6._0_4_ = fVar27;
          auVar6._8_4_ = fVar31;
          auVar6._12_4_ = fVar33;
          auVar36 = NEON_ext(auVar36,auVar6,8,1);
          fVar24 = fVar24 + SQRT(auVar37._0_4_ + auVar35._0_4_ + auVar37._4_4_ + auVar35._4_4_) +
                   SQRT(auVar36._0_4_ + fVar27 + auVar36._4_4_ + fVar29);
        } while (uVar22 - uVar19 != lVar20);
      }
      if (uVar19 != 0) {
        lVar18 = *(long *)(lVar18 + lVar20 * 8);
        uVar8 = *(undefined8 *)(lVar18 + 0x18);
        uVar7 = *(undefined8 *)(lVar18 + 0x10);
        fVar28 = (float)uVar7 - (float)uVar25;
        fVar30 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar25 >> 0x20);
        fVar32 = (float)uVar8 - (float)uVar26;
        fVar34 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar26 >> 0x20);
        fVar28 = fVar28 * fVar28;
        fVar30 = fVar30 * fVar30;
        fVar32 = fVar32 * fVar32;
        fVar34 = fVar34 * fVar34;
        auVar37._4_4_ = fVar30;
        auVar37._0_4_ = fVar28;
        auVar37._8_4_ = fVar32;
        auVar37._12_4_ = fVar34;
        auVar5._4_4_ = fVar30;
        auVar5._0_4_ = fVar28;
        auVar5._8_4_ = fVar32;
        auVar5._12_4_ = fVar34;
        auVar36 = NEON_ext(auVar37,auVar5,8,1);
        fVar24 = fVar24 + SQRT(auVar36._0_4_ + fVar28 + auVar36._4_4_ + fVar30);
        uVar25 = uVar7;
        uVar26 = uVar8;
      }
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar16 + 8) + 0x18);
    uVar7 = *(undefined8 *)(*(long *)(lVar16 + 8) + 0x10);
    uVar12 = uVar12 + 1;
    fVar28 = (float)uVar7 - (float)uVar25;
    fVar30 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar25 >> 0x20);
    fVar32 = (float)uVar8 - (float)uVar26;
    fVar34 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar26 >> 0x20);
    fVar28 = fVar28 * fVar28;
    fVar30 = fVar30 * fVar30;
    fVar32 = fVar32 * fVar32;
    fVar34 = fVar34 * fVar34;
    auVar3._4_4_ = fVar30;
    auVar3._0_4_ = fVar28;
    auVar3._8_4_ = fVar32;
    auVar3._12_4_ = fVar34;
    auVar4._4_4_ = fVar30;
    auVar4._0_4_ = fVar28;
    auVar4._8_4_ = fVar32;
    auVar4._12_4_ = fVar34;
    auVar36 = NEON_ext(auVar3,auVar4,8,1);
    fVar24 = fVar24 + SQRT(auVar36._0_4_ + fVar28 + auVar36._4_4_ + fVar30);
  } while (uVar12 != uVar10);
  return fVar24;
}


