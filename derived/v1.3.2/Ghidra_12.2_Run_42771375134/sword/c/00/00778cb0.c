/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00778cb0; name: FUN_00778cb0
 */


void FUN_00778cb0(long *param_1,uint param_2)

{
  MutexType *pMVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  
  pMVar1 = (MutexType *)(param_1 + 0x22);
  nn::os::LockMutex(pMVar1);
  uVar8 = param_1[0xc];
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    uVar6 = (ulong)param_2;
    uVar7 = uVar9 & uVar8;
    if (uVar7 == 0) {
      uVar11 = uVar9 & uVar6;
      lVar10 = param_1[0xb];
      puVar13 = *(undefined8 **)(lVar10 + uVar11 * 8);
    }
    else {
      uVar11 = uVar6;
      if (uVar8 <= uVar6) {
        uVar11 = 0;
        if (uVar8 != 0) {
          uVar11 = uVar6 / uVar8;
        }
        uVar11 = uVar6 - uVar11 * uVar8;
      }
      lVar10 = param_1[0xb];
      puVar13 = *(undefined8 **)(lVar10 + uVar11 * 8);
    }
    if ((puVar13 != (undefined8 *)0x0) && (plVar5 = (long *)*puVar13, plVar5 != (long *)0x0)) {
      if (uVar7 == 0) {
        do {
          uVar14 = plVar5[1];
          if (uVar14 != uVar6 && (uVar14 & uVar9) != uVar11) break;
          if ((uVar14 == uVar6) && (*(uint *)(plVar5 + 2) == param_2)) goto LAB_00778db8;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar5[1];
          if (uVar14 == uVar6) {
            if (*(uint *)(plVar5 + 2) == param_2) goto LAB_00778db8;
          }
          else {
            if (uVar8 <= uVar14) {
              uVar17 = 0;
              if (uVar8 != 0) {
                uVar17 = uVar14 / uVar8;
              }
              uVar14 = uVar14 - uVar17 * uVar8;
            }
            if (uVar14 != uVar11) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  goto LAB_00778da0;
LAB_00778db8:
  uVar11 = param_1[1];
  if (uVar11 == 0) goto LAB_00778da0;
  uVar3 = *(uint *)((long)plVar5 + 0x14);
  uVar17 = (ulong)uVar3;
  uVar14 = uVar11 - 1;
  if ((uVar14 & uVar11) == 0) {
    uVar12 = uVar14 & uVar17;
LAB_00778df8:
    puVar13 = *(undefined8 **)(*param_1 + uVar12 * 8);
  }
  else {
    uVar12 = uVar17;
    if (uVar17 < uVar11) goto LAB_00778df8;
    uVar12 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar17 / uVar11;
    }
    uVar12 = uVar17 - uVar12 * uVar11;
    puVar13 = *(undefined8 **)(*param_1 + uVar12 * 8);
  }
  if ((puVar13 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar13, plVar18 != (long *)0x0)) {
    if ((uVar14 & uVar11) == 0) {
      do {
        uVar11 = plVar18[1];
        if (uVar11 != uVar17 && (uVar11 & uVar14) != uVar12) break;
        if ((uVar11 == uVar17) && (*(uint *)(plVar18 + 2) == uVar3)) goto LAB_00778e84;
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
    else {
      do {
        uVar14 = plVar18[1];
        if (uVar14 == uVar17) {
          if (*(uint *)(plVar18 + 2) == uVar3) goto LAB_00778e84;
        }
        else {
          if (uVar11 <= uVar14) {
            uVar4 = 0;
            if (uVar11 != 0) {
              uVar4 = uVar14 / uVar11;
            }
            uVar14 = uVar14 - uVar4 * uVar11;
          }
          if (uVar14 != uVar12) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
  goto LAB_00778da0;
LAB_00779194:
  lVar2 = plVar5[3];
  UNRECOVERED_JUMPTABLE = (code *)plVar5[4];
  lVar19 = plVar5[5];
  if (uVar7 == 0) {
    uVar9 = uVar6 & uVar17;
  }
  else {
    uVar9 = uVar17;
    if (uVar8 <= uVar17) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar17 / uVar8;
      }
      uVar9 = uVar17 - uVar9 * uVar8;
    }
  }
  plVar18 = *(long **)(lVar10 + uVar9 * 8);
  do {
    plVar16 = plVar18;
    plVar18 = (long *)*plVar16;
  } while ((long *)*plVar16 != plVar5);
  if (plVar16 != param_1 + 0x1b) {
    uVar11 = plVar16[1];
    if (uVar7 == 0) {
      uVar11 = uVar11 & uVar6;
    }
    else if (uVar8 <= uVar11) {
      uVar14 = 0;
      if (uVar8 != 0) {
        uVar14 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar14 * uVar8;
    }
    if (uVar11 == uVar9) goto LAB_0077924c;
  }
  if (*plVar5 != 0) {
    uVar11 = *(ulong *)(*plVar5 + 8);
    if (uVar7 == 0) {
      uVar11 = uVar11 & uVar6;
    }
    else if (uVar8 <= uVar11) {
      uVar14 = 0;
      if (uVar8 != 0) {
        uVar14 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar14 * uVar8;
    }
    if (uVar11 == uVar9) goto LAB_0077924c;
  }
  *(undefined8 *)(lVar10 + uVar9 * 8) = 0;
LAB_0077924c:
  lVar10 = *plVar5;
  if (lVar10 != 0) {
    uVar11 = *(ulong *)(lVar10 + 8);
    if (uVar7 == 0) {
      uVar11 = uVar11 & uVar6;
    }
    else if (uVar8 <= uVar11) {
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar7 * uVar8;
    }
    if (uVar11 != uVar9) {
      *(long **)(param_1[0x16] + uVar11 * 8) = plVar16;
      lVar10 = *plVar5;
    }
  }
  *plVar16 = lVar10;
  *plVar5 = 0;
  param_1[0x1f] = param_1[0x1f] + -1;
  (**(code **)(*(long *)param_1[0x1c] + 0x18))((long *)param_1[0x1c],plVar5,0x30,8);
  nn::os::UnlockMutex(pMVar1);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007792e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar17,lVar2,lVar19);
  return;
LAB_00778e84:
  if (uVar7 == 0) {
    uVar6 = uVar9 & uVar6;
  }
  else if (uVar8 <= uVar6) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar6 / uVar8;
    }
    uVar6 = uVar6 - uVar11 * uVar8;
  }
  plVar16 = *(long **)(lVar10 + uVar6 * 8);
  do {
    plVar15 = plVar16;
    plVar16 = (long *)*plVar15;
  } while ((long *)*plVar15 != plVar5);
  if (plVar15 == param_1 + 0x10) {
LAB_00778ef0:
    if (*plVar5 != 0) {
      uVar11 = *(ulong *)(*plVar5 + 8);
      if (uVar7 == 0) {
        uVar11 = uVar11 & uVar9;
      }
      else if (uVar8 <= uVar11) {
        uVar14 = 0;
        if (uVar8 != 0) {
          uVar14 = uVar11 / uVar8;
        }
        uVar11 = uVar11 - uVar14 * uVar8;
      }
      if (uVar11 == uVar6) goto LAB_00778f2c;
    }
    *(undefined8 *)(lVar10 + uVar6 * 8) = 0;
  }
  else {
    uVar11 = plVar15[1];
    if (uVar7 == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar14 = 0;
      if (uVar8 != 0) {
        uVar14 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar14 * uVar8;
    }
    if (uVar11 != uVar6) goto LAB_00778ef0;
  }
LAB_00778f2c:
  if (*plVar5 != 0) {
    uVar11 = *(ulong *)(*plVar5 + 8);
    if (uVar7 == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar7 * uVar8;
    }
    if (uVar11 != uVar6) {
      *(long **)(param_1[0xb] + uVar11 * 8) = plVar15;
    }
  }
  *plVar15 = *plVar5;
  *plVar5 = 0;
  param_1[0x14] = param_1[0x14] + -1;
  (**(code **)(*(long *)param_1[0x11] + 0x18))((long *)param_1[0x11],plVar5,0x18,4);
  uVar6 = param_1[1];
  uVar7 = plVar18[1];
  uVar9 = uVar6 - 1;
  uVar8 = uVar9 & uVar6;
  if (uVar8 == 0) {
    uVar7 = uVar9 & uVar7;
  }
  else if (uVar6 <= uVar7) {
    uVar11 = 0;
    if (uVar6 != 0) {
      uVar11 = uVar7 / uVar6;
    }
    uVar7 = uVar7 - uVar11 * uVar6;
  }
  plVar5 = *(long **)(*param_1 + uVar7 * 8);
  do {
    plVar16 = plVar5;
    plVar5 = (long *)*plVar16;
  } while ((long *)*plVar16 != plVar18);
  if (plVar16 == param_1 + 5) {
LAB_0077901c:
    if (*plVar18 != 0) {
      uVar11 = *(ulong *)(*plVar18 + 8);
      if (uVar8 == 0) {
        uVar11 = uVar11 & uVar9;
      }
      else if (uVar6 <= uVar11) {
        uVar14 = 0;
        if (uVar6 != 0) {
          uVar14 = uVar11 / uVar6;
        }
        uVar11 = uVar11 - uVar14 * uVar6;
      }
      if (uVar11 == uVar7) goto LAB_00779058;
    }
    *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
  }
  else {
    uVar11 = plVar16[1];
    if (uVar8 == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar6 <= uVar11) {
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = uVar11 / uVar6;
      }
      uVar11 = uVar11 - uVar14 * uVar6;
    }
    if (uVar11 != uVar7) goto LAB_0077901c;
  }
LAB_00779058:
  if (*plVar18 != 0) {
    uVar11 = *(ulong *)(*plVar18 + 8);
    if (uVar8 == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar6 <= uVar11) {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar11 / uVar6;
      }
      uVar11 = uVar11 - uVar8 * uVar6;
    }
    if (uVar11 != uVar7) {
      *(long **)(*param_1 + uVar11 * 8) = plVar16;
    }
  }
  *plVar16 = *plVar18;
  *plVar18 = 0;
  param_1[9] = param_1[9] + -1;
  (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],plVar18,0x18,4);
  uVar8 = param_1[0x17];
  if (uVar8 == 0) goto LAB_00778da0;
  uVar6 = uVar8 - 1;
  uVar7 = uVar6 & uVar8;
  if (uVar7 == 0) {
    uVar9 = uVar6 & uVar17;
LAB_00779108:
    lVar10 = param_1[0x16];
    puVar13 = *(undefined8 **)(lVar10 + uVar9 * 8);
  }
  else {
    uVar9 = uVar17;
    if (uVar17 < uVar8) goto LAB_00779108;
    uVar9 = 0;
    if (uVar8 != 0) {
      uVar9 = uVar17 / uVar8;
    }
    uVar9 = uVar17 - uVar9 * uVar8;
    lVar10 = param_1[0x16];
    puVar13 = *(undefined8 **)(lVar10 + uVar9 * 8);
  }
  if ((puVar13 != (undefined8 *)0x0) && (plVar5 = (long *)*puVar13, plVar5 != (long *)0x0)) {
    if (uVar7 == 0) {
      do {
        uVar11 = plVar5[1];
        if (uVar11 != uVar17 && (uVar11 & uVar6) != uVar9) break;
        if ((uVar11 == uVar17) && (*(uint *)(plVar5 + 2) == uVar3)) goto LAB_00779194;
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    else {
      do {
        uVar11 = plVar5[1];
        if (uVar11 == uVar17) {
          if (*(uint *)(plVar5 + 2) == uVar3) goto LAB_00779194;
        }
        else {
          if (uVar8 <= uVar11) {
            uVar14 = 0;
            if (uVar8 != 0) {
              uVar14 = uVar11 / uVar8;
            }
            uVar11 = uVar11 - uVar14 * uVar8;
          }
          if (uVar11 != uVar9) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
LAB_00778da0:
  nn::os::UnlockMutex(pMVar1);
  return;
}


