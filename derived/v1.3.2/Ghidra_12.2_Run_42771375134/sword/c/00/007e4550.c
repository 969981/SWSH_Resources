/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e4550; name: FUN_007e4550
 */


long FUN_007e4550(undefined8 *param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  string sVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  string sVar7;
  string *__s2;
  long lVar8;
  string *psVar9;
  long *plVar10;
  string *psVar11;
  ulong uVar12;
  ulong uVar13;
  string *psVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x27;
  float fVar18;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_00801560(*param_1);
  lVar5 = FUN_007fbd60(param_1[4] + 0x18,*(undefined8 *)(param_2 + 0x18));
  if (lVar5 != 0) {
    return 0;
  }
  uStack_128 = param_1[4];
  local_120 = param_1[2];
  local_f0 = 0;
  uStack_e8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_a0 = 0;
  uStack_118 = 0;
  local_d0 = &local_c8;
  local_b8 = &local_b0;
  local_110 = 0;
  uStack_108 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_130 = param_1;
  lVar5 = FUN_007ea5c0(&local_130,param_2);
  FUN_007eaa00(&local_130);
  if (lVar5 != 0) {
    return lVar5;
  }
  lVar5 = param_1[4];
  psVar14 = *(string **)(param_2 + 0x18);
  sVar3 = *psVar14;
  __s2 = *(string **)(psVar14 + 0x10);
  if (((byte)sVar3 & 1) == 0) {
    __s2 = psVar14 + 1;
  }
  sVar7 = *__s2;
  if (sVar7 == (string)0x0) {
    uVar16 = 0;
    uVar17 = *(ulong *)(lVar5 + 0x20);
  }
  else {
    uVar16 = 0;
    psVar9 = __s2;
    do {
      psVar9 = psVar9 + 1;
      uVar16 = uVar16 * 5 + (ulong)(byte)sVar7;
      sVar7 = *psVar9;
    } while (sVar7 != (string)0x0);
    uVar17 = *(ulong *)(lVar5 + 0x20);
  }
  if (uVar17 != 0) {
    uVar13 = uVar17 - 1;
    if ((uVar13 & uVar17) == 0) {
      unaff_x27 = uVar13 & uVar16;
LAB_007e4694:
      plVar10 = *(long **)(*(long *)(lVar5 + 0x18) + unaff_x27 * 8);
    }
    else {
      unaff_x27 = uVar16;
      if (uVar16 < uVar17) goto LAB_007e4694;
      uVar12 = 0;
      if (uVar17 != 0) {
        uVar12 = uVar16 / uVar17;
      }
      unaff_x27 = uVar16 - uVar12 * uVar17;
      plVar10 = *(long **)(*(long *)(lVar5 + 0x18) + unaff_x27 * 8);
    }
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      __n = (ulong)((byte)sVar3 >> 1);
      if (((byte)sVar3 & 1) != 0) {
        __n = *(size_t *)(psVar14 + 8);
      }
      if ((uVar13 & uVar17) == 0) {
        if (__n == 0) {
          do {
            if (plVar10[1] != uVar16 && (plVar10[1] & uVar13) != unaff_x27) break;
            uVar12 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
            if ((*(byte *)(plVar10 + 2) & 1) != 0) {
              uVar12 = plVar10[3];
            }
            if (uVar12 == 0) {
              return 0;
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            if (plVar10[1] != uVar16 && (plVar10[1] & uVar13) != unaff_x27) break;
            bVar2 = *(byte *)(plVar10 + 2);
            sVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              sVar1 = plVar10[3];
            }
            if (sVar1 == __n) {
              if ((bVar2 & 1) == 0) {
                psVar9 = (string *)((long)plVar10 + 0x11);
                lVar8 = -(ulong)(bVar2 >> 1);
                psVar11 = __s2;
                while (*psVar9 == *psVar11) {
                  psVar9 = psVar9 + 1;
                  psVar11 = psVar11 + 1;
                  lVar8 = lVar8 + 1;
                  if (lVar8 == 0) {
                    return 0;
                  }
                }
              }
              else {
                iVar4 = memcmp((void *)plVar10[4],__s2,__n);
                if (iVar4 == 0) {
                  return 0;
                }
              }
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
      else if (__n == 0) {
        do {
          uVar13 = plVar10[1];
          if (uVar13 != uVar16) {
            if (uVar17 <= uVar13) {
              uVar12 = 0;
              if (uVar17 != 0) {
                uVar12 = uVar13 / uVar17;
              }
              uVar13 = uVar13 - uVar12 * uVar17;
            }
            if (uVar13 != unaff_x27) break;
          }
          uVar13 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
          if ((*(byte *)(plVar10 + 2) & 1) != 0) {
            uVar13 = plVar10[3];
          }
          if (uVar13 == 0) {
            return 0;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar10[1];
          if (uVar13 != uVar16) {
            if (uVar17 <= uVar13) {
              uVar12 = 0;
              if (uVar17 != 0) {
                uVar12 = uVar13 / uVar17;
              }
              uVar13 = uVar13 - uVar12 * uVar17;
            }
            if (uVar13 != unaff_x27) break;
          }
          bVar2 = *(byte *)(plVar10 + 2);
          sVar1 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            sVar1 = plVar10[3];
          }
          if (sVar1 == __n) {
            if ((bVar2 & 1) == 0) {
              psVar9 = (string *)((long)plVar10 + 0x11);
              lVar8 = -(ulong)(bVar2 >> 1);
              psVar11 = __s2;
              while (*psVar9 == *psVar11) {
                psVar9 = psVar9 + 1;
                psVar11 = psVar11 + 1;
                lVar8 = lVar8 + 1;
                if (lVar8 == 0) {
                  return 0;
                }
              }
            }
            else {
              iVar4 = memcmp((void *)plVar10[4],__s2,__n);
              if (iVar4 == 0) {
                return 0;
              }
            }
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  plVar15 = (long *)(lVar5 + 0x18);
  plVar10 = operator_new(0x28);
  std::string::string((string *)(plVar10 + 2),psVar14);
  *plVar10 = 0;
  plVar10[1] = uVar16;
  fVar18 = (float)(*(long *)(lVar5 + 0x30) + 1);
  if ((uVar17 == 0) || (*(float *)(lVar5 + 0x38) * (float)uVar17 < fVar18)) {
    if (uVar17 < 3) {
      uVar13 = 1;
    }
    else {
      uVar13 = (ulong)((uVar17 - 1 & uVar17) != 0);
    }
    uVar12 = (ulong)(fVar18 / *(float *)(lVar5 + 0x38));
    uVar13 = uVar13 | uVar17 << 1;
    if (uVar12 <= uVar13) {
      uVar12 = uVar13;
    }
    FUN_007fbf80(plVar15,uVar12);
    uVar17 = *(ulong *)(lVar5 + 0x20);
    if ((uVar17 - 1 & uVar17) == 0) {
      uVar16 = uVar17 - 1 & uVar16;
      lVar8 = *plVar15;
      plVar6 = *(long **)(lVar8 + uVar16 * 8);
      goto joined_r0x007e4998;
    }
    if (uVar17 <= uVar16) {
      uVar13 = 0;
      if (uVar17 != 0) {
        uVar13 = uVar16 / uVar17;
      }
      uVar16 = uVar16 - uVar13 * uVar17;
      lVar8 = *plVar15;
      plVar6 = *(long **)(lVar8 + uVar16 * 8);
      goto joined_r0x007e4998;
    }
    lVar8 = *plVar15;
    plVar6 = *(long **)(lVar8 + uVar16 * 8);
    if (plVar6 != (long *)0x0) goto LAB_007e48c4;
LAB_007e4948:
    plVar6 = (long *)(lVar5 + 0x28);
    *plVar10 = *plVar6;
    *plVar6 = (long)plVar10;
    *(long **)(lVar8 + uVar16 * 8) = plVar6;
    if (*plVar10 == 0) goto LAB_007e49b0;
    uVar16 = *(ulong *)(*plVar10 + 8);
    if ((uVar17 - 1 & uVar17) == 0) {
      uVar16 = uVar16 & uVar17 - 1;
    }
    else if (uVar17 <= uVar16) {
      uVar13 = 0;
      if (uVar17 != 0) {
        uVar13 = uVar16 / uVar17;
      }
      uVar16 = uVar16 - uVar13 * uVar17;
    }
    plVar6 = (long *)(*plVar15 + uVar16 * 8);
  }
  else {
    lVar8 = *plVar15;
    plVar6 = *(long **)(lVar8 + unaff_x27 * 8);
    uVar16 = unaff_x27;
joined_r0x007e4998:
    if (plVar6 == (long *)0x0) goto LAB_007e4948;
LAB_007e48c4:
    *plVar10 = *plVar6;
  }
  *plVar6 = (long)plVar10;
LAB_007e49b0:
  *(long *)(lVar5 + 0x30) = *(long *)(lVar5 + 0x30) + 1;
  return 0;
}


