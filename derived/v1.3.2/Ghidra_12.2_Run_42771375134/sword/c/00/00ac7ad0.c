/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac7ad0; name: FUN_00ac7ad0
 */


undefined1  [16] FUN_00ac7ad0(undefined8 *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  
  fVar13 = (float)((ulong)*param_1 >> 0x20);
  fVar14 = (float)param_1[1];
  fVar6 = (float)*param_1;
  fVar8 = fVar6 * fVar6;
  fVar3 = (float)((ulong)param_1[1] >> 0x20);
  fVar9 = fVar13 * fVar13;
  fVar11 = fVar14 * fVar14;
  fVar10 = fVar3 * fVar3;
  fVar5 = fVar6 * fVar13 + fVar14 * fVar3;
  fVar7 = *(float *)PTR_FloatPi_02715d90 * 0.5;
  fVar2 = fVar10 + fVar11 + fVar8 + fVar9;
  fVar15 = fVar7 * fVar2;
  if (fVar5 <= fVar15) {
    if (-fVar15 <= fVar5) {
      fVar12 = fVar3 * (fVar6 + fVar6) - fVar14 * (fVar13 + fVar13);
      fVar7 = fVar10 + ((fVar9 - fVar8) - fVar11);
      fVar15 = 0.0;
      if ((fVar12 != 0.0) || (fVar16 = 0.0, fVar7 != 0.0)) {
        if (0.0 <= fVar7) {
          if (fVar12 < 0.0) {
            fVar12 = -fVar12;
            if (fVar7 < fVar12) {
              fVar12 = fVar7 / fVar12;
              fVar7 = fVar12 * fVar12;
              fVar16 = fVar7 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                               fVar7 * (fVar7 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                                fVar7 * (fVar7 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                       *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                       *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
              fVar18 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
              fVar19 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
              pfVar1 = (float *)PTR_FloatPiDivided2_02715158;
              goto LAB_00ac84e8;
            }
            fVar12 = fVar12 / fVar7;
            fVar7 = fVar12 * fVar12;
            fVar16 = -(fVar12 * (fVar7 * (fVar7 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18)
                                                  + fVar7 * (fVar7 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 0x10) +
                                                  fVar7 * (fVar7 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar7 * (fVar7 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                         *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0));
          }
          else {
            if (fVar7 < fVar12) {
              fVar12 = fVar7 / fVar12;
              fVar7 = fVar12 * fVar12;
              fVar16 = fVar7 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                               fVar7 * (fVar7 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                                fVar7 * (fVar7 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                       *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                       *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
              fVar18 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
              fVar19 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
              pfVar1 = (float *)PTR_FloatPiDivided2_02715158;
              goto LAB_00ac8318;
            }
            fVar12 = fVar12 / fVar7;
            fVar7 = fVar12 * fVar12;
            fVar16 = fVar12 * (fVar7 * (fVar7 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                                fVar7 * (fVar7 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 0x10) +
                                                  fVar7 * (fVar7 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar7 * (fVar7 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                       *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0);
          }
        }
        else if (fVar12 < 0.0) {
          if (fVar12 < fVar7) {
            fVar12 = fVar7 / fVar12;
            fVar7 = fVar12 * fVar12;
            fVar19 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
            fVar18 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                     fVar7 * (fVar7 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                                      fVar7 * (fVar7 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8
                                                                  ) +
                                                       fVar7 * (fVar7 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                              *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                             *(float *)(PTR_AtanCoefficients_02715a60 + 0x14));
            fVar16 = -*(float *)PTR_FloatPiDivided2_02715158;
            goto LAB_00ac8324;
          }
          fVar12 = fVar12 / fVar7;
          fVar7 = fVar12 * fVar12;
          fVar16 = fVar7 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                           fVar7 * (fVar7 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                            fVar7 * (fVar7 * *(float *)PTR_AtanCoefficients_02715a60
                                                    - *(float *)(PTR_AtanCoefficients_02715a60 + 4))
                                            ) - *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                   *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
          fVar18 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
          fVar19 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
          pfVar1 = (float *)PTR_FloatPi_02715160;
LAB_00ac84e8:
          fVar16 = fVar12 * (fVar7 * (fVar7 * (fVar18 + fVar7 * fVar16) - fVar19) + 1.0) - *pfVar1;
        }
        else {
          fVar7 = -fVar7;
          if (fVar12 <= fVar7) {
            fVar12 = fVar12 / fVar7;
            fVar7 = fVar12 * fVar12;
            fVar16 = fVar7 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                             fVar7 * (fVar7 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                              fVar7 * (fVar7 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                     *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                     *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
            fVar18 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
            fVar19 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
            pfVar1 = (float *)PTR_FloatPi_02715160;
LAB_00ac8318:
            fVar18 = fVar18 + fVar7 * fVar16;
            fVar16 = *pfVar1;
LAB_00ac8324:
            fVar16 = fVar16 - fVar12 * (fVar7 * (fVar7 * fVar18 - fVar19) + 1.0);
          }
          else {
            fVar7 = fVar7 / fVar12;
            fVar12 = fVar7 * fVar7;
            fVar16 = *(float *)PTR_FloatPiDivided2_02715158 +
                     fVar7 * (fVar12 * (fVar12 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                                 fVar12 * (fVar12 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 0x10) +
                                                  fVar12 * (fVar12 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar12 * (fVar12 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                       *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0);
          }
        }
      }
      fVar3 = fVar3 * (fVar13 + fVar13) - fVar14 * (fVar6 + fVar6);
      fVar10 = fVar10 + ((fVar8 - fVar9) - fVar11);
      if ((fVar3 != 0.0) || (fVar10 != 0.0)) {
        if (0.0 <= fVar10) {
          if (fVar3 < 0.0) {
            fVar3 = -fVar3;
            if (fVar10 < fVar3) {
              fVar3 = fVar10 / fVar3;
              fVar6 = fVar3 * fVar3;
              fVar10 = fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                               fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                                fVar6 * (fVar6 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                       *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                       *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
              fVar7 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
              fVar8 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
              pfVar1 = (float *)PTR_FloatPiDivided2_02715158;
              goto LAB_00ac89a4;
            }
            fVar3 = fVar3 / fVar10;
            fVar6 = fVar3 * fVar3;
            fVar15 = -(fVar3 * (fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                                 fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 0x10) +
                                                  fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar6 * (fVar6 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                        *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0));
          }
          else {
            if (fVar10 < fVar3) {
              fVar3 = fVar10 / fVar3;
              fVar6 = fVar3 * fVar3;
              fVar10 = fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                               fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                                fVar6 * (fVar6 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                       *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                       *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
              fVar7 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
              fVar8 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
              pfVar1 = (float *)PTR_FloatPiDivided2_02715158;
              goto LAB_00ac88bc;
            }
            fVar3 = fVar3 / fVar10;
            fVar6 = fVar3 * fVar3;
            fVar15 = fVar3 * (fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                               fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 0x10) +
                                                  fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar6 * (fVar6 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                      *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0);
          }
        }
        else if (fVar3 < 0.0) {
          if (fVar3 < fVar10) {
            fVar3 = fVar10 / fVar3;
            fVar6 = fVar3 * fVar3;
            fVar8 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
            fVar7 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                    fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                                     fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8)
                                                      + fVar6 * (fVar6 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                             *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                            *(float *)(PTR_AtanCoefficients_02715a60 + 0x14));
            fVar15 = -*(float *)PTR_FloatPiDivided2_02715158;
            goto LAB_00ac88c8;
          }
          fVar3 = fVar3 / fVar10;
          fVar6 = fVar3 * fVar3;
          fVar10 = fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                           fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                            fVar6 * (fVar6 * *(float *)PTR_AtanCoefficients_02715a60
                                                    - *(float *)(PTR_AtanCoefficients_02715a60 + 4))
                                            ) - *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                   *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
          fVar7 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
          fVar8 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
          pfVar1 = (float *)PTR_FloatPi_02715160;
LAB_00ac89a4:
          fVar15 = fVar3 * (fVar6 * (fVar6 * (fVar7 + fVar6 * fVar10) - fVar8) + 1.0) - *pfVar1;
        }
        else {
          fVar10 = -fVar10;
          if (fVar3 <= fVar10) {
            fVar3 = fVar3 / fVar10;
            fVar6 = fVar3 * fVar3;
            fVar10 = fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                             fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                              fVar6 * (fVar6 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                     *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                     *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
            fVar7 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
            fVar8 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
            pfVar1 = (float *)PTR_FloatPi_02715160;
LAB_00ac88bc:
            fVar7 = fVar7 + fVar6 * fVar10;
            fVar15 = *pfVar1;
LAB_00ac88c8:
            fVar15 = fVar15 - fVar3 * (fVar6 * (fVar6 * fVar7 - fVar8) + 1.0);
          }
          else {
            fVar10 = fVar10 / fVar3;
            fVar3 = fVar10 * fVar10;
            fVar15 = *(float *)PTR_FloatPiDivided2_02715158 +
                     fVar10 * (fVar3 * (fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                                fVar3 * (fVar3 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 0x10) +
                                                  fVar3 * (fVar3 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar3 * (fVar3 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                       *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0);
          }
        }
      }
      fVar2 = (fVar5 + fVar5) / fVar2;
      if (0.0 <= fVar2) {
        if (fVar2 <= DAT_01d4bfe0) {
          fVar6 = 1.0 - fVar2 * fVar2;
          fVar3 = SQRT(fVar6);
          if (NAN(fVar3)) {
            fVar3 = sqrtf(fVar6);
          }
          fVar2 = fVar2 / fVar3;
          fVar3 = fVar2 * fVar2;
          fVar7 = fVar2 * (fVar3 * (fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                            fVar3 * (fVar3 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 0x10) +
                                                  fVar3 * (fVar3 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar3 * (*(float *)PTR_AtanCoefficients_02715a60 *
                                                           fVar3 - *(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                   *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0);
        }
        else {
          fVar6 = 1.0 - fVar2 * fVar2;
          fVar3 = SQRT(fVar6);
          fVar7 = *(float *)PTR_FloatPiDivided2_02715158;
          if (NAN(fVar3)) {
            fVar3 = sqrtf(fVar6);
          }
          fVar3 = fVar3 / fVar2;
          fVar6 = fVar3 * fVar3;
          fVar7 = fVar7 - fVar3 * (fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18
                                                               ) +
                                                    fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 0x10) +
                                                  fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar6 * (*(float *)PTR_AtanCoefficients_02715a60 *
                                                           fVar6 - *(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                           *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0);
        }
      }
      else if (DAT_01d4c778 <= fVar2) {
        fVar6 = 1.0 - fVar2 * fVar2;
        fVar3 = SQRT(fVar6);
        if (NAN(fVar3)) {
          fVar3 = sqrtf(fVar6);
        }
        fVar3 = -fVar2 / fVar3;
        fVar6 = fVar3 * fVar3;
        fVar7 = -(fVar3 * (fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                            fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 0x10) +
                                                  fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar6 * (*(float *)PTR_AtanCoefficients_02715a60 *
                                                           fVar6 - *(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                   *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0));
      }
      else {
        fVar6 = 1.0 - fVar2 * fVar2;
        fVar3 = SQRT(fVar6);
        fVar7 = *(float *)PTR_FloatPiDivided2_02715158;
        if (NAN(fVar3)) {
          fVar3 = sqrtf(fVar6);
        }
        fVar2 = -fVar3 / fVar2;
        fVar3 = fVar2 * fVar2;
        fVar7 = fVar2 * (fVar3 * (fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                          fVar3 * (fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60
                                                                      + 0x10) +
                                                           fVar3 * (fVar3 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar3 * (*(float *)PTR_AtanCoefficients_02715a60 *
                                                           fVar3 - *(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                 *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0) - fVar7;
      }
      lVar17 = CONCAT44(fVar15,fVar16);
      goto LAB_00ac8cf4;
    }
    if ((fVar6 == 0.0) && (fVar3 == 0.0)) {
      fVar3 = 0.0;
    }
    else if (0.0 <= fVar3) {
      if (fVar6 < 0.0) {
        fVar6 = -fVar6;
        if (fVar3 < fVar6) {
          fVar6 = fVar3 / fVar6;
          fVar3 = fVar6 * fVar6;
          fVar2 = fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                          fVar3 * (fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                           fVar3 * (fVar3 * *(float *)PTR_AtanCoefficients_02715a60
                                                   - *(float *)(PTR_AtanCoefficients_02715a60 + 4)))
                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                  *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
          fVar5 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
          fVar10 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
          pfVar1 = (float *)PTR_FloatPiDivided2_02715158;
          goto LAB_00ac8564;
        }
        fVar6 = fVar6 / fVar3;
        fVar3 = fVar6 * fVar6;
        fVar3 = -(fVar6 * (fVar3 * (fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                            fVar3 * (fVar3 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 0x10) +
                                                  fVar3 * (fVar3 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar3 * (fVar3 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                   *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0));
      }
      else {
        if (fVar3 < fVar6) {
          fVar6 = fVar3 / fVar6;
          fVar2 = fVar6 * fVar6;
          fVar3 = fVar2 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                          fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                           fVar2 * (fVar2 * *(float *)PTR_AtanCoefficients_02715a60
                                                   - *(float *)(PTR_AtanCoefficients_02715a60 + 4)))
                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                  *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
          fVar5 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
          fVar10 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
          pfVar1 = (float *)PTR_FloatPiDivided2_02715158;
          goto LAB_00ac8394;
        }
        fVar6 = fVar6 / fVar3;
        fVar3 = fVar6 * fVar6;
        fVar3 = fVar6 * (fVar3 * (fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                          fVar3 * (fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60
                                                                      + 0x10) +
                                                           fVar3 * (fVar3 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar3 * (fVar3 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                 *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0);
      }
    }
    else if (fVar6 < 0.0) {
      if (fVar6 < fVar3) {
        fVar6 = fVar3 / fVar6;
        fVar2 = fVar6 * fVar6;
        fVar10 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
        fVar5 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                                 fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar2 * (fVar2 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                         *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                        *(float *)(PTR_AtanCoefficients_02715a60 + 0x14));
        fVar3 = -*(float *)PTR_FloatPiDivided2_02715158;
        goto LAB_00ac83a0;
      }
      fVar6 = fVar6 / fVar3;
      fVar3 = fVar6 * fVar6;
      fVar2 = fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                      fVar3 * (fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                       fVar3 * (fVar3 * *(float *)PTR_AtanCoefficients_02715a60 -
                                               *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                              *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
              *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
      fVar5 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
      fVar10 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
      pfVar1 = (float *)PTR_FloatPi_02715160;
LAB_00ac8564:
      fVar3 = fVar6 * (fVar3 * (fVar3 * (fVar5 + fVar3 * fVar2) - fVar10) + 1.0) - *pfVar1;
    }
    else {
      fVar3 = -fVar3;
      if (fVar6 <= fVar3) {
        fVar6 = fVar6 / fVar3;
        fVar2 = fVar6 * fVar6;
        fVar3 = fVar2 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                        fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                         fVar2 * (fVar2 * *(float *)PTR_AtanCoefficients_02715a60 -
                                                 *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
        fVar5 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
        fVar10 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
        pfVar1 = (float *)PTR_FloatPi_02715160;
LAB_00ac8394:
        fVar5 = fVar5 + fVar2 * fVar3;
        fVar3 = *pfVar1;
LAB_00ac83a0:
        fVar3 = fVar3 - fVar6 * (fVar2 * (fVar2 * fVar5 - fVar10) + 1.0);
      }
      else {
        fVar3 = fVar3 / fVar6;
        fVar6 = fVar3 * fVar3;
        fVar3 = *(float *)PTR_FloatPiDivided2_02715158 +
                fVar3 * (fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                          fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60
                                                                      + 0x10) +
                                                           fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar6 * (fVar6 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                 *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0);
      }
    }
    fVar3 = fVar3 * -2.0;
    fVar7 = *(float *)PTR_FloatPi_02715d90 * -0.5;
  }
  else {
    if ((fVar6 == 0.0) && (fVar3 == 0.0)) {
      fVar3 = 0.0;
    }
    else if (0.0 <= fVar3) {
      if (fVar6 < 0.0) {
        fVar6 = -fVar6;
        if (fVar3 < fVar6) {
          fVar6 = fVar3 / fVar6;
          fVar3 = fVar6 * fVar6;
          fVar2 = fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                          fVar3 * (fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                           fVar3 * (fVar3 * *(float *)PTR_AtanCoefficients_02715a60
                                                   - *(float *)(PTR_AtanCoefficients_02715a60 + 4)))
                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                  *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
          fVar5 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
          fVar10 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
          pfVar1 = (float *)PTR_FloatPiDivided2_02715158;
          goto LAB_00ac816c;
        }
        fVar6 = fVar6 / fVar3;
        fVar3 = fVar6 * fVar6;
        fVar3 = -(fVar6 * (fVar3 * (fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                            fVar3 * (fVar3 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 0x10) +
                                                  fVar3 * (fVar3 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar3 * (fVar3 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                   *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0));
      }
      else {
        if (fVar3 < fVar6) {
          fVar6 = fVar3 / fVar6;
          fVar2 = fVar6 * fVar6;
          fVar3 = fVar2 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                          fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                           fVar2 * (fVar2 * *(float *)PTR_AtanCoefficients_02715a60
                                                   - *(float *)(PTR_AtanCoefficients_02715a60 + 4)))
                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                  *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
          fVar5 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
          fVar10 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
          pfVar1 = (float *)PTR_FloatPiDivided2_02715158;
          goto LAB_00ac7fac;
        }
        fVar6 = fVar6 / fVar3;
        fVar3 = fVar6 * fVar6;
        fVar3 = fVar6 * (fVar3 * (fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                          fVar3 * (fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60
                                                                      + 0x10) +
                                                           fVar3 * (fVar3 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar3 * (fVar3 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                 *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0);
      }
    }
    else if (fVar6 < 0.0) {
      if (fVar6 < fVar3) {
        fVar6 = fVar3 / fVar6;
        fVar2 = fVar6 * fVar6;
        fVar10 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
        fVar5 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                                 fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar2 * (fVar2 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                         *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                        *(float *)(PTR_AtanCoefficients_02715a60 + 0x14));
        fVar3 = -*(float *)PTR_FloatPiDivided2_02715158;
        goto LAB_00ac7fb8;
      }
      fVar6 = fVar6 / fVar3;
      fVar3 = fVar6 * fVar6;
      fVar2 = fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                      fVar3 * (fVar3 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                       fVar3 * (fVar3 * *(float *)PTR_AtanCoefficients_02715a60 -
                                               *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                              *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
              *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
      fVar5 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
      fVar10 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
      pfVar1 = (float *)PTR_FloatPi_02715160;
LAB_00ac816c:
      fVar3 = fVar6 * (fVar3 * (fVar3 * (fVar5 + fVar3 * fVar2) - fVar10) + 1.0) - *pfVar1;
    }
    else {
      fVar3 = -fVar3;
      if (fVar6 <= fVar3) {
        fVar6 = fVar6 / fVar3;
        fVar2 = fVar6 * fVar6;
        fVar3 = fVar2 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x10) +
                        fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_02715a60 + 8) +
                                         fVar2 * (fVar2 * *(float *)PTR_AtanCoefficients_02715a60 -
                                                 *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                *(float *)(PTR_AtanCoefficients_02715a60 + 0xc))) -
                *(float *)(PTR_AtanCoefficients_02715a60 + 0x14);
        fVar5 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x18);
        fVar10 = *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c);
        pfVar1 = (float *)PTR_FloatPi_02715160;
LAB_00ac7fac:
        fVar5 = fVar5 + fVar2 * fVar3;
        fVar3 = *pfVar1;
LAB_00ac7fb8:
        fVar3 = fVar3 - fVar6 * (fVar2 * (fVar2 * fVar5 - fVar10) + 1.0);
      }
      else {
        fVar3 = fVar3 / fVar6;
        fVar6 = fVar3 * fVar3;
        fVar3 = *(float *)PTR_FloatPiDivided2_02715158 +
                fVar3 * (fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                          fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_02715a60
                                                                      + 0x10) +
                                                           fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar6 * (fVar6 * *(float *)
                                                  PTR_AtanCoefficients_02715a60 -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                 *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0);
      }
    }
    fVar3 = fVar3 + fVar3;
  }
  lVar17 = (ulong)(uint)fVar3 << 0x20;
LAB_00ac8cf4:
  auVar4._8_4_ = fVar7;
  auVar4._0_8_ = lVar17;
  auVar4._12_4_ = 0;
  return auVar4;
}


