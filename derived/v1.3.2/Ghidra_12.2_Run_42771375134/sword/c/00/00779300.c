/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00779300; name: FUN_00779300
 */


ulong FUN_00779300(long *param_1,uint param_2,long param_3,ulong param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x22;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar11 = (ulong)param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x22));
  uVar12 = param_1[1];
  uVar1 = (int)param_1[0x21] + 1;
  uVar8 = (ulong)uVar1;
  *(uint *)(param_1 + 0x21) = uVar1;
  if (uVar12 == 0) {
LAB_007793fc:
    plVar3 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x18,4);
    if (plVar3 == (long *)0x0) {
      (**(code **)(*(long *)param_1[6] + 0xb8))();
    }
    uVar9 = param_1[6];
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00779ac0;
    *(ulong *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar9;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *(uint *)(plVar3 + 2) = uVar1;
    *(uint *)((long)plVar3 + 0x14) = param_2;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    *plVar3 = 0;
    plVar3[1] = uVar8;
    if ((uVar12 == 0) || (*(float *)(param_1 + 10) * (float)uVar12 < (float)(param_1[9] + 1))) {
      if (uVar12 < 3) {
        uVar6 = 1;
      }
      else {
        uVar6 = (ulong)((uVar12 - 1 & uVar12) != 0);
      }
      uVar7 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
      uVar6 = uVar6 | uVar12 << 1;
      if (uVar7 <= uVar6) {
        uVar7 = uVar6;
      }
      FUN_00779ad0(param_1,uVar7);
      uVar12 = param_1[1];
      if ((uVar12 - 1 & uVar12) == 0) {
        unaff_x22 = uVar12 - 1 & uVar8;
        plVar4 = *(long **)(*param_1 + unaff_x22 * 8);
        goto joined_r0x00779520;
      }
      if (uVar8 < uVar12) {
        plVar4 = *(long **)(*param_1 + uVar8 * 8);
        unaff_x22 = uVar8;
        goto joined_r0x00779520;
      }
      uVar6 = 0;
      if (uVar12 != 0) {
        uVar6 = uVar8 / uVar12;
      }
      unaff_x22 = uVar8 - uVar6 * uVar12;
      plVar4 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar4 == (long *)0x0) goto LAB_00779538;
LAB_007794a0:
      *plVar3 = *plVar4;
LAB_007795a0:
      *plVar4 = (long)plVar3;
    }
    else {
      plVar4 = *(long **)(*param_1 + unaff_x22 * 8);
joined_r0x00779520:
      if (plVar4 != (long *)0x0) goto LAB_007794a0;
LAB_00779538:
      plVar4 = param_1 + 5;
      *plVar3 = *plVar4;
      *plVar4 = (long)plVar3;
      *(long **)(*param_1 + unaff_x22 * 8) = plVar4;
      if (*plVar3 != 0) {
        uVar6 = *(ulong *)(*plVar3 + 8);
        if ((uVar12 - 1 & uVar12) == 0) {
          uVar6 = uVar6 & uVar12 - 1;
        }
        else if (uVar12 <= uVar6) {
          uVar7 = 0;
          if (uVar12 != 0) {
            uVar7 = uVar6 / uVar12;
          }
          uVar6 = uVar6 - uVar7 * uVar12;
        }
        plVar4 = (long *)(*param_1 + uVar6 * 8);
        goto LAB_007795a0;
      }
    }
    param_1[9] = param_1[9] + 1;
  }
  else {
    uVar6 = uVar12 - 1;
    if ((uVar6 & uVar12) == 0) {
      unaff_x22 = uVar6 & uVar8;
      plVar3 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar3 != (long *)0x0) goto LAB_00779388;
      goto LAB_007793fc;
    }
    unaff_x22 = uVar8;
    if (uVar12 <= uVar8) {
      uVar9 = 0;
      if (uVar12 != 0) {
        uVar9 = uVar8 / uVar12;
      }
      unaff_x22 = uVar8 - uVar9 * uVar12;
    }
    plVar3 = *(long **)(*param_1 + unaff_x22 * 8);
    if (plVar3 == (long *)0x0) goto LAB_007793fc;
LAB_00779388:
    uVar9 = param_4;
    if ((uVar6 & uVar12) == 0) {
      do {
        plVar3 = (long *)*plVar3;
        if ((plVar3 == (long *)0x0) || (plVar3[1] != uVar8 && (plVar3[1] & uVar6) != unaff_x22))
        goto LAB_007793fc;
      } while (*(uint *)(plVar3 + 2) != uVar1);
    }
    else {
      do {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) goto LAB_007793fc;
        uVar6 = plVar3[1];
        if (uVar6 != uVar8) {
          if (uVar12 <= uVar6) {
            uVar7 = 0;
            if (uVar12 != 0) {
              uVar7 = uVar6 / uVar12;
            }
            uVar6 = uVar6 - uVar7 * uVar12;
          }
          if (uVar6 != unaff_x22) goto LAB_007793fc;
        }
      } while (*(uint *)(plVar3 + 2) != uVar1);
    }
  }
  uVar12 = param_1[0xc];
  plVar3 = param_1 + 0xb;
  if (uVar12 == 0) {
LAB_0077967c:
    plVar4 = (long *)(**(code **)(*(long *)param_1[0x11] + 0x10))((long *)param_1[0x11],0x18,4);
    if (plVar4 == (long *)0x0) {
      (**(code **)(*(long *)param_1[0x11] + 0xb8))();
    }
    lVar10 = param_1[0x11];
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00779ac0;
    *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *(uint *)(plVar4 + 2) = param_2;
    *(uint *)((long)plVar4 + 0x14) = uVar1;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    *plVar4 = 0;
    plVar4[1] = uVar11;
    if ((uVar12 == 0) || (*(float *)(param_1 + 0x15) * (float)uVar12 < (float)(param_1[0x14] + 1)))
    {
      if (uVar12 < 3) {
        uVar6 = 1;
      }
      else {
        uVar6 = (ulong)((uVar12 - 1 & uVar12) != 0);
      }
      uVar9 = (ulong)((float)(param_1[0x14] + 1) / *(float *)(param_1 + 0x15));
      uVar6 = uVar6 | uVar12 << 1;
      if (uVar9 <= uVar6) {
        uVar9 = uVar6;
      }
      FUN_00779ad0(plVar3,uVar9);
      uVar12 = param_1[0xc];
      if ((uVar12 - 1 & uVar12) == 0) {
        uVar9 = uVar12 - 1 & uVar11;
        plVar5 = *(long **)(*plVar3 + uVar9 * 8);
        goto joined_r0x0077979c;
      }
      if (uVar11 < uVar12) {
        plVar5 = *(long **)(*plVar3 + uVar11 * 8);
        uVar9 = uVar11;
        goto joined_r0x0077979c;
      }
      uVar6 = 0;
      if (uVar12 != 0) {
        uVar6 = uVar11 / uVar12;
      }
      uVar9 = uVar11 - uVar6 * uVar12;
      plVar5 = *(long **)(*plVar3 + uVar9 * 8);
      if (plVar5 == (long *)0x0) goto LAB_007797b4;
LAB_00779730:
      *plVar4 = *plVar5;
LAB_0077981c:
      *plVar5 = (long)plVar4;
    }
    else {
      plVar5 = *(long **)(*plVar3 + uVar9 * 8);
joined_r0x0077979c:
      if (plVar5 != (long *)0x0) goto LAB_00779730;
LAB_007797b4:
      plVar5 = param_1 + 0x10;
      *plVar4 = *plVar5;
      *plVar5 = (long)plVar4;
      *(long **)(param_1[0xb] + uVar9 * 8) = plVar5;
      if (*plVar4 != 0) {
        uVar6 = *(ulong *)(*plVar4 + 8);
        if ((uVar12 - 1 & uVar12) == 0) {
          uVar6 = uVar6 & uVar12 - 1;
        }
        else if (uVar12 <= uVar6) {
          uVar9 = 0;
          if (uVar12 != 0) {
            uVar9 = uVar6 / uVar12;
          }
          uVar6 = uVar6 - uVar9 * uVar12;
        }
        plVar5 = (long *)(*plVar3 + uVar6 * 8);
        goto LAB_0077981c;
      }
    }
    param_1[0x14] = param_1[0x14] + 1;
  }
  else {
    uVar6 = uVar12 - 1;
    if ((uVar6 & uVar12) == 0) {
      uVar9 = uVar6 & uVar11;
      plVar4 = *(long **)(*plVar3 + uVar9 * 8);
      if (plVar4 != (long *)0x0) goto LAB_007795ec;
      goto LAB_0077967c;
    }
    uVar9 = uVar11;
    if (uVar12 <= uVar11) {
      uVar9 = 0;
      if (uVar12 != 0) {
        uVar9 = uVar11 / uVar12;
      }
      uVar9 = uVar11 - uVar9 * uVar12;
    }
    plVar4 = *(long **)(*plVar3 + uVar9 * 8);
    if (plVar4 == (long *)0x0) goto LAB_0077967c;
LAB_007795ec:
    if ((uVar6 & uVar12) == 0) {
      do {
        plVar4 = (long *)*plVar4;
        if ((plVar4 == (long *)0x0) || (plVar4[1] != uVar11 && (plVar4[1] & uVar6) != uVar9))
        goto LAB_0077967c;
      } while (*(uint *)(plVar4 + 2) != param_2);
    }
    else {
      do {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_0077967c;
        uVar6 = plVar4[1];
        if (uVar6 != uVar11) {
          if (uVar12 <= uVar6) {
            uVar7 = 0;
            if (uVar12 != 0) {
              uVar7 = uVar6 / uVar12;
            }
            uVar6 = uVar6 - uVar7 * uVar12;
          }
          if (uVar6 != uVar9) goto LAB_0077967c;
        }
      } while (*(uint *)(plVar4 + 2) != param_2);
    }
  }
  uVar12 = param_1[0x17];
  plVar3 = param_1 + 0x16;
  if (uVar12 != 0) {
    uVar6 = uVar12 - 1;
    if ((uVar6 & uVar12) == 0) {
      uVar11 = uVar6 & uVar8;
      plVar4 = *(long **)(*plVar3 + uVar11 * 8);
    }
    else {
      uVar11 = uVar8;
      if (uVar12 <= uVar8) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar8 / uVar12;
        }
        uVar11 = uVar8 - uVar11 * uVar12;
      }
      plVar4 = *(long **)(*plVar3 + uVar11 * 8);
    }
    if (plVar4 != (long *)0x0) {
      if ((uVar6 & uVar12) == 0) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) || (plVar4[1] != uVar8 && (plVar4[1] & uVar6) != uVar11))
          goto LAB_007798d0;
        } while (*(uint *)(plVar4 + 2) != uVar1);
      }
      else {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_007798d0;
          uVar6 = plVar4[1];
          if (uVar6 != uVar8) {
            if (uVar12 <= uVar6) {
              uVar9 = 0;
              if (uVar12 != 0) {
                uVar9 = uVar6 / uVar12;
              }
              uVar6 = uVar6 - uVar9 * uVar12;
            }
            if (uVar6 != uVar11) goto LAB_007798d0;
          }
        } while (*(uint *)(plVar4 + 2) != uVar1);
      }
      goto LAB_00779a94;
    }
  }
LAB_007798d0:
  plVar4 = (long *)(**(code **)(*(long *)param_1[0x1c] + 0x10))((long *)param_1[0x1c],0x30,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c] + 0xb8))();
  }
  lVar10 = param_1[0x1c];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_00779ac0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar4[3] = param_3;
  *(uint *)(plVar4 + 2) = uVar1;
  plVar4[4] = param_4;
  plVar4[5] = param_5;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  *plVar4 = 0;
  plVar4[1] = uVar8;
  if ((uVar12 == 0) || (*(float *)(param_1 + 0x20) * (float)uVar12 < (float)(param_1[0x1f] + 1))) {
    if (uVar12 < 3) {
      uVar11 = 1;
    }
    else {
      uVar11 = (ulong)((uVar12 - 1 & uVar12) != 0);
    }
    uVar6 = (ulong)((float)(param_1[0x1f] + 1) / *(float *)(param_1 + 0x20));
    uVar11 = uVar11 | uVar12 << 1;
    if (uVar6 <= uVar11) {
      uVar6 = uVar11;
    }
    FUN_00779ea0(plVar3,uVar6);
    uVar12 = param_1[0x17];
    if ((uVar12 - 1 & uVar12) == 0) {
      uVar11 = uVar12 - 1 & uVar8;
      plVar5 = *(long **)(*plVar3 + uVar11 * 8);
      goto joined_r0x00779a04;
    }
    if (uVar8 < uVar12) {
      plVar5 = *(long **)(*plVar3 + uVar8 * 8);
      uVar11 = uVar8;
      goto joined_r0x00779a04;
    }
    uVar11 = 0;
    if (uVar12 != 0) {
      uVar11 = uVar8 / uVar12;
    }
    uVar11 = uVar8 - uVar11 * uVar12;
    plVar5 = *(long **)(*plVar3 + uVar11 * 8);
    if (plVar5 == (long *)0x0) goto LAB_00779a1c;
LAB_00779984:
    *plVar4 = *plVar5;
LAB_00779a84:
    *plVar5 = (long)plVar4;
  }
  else {
    plVar5 = *(long **)(*plVar3 + uVar11 * 8);
joined_r0x00779a04:
    if (plVar5 != (long *)0x0) goto LAB_00779984;
LAB_00779a1c:
    plVar5 = param_1 + 0x1b;
    *plVar4 = *plVar5;
    *plVar5 = (long)plVar4;
    *(long **)(param_1[0x16] + uVar11 * 8) = plVar5;
    if (*plVar4 != 0) {
      uVar11 = *(ulong *)(*plVar4 + 8);
      if ((uVar12 - 1 & uVar12) == 0) {
        uVar11 = uVar11 & uVar12 - 1;
      }
      else if (uVar12 <= uVar11) {
        uVar6 = 0;
        if (uVar12 != 0) {
          uVar6 = uVar11 / uVar12;
        }
        uVar11 = uVar11 - uVar6 * uVar12;
      }
      plVar5 = (long *)(*plVar3 + uVar11 * 8);
      goto LAB_00779a84;
    }
  }
  param_1[0x1f] = param_1[0x1f] + 1;
LAB_00779a94:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x22));
  return uVar8;
}


