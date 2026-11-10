/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e2a40; name: FUN_007e2a40
 */


undefined8 FUN_007e2a40(long param_1,string *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  string sVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  string sVar8;
  string *__s2;
  long lVar9;
  string *psVar10;
  long *plVar11;
  ulong uVar12;
  string *psVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong unaff_x27;
  float fVar18;
  undefined1 auStack_140 [224];
  
  if ((*(long *)(param_1 + 8) == 0) ||
     (lVar5 = FUN_007fbd60(*(long *)(param_1 + 0x20) + 0x18), lVar5 != 0)) {
    return 0;
  }
  FUN_008468d0(auStack_140);
  uVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x10))
                    (*(long **)(param_1 + 8),param_2,auStack_140);
  if (((uVar6 & 1) != 0) && (lVar5 = FUN_007e4550(param_1,auStack_140), lVar5 != 0)) {
    uVar16 = 1;
    goto LAB_007e2dec;
  }
  sVar3 = *param_2;
  __s2 = *(string **)(param_2 + 0x10);
  if (((byte)sVar3 & 1) == 0) {
    __s2 = param_2 + 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  sVar8 = *__s2;
  if (sVar8 == (string)0x0) {
    uVar6 = 0;
    uVar17 = *(ulong *)(lVar5 + 0x20);
  }
  else {
    uVar6 = 0;
    psVar10 = __s2;
    do {
      psVar10 = psVar10 + 1;
      uVar6 = uVar6 * 5 + (ulong)(byte)sVar8;
      sVar8 = *psVar10;
    } while (sVar8 != (string)0x0);
    uVar17 = *(ulong *)(lVar5 + 0x20);
  }
  if (uVar17 != 0) {
    uVar14 = uVar17 - 1;
    if ((uVar14 & uVar17) == 0) {
      unaff_x27 = uVar14 & uVar6;
      plVar11 = *(long **)(*(long *)(lVar5 + 0x18) + unaff_x27 * 8);
    }
    else {
      unaff_x27 = uVar6;
      if (uVar17 <= uVar6) {
        uVar12 = 0;
        if (uVar17 != 0) {
          uVar12 = uVar6 / uVar17;
        }
        unaff_x27 = uVar6 - uVar12 * uVar17;
      }
      plVar11 = *(long **)(*(long *)(lVar5 + 0x18) + unaff_x27 * 8);
    }
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      __n = (ulong)((byte)sVar3 >> 1);
      if (((byte)sVar3 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
      }
      if ((uVar14 & uVar17) == 0) {
        if (__n == 0) {
          do {
            if (plVar11[1] != uVar6 && (plVar11[1] & uVar14) != unaff_x27) break;
            uVar12 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
            if ((*(byte *)(plVar11 + 2) & 1) != 0) {
              uVar12 = plVar11[3];
            }
            if (uVar12 == 0) goto LAB_007e2ea0;
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            if (plVar11[1] != uVar6 && (plVar11[1] & uVar14) != unaff_x27) break;
            bVar2 = *(byte *)(plVar11 + 2);
            sVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              sVar1 = plVar11[3];
            }
            if (sVar1 == __n) {
              if ((bVar2 & 1) == 0) {
                psVar10 = (string *)((long)plVar11 + 0x11);
                lVar9 = -(ulong)(bVar2 >> 1);
                psVar13 = __s2;
                while (*psVar10 == *psVar13) {
                  uVar16 = 0;
                  psVar10 = psVar10 + 1;
                  psVar13 = psVar13 + 1;
                  lVar9 = lVar9 + 1;
                  if (lVar9 == 0) goto LAB_007e2dec;
                }
              }
              else {
                iVar4 = memcmp((void *)plVar11[4],__s2,__n);
                if (iVar4 == 0) goto LAB_007e2ea0;
              }
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
      else if (__n == 0) {
        do {
          uVar14 = plVar11[1];
          if (uVar14 != uVar6) {
            if (uVar17 <= uVar14) {
              uVar12 = 0;
              if (uVar17 != 0) {
                uVar12 = uVar14 / uVar17;
              }
              uVar14 = uVar14 - uVar12 * uVar17;
            }
            if (uVar14 != unaff_x27) break;
          }
          uVar14 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
          if ((*(byte *)(plVar11 + 2) & 1) != 0) {
            uVar14 = plVar11[3];
          }
          if (uVar14 == 0) goto LAB_007e2ea0;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar11[1];
          if (uVar14 != uVar6) {
            if (uVar17 <= uVar14) {
              uVar12 = 0;
              if (uVar17 != 0) {
                uVar12 = uVar14 / uVar17;
              }
              uVar14 = uVar14 - uVar12 * uVar17;
            }
            if (uVar14 != unaff_x27) break;
          }
          bVar2 = *(byte *)(plVar11 + 2);
          sVar1 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            sVar1 = plVar11[3];
          }
          if (sVar1 == __n) {
            if ((bVar2 & 1) == 0) {
              psVar10 = (string *)((long)plVar11 + 0x11);
              lVar9 = -(ulong)(bVar2 >> 1);
              psVar13 = __s2;
              while (*psVar10 == *psVar13) {
                psVar10 = psVar10 + 1;
                psVar13 = psVar13 + 1;
                lVar9 = lVar9 + 1;
                if (lVar9 == 0) goto LAB_007e2ea0;
              }
            }
            else {
              iVar4 = memcmp((void *)plVar11[4],__s2,__n);
              if (iVar4 == 0) goto LAB_007e2ea0;
            }
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  plVar15 = (long *)(lVar5 + 0x18);
  plVar11 = operator_new(0x28);
  std::string::string((string *)(plVar11 + 2),param_2);
  *plVar11 = 0;
  plVar11[1] = uVar6;
  fVar18 = (float)(*(long *)(lVar5 + 0x30) + 1);
  if ((uVar17 == 0) || (*(float *)(lVar5 + 0x38) * (float)uVar17 < fVar18)) {
    if (uVar17 < 3) {
      uVar14 = 1;
    }
    else {
      uVar14 = (ulong)((uVar17 - 1 & uVar17) != 0);
    }
    uVar12 = (ulong)(fVar18 / *(float *)(lVar5 + 0x38));
    uVar14 = uVar14 | uVar17 << 1;
    if (uVar12 <= uVar14) {
      uVar12 = uVar14;
    }
    FUN_007fbf80(plVar15,uVar12);
    uVar17 = *(ulong *)(lVar5 + 0x20);
    if ((uVar17 - 1 & uVar17) == 0) {
      unaff_x27 = uVar17 - 1 & uVar6;
      lVar9 = *plVar15;
      plVar7 = *(long **)(lVar9 + unaff_x27 * 8);
      goto joined_r0x007e2cc8;
    }
    if (uVar6 < uVar17) {
      lVar9 = *plVar15;
      plVar7 = *(long **)(lVar9 + uVar6 * 8);
      unaff_x27 = uVar6;
      goto joined_r0x007e2cc8;
    }
    uVar14 = 0;
    if (uVar17 != 0) {
      uVar14 = uVar6 / uVar17;
    }
    unaff_x27 = uVar6 - uVar14 * uVar17;
    lVar9 = *plVar15;
    plVar7 = *(long **)(lVar9 + unaff_x27 * 8);
    if (plVar7 != (long *)0x0) goto LAB_007e2c48;
LAB_007e2ce0:
    plVar7 = (long *)(lVar5 + 0x28);
    *plVar11 = *plVar7;
    *plVar7 = (long)plVar11;
    *(long **)(lVar9 + unaff_x27 * 8) = plVar7;
    if (*plVar11 != 0) {
      uVar6 = *(ulong *)(*plVar11 + 8);
      if ((uVar17 - 1 & uVar17) == 0) {
        uVar6 = uVar6 & uVar17 - 1;
      }
      else if (uVar17 <= uVar6) {
        uVar14 = 0;
        if (uVar17 != 0) {
          uVar14 = uVar6 / uVar17;
        }
        uVar6 = uVar6 - uVar14 * uVar17;
      }
      plVar7 = (long *)(*plVar15 + uVar6 * 8);
      goto LAB_007e2dd8;
    }
  }
  else {
    lVar9 = *plVar15;
    plVar7 = *(long **)(lVar9 + unaff_x27 * 8);
joined_r0x007e2cc8:
    if (plVar7 == (long *)0x0) goto LAB_007e2ce0;
LAB_007e2c48:
    *plVar11 = *plVar7;
LAB_007e2dd8:
    *plVar7 = (long)plVar11;
  }
  uVar16 = 0;
  *(long *)(lVar5 + 0x30) = *(long *)(lVar5 + 0x30) + 1;
LAB_007e2dec:
  FUN_00846d50(auStack_140);
  return uVar16;
LAB_007e2ea0:
  uVar16 = 0;
  goto LAB_007e2dec;
}


