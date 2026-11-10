/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e08f0; name: FUN_007e08f0
 */


void FUN_007e08f0(long param_1)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  void *pvVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  lVar6 = *(long *)(param_1 + 0x160);
  uVar15 = (ulong)*(int *)(lVar6 + -0xc);
  lVar10 = *(long *)(param_1 + 0x170);
  lVar16 = *(long *)(param_1 + 0x178);
  if (uVar15 < (ulong)(lVar16 - lVar10 >> 3)) {
LAB_007e0950:
    pbVar14 = *(byte **)(lVar10 + uVar15 * 8);
    bVar5 = *pbVar14;
    if (bVar5 == 0) {
      uVar22 = 0;
      uVar23 = *(ulong *)(param_1 + 0xf8);
    }
    else {
      uVar22 = 0;
      pbVar9 = pbVar14;
      do {
        pbVar9 = pbVar9 + 1;
        uVar22 = uVar22 * 5 + (ulong)bVar5;
        bVar5 = *pbVar9;
      } while (bVar5 != 0);
      uVar23 = *(ulong *)(param_1 + 0xf8);
    }
    if (uVar23 != 0) {
      uVar24 = uVar23 - 1;
      uVar11 = uVar24 & uVar23;
      if (uVar11 == 0) {
        uVar21 = uVar24 & uVar22;
        lVar12 = *(long *)(param_1 + 0xf0);
        puVar7 = *(undefined8 **)(lVar12 + uVar21 * 8);
      }
      else {
        uVar21 = uVar22;
        if (uVar23 <= uVar22) {
          uVar21 = 0;
          if (uVar23 != 0) {
            uVar21 = uVar22 / uVar23;
          }
          uVar21 = uVar22 - uVar21 * uVar23;
        }
        lVar12 = *(long *)(param_1 + 0xf0);
        puVar7 = *(undefined8 **)(lVar12 + uVar21 * 8);
      }
      if ((puVar7 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar7, plVar13 != (long *)0x0)) {
        if (uVar11 == 0) {
          do {
            uVar8 = plVar13[1];
            if (uVar8 != uVar22 && (uVar8 & uVar24) != uVar21) break;
            if ((uVar8 == uVar22) &&
               (iVar2 = strcmp((char *)plVar13[2],(char *)pbVar14), iVar2 == 0)) goto LAB_007e0a5c;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar8 = plVar13[1];
            if (uVar8 == uVar22) {
              iVar2 = strcmp((char *)plVar13[2],(char *)pbVar14);
              if (iVar2 == 0) goto LAB_007e0a5c;
            }
            else {
              if (uVar23 <= uVar8) {
                uVar1 = 0;
                if (uVar23 != 0) {
                  uVar1 = uVar8 / uVar23;
                }
                uVar8 = uVar8 - uVar1 * uVar23;
              }
              if (uVar8 != uVar21) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    goto LAB_007e0b5c;
  }
LAB_007e0b70:
  uVar15 = (ulong)*(int *)(lVar6 + -8);
  lVar10 = *(long *)(param_1 + 0x188);
  if (uVar15 < (ulong)(*(long *)(param_1 + 400) - lVar10 >> 3)) {
    plVar13 = (long *)(param_1 + 0x118);
    do {
      plVar3 = (long *)FUN_007fa8d0(plVar13,lVar10 + uVar15 * 8);
      if (plVar3 != (long *)0x0) {
        uVar11 = *(ulong *)(param_1 + 0x120);
        uVar23 = plVar3[1];
        uVar24 = uVar11 - 1;
        uVar22 = uVar24 & uVar11;
        if (uVar22 == 0) {
          uVar23 = uVar24 & uVar23;
        }
        else if (uVar11 <= uVar23) {
          uVar21 = 0;
          if (uVar11 != 0) {
            uVar21 = uVar23 / uVar11;
          }
          uVar23 = uVar23 - uVar21 * uVar11;
        }
        plVar4 = *(long **)(*plVar13 + uVar23 * 8);
        do {
          plVar18 = plVar4;
          plVar4 = (long *)*plVar18;
        } while ((long *)*plVar18 != plVar3);
        if (plVar18 == (long *)(param_1 + 0x128)) {
LAB_007e0c24:
          if (*plVar3 != 0) {
            uVar21 = *(ulong *)(*plVar3 + 8);
            if (uVar22 == 0) {
              uVar21 = uVar21 & uVar24;
            }
            else if (uVar11 <= uVar21) {
              uVar8 = 0;
              if (uVar11 != 0) {
                uVar8 = uVar21 / uVar11;
              }
              uVar21 = uVar21 - uVar8 * uVar11;
            }
            if (uVar21 == uVar23) goto LAB_007e0c70;
          }
          *(undefined8 *)(*plVar13 + uVar23 * 8) = 0;
        }
        else {
          uVar21 = plVar18[1];
          if (uVar22 == 0) {
            uVar21 = uVar21 & uVar24;
          }
          else if (uVar11 <= uVar21) {
            uVar8 = 0;
            if (uVar11 != 0) {
              uVar8 = uVar21 / uVar11;
            }
            uVar21 = uVar21 - uVar8 * uVar11;
          }
          if (uVar21 != uVar23) goto LAB_007e0c24;
        }
LAB_007e0c70:
        if (*plVar3 != 0) {
          uVar21 = *(ulong *)(*plVar3 + 8);
          if (uVar22 == 0) {
            uVar21 = uVar21 & uVar24;
          }
          else if (uVar11 <= uVar21) {
            uVar22 = 0;
            if (uVar11 != 0) {
              uVar22 = uVar21 / uVar11;
            }
            uVar21 = uVar21 - uVar22 * uVar11;
          }
          if (uVar21 != uVar23) {
            *(long **)(*plVar13 + uVar21 * 8) = plVar18;
          }
        }
        *plVar18 = *plVar3;
        *plVar3 = 0;
        *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + -1;
        operator_delete(plVar3);
      }
      lVar10 = *(long *)(param_1 + 0x188);
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulong)(*(long *)(param_1 + 400) - lVar10 >> 3));
  }
  uVar15 = (ulong)*(int *)(lVar6 + -4);
  lVar10 = *(long *)(param_1 + 0x1a0);
  if (uVar15 < (ulong)(*(long *)(param_1 + 0x1a8) - lVar10 >> 4)) {
    lVar16 = uVar15 << 4;
    do {
      FUN_007faa00(param_1 + 0x140,lVar10 + lVar16);
      lVar10 = *(long *)(param_1 + 0x1a0);
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 0x10;
    } while (uVar15 < (ulong)(*(long *)(param_1 + 0x1a8) - lVar10 >> 4));
  }
  uVar15 = (ulong)*(int *)(lVar6 + -0xc);
  uVar22 = *(long *)(param_1 + 0x178) - *(long *)(param_1 + 0x170) >> 3;
  if (uVar22 < uVar15) {
    FUN_007fafa0(param_1 + 0x170,uVar15 - uVar22);
  }
  else if (uVar22 != uVar15) {
    *(ulong *)(param_1 + 0x178) = *(long *)(param_1 + 0x170) + uVar15 * 8;
  }
  uVar15 = (ulong)*(int *)(lVar6 + -8);
  uVar22 = *(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 3;
  if (uVar22 < uVar15) {
    FUN_007fafa0(param_1 + 0x188,uVar15 - uVar22);
  }
  else if (uVar22 != uVar15) {
    *(ulong *)(param_1 + 400) = *(long *)(param_1 + 0x188) + uVar15 * 8;
  }
  uVar15 = (ulong)*(int *)(lVar6 + -4);
  uVar22 = *(long *)(param_1 + 0x1a8) - *(long *)(param_1 + 0x1a0) >> 4;
  if (uVar22 < uVar15) {
    FUN_007fb100(param_1 + 0x1a0,uVar15 - uVar22);
  }
  else if (uVar22 != uVar15) {
    *(ulong *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a0) + uVar15 * 0x10;
  }
  puVar19 = *(undefined8 **)(param_1 + 0x98);
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x90) + (long)*(int *)(lVar6 + -0x1c) * 8);
  while (puVar7 != puVar19) {
    puVar17 = puVar7 + 1;
    pbVar14 = (byte *)*puVar7;
    puVar7 = puVar17;
    if (pbVar14 != (byte *)0x0) {
      if ((*pbVar14 & 1) != 0) {
        operator_delete(*(void **)(pbVar14 + 0x10));
      }
      operator_delete(pbVar14);
    }
  }
  plVar3 = *(long **)(param_1 + 0xb0);
  plVar13 = (long *)(*(long *)(param_1 + 0xa8) + (long)*(int *)(lVar6 + -0x18) * 8);
  while (plVar13 != plVar3) {
    plVar18 = plVar13 + 1;
    plVar4 = (long *)*plVar13;
    plVar13 = plVar18;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  puVar19 = *(undefined8 **)(param_1 + 200);
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0xc0) + (long)*(int *)(lVar6 + -0x14) * 8);
  while (puVar7 != puVar19) {
    puVar17 = puVar7 + 1;
    pvVar20 = (void *)*puVar7;
    puVar7 = puVar17;
    if (pvVar20 != (void *)0x0) {
      FUN_007e0590(pvVar20);
      operator_delete(pvVar20);
    }
  }
  uVar15 = (ulong)*(int *)(lVar6 + -0x10);
  lVar10 = *(long *)(param_1 + 0xd8);
  if (uVar15 < (ulong)(*(long *)(param_1 + 0xe0) - lVar10 >> 3)) {
    do {
      operator_delete(*(void **)(lVar10 + uVar15 * 8));
      lVar10 = *(long *)(param_1 + 0xd8);
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulong)(*(long *)(param_1 + 0xe0) - lVar10 >> 3));
  }
  uVar15 = (ulong)*(int *)(lVar6 + -0x1c);
  uVar22 = *(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 3;
  if (uVar22 < uVar15) {
    FUN_007fb2d0((long *)(param_1 + 0x90),uVar15 - uVar22);
  }
  else if (uVar22 != uVar15) {
    *(ulong *)(param_1 + 0x98) = *(long *)(param_1 + 0x90) + uVar15 * 8;
  }
  uVar15 = (ulong)*(int *)(lVar6 + -0x18);
  uVar22 = *(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8) >> 3;
  if (uVar22 < uVar15) {
    FUN_007fb430((long *)(param_1 + 0xa8),uVar15 - uVar22);
  }
  else if (uVar22 != uVar15) {
    *(ulong *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8) + uVar15 * 8;
  }
  uVar15 = (ulong)*(int *)(lVar6 + -0x14);
  uVar22 = *(long *)(param_1 + 200) - *(long *)(param_1 + 0xc0) >> 3;
  if (uVar22 < uVar15) {
    FUN_007fb590((long *)(param_1 + 0xc0),uVar15 - uVar22);
  }
  else if (uVar22 != uVar15) {
    *(ulong *)(param_1 + 200) = *(long *)(param_1 + 0xc0) + uVar15 * 8;
  }
  uVar15 = (ulong)*(int *)(lVar6 + -0x10);
  uVar22 = *(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8) >> 3;
  if (uVar22 < uVar15) {
    FUN_007fb6f0((long *)(param_1 + 0xd8),uVar15 - uVar22);
  }
  else if (uVar22 != uVar15) {
    *(ulong *)(param_1 + 0xe0) = *(long *)(param_1 + 0xd8) + uVar15 * 8;
  }
  *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + -0x1c;
  return;
LAB_007e0a5c:
  if (uVar11 == 0) {
    uVar22 = uVar24 & uVar22;
  }
  else if (uVar23 <= uVar22) {
    uVar21 = 0;
    if (uVar23 != 0) {
      uVar21 = uVar22 / uVar23;
    }
    uVar22 = uVar22 - uVar21 * uVar23;
  }
  plVar3 = *(long **)(lVar12 + uVar22 * 8);
  do {
    plVar4 = plVar3;
    plVar3 = (long *)*plVar4;
  } while ((long *)*plVar4 != plVar13);
  if (plVar4 != (long *)(param_1 + 0x100)) {
    uVar21 = plVar4[1];
    if (uVar11 == 0) {
      uVar21 = uVar21 & uVar24;
    }
    else if (uVar23 <= uVar21) {
      uVar8 = 0;
      if (uVar23 != 0) {
        uVar8 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar8 * uVar23;
    }
    if (uVar21 == uVar22) goto LAB_007e0b08;
  }
  if (*plVar13 != 0) {
    uVar21 = *(ulong *)(*plVar13 + 8);
    if (uVar11 == 0) {
      uVar21 = uVar21 & uVar24;
    }
    else if (uVar23 <= uVar21) {
      uVar8 = 0;
      if (uVar23 != 0) {
        uVar8 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar8 * uVar23;
    }
    if (uVar21 == uVar22) goto LAB_007e0b08;
  }
  *(undefined8 *)(lVar12 + uVar22 * 8) = 0;
LAB_007e0b08:
  lVar10 = *plVar13;
  if (lVar10 != 0) {
    uVar21 = *(ulong *)(lVar10 + 8);
    if (uVar11 == 0) {
      uVar21 = uVar21 & uVar24;
    }
    else if (uVar23 <= uVar21) {
      uVar11 = 0;
      if (uVar23 != 0) {
        uVar11 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar11 * uVar23;
    }
    if (uVar21 != uVar22) {
      *(long **)(*(long *)(param_1 + 0xf0) + uVar21 * 8) = plVar4;
      lVar10 = *plVar13;
    }
  }
  *plVar4 = lVar10;
  *plVar13 = 0;
  *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + -1;
  operator_delete(plVar13);
  lVar10 = *(long *)(param_1 + 0x170);
  lVar16 = *(long *)(param_1 + 0x178);
LAB_007e0b5c:
  uVar15 = uVar15 + 1;
  if ((ulong)(lVar16 - lVar10 >> 3) <= uVar15) goto LAB_007e0b70;
  goto LAB_007e0950;
}


