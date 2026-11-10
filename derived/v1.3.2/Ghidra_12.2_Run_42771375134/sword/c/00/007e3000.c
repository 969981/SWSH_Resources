/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e3000; name: FUN_007e3000
 */


undefined8 FUN_007e3000(long param_1,string *param_2)

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
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x26;
  ulong uVar17;
  float fVar18;
  undefined1 auStack_148 [24];
  byte *local_130;
  byte *local_70 [2];
  
  if ((*(long *)(param_1 + 8) == 0) ||
     (lVar5 = FUN_007fbd60(*(long *)(param_1 + 0x20) + 0x40), lVar5 != 0)) {
    return 0;
  }
  FUN_008468d0(auStack_148);
  uVar6 = FUN_007e49f0(param_1,param_2);
  if (((uVar6 & 1) == 0) &&
     (uVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x18))
                        (*(long **)(param_1 + 8),param_2,auStack_148), (uVar6 & 1) != 0)) {
    local_70[0] = *(byte **)(local_130 + 0x10);
    if ((*local_130 & 1) == 0) {
      local_70[0] = local_130 + 1;
    }
    lVar5 = FUN_007f7570(*(long *)(param_1 + 0x20) + 0x118,local_70);
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) &&
       (lVar5 = FUN_007e4550(param_1,auStack_148), lVar5 != 0)) {
      uVar14 = 1;
      goto LAB_007e346c;
    }
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
    uVar16 = *(ulong *)(lVar5 + 0x48);
  }
  else {
    uVar6 = 0;
    psVar10 = __s2;
    do {
      psVar10 = psVar10 + 1;
      uVar6 = uVar6 * 5 + (ulong)(byte)sVar8;
      sVar8 = *psVar10;
    } while (sVar8 != (string)0x0);
    uVar16 = *(ulong *)(lVar5 + 0x48);
  }
  if (uVar16 != 0) {
    uVar17 = uVar16 - 1;
    if ((uVar17 & uVar16) == 0) {
      unaff_x26 = uVar17 & uVar6;
      plVar11 = *(long **)(*(long *)(lVar5 + 0x40) + unaff_x26 * 8);
    }
    else {
      unaff_x26 = uVar6;
      if (uVar16 <= uVar6) {
        uVar12 = 0;
        if (uVar16 != 0) {
          uVar12 = uVar6 / uVar16;
        }
        unaff_x26 = uVar6 - uVar12 * uVar16;
      }
      plVar11 = *(long **)(*(long *)(lVar5 + 0x40) + unaff_x26 * 8);
    }
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      __n = (ulong)((byte)sVar3 >> 1);
      if (((byte)sVar3 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
      }
      if ((uVar17 & uVar16) == 0) {
        if (__n == 0) {
          do {
            if (plVar11[1] != uVar6 && (plVar11[1] & uVar17) != unaff_x26) break;
            uVar12 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
            if ((*(byte *)(plVar11 + 2) & 1) != 0) {
              uVar12 = plVar11[3];
            }
            if (uVar12 == 0) goto LAB_007e3444;
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            if (plVar11[1] != uVar6 && (plVar11[1] & uVar17) != unaff_x26) break;
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
                  if (lVar9 == 0) goto LAB_007e3444;
                }
              }
              else {
                iVar4 = memcmp((void *)plVar11[4],__s2,__n);
                if (iVar4 == 0) goto LAB_007e3444;
              }
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
      else if (__n == 0) {
        do {
          uVar17 = plVar11[1];
          if (uVar17 != uVar6) {
            if (uVar16 <= uVar17) {
              uVar12 = 0;
              if (uVar16 != 0) {
                uVar12 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar12 * uVar16;
            }
            if (uVar17 != unaff_x26) break;
          }
          uVar17 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
          if ((*(byte *)(plVar11 + 2) & 1) != 0) {
            uVar17 = plVar11[3];
          }
          if (uVar17 == 0) goto LAB_007e3444;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar11[1];
          if (uVar17 != uVar6) {
            if (uVar16 <= uVar17) {
              uVar12 = 0;
              if (uVar16 != 0) {
                uVar12 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar12 * uVar16;
            }
            if (uVar17 != unaff_x26) break;
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
                if (lVar9 == 0) goto LAB_007e3444;
              }
            }
            else {
              iVar4 = memcmp((void *)plVar11[4],__s2,__n);
              if (iVar4 == 0) goto LAB_007e3444;
            }
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  plVar15 = (long *)(lVar5 + 0x40);
  plVar11 = operator_new(0x28);
  std::string::string((string *)(plVar11 + 2),param_2);
  *plVar11 = 0;
  plVar11[1] = uVar6;
  fVar18 = (float)(*(long *)(lVar5 + 0x58) + 1);
  if ((uVar16 == 0) || (*(float *)(lVar5 + 0x60) * (float)uVar16 < fVar18)) {
    if (uVar16 < 3) {
      uVar17 = 1;
    }
    else {
      uVar17 = (ulong)((uVar16 - 1 & uVar16) != 0);
    }
    uVar12 = (ulong)(fVar18 / *(float *)(lVar5 + 0x60));
    uVar17 = uVar17 | uVar16 << 1;
    if (uVar12 <= uVar17) {
      uVar12 = uVar17;
    }
    FUN_007fbf80(plVar15,uVar12);
    uVar16 = *(ulong *)(lVar5 + 0x48);
    if ((uVar16 - 1 & uVar16) == 0) {
      unaff_x26 = uVar16 - 1 & uVar6;
      lVar9 = *plVar15;
      plVar7 = *(long **)(lVar9 + unaff_x26 * 8);
      goto joined_r0x007e3310;
    }
    if (uVar6 < uVar16) {
      lVar9 = *plVar15;
      plVar7 = *(long **)(lVar9 + uVar6 * 8);
      unaff_x26 = uVar6;
      goto joined_r0x007e3310;
    }
    uVar17 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar6 / uVar16;
    }
    unaff_x26 = uVar6 - uVar17 * uVar16;
    lVar9 = *plVar15;
    plVar7 = *(long **)(lVar9 + unaff_x26 * 8);
    if (plVar7 != (long *)0x0) goto LAB_007e3290;
LAB_007e3328:
    plVar7 = (long *)(lVar5 + 0x50);
    *plVar11 = *plVar7;
    *plVar7 = (long)plVar11;
    *(long **)(lVar9 + unaff_x26 * 8) = plVar7;
    if (*plVar11 != 0) {
      uVar6 = *(ulong *)(*plVar11 + 8);
      if ((uVar16 - 1 & uVar16) == 0) {
        uVar6 = uVar6 & uVar16 - 1;
      }
      else if (uVar16 <= uVar6) {
        uVar17 = 0;
        if (uVar16 != 0) {
          uVar17 = uVar6 / uVar16;
        }
        uVar6 = uVar6 - uVar17 * uVar16;
      }
      plVar7 = (long *)(*plVar15 + uVar6 * 8);
      goto LAB_007e3458;
    }
  }
  else {
    lVar9 = *plVar15;
    plVar7 = *(long **)(lVar9 + unaff_x26 * 8);
joined_r0x007e3310:
    if (plVar7 == (long *)0x0) goto LAB_007e3328;
LAB_007e3290:
    *plVar11 = *plVar7;
LAB_007e3458:
    *plVar7 = (long)plVar11;
  }
  uVar14 = 0;
  *(long *)(lVar5 + 0x58) = *(long *)(lVar5 + 0x58) + 1;
LAB_007e346c:
  FUN_00846d50(auStack_148);
  return uVar14;
LAB_007e3444:
  uVar14 = 0;
  goto LAB_007e346c;
}


