/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f1ad0; name: FUN_004f1ad0
 */


void FUN_004f1ad0(float param_1,long *param_2,float *param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
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
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  
  fVar39 = DAT_01d4c5a8;
  fVar32 = DAT_01d4c18c;
  uVar15 = (ulong)*(uint *)(param_4 + 0x20);
  if (*(uint *)(param_4 + 0x20) == 0) {
    iVar4 = (int)param_2[3];
    *(undefined4 *)(param_2 + 1) = 0;
    puVar6 = (undefined4 *)PTR_DAT_02713640;
    fVar41 = fVar39;
    fVar29 = fVar39;
    fVar25 = fVar32;
    fVar27 = fVar32;
  }
  else {
    param_1 = *(float *)((long)param_2 + 0x8c) - param_1;
    fVar23 = param_3[2];
    fVar21 = *param_3;
    fVar22 = param_3[1];
    plVar17 = *(long **)(param_4 + 0x18);
    fVar41 = DAT_01d4c5a8;
    fVar29 = DAT_01d4c5a8;
    fVar27 = DAT_01d4c18c;
    fVar25 = DAT_01d4c18c;
    do {
      lVar18 = *plVar17;
      fVar24 = *(float *)(lVar18 + 0x30);
      fVar26 = *(float *)(lVar18 + 0x34);
      fVar31 = *(float *)(lVar18 + 0x38);
      fVar40 = *(float *)(lVar18 + 0x3c);
      if (fVar39 <= fVar26) {
        fVar39 = fVar26;
      }
      fVar43 = *(float *)(lVar18 + 0x44);
      fVar37 = *(float *)(lVar18 + 0x40) - fVar22;
      uVar44 = NEON_fminnm(fVar27,fVar31);
      fVar27 = fVar24 - fVar21;
      uVar36 = NEON_fminnm(fVar32,fVar24);
      if (fVar41 <= fVar24) {
        fVar41 = fVar24;
      }
      if (fVar29 <= fVar31) {
        fVar29 = fVar31;
      }
      fVar28 = fVar26 - fVar22;
      fVar33 = *(float *)(lVar18 + 0x48);
      fVar34 = *(float *)(lVar18 + 0x4c);
      fVar31 = fVar31 - fVar23;
      fVar32 = 0.0;
      fVar30 = SQRT(fVar27 * fVar27 + fVar28 * fVar28 + fVar31 * fVar31);
      uVar35 = NEON_fminnm(fVar25,fVar26);
      fVar26 = fVar40 - fVar21;
      fVar38 = fVar43 - fVar23;
      fVar25 = 0.0;
      fVar24 = 0.0;
      if (fVar30 != 0.0) {
        fVar30 = 1.0 / fVar30;
        fVar25 = fVar27 * fVar30;
        fVar24 = fVar28 * fVar30;
        fVar32 = fVar31 * fVar30;
      }
      uVar35 = NEON_fminnm(uVar35,*(float *)(lVar18 + 0x40));
      uVar44 = NEON_fminnm(uVar44,fVar43);
      if (fVar29 <= fVar43) {
        fVar29 = fVar43;
      }
      fVar27 = SQRT(fVar26 * fVar26 + fVar37 * fVar37 + fVar38 * fVar38);
      uVar36 = NEON_fminnm(uVar36,fVar40);
      if (fVar41 <= fVar40) {
        fVar41 = fVar40;
      }
      fVar28 = fVar33 - fVar21;
      fVar30 = fVar34 - fVar22;
      fVar42 = *(float *)(lVar18 + 0x50) - fVar23;
      fVar31 = 0.0;
      fVar40 = 0.0;
      fVar43 = 0.0;
      if (fVar27 != 0.0) {
        fVar27 = 1.0 / fVar27;
        fVar40 = fVar26 * fVar27;
        fVar43 = fVar37 * fVar27;
        fVar31 = fVar38 * fVar27;
      }
      uVar36 = NEON_fminnm(uVar36,fVar33);
      if (fVar41 <= fVar33) {
        fVar41 = fVar33;
      }
      fVar27 = SQRT(fVar28 * fVar28 + fVar30 * fVar30 + fVar42 * fVar42);
      uVar35 = NEON_fminnm(uVar35,fVar34);
      uVar44 = NEON_fminnm(uVar44,*(float *)(lVar18 + 0x50));
      if (fVar39 <= fVar34) {
        fVar39 = fVar34;
      }
      fVar33 = 0.0;
      fVar26 = 0.0;
      fVar37 = 0.0;
      if (fVar27 != 0.0) {
        fVar27 = 1.0 / fVar27;
        fVar26 = fVar28 * fVar27;
        fVar37 = fVar30 * fVar27;
        fVar33 = fVar42 * fVar27;
      }
      uVar35 = NEON_fminnm(uVar35,fVar22 + param_1 * fVar24);
      uVar44 = NEON_fminnm(uVar44,fVar23 + param_1 * fVar32);
      fVar32 = fVar21 + param_1 * fVar40;
      uVar36 = NEON_fminnm(uVar36,fVar21 + param_1 * fVar25);
      fVar25 = fVar22 + param_1 * fVar43;
      fVar27 = fVar23 + param_1 * fVar31;
      fVar24 = fVar21 + param_1 * fVar26;
      fVar26 = fVar22 + param_1 * fVar37;
      plVar17 = plVar17 + 1;
      if (fVar39 <= fVar25) {
        fVar39 = fVar25;
      }
      uVar36 = NEON_fminnm(uVar36,fVar32);
      if (fVar41 <= fVar32) {
        fVar41 = fVar32;
      }
      fVar31 = fVar23 + param_1 * fVar33;
      uVar35 = NEON_fminnm(uVar35,fVar25);
      uVar44 = NEON_fminnm(uVar44,fVar27);
      if (fVar29 <= fVar27) {
        fVar29 = fVar27;
      }
      fVar32 = (float)NEON_fminnm(uVar36,fVar24);
      fVar25 = (float)NEON_fminnm(uVar35,fVar26);
      fVar27 = (float)NEON_fminnm(uVar44,fVar31);
      if (fVar41 <= fVar24) {
        fVar41 = fVar24;
      }
      if (fVar39 <= fVar26) {
        fVar39 = fVar26;
      }
      if (fVar29 <= fVar31) {
        fVar29 = fVar31;
      }
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    iVar4 = (int)param_2[3];
    *(undefined4 *)(param_2 + 1) = 0;
    puVar6 = (undefined4 *)PTR_DAT_02713640;
  }
  PTR_DAT_02713640 = (undefined *)puVar6;
  if (iVar4 != 0) {
    plVar17 = (long *)param_2[2];
    do {
      lVar18 = *plVar17;
      if ((lVar18 != param_4) && (*(uint *)(lVar18 + 0x20) != 0)) {
        uVar15 = 0;
        do {
          lVar19 = *(long *)(*(long *)(lVar18 + 0x18) + uVar15 * 8);
          fVar21 = *(float *)(lVar19 + 0x30);
          if ((fVar32 <= fVar21) && (fVar22 = *(float *)(lVar19 + 0x34), fVar25 <= fVar22)) {
            fVar23 = *(float *)(lVar19 + 0x38);
            bVar7 = false;
            bVar9 = false;
            bVar11 = false;
            if (fVar23 <= fVar29) {
              bVar7 = false;
              bVar9 = false;
              bVar11 = true;
              if (!NAN(fVar22) && !NAN(fVar39)) {
                bVar7 = fVar22 < fVar39;
                bVar9 = fVar22 == fVar39;
                bVar11 = false;
              }
            }
            bVar8 = false;
            bVar10 = false;
            bVar12 = false;
            if (bVar9 || bVar7 != bVar11) {
              bVar8 = false;
              bVar10 = false;
              bVar12 = true;
              if (!NAN(fVar21) && !NAN(fVar41)) {
                bVar8 = fVar21 < fVar41;
                bVar10 = fVar21 == fVar41;
                bVar12 = false;
              }
            }
            bVar7 = true;
            bVar9 = false;
            if (bVar10 || bVar8 != bVar12) {
              bVar7 = false;
              bVar9 = true;
              if (!NAN(fVar23) && !NAN(fVar27)) {
                bVar7 = fVar23 < fVar27;
                bVar9 = false;
              }
            }
            if (bVar7 != bVar9) goto LAB_004f1d68;
LAB_004f1dd8:
            uVar3 = *(uint *)(param_2 + 1);
            uVar20 = *(uint *)((long)param_2 + 0xc);
            if (uVar3 < uVar20) goto LAB_004f1ee0;
            uVar20 = uVar20 + 0x20;
            puVar13 = (undefined8 *)FUN_00404690(*puVar6,(ulong)uVar20 << 3);
            if (puVar13 != (undefined8 *)0x0) {
              puVar14 = (undefined8 *)*param_2;
              if ((puVar14 != (undefined8 *)0x0) && (puVar14 != puVar13)) {
                uVar5 = *(uint *)(param_2 + 1);
                if (uVar5 != 0) {
                  *puVar13 = *puVar14;
                  if (uVar5 != 1) {
                    uVar2 = uVar5 + 3 & 3;
                    if ((ulong)uVar5 - 2 < 3) {
                      lVar19 = 1;
                    }
                    else {
                      lVar16 = 0;
                      do {
                        lVar19 = lVar16;
                        lVar16 = lVar19 * 8;
                        puVar13[lVar19 + 1] = *(undefined8 *)(*param_2 + lVar16 + 8);
                        puVar13[lVar19 + 2] = *(undefined8 *)(*param_2 + lVar16 + 0x10);
                        puVar13[lVar19 + 3] = *(undefined8 *)(*param_2 + lVar16 + 0x18);
                        puVar13[lVar19 + 4] = *(undefined8 *)(*param_2 + lVar16 + 0x20);
                        lVar16 = lVar19 + 4;
                      } while (((ulong)uVar5 - 1) - (ulong)uVar2 != lVar19 + 4);
                      lVar19 = lVar19 + 5;
                    }
                    if (uVar2 != 0) {
                      lVar19 = lVar19 << 3;
                      lVar16 = -(ulong)uVar2;
                      do {
                        *(undefined8 *)((long)puVar13 + lVar19) = *(undefined8 *)(*param_2 + lVar19)
                        ;
                        lVar19 = lVar19 + 8;
                        lVar16 = lVar16 + 1;
                      } while (lVar16 != 0);
                    }
                  }
                  puVar14 = (undefined8 *)*param_2;
                }
                FUN_00404870(*puVar6,puVar14);
              }
              *param_2 = (long)puVar13;
              *(uint *)((long)param_2 + 0xc) = uVar20;
LAB_004f1ee0:
              if (uVar3 < uVar20) {
                plVar1 = (long *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8);
                *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) + 1;
                if (plVar1 != (long *)0x0) {
                  *plVar1 = lVar18;
                }
              }
            }
            break;
          }
LAB_004f1d68:
          fVar21 = *(float *)(lVar19 + 0x3c);
          if ((fVar32 <= fVar21) && (fVar22 = *(float *)(lVar19 + 0x40), fVar25 <= fVar22)) {
            fVar23 = *(float *)(lVar19 + 0x44);
            bVar7 = false;
            bVar9 = false;
            bVar11 = false;
            if (fVar23 <= fVar29) {
              bVar7 = false;
              bVar9 = false;
              bVar11 = true;
              if (!NAN(fVar22) && !NAN(fVar39)) {
                bVar7 = fVar22 < fVar39;
                bVar9 = fVar22 == fVar39;
                bVar11 = false;
              }
            }
            bVar8 = false;
            bVar10 = false;
            bVar12 = false;
            if (bVar9 || bVar7 != bVar11) {
              bVar8 = false;
              bVar10 = false;
              bVar12 = true;
              if (!NAN(fVar21) && !NAN(fVar41)) {
                bVar8 = fVar21 < fVar41;
                bVar10 = fVar21 == fVar41;
                bVar12 = false;
              }
            }
            bVar7 = true;
            bVar9 = false;
            if (bVar10 || bVar8 != bVar12) {
              bVar7 = false;
              bVar9 = true;
              if (!NAN(fVar23) && !NAN(fVar27)) {
                bVar7 = fVar23 < fVar27;
                bVar9 = false;
              }
            }
            if (bVar7 == bVar9) goto LAB_004f1dd8;
          }
          fVar21 = *(float *)(lVar19 + 0x48);
          if ((fVar32 <= fVar21) && (fVar22 = *(float *)(lVar19 + 0x4c), fVar25 <= fVar22)) {
            fVar23 = *(float *)(lVar19 + 0x50);
            bVar7 = false;
            bVar9 = false;
            bVar11 = false;
            if (fVar23 <= fVar29) {
              bVar7 = false;
              bVar9 = false;
              bVar11 = true;
              if (!NAN(fVar22) && !NAN(fVar39)) {
                bVar7 = fVar22 < fVar39;
                bVar9 = fVar22 == fVar39;
                bVar11 = false;
              }
            }
            bVar8 = false;
            bVar10 = false;
            bVar12 = false;
            if (bVar9 || bVar7 != bVar11) {
              bVar8 = false;
              bVar10 = false;
              bVar12 = true;
              if (!NAN(fVar21) && !NAN(fVar41)) {
                bVar8 = fVar21 < fVar41;
                bVar10 = fVar21 == fVar41;
                bVar12 = false;
              }
            }
            bVar7 = true;
            bVar9 = false;
            if (bVar10 || bVar8 != bVar12) {
              bVar7 = false;
              bVar9 = true;
              if (!NAN(fVar23) && !NAN(fVar27)) {
                bVar7 = fVar23 < fVar27;
                bVar9 = false;
              }
            }
            if (bVar7 == bVar9) goto LAB_004f1dd8;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)(lVar18 + 0x20));
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != (long *)(param_2[2] + (ulong)*(uint *)(param_2 + 3) * 8));
  }
  return;
}


