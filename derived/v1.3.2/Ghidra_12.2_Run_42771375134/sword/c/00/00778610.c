/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00778610; name: FUN_00778610
 */


void FUN_00778610(long *param_1,long *param_2,uint param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x26;
  long lVar11;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar11 = param_2[2];
  uVar9 = param_1[1];
  uVar10 = (ulong)param_3;
  if (uVar9 != 0) {
    uVar6 = uVar9 - 1;
    if ((uVar6 & uVar9) == 0) {
      unaff_x26 = uVar6 & uVar10;
      plVar4 = *(long **)(*param_1 + unaff_x26 * 8);
    }
    else {
      unaff_x26 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x26 = uVar10 - uVar7 * uVar9;
      }
      plVar4 = *(long **)(*param_1 + unaff_x26 * 8);
    }
    if (plVar4 != (long *)0x0) {
      if ((uVar6 & uVar9) == 0) {
        while ((plVar4 = (long *)*plVar4, plVar4 != (long *)0x0 &&
               (plVar4[1] == uVar10 || (plVar4[1] & uVar6) == unaff_x26))) {
          if (*(uint *)(plVar4 + 2) == param_3) {
            return;
          }
        }
      }
      else {
        while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
          uVar6 = plVar4[1];
          if (uVar6 != uVar10) {
            if (uVar9 <= uVar6) {
              uVar7 = 0;
              if (uVar9 != 0) {
                uVar7 = uVar6 / uVar9;
              }
              uVar6 = uVar6 - uVar7 * uVar9;
            }
            if (uVar6 != unaff_x26) break;
          }
          if (*(uint *)(plVar4 + 2) == param_3) {
            return;
          }
        }
      }
    }
  }
  plVar4 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x48,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0xb8))();
  }
  lVar8 = param_1[6];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *(uint *)(plVar4 + 2) = param_3;
  plVar4[3] = lVar1;
  plVar4[4] = lVar2;
  plVar4[7] = param_4;
  plVar4[5] = lVar11;
  *(uint *)(plVar4 + 6) = param_3;
  plVar4[8] = param_5;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  *plVar4 = 0;
  plVar4[1] = uVar10;
  if ((uVar9 == 0) || (*(float *)(param_1 + 10) * (float)uVar9 < (float)(param_1[9] + 1))) {
    if (uVar9 < 3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)((uVar9 - 1 & uVar9) != 0);
    }
    uVar7 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    uVar6 = uVar6 | uVar9 << 1;
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    FUN_007788e0(param_1,uVar7);
    uVar9 = param_1[1];
    if ((uVar9 - 1 & uVar9) == 0) {
      unaff_x26 = uVar9 - 1 & uVar10;
      plVar5 = *(long **)(*param_1 + unaff_x26 * 8);
      goto joined_r0x00778828;
    }
    if (uVar10 < uVar9) {
      plVar5 = *(long **)(*param_1 + uVar10 * 8);
      unaff_x26 = uVar10;
      goto joined_r0x00778828;
    }
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = uVar10 / uVar9;
    }
    unaff_x26 = uVar10 - uVar6 * uVar9;
    plVar5 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar5 != (long *)0x0) goto LAB_007787a8;
LAB_00778840:
    plVar5 = param_1 + 5;
    *plVar4 = *plVar5;
    *plVar5 = (long)plVar4;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar5;
    if (*plVar4 == 0) goto LAB_007788ac;
    uVar10 = *(ulong *)(*plVar4 + 8);
    if ((uVar9 - 1 & uVar9) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar6 = 0;
      if (uVar9 != 0) {
        uVar6 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar6 * uVar9;
    }
    plVar5 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    plVar5 = *(long **)(*param_1 + unaff_x26 * 8);
joined_r0x00778828:
    if (plVar5 == (long *)0x0) goto LAB_00778840;
LAB_007787a8:
    *plVar4 = *plVar5;
  }
  *plVar5 = (long)plVar4;
LAB_007788ac:
  param_1[9] = param_1[9] + 1;
  return;
}


