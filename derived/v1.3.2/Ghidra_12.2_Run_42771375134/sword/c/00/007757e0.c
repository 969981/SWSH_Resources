/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007757e0; name: FUN_007757e0
 */


void FUN_007757e0(long param_1,ulong param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x26;
  undefined8 uVar14;
  float fVar15;
  ulong local_58;
  
  local_58 = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x2d0));
  uVar13 = *(ulong *)(param_1 + 0x280);
  plVar3 = (long *)(param_1 + 0x278);
  if (uVar13 != 0) {
    uVar4 = uVar13 - 1;
    uVar5 = uVar4 & uVar13;
    if (uVar5 == 0) {
      uVar10 = uVar4 & param_2;
      lVar7 = *plVar3;
      plVar11 = *(long **)(lVar7 + uVar10 * 8);
    }
    else {
      uVar10 = param_2;
      if (uVar13 <= param_2) {
        uVar10 = 0;
        if (uVar13 != 0) {
          uVar10 = param_2 / uVar13;
        }
        uVar10 = param_2 - uVar10 * uVar13;
      }
      lVar7 = *plVar3;
      plVar11 = *(long **)(lVar7 + uVar10 * 8);
    }
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar5 == 0) {
        do {
          uVar12 = plVar11[1];
          if (uVar12 != param_2 && (uVar12 & uVar4) != uVar10) break;
          if ((uVar12 == param_2) && (plVar11[2] == param_2)) goto LAB_00775b64;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == param_2) {
            if (plVar11[2] == param_2) goto LAB_00775b64;
          }
          else {
            if (uVar13 <= uVar12) {
              uVar2 = 0;
              if (uVar13 != 0) {
                uVar2 = uVar12 / uVar13;
              }
              uVar12 = uVar12 - uVar2 * uVar13;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    if (uVar5 == 0) {
      unaff_x26 = uVar4 & param_2;
      plVar11 = *(long **)(lVar7 + unaff_x26 * 8);
    }
    else {
      unaff_x26 = param_2;
      if (uVar13 <= param_2) {
        uVar10 = 0;
        if (uVar13 != 0) {
          uVar10 = param_2 / uVar13;
        }
        unaff_x26 = param_2 - uVar10 * uVar13;
      }
      plVar11 = *(long **)(lVar7 + unaff_x26 * 8);
    }
    if (plVar11 != (long *)0x0) {
      if (uVar5 == 0) {
        do {
          plVar11 = (long *)*plVar11;
          if ((plVar11 == (long *)0x0) ||
             (plVar11[1] != param_2 && (plVar11[1] & uVar4) != unaff_x26)) goto LAB_0077597c;
        } while (plVar11[2] != param_2);
      }
      else {
        do {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0077597c;
          uVar5 = plVar11[1];
          if (uVar5 != param_2) {
            if (uVar13 <= uVar5) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar5 / uVar13;
              }
              uVar5 = uVar5 - uVar4 * uVar13;
            }
            if (uVar5 != unaff_x26) goto LAB_0077597c;
          }
        } while (plVar11[2] != param_2);
      }
      goto LAB_00775b40;
    }
  }
LAB_0077597c:
  plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0x2a8) + 0x10))
                              (*(long **)(param_1 + 0x2a8),0x40,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2a8) + 0xb8))();
  }
  uVar14 = *(undefined8 *)(param_1 + 0x2a8);
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar14;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar11[2] = local_58;
  plVar11[3] = *param_3;
  lVar1 = param_3[1];
  lVar9 = param_3[2];
  lVar8 = param_3[3];
  *(int *)(plVar11 + 7) = (int)param_3[4];
  plVar11[4] = lVar1;
  plVar11[5] = lVar9;
  plVar11[6] = lVar8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  *plVar11 = 0;
  plVar11[1] = param_2;
  fVar15 = (float)(*(long *)(param_1 + 0x2c0) + 1);
  if ((uVar13 == 0) || (*(float *)(param_1 + 0x2c8) * (float)uVar13 < fVar15)) {
    if (uVar13 < 3) {
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)((uVar13 - 1 & uVar13) != 0);
    }
    uVar4 = (ulong)(fVar15 / *(float *)(param_1 + 0x2c8));
    uVar5 = uVar5 | uVar13 << 1;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    FUN_00777190(plVar3,uVar4);
    uVar13 = *(ulong *)(param_1 + 0x280);
    if ((uVar13 - 1 & uVar13) == 0) {
      unaff_x26 = uVar13 - 1 & param_2;
      plVar6 = *(long **)(*plVar3 + unaff_x26 * 8);
      goto joined_r0x00775ab0;
    }
    if (param_2 < uVar13) {
      plVar6 = *(long **)(*plVar3 + param_2 * 8);
      unaff_x26 = param_2;
      goto joined_r0x00775ab0;
    }
    uVar5 = 0;
    if (uVar13 != 0) {
      uVar5 = param_2 / uVar13;
    }
    unaff_x26 = param_2 - uVar5 * uVar13;
    plVar6 = *(long **)(*plVar3 + unaff_x26 * 8);
    if (plVar6 == (long *)0x0) goto LAB_00775ac8;
LAB_00775a44:
    *plVar11 = *plVar6;
LAB_00775b30:
    *plVar6 = (long)plVar11;
  }
  else {
    plVar6 = *(long **)(*plVar3 + unaff_x26 * 8);
joined_r0x00775ab0:
    if (plVar6 != (long *)0x0) goto LAB_00775a44;
LAB_00775ac8:
    *plVar11 = *(long *)(param_1 + 0x2a0);
    *(long **)(param_1 + 0x2a0) = plVar11;
    *(long *)(*(long *)(param_1 + 0x278) + unaff_x26 * 8) = param_1 + 0x2a0;
    if (*plVar11 != 0) {
      uVar5 = *(ulong *)(*plVar11 + 8);
      if ((uVar13 - 1 & uVar13) == 0) {
        uVar5 = uVar5 & uVar13 - 1;
      }
      else if (uVar13 <= uVar5) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = uVar5 / uVar13;
        }
        uVar5 = uVar5 - uVar4 * uVar13;
      }
      plVar6 = (long *)(*plVar3 + uVar5 * 8);
      goto LAB_00775b30;
    }
  }
  *(long *)(param_1 + 0x2c0) = *(long *)(param_1 + 0x2c0) + 1;
LAB_00775b40:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2d0));
  return;
LAB_00775b64:
  plVar3 = (long *)FUN_00776ee0(plVar3,&local_58);
  *plVar3 = *param_3;
  lVar9 = param_3[3];
  lVar7 = param_3[1];
  lVar1 = param_3[2];
  *(int *)(plVar3 + 4) = (int)param_3[4];
  plVar3[2] = lVar1;
  plVar3[3] = lVar9;
  plVar3[1] = lVar7;
  goto LAB_00775b40;
}


