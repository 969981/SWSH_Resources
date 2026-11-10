/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00475a00; name: FUN_00475a00
 */


void FUN_00475a00(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                 uint param_6)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
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
  
  fVar10 = DAT_01d4c5ac;
  fVar9 = DAT_01d4c3e8;
  fVar8 = DAT_01d4c164;
  fVar7 = DAT_01d4c05c;
  fVar6 = DAT_01d4bfe4;
  fVar5 = DAT_01d4bdf4;
  fVar4 = DAT_01d4bcbc;
  fVar28 = DAT_01d4bc54;
  fVar27 = DAT_01d4bc4c;
  fVar26 = DAT_01d4bb38;
  fVar24 = param_4[4];
  fVar20 = param_4[5];
  fVar25 = *param_4;
  fVar22 = param_4[1];
  fVar23 = param_4[2];
  fVar19 = param_4[3];
  lVar11 = *(long *)(param_4 + 6);
  if ((uint)fVar20 < 6) {
    uVar12 = (ulong)param_6;
    pfVar1 = param_5 + param_6;
    fVar21 = (param_1 - param_2) / (float)param_6;
    switch(fVar20) {
    case 0.0:
      if (param_6 != 0) {
        fVar29 = 1.0 / fVar24;
        uVar12 = ~(ulong)param_5 + uVar12 * -4;
        do {
          uVar15 = (uint)((fVar7 - fVar19) * fVar29);
          uVar2 = param_6;
          if ((int)uVar15 <= (int)param_6) {
            uVar2 = uVar15;
          }
          lVar17 = (long)(int)uVar2;
          if ((int)uVar15 < 0) {
            lVar17 = -1;
          }
          pfVar3 = param_5 + lVar17;
          if (pfVar1 <= param_5 + lVar17) {
            pfVar3 = pfVar1;
          }
          if (param_5 < pfVar3) {
            uVar18 = ~(ulong)param_5 + lVar17 * -4;
            uVar16 = uVar18;
            if (uVar18 <= uVar12) {
              uVar16 = uVar12;
            }
            if (uVar18 <= uVar12) {
              uVar18 = uVar12;
            }
            uVar18 = (-2 - (long)param_5) - uVar18;
            pfVar14 = param_5;
            if (((uint)uVar18 >> 2 & 1) == 0) {
              fVar19 = fVar19 + fVar24;
              fVar30 = fVar19 * fVar19;
              param_2 = param_2 + fVar21;
              *param_5 = param_2 * 0.5 +
                         param_2 * 0.5 *
                         (fVar6 + fVar30 * (fVar27 + fVar30 * (fVar9 + fVar4 * fVar30))) * fVar19;
              pfVar14 = param_5 + 1;
            }
            if (3 < uVar18) {
              do {
                fVar30 = fVar19 + fVar24;
                fVar31 = fVar30 * fVar30;
                fVar32 = (param_2 + fVar21) * 0.5;
                param_2 = param_2 + fVar21 + fVar21;
                fVar19 = fVar30 + fVar24;
                fVar33 = fVar19 * fVar19;
                pfVar13 = pfVar14 + 2;
                *pfVar14 = fVar32 + fVar32 * (fVar6 + fVar31 * (fVar27 + fVar31 * (fVar9 - fVar28 * 
                                                  fVar31))) * fVar30;
                pfVar14[1] = param_2 * 0.5 +
                             param_2 * 0.5 *
                             (fVar6 + fVar33 * (fVar27 + fVar33 * (fVar9 - fVar28 * fVar33))) *
                             fVar19;
                pfVar14 = pfVar13;
              } while (pfVar13 < pfVar3);
            }
            param_5 = (float *)((long)param_5 +
                               ((-2 - (long)param_5) - uVar16 & 0xfffffffffffffffc) + 4);
          }
          uVar15 = (uint)((fVar26 - fVar19) * fVar29);
          uVar2 = param_6;
          if ((int)uVar15 <= (int)param_6) {
            uVar2 = uVar15;
          }
          lVar17 = (long)(int)uVar2;
          if ((int)uVar15 < 0) {
            lVar17 = -1;
          }
          pfVar3 = param_5 + lVar17;
          if (pfVar1 <= param_5 + lVar17) {
            pfVar3 = pfVar1;
          }
          if (param_5 < pfVar3) {
            uVar16 = ~(ulong)param_5 + lVar17 * -4;
            uVar18 = ~(ulong)param_5 + lVar17 * -4;
            if (uVar16 <= uVar12) {
              uVar16 = uVar12;
            }
            if (uVar18 <= uVar12) {
              uVar18 = uVar12;
            }
            uVar18 = (-2 - (long)param_5) - uVar18;
            pfVar14 = param_5;
            if (((uint)uVar18 >> 2 & 1) == 0) {
              fVar19 = fVar19 + fVar24;
              fVar30 = fVar26 - fVar19;
              fVar31 = fVar30 * fVar30;
              param_2 = param_2 + fVar21;
              *param_5 = param_2 * 0.5 +
                         param_2 * 0.5 *
                         (fVar6 + fVar31 * (fVar27 + fVar31 * (fVar9 + fVar4 * fVar31))) * fVar30;
              pfVar14 = param_5 + 1;
            }
            if (3 < uVar18) {
              do {
                fVar31 = fVar26 - (fVar19 + fVar24);
                fVar19 = fVar19 + fVar24 + fVar24;
                fVar32 = fVar31 * fVar31;
                fVar33 = fVar26 - fVar19;
                fVar30 = fVar33 * fVar33;
                fVar34 = (param_2 + fVar21) * 0.5;
                param_2 = param_2 + fVar21 + fVar21;
                pfVar13 = pfVar14 + 2;
                *pfVar14 = fVar34 + fVar34 * (fVar6 + fVar32 * (fVar27 + fVar32 * (fVar9 - fVar28 * 
                                                  fVar32))) * fVar31;
                pfVar14[1] = param_2 * 0.5 +
                             param_2 * 0.5 *
                             (fVar6 + fVar30 * (fVar27 + fVar30 * (fVar9 - fVar28 * fVar30))) *
                             fVar33;
                pfVar14 = pfVar13;
              } while (pfVar13 < pfVar3);
            }
            param_5 = (float *)((long)param_5 +
                               ((-2 - (long)param_5) - uVar16 & 0xfffffffffffffffc) + 4);
          }
          uVar15 = (uint)((fVar8 - fVar19) * fVar29);
          uVar2 = param_6;
          if ((int)uVar15 <= (int)param_6) {
            uVar2 = uVar15;
          }
          lVar17 = (long)(int)uVar2;
          if ((int)uVar15 < 0) {
            lVar17 = -1;
          }
          pfVar3 = param_5 + lVar17;
          if (pfVar1 <= param_5 + lVar17) {
            pfVar3 = pfVar1;
          }
          if (param_5 < pfVar3) {
            uVar16 = ~(ulong)param_5 + lVar17 * -4;
            uVar18 = ~(ulong)param_5 + lVar17 * -4;
            if (uVar16 <= uVar12) {
              uVar16 = uVar12;
            }
            if (uVar18 <= uVar12) {
              uVar18 = uVar12;
            }
            uVar18 = (-2 - (long)param_5) - uVar18;
            pfVar14 = param_5;
            if (((uint)uVar18 >> 2 & 1) == 0) {
              fVar19 = fVar19 + fVar24;
              fVar30 = fVar19 + DAT_01d4be68;
              fVar31 = fVar30 * fVar30;
              param_2 = param_2 + fVar21;
              *param_5 = param_2 * 0.5 +
                         param_2 * 0.5 *
                         (DAT_01d4c5bc +
                         fVar31 * (DAT_01d4c074 + fVar31 * (DAT_01d4bcc0 + fVar28 * fVar31))) *
                         fVar30;
              pfVar14 = param_5 + 1;
            }
            if (3 < uVar18) {
              do {
                fVar32 = fVar19 + fVar24 + DAT_01d4be68;
                fVar19 = fVar19 + fVar24 + fVar24;
                fVar33 = fVar32 * fVar32;
                fVar31 = fVar19 + DAT_01d4be68;
                fVar34 = fVar31 * fVar31;
                fVar30 = (param_2 + fVar21) * 0.5;
                param_2 = param_2 + fVar21 + fVar21;
                pfVar13 = pfVar14 + 2;
                *pfVar14 = fVar30 + fVar30 * (((fVar33 * fVar28 - fVar9) * fVar33 - fVar27) * fVar33
                                             - fVar6) * fVar32;
                pfVar14[1] = param_2 * 0.5 +
                             param_2 * 0.5 *
                             (((fVar34 * fVar28 - fVar9) * fVar34 - fVar27) * fVar34 - fVar6) *
                             fVar31;
                pfVar14 = pfVar13;
              } while (pfVar13 < pfVar3);
            }
            param_5 = (float *)((long)param_5 +
                               ((-2 - (long)param_5) - uVar16 & 0xfffffffffffffffc) + 4);
          }
          uVar15 = (uint)((fVar5 - fVar19) * fVar29);
          uVar2 = param_6;
          if ((int)uVar15 <= (int)param_6) {
            uVar2 = uVar15;
          }
          lVar17 = (long)(int)uVar2;
          if ((int)uVar15 < 0) {
            lVar17 = -1;
          }
          pfVar3 = param_5 + lVar17;
          if (pfVar1 <= param_5 + lVar17) {
            pfVar3 = pfVar1;
          }
          if (param_5 < pfVar3) {
            uVar16 = ~(ulong)param_5 + lVar17 * -4;
            uVar18 = ~(ulong)param_5 + lVar17 * -4;
            if (uVar16 <= uVar12) {
              uVar16 = uVar12;
            }
            if (uVar18 <= uVar12) {
              uVar18 = uVar12;
            }
            uVar18 = (-2 - (long)param_5) - uVar18;
            pfVar14 = param_5;
            if (((uint)uVar18 >> 2 & 1) == 0) {
              fVar19 = fVar19 + fVar24;
              fVar30 = fVar5 - fVar19;
              fVar31 = fVar30 * fVar30;
              param_2 = param_2 + fVar21;
              *param_5 = param_2 * 0.5 +
                         param_2 * 0.5 *
                         (DAT_01d4c5bc +
                         fVar31 * (DAT_01d4c074 + fVar31 * (DAT_01d4bcc0 + fVar28 * fVar31))) *
                         fVar30;
              pfVar14 = param_5 + 1;
            }
            if (3 < uVar18) {
              do {
                fVar31 = fVar5 - (fVar19 + fVar24);
                fVar19 = fVar19 + fVar24 + fVar24;
                fVar32 = fVar31 * fVar31;
                fVar33 = fVar5 - fVar19;
                fVar30 = fVar33 * fVar33;
                fVar34 = (param_2 + fVar21) * 0.5;
                param_2 = param_2 + fVar21 + fVar21;
                pfVar13 = pfVar14 + 2;
                *pfVar14 = fVar34 + fVar34 * (((fVar32 * fVar28 - fVar9) * fVar32 - fVar27) * fVar32
                                             - fVar6) * fVar31;
                pfVar14[1] = param_2 * 0.5 +
                             param_2 * 0.5 *
                             (((fVar30 * fVar28 - fVar9) * fVar30 - fVar27) * fVar30 - fVar6) *
                             fVar33;
                pfVar14 = pfVar13;
              } while (pfVar13 < pfVar3);
            }
            param_5 = (float *)((long)param_5 +
                               ((-2 - (long)param_5) - uVar16 & 0xfffffffffffffffc) + 4);
          }
          if (fVar5 <= fVar19) {
            fVar19 = fVar19 + fVar10;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 1.4013e-45:
      if (param_6 != 0) {
        fVar27 = 1.0 / fVar24;
        fVar26 = fVar22 + fVar22;
        uVar12 = ~(ulong)param_5 + uVar12 * -4;
        do {
          uVar15 = (uint)((0.5 - fVar19) * fVar27);
          uVar2 = param_6;
          if ((int)uVar15 <= (int)param_6) {
            uVar2 = uVar15;
          }
          lVar17 = (long)(int)uVar2;
          if ((int)uVar15 < 0) {
            lVar17 = -1;
          }
          pfVar3 = param_5 + lVar17;
          if (pfVar1 <= param_5 + lVar17) {
            pfVar3 = pfVar1;
          }
          if (param_5 < pfVar3) {
            uVar18 = ~(ulong)param_5 + lVar17 * -4;
            uVar16 = uVar18;
            if (uVar18 <= uVar12) {
              uVar16 = uVar12;
            }
            if (uVar18 <= uVar12) {
              uVar18 = uVar12;
            }
            uVar18 = (-2 - (long)param_5) - uVar18;
            uVar2 = ((uint)(uVar18 >> 2) & 0x3fffffff) + 1;
            pfVar14 = param_5;
            if ((uVar2 & 3) != 0) {
              lVar17 = -((ulong)uVar2 & 3);
              pfVar13 = param_5;
              do {
                fVar19 = fVar19 + fVar24;
                param_2 = param_2 + fVar21;
                lVar17 = lVar17 + 1;
                fVar25 = fVar26 * fVar19 * param_2 - fVar25 * fVar23;
                pfVar14 = pfVar13 + 1;
                *pfVar13 = fVar25;
                pfVar13 = pfVar14;
              } while (lVar17 != 0);
            }
            if (0xb < uVar18) {
              do {
                fVar28 = fVar19 + fVar24 + fVar24;
                fVar25 = fVar26 * (fVar19 + fVar24) * (param_2 + fVar21) - fVar25 * fVar23;
                param_2 = param_2 + fVar21 + fVar21;
                fVar19 = fVar28 + fVar24;
                fVar28 = fVar26 * fVar28 * param_2 - fVar25 * fVar23;
                param_2 = param_2 + fVar21;
                *pfVar14 = fVar25;
                pfVar14[1] = fVar28;
                fVar28 = fVar26 * fVar19 * param_2 - fVar28 * fVar23;
                fVar19 = fVar19 + fVar24;
                param_2 = param_2 + fVar21;
                fVar25 = fVar26 * fVar19 * param_2 - fVar28 * fVar23;
                pfVar14[2] = fVar28;
                pfVar14[3] = fVar25;
                pfVar14 = pfVar14 + 4;
              } while (pfVar14 < pfVar3);
            }
            param_5 = (float *)((long)param_5 +
                               ((-2 - (long)param_5) - uVar16 & 0xfffffffffffffffc) + 4);
          }
          uVar15 = (uint)(fVar27 - fVar27 * fVar19);
          uVar2 = param_6;
          if ((int)uVar15 <= (int)param_6) {
            uVar2 = uVar15;
          }
          lVar17 = (long)(int)uVar2;
          if ((int)uVar15 < 0) {
            lVar17 = -1;
          }
          pfVar3 = param_5 + lVar17;
          if (pfVar1 <= param_5 + lVar17) {
            pfVar3 = pfVar1;
          }
          if (param_5 < pfVar3) {
            uVar16 = ~(ulong)param_5 + lVar17 * -4;
            uVar18 = ~(ulong)param_5 + lVar17 * -4;
            if (uVar16 <= uVar12) {
              uVar16 = uVar12;
            }
            if (uVar18 <= uVar12) {
              uVar18 = uVar12;
            }
            uVar18 = (-2 - (long)param_5) - uVar18;
            pfVar14 = param_5;
            if (((uint)uVar18 >> 2 & 1) == 0) {
              fVar19 = fVar19 + fVar24;
              param_2 = param_2 + fVar21;
              fVar25 = (fVar26 - fVar26 * fVar19) * param_2 - fVar25 * fVar23;
              *param_5 = fVar25;
              pfVar14 = param_5 + 1;
            }
            if (3 < uVar18) {
              do {
                fVar25 = (fVar26 - fVar26 * (fVar19 + fVar24)) * (param_2 + fVar21) -
                         fVar25 * fVar23;
                fVar19 = fVar19 + fVar24 + fVar24;
                *pfVar14 = fVar25;
                param_2 = param_2 + fVar21 + fVar21;
                fVar25 = (fVar26 - fVar26 * fVar19) * param_2 - fVar25 * fVar23;
                pfVar14[1] = fVar25;
                pfVar14 = pfVar14 + 2;
              } while (pfVar14 < pfVar3);
            }
            param_5 = (float *)((long)param_5 +
                               ((-2 - (long)param_5) - uVar16 & 0xfffffffffffffffc) + 4);
          }
          if (1.0 <= fVar19) {
            fVar19 = fVar19 + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 2.8026e-45:
      if (param_6 != 0) {
        fVar26 = 1.0 / fVar24;
        uVar12 = ~(ulong)param_5 + uVar12 * -4;
        do {
          uVar15 = (uint)((param_3 - fVar19) * fVar26);
          uVar2 = param_6;
          if ((int)uVar15 <= (int)param_6) {
            uVar2 = uVar15;
          }
          lVar17 = (long)(int)uVar2;
          if ((int)uVar15 < 0) {
            lVar17 = -1;
          }
          pfVar3 = param_5 + lVar17;
          if (pfVar1 <= param_5 + lVar17) {
            pfVar3 = pfVar1;
          }
          if (param_5 < pfVar3) {
            uVar18 = ~(ulong)param_5 + lVar17 * -4;
            uVar16 = uVar18;
            if (uVar18 <= uVar12) {
              uVar16 = uVar12;
            }
            if (uVar18 <= uVar12) {
              uVar18 = uVar12;
            }
            uVar18 = (-2 - (long)param_5) - uVar18;
            uVar2 = ((uint)(uVar18 >> 2) & 0x3fffffff) + 1;
            pfVar14 = param_5;
            if ((uVar2 & 3) != 0) {
              lVar17 = -((ulong)uVar2 & 3);
              pfVar13 = param_5;
              do {
                param_2 = param_2 + fVar21;
                fVar25 = param_2 * fVar22 - fVar25 * fVar23;
                fVar19 = fVar19 + fVar24;
                lVar17 = lVar17 + 1;
                pfVar14 = pfVar13 + 1;
                *pfVar13 = fVar25;
                pfVar13 = pfVar14;
              } while (lVar17 != 0);
            }
            if (0xb < uVar18) {
              do {
                fVar25 = (param_2 + fVar21) * fVar22 - fVar25 * fVar23;
                param_2 = param_2 + fVar21 + fVar21;
                *pfVar14 = fVar25;
                fVar25 = param_2 * fVar22 - fVar25 * fVar23;
                param_2 = param_2 + fVar21;
                pfVar14[1] = fVar25;
                fVar25 = param_2 * fVar22 - fVar25 * fVar23;
                fVar19 = fVar19 + fVar24 + fVar24 + fVar24 + fVar24;
                pfVar14[2] = fVar25;
                param_2 = param_2 + fVar21;
                fVar25 = param_2 * fVar22 - fVar25 * fVar23;
                pfVar14[3] = fVar25;
                pfVar14 = pfVar14 + 4;
              } while (pfVar14 < pfVar3);
            }
            param_5 = (float *)((long)param_5 +
                               ((-2 - (long)param_5) - uVar16 & 0xfffffffffffffffc) + 4);
          }
          uVar15 = (uint)(fVar26 - fVar26 * fVar19);
          uVar2 = param_6;
          if ((int)uVar15 <= (int)param_6) {
            uVar2 = uVar15;
          }
          lVar17 = (long)(int)uVar2;
          if ((int)uVar15 < 0) {
            lVar17 = -1;
          }
          pfVar3 = param_5 + lVar17;
          if (pfVar1 <= param_5 + lVar17) {
            pfVar3 = pfVar1;
          }
          if (param_5 < pfVar3) {
            uVar16 = ~(ulong)param_5 + lVar17 * -4;
            uVar18 = ~(ulong)param_5 + lVar17 * -4;
            if (uVar16 <= uVar12) {
              uVar16 = uVar12;
            }
            if (uVar18 <= uVar12) {
              uVar18 = uVar12;
            }
            uVar18 = (-2 - (long)param_5) - uVar18;
            uVar2 = ((uint)(uVar18 >> 2) & 0x3fffffff) + 1;
            pfVar14 = param_5;
            if ((uVar2 & 3) != 0) {
              lVar17 = -((ulong)uVar2 & 3);
              pfVar13 = param_5;
              do {
                fVar25 = -(fVar23 * fVar25);
                param_2 = param_2 + fVar21;
                fVar19 = fVar19 + fVar24;
                pfVar14 = pfVar13 + 1;
                *pfVar13 = fVar25;
                lVar17 = lVar17 + 1;
                pfVar13 = pfVar14;
              } while (lVar17 != 0);
            }
            if (0xb < uVar18) {
              do {
                *pfVar14 = -(fVar23 * fVar25);
                fVar25 = fVar23 * fVar23 * fVar25;
                pfVar14[1] = fVar25;
                pfVar14[2] = -(fVar23 * fVar25);
                fVar25 = fVar23 * fVar23 * fVar25;
                param_2 = param_2 + fVar21 + fVar21 + fVar21 + fVar21;
                fVar19 = fVar19 + fVar24 + fVar24 + fVar24 + fVar24;
                pfVar14[3] = fVar25;
                pfVar14 = pfVar14 + 4;
              } while (pfVar14 < pfVar3);
            }
            param_5 = (float *)((long)param_5 +
                               ((-2 - (long)param_5) - uVar16 & 0xfffffffffffffffc) + 4);
          }
          if (1.0 <= fVar19) {
            fVar19 = fVar19 + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 4.2039e-45:
      if (param_6 != 0) {
        uVar12 = ~(ulong)param_5 + uVar12 * -4;
        do {
          uVar15 = (uint)(1.0 / fVar24 - (1.0 / fVar24) * fVar19);
          uVar2 = param_6;
          if ((int)uVar15 <= (int)param_6) {
            uVar2 = uVar15;
          }
          lVar17 = (long)(int)uVar2;
          if ((int)uVar15 < 0) {
            lVar17 = -1;
          }
          pfVar3 = param_5 + lVar17;
          if (pfVar1 <= param_5 + lVar17) {
            pfVar3 = pfVar1;
          }
          if (param_5 < pfVar3) {
            uVar18 = ~(ulong)param_5 + lVar17 * -4;
            uVar16 = uVar18;
            if (uVar18 <= uVar12) {
              uVar16 = uVar12;
            }
            if (uVar18 <= uVar12) {
              uVar18 = uVar12;
            }
            uVar18 = (-2 - (long)param_5) - uVar18;
            uVar2 = ((uint)(uVar18 >> 2) & 0x3fffffff) + 1;
            pfVar14 = param_5;
            if ((uVar2 & 3) != 0) {
              lVar17 = -((ulong)uVar2 & 3);
              pfVar13 = param_5;
              do {
                fVar19 = fVar19 + fVar24;
                param_2 = param_2 + fVar21;
                lVar17 = lVar17 + 1;
                fVar25 = fVar19 * fVar22 * param_2 - fVar25 * fVar23;
                pfVar14 = pfVar13 + 1;
                *pfVar13 = fVar25;
                pfVar13 = pfVar14;
              } while (lVar17 != 0);
            }
            if (0xb < uVar18) {
              do {
                fVar26 = fVar19 + fVar24 + fVar24;
                fVar25 = (fVar19 + fVar24) * fVar22 * (param_2 + fVar21) - fVar25 * fVar23;
                param_2 = param_2 + fVar21 + fVar21;
                fVar19 = fVar26 + fVar24;
                fVar26 = fVar26 * fVar22 * param_2 - fVar25 * fVar23;
                param_2 = param_2 + fVar21;
                *pfVar14 = fVar25;
                pfVar14[1] = fVar26;
                fVar26 = fVar19 * fVar22 * param_2 - fVar26 * fVar23;
                fVar19 = fVar19 + fVar24;
                param_2 = param_2 + fVar21;
                fVar25 = fVar19 * fVar22 * param_2 - fVar26 * fVar23;
                pfVar14[2] = fVar26;
                pfVar14[3] = fVar25;
                pfVar14 = pfVar14 + 4;
              } while (pfVar14 < pfVar3);
            }
            param_5 = (float *)((long)param_5 +
                               ((-2 - (long)param_5) - uVar16 & 0xfffffffffffffffc) + 4);
          }
          if (1.0 <= fVar19) {
            fVar19 = fVar19 + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 5.60519e-45:
      if (param_6 != 0) {
        uVar12 = ~(ulong)param_5 + uVar12 * -4;
        do {
          uVar15 = (uint)(1.0 / fVar24 - (1.0 / fVar24) * fVar19);
          uVar2 = param_6;
          if ((int)uVar15 <= (int)param_6) {
            uVar2 = uVar15;
          }
          lVar17 = (long)(int)uVar2;
          if ((int)uVar15 < 0) {
            lVar17 = -1;
          }
          pfVar3 = param_5 + lVar17;
          if (pfVar1 <= param_5 + lVar17) {
            pfVar3 = pfVar1;
          }
          if (param_5 < pfVar3) {
            uVar18 = ~(ulong)param_5 + lVar17 * -4;
            uVar16 = uVar18;
            if (uVar18 <= uVar12) {
              uVar16 = uVar12;
            }
            if (uVar18 <= uVar12) {
              uVar18 = uVar12;
            }
            uVar18 = (-2 - (long)param_5) - uVar18;
            pfVar14 = param_5;
            if (((uint)uVar18 >> 2 & 1) == 0) {
              fVar19 = fVar19 + fVar24;
              param_2 = param_2 + fVar21;
              fVar25 = (fVar22 - fVar22 * fVar19) * param_2 - fVar25 * fVar23;
              *param_5 = fVar25;
              pfVar14 = param_5 + 1;
            }
            if (3 < uVar18) {
              do {
                fVar26 = (fVar22 - fVar22 * (fVar19 + fVar24)) * (param_2 + fVar21) -
                         fVar25 * fVar23;
                fVar19 = fVar19 + fVar24 + fVar24;
                param_2 = param_2 + fVar21 + fVar21;
                fVar25 = (fVar22 - fVar22 * fVar19) * param_2 - fVar26 * fVar23;
                pfVar13 = pfVar14 + 2;
                *pfVar14 = fVar26;
                pfVar14[1] = fVar25;
                pfVar14 = pfVar13;
              } while (pfVar13 < pfVar3);
            }
            param_5 = (float *)((long)param_5 +
                               ((-2 - (long)param_5) - uVar16 & 0xfffffffffffffffc) + 4);
          }
          if (1.0 <= fVar19) {
            fVar19 = fVar19 + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 7.00649e-45:
      if (param_6 != 0) {
        uVar12 = ~(ulong)param_5 + uVar12 * -4;
        fVar26 = fVar22 * DAT_01d4bda0;
        do {
          while( true ) {
            uVar15 = (uint)(1.0 / fVar24 - (1.0 / fVar24) * fVar19);
            uVar2 = param_6;
            if ((int)uVar15 <= (int)param_6) {
              uVar2 = uVar15;
            }
            lVar17 = (long)(int)uVar2;
            if ((int)uVar15 < 0) {
              lVar17 = -1;
            }
            pfVar3 = param_5 + lVar17;
            if (pfVar1 <= param_5 + lVar17) {
              pfVar3 = pfVar1;
            }
            if (pfVar3 <= param_5) break;
            uVar16 = ~(ulong)param_5 + lVar17 * -4;
            if (uVar16 <= uVar12) {
              uVar16 = uVar12;
            }
            fVar27 = fVar26 * (float)(uint)((ulong)lVar11 >> 0x21);
            uVar18 = (-2 - (long)param_5) - uVar16;
            uVar2 = ((uint)(uVar18 >> 2) & 0x3fffffff) + 1;
            pfVar14 = param_5;
            if ((uVar2 & 3) != 0) {
              lVar17 = -((ulong)uVar2 & 3);
              pfVar13 = param_5;
              do {
                param_2 = param_2 + fVar21;
                fVar25 = fVar27 * param_2 - fVar25 * fVar23;
                fVar19 = fVar19 + fVar24;
                lVar17 = lVar17 + 1;
                pfVar14 = pfVar13 + 1;
                *pfVar13 = fVar25;
                pfVar13 = pfVar14;
              } while (lVar17 != 0);
            }
            if (0xb < uVar18) {
              do {
                fVar25 = fVar27 * (param_2 + fVar21) - fVar25 * fVar23;
                param_2 = param_2 + fVar21 + fVar21;
                fVar28 = fVar27 * param_2 - fVar25 * fVar23;
                param_2 = param_2 + fVar21;
                *pfVar14 = fVar25;
                pfVar14[1] = fVar28;
                fVar28 = fVar27 * param_2 - fVar28 * fVar23;
                param_2 = param_2 + fVar21;
                fVar19 = fVar19 + fVar24 + fVar24 + fVar24 + fVar24;
                fVar25 = fVar27 * param_2 - fVar28 * fVar23;
                pfVar14[2] = fVar28;
                pfVar14[3] = fVar25;
                pfVar14 = pfVar14 + 4;
              } while (pfVar14 < pfVar3);
            }
            param_5 = (float *)((long)param_5 +
                               ((-2 - (long)param_5) - uVar16 & 0xfffffffffffffffc) + 4);
            if (1.0 <= fVar19) goto LAB_00476784;
LAB_004767e4:
            if (pfVar1 <= param_5) goto LAB_004767ec;
          }
          if (fVar19 < 1.0) goto LAB_004767e4;
LAB_00476784:
          fVar19 = fVar19 + -1.0;
          lVar11 = lVar11 * 0x5851f42d4c957f2d + 1;
        } while (param_5 < pfVar1);
      }
    }
  }
LAB_004767ec:
  if (fVar24 != 0.0) {
    *param_4 = fVar25;
    param_4[1] = fVar22;
    param_4[2] = fVar23;
    param_4[3] = fVar19;
    param_4[4] = fVar24;
    param_4[5] = fVar20;
    *(long *)(param_4 + 6) = lVar11;
    if (fVar20 != 7.00649e-45) {
      if (fVar20 == 0.0) {
        fVar20 = DAT_01d4bdf4;
      }
      else {
        fVar20 = 1.0;
      }
      fVar20 = fmodf(fVar19,fVar20);
      param_4[3] = fVar20;
    }
  }
  return;
}


