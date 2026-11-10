/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080b6d0; name: FUN_0080b6d0
 */


void FUN_0080b6d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 *param_7,long param_8)

{
  uint uVar1;
  size_t sVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  undefined1 auStack_e0 [128];
  
  if (param_6 == 0) {
    return;
  }
  do {
    if ((param_6 <= param_8) || (param_5 <= param_8)) {
      if (param_6 < param_5) {
        if (param_2 == param_3) {
          return;
        }
        uVar22 = (long)param_3 + (-8 - (long)param_2);
        uVar3 = (uVar22 >> 3) + 1;
        puVar15 = param_2;
        puVar14 = param_7;
        if ((uVar3 & 3) != 0) {
          lVar21 = -(uVar3 & 3);
          puVar13 = param_7;
          puVar9 = param_2;
          do {
            puVar15 = puVar9 + 1;
            lVar21 = lVar21 + 1;
            puVar14 = puVar13 + 1;
            *puVar13 = *puVar9;
            puVar13 = puVar14;
            puVar9 = puVar15;
          } while (lVar21 != 0);
        }
        if (0x17 < uVar22) {
          do {
            *puVar14 = *puVar15;
            puVar14[1] = puVar15[1];
            puVar14[2] = puVar15[2];
            puVar13 = puVar15 + 3;
            puVar15 = puVar15 + 4;
            puVar14[3] = *puVar13;
            puVar14 = puVar14 + 4;
          } while (puVar15 != param_3);
        }
        if ((uVar3 & 0x1fffffffffffffff) != 0) {
          puVar15 = param_7 + uVar3;
          do {
            while( true ) {
              if (param_2 == param_1) {
                uVar3 = (long)puVar15 + (-8 - (long)param_7);
                uVar1 = ((uint)(uVar3 >> 3) & 0x1fffffff) + 1;
                if ((uVar1 & 3) != 0) {
                  lVar21 = -((ulong)uVar1 & 3);
                  do {
                    puVar15 = puVar15 + -1;
                    lVar21 = lVar21 + 1;
                    param_3 = param_3 + -1;
                    *param_3 = *puVar15;
                  } while (lVar21 != 0);
                }
                if (uVar3 < 0x18) {
                  return;
                }
                param_3 = param_3 + -2;
                do {
                  param_3[1] = puVar15[-1];
                  *param_3 = puVar15[-2];
                  param_3[-1] = puVar15[-3];
                  puVar15 = puVar15 + -4;
                  param_3[-2] = *puVar15;
                  param_3 = param_3 + -4;
                } while (param_7 != puVar15);
                return;
              }
              puVar13 = param_2 + -1;
              puVar14 = puVar15 + -1;
              uVar3 = FUN_0080b0f0(param_4,*puVar14,*puVar13);
              if ((uVar3 & 1) == 0) break;
              param_3 = param_3 + -1;
              *param_3 = *puVar13;
              param_2 = puVar13;
              if (puVar15 == param_7) {
                return;
              }
            }
            param_3 = param_3 + -1;
            *param_3 = *puVar14;
            puVar15 = puVar14;
          } while (puVar14 != param_7);
        }
      }
      else {
        if (param_1 == param_2) {
          return;
        }
        uVar22 = (long)param_2 + (-8 - (long)param_1);
        uVar3 = (uVar22 >> 3) + 1;
        puVar15 = param_1;
        puVar14 = param_7;
        if ((uVar3 & 3) != 0) {
          lVar21 = -(uVar3 & 3);
          puVar13 = param_7;
          puVar9 = param_1;
          do {
            puVar15 = puVar9 + 1;
            lVar21 = lVar21 + 1;
            puVar14 = puVar13 + 1;
            *puVar13 = *puVar9;
            puVar13 = puVar14;
            puVar9 = puVar15;
          } while (lVar21 != 0);
        }
        if (0x17 < uVar22) {
          do {
            *puVar14 = *puVar15;
            puVar14[1] = puVar15[1];
            puVar14[2] = puVar15[2];
            puVar13 = puVar15 + 3;
            puVar15 = puVar15 + 4;
            puVar14[3] = *puVar13;
            puVar14 = puVar14 + 4;
          } while (puVar15 != param_2);
        }
        if ((uVar3 & 0x1fffffffffffffff) != 0) {
          puVar15 = param_7 + uVar3;
          do {
            while( true ) {
              if (param_2 == param_3) {
                if ((long)puVar15 - (long)param_7 == 0) {
                  return;
                }
                memmove(param_1,param_7,(long)puVar15 - (long)param_7);
                return;
              }
              uVar3 = FUN_0080b0f0(auStack_e0 + 0x88,*param_2,*param_7);
              if ((uVar3 & 1) == 0) break;
              *param_1 = *param_2;
              param_1 = param_1 + 1;
              param_2 = param_2 + 1;
              if (param_7 == puVar15) {
                return;
              }
            }
            puVar14 = param_7 + 1;
            *param_1 = *param_7;
            param_7 = puVar14;
            param_1 = param_1 + 1;
          } while (puVar14 != puVar15);
        }
      }
      return;
    }
    if (param_5 == 0) {
      return;
    }
    lVar21 = -param_5;
    while (uVar3 = FUN_0080b0f0(param_4,*param_2,*param_1), (uVar3 & 1) == 0) {
      param_1 = param_1 + 1;
      lVar21 = lVar21 + 1;
      if (lVar21 == 0) {
        return;
      }
    }
    lVar6 = -lVar21;
    if (lVar6 < param_6) {
      lVar10 = param_6;
      if (param_6 < 0) {
        lVar10 = param_6 + 1;
      }
      lVar10 = lVar10 >> 1;
      puVar14 = param_2 + lVar10;
      puVar15 = param_1;
      if ((long)param_2 - (long)param_1 != 0) {
        uVar3 = (long)param_2 - (long)param_1 >> 3;
        do {
          uVar22 = uVar3;
          if ((long)uVar3 < 0) {
            uVar22 = uVar3 + 1;
          }
          uVar22 = (long)uVar22 >> 1;
          uVar4 = FUN_0080b0f0(param_4,*puVar14,puVar15[uVar22]);
          uVar5 = uVar3 + ~uVar22;
          uVar3 = uVar22;
          if ((uVar4 & 1) == 0) {
            puVar15 = puVar15 + uVar22 + 1;
            uVar3 = uVar5;
          }
        } while (uVar3 != 0);
      }
      lVar6 = (long)puVar15 - (long)param_1 >> 3;
    }
    else {
      if (lVar21 == -1) {
        uVar19 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar19;
        return;
      }
      if (lVar6 < 0) {
        lVar6 = lVar6 + 1;
      }
      lVar6 = lVar6 >> 1;
      puVar15 = param_1 + lVar6;
      if ((long)param_3 - (long)param_2 == 0) {
        puVar14 = param_2;
      }
      else {
        uVar3 = (long)param_3 - (long)param_2 >> 3;
        puVar13 = param_2;
        do {
          uVar22 = uVar3;
          if ((long)uVar3 < 0) {
            uVar22 = uVar3 + 1;
          }
          uVar22 = (long)uVar22 >> 1;
          uVar5 = FUN_0080b0f0(param_4,puVar13[uVar22],*puVar15);
          puVar14 = puVar13 + uVar22 + 1;
          uVar3 = uVar3 + ~uVar22;
          if ((uVar5 & 1) == 0) {
            puVar14 = puVar13;
            uVar3 = uVar22;
          }
          puVar13 = puVar14;
        } while (uVar3 != 0);
      }
      lVar10 = (long)puVar14 - (long)param_2 >> 3;
    }
    param_5 = -lVar21 - lVar6;
    if (puVar15 == param_2) {
      param_2 = puVar14;
    }
    else if (param_2 == puVar14) {
      param_2 = puVar15;
    }
    else if (puVar15 + 1 == param_2) {
      uVar19 = *puVar15;
      sVar2 = (long)puVar14 - (long)param_2;
      if (sVar2 != 0) {
        memmove(puVar15,param_2,sVar2);
      }
      puVar15[(long)sVar2 >> 3] = uVar19;
      param_2 = puVar15 + ((long)sVar2 >> 3);
    }
    else if (param_2 + 1 == puVar14) {
      uVar19 = puVar14[-1];
      sVar2 = (long)(puVar14 + -1) - (long)puVar15;
      if (sVar2 == 0) {
        *puVar15 = uVar19;
        param_2 = puVar14;
      }
      else {
        memmove((undefined8 *)((long)puVar14 - sVar2),puVar15,sVar2);
        *puVar15 = uVar19;
        param_2 = (undefined8 *)((long)puVar14 - sVar2);
      }
    }
    else {
      lVar7 = (long)param_2 - (long)puVar15 >> 3;
      lVar11 = (long)puVar14 - (long)param_2 >> 3;
      if (lVar7 == lVar11) {
        uVar3 = ((long)param_2 - (long)puVar15) - 8;
        uVar1 = ((uint)(uVar3 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) == 0) {
          puVar9 = param_2;
          puVar13 = puVar15;
        }
        else {
          lVar7 = -((ulong)uVar1 & 3);
          puVar8 = param_2;
          puVar12 = puVar15;
          do {
            uVar19 = *puVar12;
            lVar7 = lVar7 + 1;
            puVar13 = puVar12 + 1;
            *puVar12 = *puVar8;
            puVar9 = puVar8 + 1;
            *puVar8 = uVar19;
            puVar8 = puVar9;
            puVar12 = puVar13;
          } while (lVar7 != 0);
        }
        if (0x17 < uVar3) {
          do {
            uVar19 = *puVar13;
            *puVar13 = *puVar9;
            *puVar9 = uVar19;
            uVar19 = puVar13[1];
            puVar13[1] = puVar9[1];
            puVar9[1] = uVar19;
            uVar19 = puVar13[2];
            puVar13[2] = puVar9[2];
            puVar9[2] = uVar19;
            uVar19 = puVar13[3];
            puVar13[3] = puVar9[3];
            puVar13 = puVar13 + 4;
            puVar9[3] = uVar19;
            puVar9 = puVar9 + 4;
          } while (puVar13 != param_2);
        }
      }
      else {
        lVar18 = lVar7;
        lVar17 = lVar11;
        do {
          lVar16 = lVar17;
          lVar17 = 0;
          if (lVar16 != 0) {
            lVar17 = lVar18 / lVar16;
          }
          lVar17 = lVar18 - lVar17 * lVar16;
          lVar18 = lVar16;
        } while (lVar17 != 0);
        if (lVar16 != 0) {
          puVar13 = puVar15 + lVar16;
          lVar18 = lVar16 * 8 + -8;
          if (((uint)lVar18 >> 3 & 1) == 0) {
            puVar13 = puVar13 + -1;
            uVar19 = *puVar13;
            puVar9 = puVar13 + lVar7;
            puVar8 = puVar13;
            do {
              puVar12 = puVar9;
              *puVar8 = *puVar12;
              lVar17 = (long)puVar14 - (long)puVar12 >> 3;
              puVar9 = puVar12 + lVar7;
              if (lVar17 <= lVar7) {
                puVar9 = puVar15 + (lVar7 - lVar17);
              }
              puVar8 = puVar12;
            } while (puVar9 != puVar13);
            *puVar12 = uVar19;
          }
          if (lVar18 != 0) {
            do {
              puVar12 = puVar13 + -1;
              uVar19 = *puVar12;
              puVar9 = puVar12 + lVar7;
              puVar8 = puVar12;
              do {
                puVar20 = puVar9;
                *puVar8 = *puVar20;
                lVar18 = (long)puVar14 - (long)puVar20 >> 3;
                puVar9 = puVar20 + lVar7;
                if (lVar18 <= lVar7) {
                  puVar9 = puVar15 + (lVar7 - lVar18);
                }
                puVar8 = puVar20;
              } while (puVar9 != puVar12);
              *puVar20 = uVar19;
              puVar13 = puVar13 + -2;
              uVar19 = *puVar13;
              puVar9 = puVar13 + lVar7;
              puVar8 = puVar13;
              do {
                puVar12 = puVar9;
                *puVar8 = *puVar12;
                lVar18 = (long)puVar14 - (long)puVar12 >> 3;
                puVar9 = puVar12 + lVar7;
                if (lVar18 <= lVar7) {
                  puVar9 = puVar15 + (lVar7 - lVar18);
                }
                puVar8 = puVar12;
              } while (puVar9 != puVar13);
              *puVar12 = uVar19;
            } while (puVar13 != puVar15);
          }
        }
        param_2 = puVar15 + lVar11;
      }
    }
    if (lVar6 + lVar10 < (param_6 + (-lVar6 - lVar10)) - lVar21) {
      FUN_0080b6d0(param_1,puVar15,param_2,param_4,lVar6,lVar10,param_7,param_8);
      param_6 = param_6 - lVar10;
      param_1 = param_2;
      param_2 = puVar14;
    }
    else {
      FUN_0080b6d0(param_2,puVar14,param_3,param_4,param_5,param_6 - lVar10,param_7,param_8);
      param_5 = lVar6;
      param_6 = lVar10;
      param_3 = param_2;
      param_2 = puVar15;
    }
  } while (param_6 != 0);
  return;
}


