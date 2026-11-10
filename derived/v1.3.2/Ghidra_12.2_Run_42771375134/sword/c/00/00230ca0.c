/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00230ca0; name: FUN_00230ca0
 */


void FUN_00230ca0(long *param_1,float param_2,float *param_3,float *param_4,float *param_5,
                 undefined8 *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  
  pfVar6 = (float *)param_1[4];
  fVar27 = param_4[2];
  fVar12 = *param_4;
  fVar26 = param_4[1];
  fVar17 = *param_3;
  fVar16 = param_3[1];
  fVar19 = fVar26 - fVar16;
  fVar28 = *param_5;
  fVar29 = param_5[1];
  fVar22 = fVar28 - fVar17;
  fVar14 = *pfVar6;
  fVar15 = pfVar6[1];
  fVar13 = pfVar6[2];
  fVar21 = fVar12 - fVar17;
  fVar24 = fVar29 - fVar16;
  fVar18 = param_3[2];
  fVar23 = fVar27 - fVar18;
  fVar30 = param_5[2];
  fVar25 = fVar30 - fVar18;
  fVar31 = (fVar14 - fVar17) * fVar22 + (fVar15 - fVar16) * fVar24 + (fVar13 - fVar18) * fVar25;
  fVar33 = fVar21 * (fVar14 - fVar17) + fVar19 * (fVar15 - fVar16) + fVar23 * (fVar13 - fVar18);
  if ((0.0 < fVar33) || (0.0 < fVar31)) {
    fVar34 = (fVar14 - fVar12) * fVar21 + (fVar15 - fVar26) * fVar19 + (fVar13 - fVar27) * fVar23;
    fVar35 = (fVar14 - fVar12) * fVar22 + (fVar15 - fVar26) * fVar24 + (fVar13 - fVar27) * fVar25;
    bVar3 = false;
    bVar4 = true;
    if (0.0 <= fVar34) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar35) && !NAN(fVar34)) {
        bVar3 = fVar35 == fVar34;
        bVar4 = fVar34 <= fVar35;
      }
    }
    if (!bVar4 || bVar3) {
      iVar5 = 1;
    }
    else {
      fVar32 = fVar33 * fVar35 - fVar34 * fVar31;
      if (((0.0 < fVar34) || (fVar33 < 0.0)) || (0.0 < fVar32)) {
        fVar20 = fVar22 * (fVar14 - fVar28) + fVar24 * (fVar15 - fVar29) +
                 fVar25 * (fVar13 - fVar30);
        fVar36 = fVar21 * (fVar14 - fVar28) + fVar19 * (fVar15 - fVar29) +
                 fVar23 * (fVar13 - fVar30);
        bVar3 = false;
        bVar4 = true;
        if (0.0 <= fVar20) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar36) && !NAN(fVar20)) {
            bVar3 = fVar36 == fVar20;
            bVar4 = fVar20 <= fVar36;
          }
        }
        if (!bVar4 || bVar3) {
          iVar5 = 2;
          fVar12 = fVar28;
          fVar26 = fVar29;
          fVar27 = fVar30;
        }
        else {
          fVar33 = fVar36 * fVar31 - fVar33 * fVar20;
          if (((0.0 < fVar20) || (fVar31 < 0.0)) || (0.0 < fVar33)) {
            fVar31 = fVar34 * fVar20 - fVar36 * fVar35;
            if (((0.0 < fVar31) || (fVar35 = fVar35 - fVar34, fVar35 < 0.0)) ||
               (fVar36 - fVar20 < 0.0)) {
              fVar12 = 1.0 / (fVar32 + fVar31 + fVar33);
              fVar33 = fVar33 * fVar12;
              fVar32 = fVar32 * fVar12;
              iVar5 = 6;
              fVar12 = fVar22 * fVar32 + fVar17 + fVar21 * fVar33;
              fVar26 = fVar24 * fVar32 + fVar16 + fVar19 * fVar33;
              fVar27 = fVar25 * fVar32 + fVar18 + fVar23 * fVar33;
            }
            else {
              fVar35 = fVar35 / (fVar35 + (fVar36 - fVar20));
              iVar5 = 4;
              fVar12 = fVar12 + (fVar28 - fVar12) * fVar35;
              fVar26 = fVar26 + (fVar29 - fVar26) * fVar35;
              fVar27 = fVar27 + (fVar30 - fVar27) * fVar35;
            }
          }
          else {
            fVar31 = fVar31 / (fVar31 - fVar20);
            iVar5 = 5;
            fVar12 = fVar17 + fVar22 * fVar31;
            fVar26 = fVar16 + fVar24 * fVar31;
            fVar27 = fVar18 + fVar25 * fVar31;
          }
        }
      }
      else {
        fVar33 = fVar33 / (fVar33 - fVar34);
        iVar5 = 3;
        fVar12 = fVar17 + fVar21 * fVar33;
        fVar26 = fVar16 + fVar19 * fVar33;
        fVar27 = fVar18 + fVar23 * fVar33;
      }
    }
  }
  else {
    iVar5 = 0;
    fVar12 = fVar17;
    fVar26 = fVar16;
    fVar27 = fVar18;
  }
  fVar12 = fVar12 - fVar14;
  fVar26 = fVar26 - fVar15;
  fVar27 = fVar27 - fVar13;
  fVar33 = fVar12 * fVar12 + fVar26 * fVar26 + fVar27 * fVar27;
  fVar28 = fVar19 * fVar25 - fVar23 * fVar24;
  fVar23 = fVar23 * fVar22 - fVar21 * fVar25;
  fVar19 = fVar21 * fVar24 - fVar19 * fVar22;
  fVar16 = fVar18 * fVar19 + fVar17 * fVar28 + fVar16 * fVar23;
  fVar31 = fVar13 * fVar19 + fVar14 * fVar28 + fVar15 * fVar23;
  bVar3 = true;
  if ((fVar33 < *(float *)(param_1 + 5)) && (bVar3 = false, !NAN(fVar31) && !NAN(fVar16))) {
    bVar3 = fVar31 < fVar16;
  }
  if (!bVar3) {
    if (fVar33 <= DAT_01d4bac8) {
      fVar12 = fVar28;
      fVar26 = fVar23;
      fVar27 = fVar19;
    }
    if (iVar5 == 6) {
      if (fVar33 <= DAT_01d4bac8) {
        fVar31 = fVar27 * fVar27 + fVar12 * fVar12 + fVar26 * fVar26;
        fVar33 = 0.0;
        fVar14 = 0.0;
        fVar15 = 0.0;
        fVar13 = 0.0;
        if (0.0 < fVar31) {
          fVar13 = sqrtf(fVar31);
          fVar13 = 1.0 / fVar13;
          fVar14 = fVar12 * fVar13;
          fVar15 = fVar26 * fVar13;
          fVar13 = fVar27 * fVar13;
        }
        fVar12 = -fVar14;
        fVar26 = -fVar15;
        fVar27 = -fVar13;
        lVar7 = param_1[3];
        uVar1 = *(uint *)(lVar7 + 0x1000);
      }
      else {
        fVar33 = sqrtf(fVar33);
        fVar31 = 1.0 / fVar33;
        fVar12 = fVar12 * fVar31;
        fVar26 = fVar26 * fVar31;
        fVar27 = fVar27 * fVar31;
        lVar7 = param_1[3];
        uVar1 = *(uint *)(lVar7 + 0x1000);
      }
      if (uVar1 < 0x40) {
        fVar21 = *(float *)(*param_1 + 4);
        pfVar10 = (float *)param_1[2];
        pfVar11 = (float *)param_1[4];
        fVar13 = *pfVar10;
        fVar14 = pfVar10[1];
        fVar18 = fVar12 + fVar12;
        fVar17 = fVar27 + fVar27;
        pfVar6 = (float *)(lVar7 + (ulong)uVar1 * 0x40);
        fVar15 = pfVar10[2];
        fVar16 = pfVar10[3];
        fVar31 = fVar26 + fVar26;
        fVar19 = *pfVar11 + fVar12 * fVar21;
        fVar27 = fVar27 * fVar21 + pfVar11[2];
        fVar22 = fVar26 * fVar21 + pfVar11[1];
        fVar19 = fVar19 + fVar19;
        fVar12 = fVar18 * fVar13 + fVar31 * fVar14 + fVar17 * fVar15;
        fVar22 = fVar22 + fVar22;
        fVar27 = fVar27 + fVar27;
        fVar23 = fVar16 * fVar16 + -0.5;
        fVar25 = fVar13 * fVar19 + fVar14 * fVar22 + fVar15 * fVar27;
        fVar24 = pfVar10[4];
        fVar28 = pfVar10[5];
        fVar26 = pfVar10[6];
        *(uint *)(lVar7 + 0x1000) = uVar1 + 1;
        *pfVar6 = -(fVar13 * fVar12 + fVar18 * fVar23 + fVar16 * (fVar17 * fVar14 - fVar31 * fVar15)
                   );
        pfVar6[1] = -(fVar14 * fVar12 +
                     fVar31 * fVar23 + fVar16 * (fVar18 * fVar15 - fVar17 * fVar13));
        pfVar6[0xd] = param_2;
        pfVar6[6] = fVar23 * fVar27 + fVar16 * (fVar13 * fVar22 - fVar14 * fVar19) + fVar15 * fVar25
                    + fVar26;
        pfVar6[4] = fVar13 * fVar25 + fVar23 * fVar19 + fVar16 * (fVar14 * fVar27 - fVar15 * fVar22)
                    + fVar24;
        pfVar6[5] = fVar14 * fVar25 + fVar23 * fVar22 + fVar16 * (fVar15 * fVar19 - fVar13 * fVar27)
                    + fVar28;
        pfVar6[2] = -(fVar17 * fVar23 + fVar16 * (fVar31 * fVar13 - fVar18 * fVar14) +
                     fVar15 * fVar12);
        pfVar6[3] = fVar33 - fVar21;
      }
      uVar1 = *(uint *)(param_1 + 0x146);
      if (uVar1 < 0x40) {
        uVar9 = *param_6;
        uVar2 = *(undefined4 *)(param_6 + 1);
        *(uint *)(param_1 + 0x146) = uVar1 + 1;
        *(undefined8 *)((long)param_1 + (ulong)uVar1 * 0xc + 0xa34) = uVar9;
        *(undefined4 *)((long)param_1 + (ulong)uVar1 * 0xc + 0xa3c) = uVar2;
      }
    }
    else {
      uVar1 = *(uint *)((long)param_1 + 0x2c);
      uVar8 = (ulong)uVar1;
      if (uVar1 < 0x40) {
        *(uint *)((long)param_1 + 0x2c) = uVar1 + 1;
        *(uint *)((long)param_1 + uVar8 * 8 + 0x834) = uVar1;
        *(float *)(param_1 + uVar8 + 0x106) = fVar33;
        *(float *)(param_1 + uVar8 * 4 + 6) = fVar12;
        *(float *)((long)param_1 + uVar8 * 0x20 + 0x34) = fVar26;
        *(float *)(param_1 + uVar8 * 4 + 7) = fVar27;
        *(undefined4 *)((long)param_1 + uVar8 * 0x20 + 0x44) = *(undefined4 *)param_6;
        *(undefined4 *)(param_1 + uVar8 * 4 + 9) = *(undefined4 *)((long)param_6 + 4);
        *(undefined4 *)((long)param_1 + uVar8 * 0x20 + 0x4c) = *(undefined4 *)(param_6 + 1);
        *(int *)((long)param_1 + uVar8 * 0x20 + 0x3c) = iVar5;
        *(float *)(param_1 + uVar8 * 4 + 8) = param_2;
      }
    }
  }
  return;
}


