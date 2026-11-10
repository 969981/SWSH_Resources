/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d7c70; name: FUN_012d7c70
 */


void FUN_012d7c70(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x26;
  undefined8 uVar9;
  float fVar10;
  
  uVar8 = *param_2;
  uVar7 = *(ulong *)(param_1 + 0x180);
  plVar1 = (long *)(param_1 + 0x178);
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar5 & uVar7) == 0) {
      unaff_x26 = uVar5 & uVar8;
      plVar3 = *(long **)(*plVar1 + unaff_x26 * 8);
    }
    else {
      unaff_x26 = uVar8;
      if (uVar7 <= uVar8) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar8 / uVar7;
        }
        unaff_x26 = uVar8 - uVar6 * uVar7;
      }
      plVar3 = *(long **)(*plVar1 + unaff_x26 * 8);
    }
    if (plVar3 != (long *)0x0) {
      if ((uVar5 & uVar7) == 0) {
        while ((plVar3 = (long *)*plVar3, plVar3 != (long *)0x0 &&
               (plVar3[1] == uVar8 || (plVar3[1] & uVar5) == unaff_x26))) {
          if (plVar3[2] == uVar8) {
            return;
          }
        }
      }
      else {
        while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if (uVar5 != uVar8) {
            if (uVar7 <= uVar5) {
              uVar6 = 0;
              if (uVar7 != 0) {
                uVar6 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar6 * uVar7;
            }
            if (uVar5 != unaff_x26) break;
          }
          if (plVar3[2] == uVar8) {
            return;
          }
        }
      }
    }
  }
  plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))
                             (*(long **)(param_1 + 0x1a8),0x30,8);
  if (plVar3 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a8) + 0xb8))();
  }
  uVar9 = *(undefined8 *)(param_1 + 0x1a8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar9;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3[2] = *param_2;
  plVar3[3] = *param_3;
  plVar3[4] = param_3[1];
  plVar3[5] = param_3[2];
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  *plVar3 = 0;
  plVar3[1] = uVar8;
  fVar10 = (float)(*(long *)(param_1 + 0x1c0) + 1);
  if ((uVar7 == 0) || (*(float *)(param_1 + 0x1c8) * (float)uVar7 < fVar10)) {
    if (uVar7 < 3) {
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)((uVar7 - 1 & uVar7) != 0);
    }
    uVar6 = (ulong)(fVar10 / *(float *)(param_1 + 0x1c8));
    uVar5 = uVar5 | uVar7 << 1;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_012dbc00(plVar1,uVar6);
    uVar7 = *(ulong *)(param_1 + 0x180);
    if ((uVar7 - 1 & uVar7) == 0) {
      unaff_x26 = uVar7 - 1 & uVar8;
      plVar4 = *(long **)(*plVar1 + unaff_x26 * 8);
      goto joined_r0x012d7e80;
    }
    if (uVar8 < uVar7) {
      plVar4 = *(long **)(*plVar1 + uVar8 * 8);
      unaff_x26 = uVar8;
      goto joined_r0x012d7e80;
    }
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = uVar8 / uVar7;
    }
    unaff_x26 = uVar8 - uVar5 * uVar7;
    plVar4 = *(long **)(*plVar1 + unaff_x26 * 8);
    if (plVar4 != (long *)0x0) goto LAB_012d7e00;
LAB_012d7e98:
    *plVar3 = *(long *)(param_1 + 0x1a0);
    *(long **)(param_1 + 0x1a0) = plVar3;
    *(long *)(*(long *)(param_1 + 0x178) + unaff_x26 * 8) = param_1 + 0x1a0;
    if (*plVar3 == 0) goto LAB_012d7f04;
    uVar8 = *(ulong *)(*plVar3 + 8);
    if ((uVar7 - 1 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar5 * uVar7;
    }
    plVar4 = (long *)(*plVar1 + uVar8 * 8);
  }
  else {
    plVar4 = *(long **)(*plVar1 + unaff_x26 * 8);
joined_r0x012d7e80:
    if (plVar4 == (long *)0x0) goto LAB_012d7e98;
LAB_012d7e00:
    *plVar3 = *plVar4;
  }
  *plVar4 = (long)plVar3;
LAB_012d7f04:
  *(long *)(param_1 + 0x1c0) = *(long *)(param_1 + 0x1c0) + 1;
  return;
}


