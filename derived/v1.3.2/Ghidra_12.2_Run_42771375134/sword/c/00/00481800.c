/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00481800; name: FUN_00481800
 */


void FUN_00481800(long *param_1,undefined8 param_2,uint param_3,undefined8 param_4,uint param_5,
                 undefined8 *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  
  uVar10 = (uint)((ulong)param_4 >> 0x20);
  fVar9 = (float)param_4;
  uVar6 = (int)param_1[1] - 1;
  if ((int)uVar6 < 0) {
    return;
  }
  fVar22 = (float)param_2;
  lVar11 = *param_1;
  iVar21 = 0;
  uVar14 = uVar6;
  do {
    while( true ) {
      iVar5 = uVar14 - iVar21;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 1;
      }
      uVar2 = iVar21 + (iVar5 >> 1);
      lVar15 = *(long *)(lVar11 + (long)(int)uVar2 * 8);
      fVar23 = *(float *)(lVar15 + 0x270);
      if (fVar23 != fVar22) {
        if (fVar22 <= fVar23) {
          if (fVar23 <= fVar22) goto LAB_004818d8;
          goto LAB_00481874;
        }
        goto LAB_004818c0;
      }
      uVar4 = *(uint *)(lVar15 + 0x278);
      uVar18 = (uint)((ulong)param_2 >> 0x20);
      if (*(char *)((long)param_1 + 0x12) != '\0') break;
      if (uVar4 != param_3) {
        if (uVar4 < param_3) goto LAB_004818c0;
        if (uVar4 <= param_3) goto LAB_004818d8;
      }
      else {
        if (*(uint *)(lVar15 + 0x274) < uVar18) goto LAB_004818c0;
        if (*(uint *)(lVar15 + 0x274) <= uVar18) goto LAB_004818d8;
      }
LAB_00481874:
      iVar21 = uVar2 + 1;
      if ((int)uVar14 < iVar21) {
        return;
      }
    }
    if (uVar4 != param_3) {
      if (uVar4 <= param_3) {
        if (param_3 <= uVar4) goto LAB_004818d8;
        goto LAB_00481874;
      }
    }
    else if (*(uint *)(lVar15 + 0x274) <= uVar18) {
      if (*(uint *)(lVar15 + 0x274) < uVar18) goto LAB_00481874;
LAB_004818d8:
      if (uVar2 == 0) {
LAB_00481950:
        if (uVar6 <= uVar2) {
          return;
        }
        uVar20 = (ulong)(uVar2 + 1);
        lVar19 = *(long *)(lVar11 + uVar20 * 8);
        if (*(float *)(lVar19 + 0x270) == fVar9) {
          bVar7 = param_5 <= *(uint *)(lVar19 + 0x278);
          bVar8 = *(uint *)(lVar19 + 0x278) == param_5;
          if (*(char *)((long)param_1 + 0x12) == '\0') {
            if (bVar8) {
              if (*(uint *)(lVar19 + 0x274) <= uVar10) {
                return;
              }
            }
            else if (!bVar7 || bVar8) {
              return;
            }
          }
          else {
            if (bVar8) {
              bVar7 = uVar10 <= *(uint *)(lVar19 + 0x274);
            }
            if (bVar7) {
              return;
            }
          }
        }
        else if (*(float *)(lVar19 + 0x270) <= fVar9) {
          return;
        }
        if ((int)param_1[1] - 2U <= uVar2) goto LAB_00481bb0;
        lVar17 = *(long *)(lVar11 + (ulong)(uVar2 + 2) * 8);
        if (*(float *)(lVar17 + 0x270) == fVar9) {
          uVar14 = *(uint *)(lVar17 + 0x278);
          bVar7 = param_5 <= uVar14;
          if (*(char *)((long)param_1 + 0x12) == '\0') {
            if (uVar14 != param_5) goto LAB_00481bac;
            if (*(uint *)(lVar17 + 0x274) < uVar10) goto LAB_00481bb0;
          }
          else {
            bVar8 = false;
            if (uVar14 == param_5) {
              bVar7 = uVar10 <= *(uint *)(lVar17 + 0x274);
              bVar8 = *(uint *)(lVar17 + 0x274) == uVar10;
            }
LAB_00481a20:
            if (bVar7 && !bVar8) {
LAB_00481bb0:
              *(long *)(lVar11 + uVar20 * 8) = lVar15;
              *(long *)(lVar11 + (long)(int)uVar2 * 8) = lVar19;
              return;
            }
          }
        }
        else if (*(float *)(lVar17 + 0x270) < fVar9) goto LAB_00481bb0;
      }
      else {
        uVar20 = (ulong)(uVar2 - 1);
        lVar19 = *(long *)(lVar11 + uVar20 * 8);
        if (*(float *)(lVar19 + 0x270) != fVar9) {
          if (*(float *)(lVar19 + 0x270) < fVar9) goto LAB_00481910;
          goto LAB_00481950;
        }
        uVar14 = *(uint *)(lVar19 + 0x278);
        bVar7 = param_5 <= uVar14;
        if (*(char *)((long)param_1 + 0x12) == '\0') {
          if (uVar14 == param_5) {
            bVar7 = uVar10 <= *(uint *)(lVar19 + 0x274);
          }
          if (bVar7) goto LAB_00481950;
        }
        else {
          bVar8 = false;
          if (uVar14 == param_5) {
            bVar7 = uVar10 <= *(uint *)(lVar19 + 0x274);
            bVar8 = *(uint *)(lVar19 + 0x274) == uVar10;
          }
          if (!bVar7 || bVar8) goto LAB_00481950;
        }
LAB_00481910:
        if (uVar2 < 2) goto LAB_00481bb0;
        lVar17 = *(long *)(lVar11 + (ulong)(uVar2 - 2) * 8);
        if (*(float *)(lVar17 + 0x270) == fVar9) {
          uVar14 = *(uint *)(lVar17 + 0x278);
          bVar7 = param_5 <= uVar14;
          if (*(char *)((long)param_1 + 0x12) == '\0') {
            bVar8 = false;
            if (uVar14 == param_5) {
              if (uVar10 < *(uint *)(lVar17 + 0x274)) goto LAB_00481bb0;
              goto LAB_00481a24;
            }
            goto LAB_00481a20;
          }
          if (uVar14 == param_5) {
            bVar7 = uVar10 <= *(uint *)(lVar17 + 0x274);
          }
LAB_00481bac:
          if (!bVar7) goto LAB_00481bb0;
        }
        else if (fVar9 < *(float *)(lVar17 + 0x270)) goto LAB_00481bb0;
      }
LAB_00481a24:
      iVar21 = 0;
      uVar14 = uVar6;
      break;
    }
LAB_004818c0:
    uVar14 = uVar2 - 1;
    if ((int)uVar14 < iVar21) {
      return;
    }
  } while( true );
LAB_00481a28:
  iVar5 = uVar14 - iVar21;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 1;
  }
  iVar5 = iVar21 + (iVar5 >> 1);
  lVar19 = *(long *)(lVar11 + (long)iVar5 * 8);
  lVar15 = (long)iVar5;
  fVar22 = *(float *)(lVar19 + 0x270);
  if (fVar22 != fVar9) {
    if (fVar22 < fVar9) goto LAB_00481abc;
    if (fVar9 < fVar22) goto LAB_00481a70;
    goto LAB_00481adc;
  }
  uVar4 = *(uint *)(lVar19 + 0x278);
  if (*(char *)((long)param_1 + 0x12) == '\0') {
    if (uVar4 != param_5) {
      if (uVar4 < param_5) goto LAB_00481abc;
      if (uVar4 <= param_5) goto LAB_00481adc;
    }
    else {
      if (*(uint *)(lVar19 + 0x274) < uVar10) goto LAB_00481abc;
      if (*(uint *)(lVar19 + 0x274) <= uVar10) goto LAB_00481adc;
    }
LAB_00481a70:
    iVar21 = iVar5 + 1;
    if ((int)uVar14 < iVar21) goto LAB_00481ad8;
    goto LAB_00481a28;
  }
  if (uVar4 != param_5) {
    if (param_5 < uVar4) goto LAB_00481abc;
    if (uVar4 < param_5) goto LAB_00481a70;
    goto LAB_00481adc;
  }
  if (*(uint *)(lVar19 + 0x274) <= uVar10) {
    if (*(uint *)(lVar19 + 0x274) < uVar10) goto LAB_00481a70;
    goto LAB_00481adc;
  }
LAB_00481abc:
  uVar14 = iVar5 - 1;
  if ((int)uVar14 < iVar21) {
LAB_00481ad8:
    lVar15 = (long)iVar21;
LAB_00481adc:
    puVar12 = (undefined8 *)(lVar11 + (ulong)uVar2 * 8);
    if (lVar11 + lVar15 * 8 != 0) {
      uVar6 = (uint)lVar15 - (uint)(uVar2 < (uint)lVar15);
    }
    uVar20 = (ulong)uVar6;
    puVar1 = (undefined8 *)(lVar11 + uVar20 * 8);
    uVar16 = (ulong)uVar2;
    if (uVar6 < uVar2) {
      if (uVar16 != uVar20) {
        uVar20 = uVar16 * 8 + -8 + uVar20 * -8;
        uVar6 = ((uint)(uVar20 >> 3) & 0x1fffffff) + 1;
        if ((uVar6 & 3) != 0) {
          lVar11 = -((ulong)uVar6 & 3);
          puVar13 = puVar12;
          do {
            puVar12 = puVar13 + -1;
            *puVar13 = *puVar12;
            lVar11 = lVar11 + 1;
            puVar13 = puVar12;
          } while (lVar11 != 0);
        }
        if (0x17 < uVar20) {
          do {
            uVar3 = puVar12[-1];
            puVar12[-1] = puVar12[-2];
            *puVar12 = uVar3;
            puVar12[-2] = puVar12[-3];
            puVar13 = puVar12 + -4;
            puVar12[-3] = *puVar13;
            puVar12 = puVar13;
          } while (puVar1 != puVar13);
        }
      }
    }
    else if (uVar16 != uVar20) {
      uVar20 = uVar20 * 8 + -8 + uVar16 * -8;
      uVar6 = ((uint)(uVar20 >> 3) & 0x1fffffff) + 1;
      if ((uVar6 & 3) != 0) {
        lVar11 = -((ulong)uVar6 & 3);
        puVar13 = puVar12;
        do {
          puVar12 = puVar13 + 1;
          *puVar13 = *puVar12;
          lVar11 = lVar11 + 1;
          puVar13 = puVar12;
        } while (lVar11 != 0);
      }
      if (0x17 < uVar20) {
        do {
          *puVar12 = puVar12[1];
          puVar12[1] = puVar12[2];
          puVar12[2] = puVar12[3];
          puVar13 = puVar12 + 4;
          puVar12[3] = *puVar13;
          puVar12 = puVar13;
        } while (puVar1 != puVar13);
      }
    }
    *puVar1 = *param_6;
    return;
  }
  goto LAB_00481a28;
}


