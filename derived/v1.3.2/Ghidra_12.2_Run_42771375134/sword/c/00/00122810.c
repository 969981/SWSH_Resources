/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00122810; name: FUN_00122810
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00122810(undefined8 param_1,long *param_2,ulong param_3)

{
  undefined4 *puVar1;
  long lVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  
  lVar8 = param_2[2];
  lVar2 = param_2[3];
  puVar1 = (undefined4 *)*param_2;
  puVar6 = (undefined4 *)param_2[1];
  if ((puVar1 == (undefined4 *)0x0) || (*(char *)(*(long *)(puVar1 + 8) + 0x22) != '\0')) {
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    if (*(char *)(*(long *)(puVar6 + 8) + 0x22) != '\0') {
      return 0;
    }
    if (puVar1 != (undefined4 *)0x0) goto LAB_00122870;
  }
  else {
LAB_00122870:
    if (*(float *)(*(long *)(puVar1 + 10) + 0x7c) != 0.0) goto LAB_00122894;
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
  }
  if (*(float *)(*(long *)(puVar6 + 10) + 0x7c) == 0.0) {
    return 0;
  }
LAB_00122894:
  fVar19 = *(float *)((long)param_2 + 0x2c);
  if (1.0 <= fVar19) {
    return 0;
  }
  if ((*(byte *)(param_2[9] + 0x51) >> 3 & 1) == 0) {
    fVar20 = *(float *)(param_2 + 4);
    fVar21 = *(float *)((long)param_2 + 0x24);
    fVar23 = *(float *)(param_2 + 8);
    fVar22 = *(float *)(param_2 + 5);
    uVar5 = nn::cstd::IsNan(fVar20);
    if ((((((uVar5 & 1) == 0) && (uVar5 = nn::cstd::IsInf(fVar20), (uVar5 & 1) == 0)) &&
         (uVar5 = nn::cstd::IsNan(fVar21), (uVar5 & 1) == 0)) &&
        ((uVar5 = nn::cstd::IsInf(fVar21), (uVar5 & 1) == 0 &&
         (uVar5 = nn::cstd::IsNan(fVar22), (uVar5 & 1) == 0)))) &&
       (uVar5 = nn::cstd::IsInf(fVar22), (uVar5 & 1) == 0)) {
      fVar9 = sqrtf(fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22);
      fVar9 = fabsf(fVar9 + -1.0);
      if (fVar9 < DAT_01d4bac8) {
        fVar9 = 0.0;
        fVar24 = *(float *)(param_2 + 0xd);
        fVar25 = *(float *)((long)param_2 + 0x6c);
        fVar12 = 0.0;
        fVar14 = 0.0;
        fVar16 = 0.0;
        fVar17 = 0.0;
        if (puVar1 != (undefined4 *)0x0) {
          lVar7 = *(long *)(puVar1 + 10);
          fVar17 = (float)NEON_ucvtf((uint)*(byte *)(param_2[9] + 0x54));
          fVar13 = *(float *)(lVar8 + 0x3c) - *(float *)(lVar7 + 0x14);
          fVar12 = *(float *)(lVar8 + 0x38) - *(float *)(lVar7 + 0x10);
          fVar15 = *(float *)(lVar8 + 0x40) - *(float *)(lVar7 + 0x18);
          fVar14 = *(float *)(lVar7 + 0x44) +
                   (fVar12 * *(float *)(lVar7 + 0x58) - fVar15 * *(float *)(lVar7 + 0x50));
          fVar16 = (fVar13 * *(float *)(lVar7 + 0x50) - fVar12 * *(float *)(lVar7 + 0x54)) +
                   *(float *)(lVar7 + 0x48);
          fVar12 = *(float *)(lVar7 + 0x40) +
                   (*(float *)(lVar7 + 0x54) * fVar15 - fVar13 * *(float *)(lVar7 + 0x58));
          fVar17 = *(float *)(lVar7 + 0x7c) * fVar17;
        }
        fVar15 = 0.0;
        fVar11 = 0.0;
        fVar13 = 0.0;
        if (puVar6 != (undefined4 *)0x0) {
          lVar8 = *(long *)(puVar6 + 10);
          fVar11 = *(float *)(lVar2 + 0x38) - *(float *)(lVar8 + 0x10);
          fVar18 = *(float *)(lVar2 + 0x3c) - *(float *)(lVar8 + 0x14);
          fVar13 = (float)NEON_ucvtf((uint)*(byte *)(param_2[9] + 0x55));
          fVar9 = *(float *)(lVar2 + 0x40) - *(float *)(lVar8 + 0x18);
          fVar15 = *(float *)(lVar8 + 0x44) +
                   (fVar11 * *(float *)(lVar8 + 0x58) - fVar9 * *(float *)(lVar8 + 0x50));
          fVar9 = *(float *)(lVar8 + 0x40) +
                  (*(float *)(lVar8 + 0x54) * fVar9 - fVar18 * *(float *)(lVar8 + 0x58));
          fVar11 = (fVar18 * *(float *)(lVar8 + 0x50) - fVar11 * *(float *)(lVar8 + 0x54)) +
                   *(float *)(lVar8 + 0x48);
          fVar13 = *(float *)(lVar8 + 0x7c) * fVar13;
        }
        fVar18 = fVar20 * (fVar9 - fVar12) + (fVar15 - fVar14) * fVar21 + (fVar11 - fVar16) * fVar22
        ;
        fVar23 = fVar18 - fVar23 * 10.0;
        if (fVar23 < DAT_01d4c4d8) {
          fVar10 = ((*(float *)(param_2 + 0xe) + 1.0) * fVar23) / (fVar17 + fVar13);
          fVar23 = -*(float *)((long)param_2 + 0x7c);
          if (-*(float *)((long)param_2 + 0x7c) <= fVar10) {
            fVar23 = fVar10;
          }
          if (*(char *)((long)param_2 + 0x84) == '\0') {
            fVar20 = fVar23 * *(float *)((long)param_2 + 0x24);
            fVar21 = fVar23 * *(float *)(param_2 + 4);
            fVar22 = fVar23 * *(float *)(param_2 + 5);
          }
          else {
            fVar9 = (fVar9 - fVar12) - fVar20 * fVar18;
            fVar20 = (fVar15 - fVar14) - fVar18 * fVar21;
            fVar22 = (fVar11 - fVar16) - fVar18 * fVar22;
            fVar21 = sqrtf(fVar22 * fVar22 + fVar9 * fVar9 + fVar20 * fVar20);
            fVar12 = 1.0 / fVar21;
            if (0.0 < fVar21) {
              fVar22 = fVar22 * fVar12;
            }
            fVar14 = fVar21 / (fVar17 + fVar13);
            if (0.0 < fVar21) {
              fVar20 = fVar20 * fVar12;
              fVar9 = fVar9 * fVar12;
            }
            fVar21 = fabsf(fVar25 * fVar23);
            fVar12 = -(fVar24 * fVar23);
            if (fVar14 <= fVar21) {
              fVar12 = fVar14;
            }
            fVar21 = fVar23 * *(float *)(param_2 + 4) + fVar9 * fVar12;
            fVar20 = fVar23 * *(float *)((long)param_2 + 0x24) + fVar20 * fVar12;
            fVar22 = fVar22 * fVar12 + fVar23 * *(float *)(param_2 + 5);
          }
          if (fVar23 < 0.0) {
            *(float *)(param_2 + 0xf) = -fVar23;
            if (((puVar1 == (undefined4 *)0x0) || (*(char *)(*(long *)(puVar1 + 8) + 0x22) == '\0'))
               && ((puVar6 == (undefined4 *)0x0 || (*(char *)(*(long *)(puVar6 + 8) + 0x22) == '\0')
                   ))) {
              if (puVar1 != (undefined4 *)0x0) {
                lVar8 = *(long *)(puVar1 + 10);
                uVar3 = *(ushort *)(lVar8 + 0x9e);
                *(float *)(lVar8 + 0x40) = fVar17 * fVar21 + *(float *)(lVar8 + 0x40);
                *(float *)(lVar8 + 0x44) = fVar17 * fVar20 + *(float *)(lVar8 + 0x44);
                *(float *)(lVar8 + 0x48) = fVar17 * fVar22 + *(float *)(lVar8 + 0x48);
                if (uVar3 != 0) {
                  if ((uVar3 & 1) != 0) {
                    *(undefined4 *)(lVar8 + 0x40) = 0;
                  }
                  if ((uVar3 >> 1 & 1) != 0) {
                    *(undefined4 *)(lVar8 + 0x44) = 0;
                  }
                  if ((uVar3 >> 2 & 1) != 0) {
                    *(undefined4 *)(lVar8 + 0x48) = 0;
                  }
                }
              }
              if (puVar6 != (undefined4 *)0x0) {
                lVar8 = *(long *)(puVar6 + 10);
                uVar3 = *(ushort *)(lVar8 + 0x9e);
                *(float *)(lVar8 + 0x40) = *(float *)(lVar8 + 0x40) - fVar13 * fVar21;
                *(float *)(lVar8 + 0x44) = *(float *)(lVar8 + 0x44) - fVar13 * fVar20;
                *(float *)(lVar8 + 0x48) = *(float *)(lVar8 + 0x48) - fVar13 * fVar22;
                if (uVar3 != 0) {
                  if ((uVar3 & 1) != 0) {
                    *(undefined4 *)(lVar8 + 0x40) = 0;
                  }
                  if ((uVar3 >> 1 & 1) != 0) {
                    *(undefined4 *)(lVar8 + 0x44) = 0;
                  }
                  if ((uVar3 >> 2 & 1) != 0) {
                    *(undefined4 *)(lVar8 + 0x48) = 0;
                  }
                }
              }
            }
            else {
              *(undefined4 *)(param_2 + 6) = 0;
            }
          }
        }
        if ((puVar1 != (undefined4 *)0x0) && (*(char *)(*(long *)(puVar1 + 8) + 0x22) == '\0')) {
          lVar8 = *(long *)(puVar1 + 10);
          if (*(float *)(lVar8 + 0x7c) != 0.0) {
            fVar20 = 1.0 - fVar19;
            fVar21 = *(float *)(lVar8 + 0x10);
            fVar22 = *(float *)(lVar8 + 0x14);
            puVar1[6] = fVar20 * (float)puVar1[6] + fVar19 * *(float *)(lVar8 + 0x18);
            puVar1[4] = fVar20 * (float)puVar1[4] + fVar19 * fVar21;
            puVar1[5] = fVar20 * (float)puVar1[5] + fVar19 * fVar22;
            FUN_00401910(&local_90,fVar19,puVar1);
            *puVar1 = local_90;
            puVar1[1] = local_8c;
            puVar1[2] = local_88;
            puVar1[3] = local_84;
          }
          if ((param_3 & 1) == 0) {
            bVar4 = false;
          }
          else {
            bVar4 = *(float *)(param_2 + 6) == 0.0;
          }
          FUN_00123210(fVar19,param_1,puVar1,bVar4);
          *(int *)(*(long *)(puVar1 + 8) + 0x38) = *(int *)(*(long *)(puVar1 + 8) + 0x38) + 1;
        }
        if ((puVar6 != (undefined4 *)0x0) && (*(char *)(*(long *)(puVar6 + 8) + 0x22) == '\0')) {
          lVar8 = *(long *)(puVar6 + 10);
          if (*(float *)(lVar8 + 0x7c) != 0.0) {
            fVar20 = 1.0 - fVar19;
            fVar21 = *(float *)(lVar8 + 0x10);
            fVar22 = *(float *)(lVar8 + 0x14);
            puVar6[6] = fVar20 * (float)puVar6[6] + fVar19 * *(float *)(lVar8 + 0x18);
            puVar6[4] = fVar20 * (float)puVar6[4] + fVar19 * fVar21;
            puVar6[5] = fVar20 * (float)puVar6[5] + fVar19 * fVar22;
            FUN_00401910(&local_90,fVar19,puVar6);
            *puVar6 = local_90;
            puVar6[1] = local_8c;
            puVar6[2] = local_88;
            puVar6[3] = local_84;
          }
          if ((param_3 & 1) == 0) {
            bVar4 = false;
          }
          else {
            bVar4 = *(float *)(param_2 + 6) == 0.0;
          }
          FUN_00123210(fVar19,param_1,puVar6,bVar4);
          *(int *)(*(long *)(puVar6 + 8) + 0x38) = *(int *)(*(long *)(puVar6 + 8) + 0x38) + 1;
        }
        fVar19 = *(float *)(param_2 + 6);
        if (0.0 < fVar19) {
          if ((puVar1 != (undefined4 *)0x0) && (*(char *)(*(long *)(puVar1 + 8) + 0x22) == '\0')) {
            lVar8 = *(long *)(puVar1 + 10);
            if (*(float *)(lVar8 + 0x7c) != 0.0) {
              fVar20 = 1.0 - fVar19;
              fVar21 = *(float *)(lVar8 + 0x10);
              fVar22 = *(float *)(lVar8 + 0x14);
              puVar1[6] = fVar20 * (float)puVar1[6] + fVar19 * *(float *)(lVar8 + 0x18);
              puVar1[4] = fVar20 * (float)puVar1[4] + fVar19 * fVar21;
              puVar1[5] = fVar20 * (float)puVar1[5] + fVar19 * fVar22;
              FUN_00401910(&local_90,puVar1);
              *puVar1 = local_90;
              puVar1[1] = local_8c;
              puVar1[2] = local_88;
              puVar1[3] = local_84;
            }
            if ((param_3 & 1) != 0) {
              FUN_00123210((int)param_2[6],param_1,puVar1,1);
            }
          }
          if ((puVar6 != (undefined4 *)0x0) && (*(char *)(*(long *)(puVar6 + 8) + 0x22) == '\0')) {
            lVar8 = *(long *)(puVar6 + 10);
            if (*(float *)(lVar8 + 0x7c) != 0.0) {
              fVar19 = *(float *)(param_2 + 6);
              fVar20 = 1.0 - fVar19;
              fVar22 = *(float *)(lVar8 + 0x18);
              fVar21 = *(float *)(lVar8 + 0x14);
              puVar6[4] = fVar20 * (float)puVar6[4] + fVar19 * *(float *)(lVar8 + 0x10);
              puVar6[5] = fVar20 * (float)puVar6[5] + fVar19 * fVar21;
              puVar6[6] = fVar20 * (float)puVar6[6] + fVar19 * fVar22;
              FUN_00401910(&local_90,puVar6);
              *puVar6 = local_90;
              puVar6[1] = local_8c;
              puVar6[2] = local_88;
              puVar6[3] = local_84;
            }
            if ((param_3 & 1) != 0) {
              FUN_00123210((int)param_2[6],param_1,puVar6,1);
            }
          }
        }
        if (puVar1 != (undefined4 *)0x0) {
          *(undefined2 *)(*(long *)(puVar1 + 8) + 0x22) = 0x101;
        }
        if (puVar6 == (undefined4 *)0x0) {
          return 1;
        }
        *(undefined2 *)(*(long *)(puVar6 + 8) + 0x22) = 0x101;
        return 1;
      }
    }
    if ((puVar1 != (undefined4 *)0x0) && (*(char *)(*(long *)(puVar1 + 8) + 0x22) == '\0')) {
      puVar6 = *(undefined4 **)(puVar1 + 10);
      fVar20 = (float)puVar6[0x1f];
      if (fVar20 != 0.0) {
        fVar20 = 1.0 - fVar19;
        fVar21 = (float)puVar6[4];
        fVar22 = (float)puVar6[5];
        puVar1[6] = fVar20 * (float)puVar1[6] + fVar19 * (float)puVar6[6];
        puVar1[4] = fVar20 * (float)puVar1[4] + fVar19 * fVar21;
        puVar1[5] = fVar20 * (float)puVar1[5] + fVar19 * fVar22;
        FUN_00401910(&local_90,fVar19,puVar1);
        *puVar1 = local_90;
        puVar1[1] = local_8c;
        puVar1[2] = local_88;
        puVar6 = *(undefined4 **)(puVar1 + 10);
        puVar1[3] = local_84;
        fVar20 = (float)puVar6[0x1f];
      }
      if (fVar20 == 0.0) {
        lVar8 = *(long *)(puVar1 + 8);
      }
      else {
        puVar6[4] = puVar1[4];
        puVar6[5] = puVar1[5];
        puVar6[6] = puVar1[6];
        *puVar6 = *puVar1;
        puVar6[1] = puVar1[1];
        puVar6[2] = puVar1[2];
        puVar6[3] = puVar1[3];
        lVar8 = *(long *)(puVar1 + 8);
        fVar19 = (1.0 - fVar19) * *(float *)(lVar8 + 0x24);
        if (fVar19 <= DAT_01d4c4d4) {
          fVar19 = DAT_01d4c4d4;
        }
        *(float *)(lVar8 + 0x24) = fVar19;
      }
      *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + 1;
    }
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      lVar8 = *(long *)(puVar1 + 10);
      if (*(float *)(lVar8 + 0x7c) != 0.0) {
        fVar20 = 1.0 - fVar19;
        fVar21 = *(float *)(lVar8 + 0x10);
        fVar22 = *(float *)(lVar8 + 0x14);
        puVar1[6] = fVar20 * (float)puVar1[6] + fVar19 * *(float *)(lVar8 + 0x18);
        puVar1[4] = fVar20 * (float)puVar1[4] + fVar19 * fVar21;
        puVar1[5] = fVar20 * (float)puVar1[5] + fVar19 * fVar22;
        FUN_00401910(&local_90,fVar19,puVar1);
        *puVar1 = local_90;
        puVar1[1] = local_8c;
        puVar1[2] = local_88;
        puVar1[3] = local_84;
        fVar19 = *(float *)((long)param_2 + 0x2c);
      }
      FUN_00123210(fVar19,param_1,puVar1,0);
    }
    if (puVar6 != (undefined4 *)0x0) {
      lVar8 = *(long *)(puVar6 + 10);
      fVar19 = *(float *)((long)param_2 + 0x2c);
      if (*(float *)(lVar8 + 0x7c) != 0.0) {
        fVar20 = 1.0 - fVar19;
        fVar21 = *(float *)(lVar8 + 0x10);
        fVar22 = *(float *)(lVar8 + 0x14);
        puVar6[6] = fVar20 * (float)puVar6[6] + fVar19 * *(float *)(lVar8 + 0x18);
        puVar6[4] = fVar20 * (float)puVar6[4] + fVar19 * fVar21;
        puVar6[5] = fVar20 * (float)puVar6[5] + fVar19 * fVar22;
        FUN_00401910(&local_90,puVar6);
        *puVar6 = local_90;
        puVar6[1] = local_8c;
        puVar6[2] = local_88;
        puVar6[3] = local_84;
        fVar19 = *(float *)((long)param_2 + 0x2c);
      }
      FUN_00123210(fVar19,param_1,puVar6,0);
    }
  }
  return 1;
}


