/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002495a0; name: FUN_002495a0
 */


/* WARNING: Removing unreachable block (ram,0x00249d10) */

undefined8
FUN_002495a0(undefined1 param_1 [16],float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,undefined1 *param_7,uint param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float local_88;
  float fStack_84;
  float local_80;
  float local_78;
  float local_74;
  
  fVar16 = param_1._0_4_;
  *param_7 = 0;
  fVar22 = param_2[3];
  fVar27 = *param_2;
  pfVar10 = param_2 + 4;
  fVar21 = *pfVar10;
  pfVar11 = param_2 + 1;
  fVar24 = *pfVar11;
  fVar31 = fVar21 - fVar24;
  pfVar15 = param_2 + 5;
  fVar20 = *pfVar15;
  pfVar12 = param_2 + 2;
  fVar23 = *pfVar12;
  fVar17 = param_2[6];
  pfVar8 = param_2 + 7;
  fVar18 = *pfVar8;
  fVar30 = fVar22 - fVar27;
  pfVar9 = param_2 + 8;
  fVar19 = *pfVar9;
  fVar29 = fVar20 - fVar23;
  fVar36 = fVar17 - fVar27;
  fVar35 = fVar18 - fVar24;
  fVar33 = fVar19 - fVar23;
  if ((param_8 & 1) != 0) {
    fVar28 = *param_4;
    fVar32 = param_4[1];
    fVar34 = param_4[2];
    fVar38 = fVar30 * (fVar28 - fVar27) + fVar31 * (fVar32 - fVar24) + fVar29 * (fVar34 - fVar23);
    fVar37 = fVar36 * (fVar28 - fVar27) + fVar35 * (fVar32 - fVar24) + fVar33 * (fVar34 - fVar23);
    if ((0.0 < fVar38) || (fVar41 = fVar24, fVar44 = fVar23, fVar39 = fVar27, 0.0 < fVar37)) {
      fVar40 = fVar30 * (fVar28 - fVar22) + fVar31 * (fVar32 - fVar21) + fVar29 * (fVar34 - fVar20);
      fVar43 = fVar36 * (fVar28 - fVar22) + fVar35 * (fVar32 - fVar21) + fVar33 * (fVar34 - fVar20);
      bVar1 = false;
      bVar2 = true;
      if (0.0 <= fVar40) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar43) && !NAN(fVar40)) {
          bVar1 = fVar43 == fVar40;
          bVar2 = fVar40 <= fVar43;
        }
      }
      fVar41 = fVar21;
      fVar44 = fVar20;
      fVar39 = fVar22;
      if (bVar2 && !bVar1) {
        fVar42 = fVar38 * fVar43 - fVar37 * fVar40;
        if (((0.0 < fVar40) || (fVar38 < 0.0)) || (0.0 < fVar42)) {
          fVar26 = fVar36 * (fVar28 - fVar17) + fVar35 * (fVar32 - fVar18) +
                   fVar33 * (fVar34 - fVar19);
          fVar25 = fVar30 * (fVar28 - fVar17) + fVar31 * (fVar32 - fVar18) +
                   fVar29 * (fVar34 - fVar19);
          bVar1 = false;
          bVar2 = true;
          if (0.0 <= fVar26) {
            bVar1 = false;
            bVar2 = true;
            if (!NAN(fVar25) && !NAN(fVar26)) {
              bVar1 = fVar25 == fVar26;
              bVar2 = fVar26 <= fVar25;
            }
          }
          fVar41 = fVar18;
          fVar44 = fVar19;
          fVar39 = fVar17;
          if (bVar2 && !bVar1) {
            fVar38 = fVar37 * fVar25 - fVar38 * fVar26;
            if (((fVar26 <= 0.0) && (0.0 <= fVar37)) && (fVar38 <= 0.0)) {
              fVar37 = fVar37 / (fVar37 - fVar26);
              fVar39 = fVar36 * fVar37;
              fVar41 = fVar35 * fVar37;
              fVar38 = fVar33 * fVar37;
              goto LAB_00249798;
            }
            fVar37 = fVar40 * fVar26 - fVar43 * fVar25;
            if (((0.0 < fVar37) || (fVar43 = fVar43 - fVar40, fVar43 < 0.0)) ||
               (fVar25 - fVar26 < 0.0)) {
              fVar37 = 1.0 / (fVar42 + fVar37 + fVar38);
              fVar38 = fVar38 * fVar37;
              fVar42 = fVar42 * fVar37;
              fVar39 = fVar36 * fVar42 + fVar27 + fVar30 * fVar38;
              fVar41 = fVar35 * fVar42 + fVar24 + fVar31 * fVar38;
              fVar44 = fVar33 * fVar42 + fVar23 + fVar29 * fVar38;
            }
            else {
              fVar43 = fVar43 / (fVar43 + (fVar25 - fVar26));
              fVar39 = fVar22 + (fVar17 - fVar22) * fVar43;
              fVar41 = fVar21 + (fVar18 - fVar21) * fVar43;
              fVar44 = fVar20 + (fVar19 - fVar20) * fVar43;
            }
          }
        }
        else {
          fVar38 = fVar38 / (fVar38 - fVar40);
          fVar39 = fVar30 * fVar38;
          fVar41 = fVar31 * fVar38;
          fVar38 = fVar29 * fVar38;
LAB_00249798:
          fVar41 = fVar24 + fVar41;
          fVar44 = fVar23 + fVar38;
          fVar39 = fVar27 + fVar39;
        }
      }
    }
    if ((fVar39 - fVar28) * (fVar39 - fVar28) + (fVar41 - fVar32) * (fVar41 - fVar32) +
        (fVar44 - fVar34) * (fVar44 - fVar34) <= fVar16 * fVar16) {
      *param_6 = 0.0;
      return 1;
    }
  }
  fVar34 = param_3[1] * fVar16;
  fVar37 = *param_5;
  fVar38 = param_5[1];
  fVar32 = *param_3 * fVar16;
  fVar28 = param_3[2] * fVar16;
  fVar41 = param_5[2];
  if (0.0 <= fVar32 * fVar37 + fVar34 * fVar38 + fVar28 * fVar41) {
    fVar32 = -fVar32;
    fVar34 = -fVar34;
    fVar28 = -fVar28;
  }
  fVar39 = fVar33 * fVar38 - fVar35 * fVar41;
  fVar43 = fVar36 * fVar41 - fVar33 * fVar37;
  fVar40 = fVar35 * fVar37 - fVar36 * fVar38;
  fVar44 = fVar29 * fVar40 + fVar30 * fVar39 + fVar31 * fVar43;
  if ((DAT_01d4bc28 < fVar44) && (fVar44 < DAT_01d4c050)) {
    return 0;
  }
  fVar42 = (param_4[2] - fVar28) - fVar23;
  fVar44 = 1.0 / fVar44;
  fVar26 = (param_4[1] - fVar34) - fVar24;
  fVar25 = (*param_4 - fVar32) - fVar27;
  fVar28 = fVar29 * fVar26 - fVar31 * fVar42;
  fVar32 = fVar30 * fVar42 - fVar29 * fVar25;
  fVar34 = fVar31 * fVar25 - fVar30 * fVar26;
  fVar39 = fVar44 * (fVar40 * fVar42 + fVar43 * fVar26 + fVar39 * fVar25);
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (0.0 <= fVar39) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar39)) {
      bVar1 = fVar39 < 1.0;
      bVar2 = fVar39 == 1.0;
      bVar3 = false;
    }
  }
  fVar37 = fVar44 * (fVar41 * fVar34 + fVar37 * fVar28 + fVar38 * fVar32);
  if (bVar2 || bVar1 != bVar3) {
    fVar38 = fVar39 + fVar37;
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 <= fVar37) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar38)) {
        bVar1 = fVar38 < 1.0;
        bVar2 = fVar38 == 1.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      fVar44 = fVar44 * (fVar33 * fVar34 + fVar36 * fVar28 + fVar35 * fVar32);
      if (fVar44 < 0.0) {
        return 0;
      }
      *param_6 = fVar44;
      *param_7 = 1;
      return 1;
    }
  }
  pfVar6 = pfVar15;
  pfVar7 = pfVar10;
  if (0.0 <= fVar39) {
    if (fVar37 < 0.0) {
      if (fVar39 + fVar37 <= 1.0) goto LAB_00249ba0;
      fVar36 = (1.0 - fVar39) - fVar37;
      fVar33 = fVar22 * fVar39 + fVar17 * fVar37 + fVar27 * fVar36;
      fVar35 = fVar21 * fVar39 + fVar18 * fVar37 + fVar24 * fVar36;
      fVar36 = fVar20 * fVar39 + fVar19 * fVar37 + fVar23 * fVar36;
      if ((fVar33 - fVar27) * fVar30 + (fVar35 - fVar24) * fVar31 + (fVar36 - fVar23) * fVar29 <
          fVar30 * fVar30 + fVar31 * fVar31 + fVar29 * fVar29) {
        lVar14 = 0;
        lVar13 = 1;
        pfVar6 = pfVar12;
        pfVar7 = pfVar11;
        goto LAB_00249bcc;
      }
      fVar22 = fVar22 - fVar17;
      fVar21 = fVar21 - fVar18;
      fVar20 = fVar20 - fVar19;
      lVar13 = 1;
      if (fVar22 * fVar22 + fVar21 * fVar21 + fVar20 * fVar20 <=
          fVar22 * (fVar33 - fVar17) + fVar21 * (fVar35 - fVar18) + fVar20 * (fVar36 - fVar19))
      goto LAB_00249e18;
    }
    lVar13 = 1;
  }
  else {
    if (0.0 <= fVar37) {
      if (1.0 < fVar39 + fVar37) {
        fVar31 = (1.0 - fVar39) - fVar37;
        fVar29 = fVar22 * fVar39 + fVar17 * fVar37 + fVar27 * fVar31;
        fVar30 = fVar21 * fVar39 + fVar18 * fVar37 + fVar24 * fVar31;
        fVar31 = fVar20 * fVar39 + fVar19 * fVar37 + fVar23 * fVar31;
        pfVar10 = pfVar8;
        pfVar15 = pfVar9;
        if (fVar36 * fVar36 + fVar35 * fVar35 + fVar33 * fVar33 <=
            (fVar29 - fVar27) * fVar36 + (fVar30 - fVar24) * fVar35 + (fVar31 - fVar23) * fVar33) {
          fVar17 = fVar17 - fVar22;
          fVar18 = fVar18 - fVar21;
          fVar19 = fVar19 - fVar20;
          lVar13 = 2;
          if (fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19 <=
              fVar17 * (fVar29 - fVar22) + fVar18 * (fVar30 - fVar21) + fVar19 * (fVar31 - fVar20))
          goto LAB_00249e18;
          lVar14 = 1;
        }
        else {
          lVar14 = 0;
          lVar13 = 2;
          pfVar6 = pfVar12;
          pfVar7 = pfVar11;
        }
        goto LAB_00249bcc;
      }
    }
    else {
      fVar31 = (1.0 - fVar39) - fVar37;
      fVar29 = fVar22 * fVar39 + fVar17 * fVar37 + fVar27 * fVar31;
      fVar30 = fVar21 * fVar39 + fVar18 * fVar37 + fVar24 * fVar31;
      fVar31 = fVar20 * fVar39 + fVar19 * fVar37 + fVar23 * fVar31;
      fVar33 = fVar27 - fVar22;
      fVar35 = fVar24 - fVar21;
      fVar36 = fVar23 - fVar20;
      if (fVar33 * (fVar29 - fVar22) + fVar35 * (fVar30 - fVar21) + fVar36 * (fVar31 - fVar20) <
          fVar33 * fVar33 + fVar35 * fVar35 + fVar36 * fVar36) {
LAB_00249ba0:
        lVar13 = 0;
        lVar14 = 1;
        pfVar10 = pfVar11;
        pfVar15 = pfVar12;
        goto LAB_00249bcc;
      }
      fVar27 = fVar27 - fVar17;
      fVar24 = fVar24 - fVar18;
      fVar23 = fVar23 - fVar19;
      lVar13 = 0;
      if (fVar27 * fVar27 + fVar24 * fVar24 + fVar23 * fVar23 <=
          fVar27 * (fVar29 - fVar17) + fVar24 * (fVar30 - fVar18) + fVar23 * (fVar31 - fVar19)) {
LAB_00249e18:
        uVar5 = FUN_0024a5c0(DAT_01d4c18c,param_1._0_8_,param_4,param_5,param_2 + lVar13 * 3,
                             &local_88,0);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        *param_6 = local_88;
        return 1;
      }
    }
    lVar13 = 0;
    pfVar10 = pfVar11;
    pfVar15 = pfVar12;
  }
  lVar14 = 2;
  pfVar6 = pfVar9;
  pfVar7 = pfVar8;
LAB_00249bcc:
  fVar18 = param_2[lVar13 * 3];
  fVar27 = param_2[lVar14 * 3] - fVar18;
  fVar20 = *pfVar7 - *pfVar10;
  fVar18 = *param_4 - fVar18;
  fVar19 = param_4[1] - *pfVar10;
  fVar24 = *pfVar6 - *pfVar15;
  fVar17 = param_4[2] - *pfVar15;
  fVar21 = fVar27 * fVar18 + fVar20 * fVar19 + fVar24 * fVar17;
  if (0.0 < fVar21) {
    fVar23 = fVar27 * fVar27 + fVar20 * fVar20 + fVar24 * fVar24;
    if (fVar21 < fVar23) {
      fVar21 = fVar21 / fVar23;
      fVar27 = fVar27 * fVar21;
      fVar20 = fVar20 * fVar21;
      fVar24 = fVar24 * fVar21;
    }
    fVar18 = fVar18 - fVar27;
    fVar19 = fVar19 - fVar20;
    fVar17 = fVar17 - fVar24;
  }
  fVar17 = sqrtf(fVar18 * fVar18 + fVar19 * fVar19 + fVar17 * fVar17);
  fVar17 = fVar17 - fVar16;
  if (fVar17 <= 0.0) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = fVar17 + -10.0;
    if (fVar17 <= 10.0) {
      fVar18 = 0.0;
    }
    local_88 = fVar18 * *param_5 + *param_4;
    fStack_84 = fVar18 * param_5[1] + param_4[1];
    local_80 = fVar18 * param_5[2] + param_4[2];
    iVar4 = FUN_0024cb60(fVar16,&local_88,param_5,param_2 + lVar13 * 3,param_2 + lVar14 * 3,
                         &local_78);
    if (iVar4 == 0) {
      return 0;
    }
    if ((iVar4 != 1) && (local_74 <= local_78)) {
      local_78 = local_74;
    }
    fVar18 = fVar18 + local_78;
  }
  if (0.0 <= fVar18) {
    *param_6 = fVar18;
    return 1;
  }
  return 0;
}


