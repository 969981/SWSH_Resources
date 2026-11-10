/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd4980; name: FUN_00dd4980
 */


long * FUN_00dd4980(long *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x25;
  long lVar8;
  
  uVar7 = *param_2;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar2 = uVar6 - 1;
    if ((uVar2 & uVar6) == 0) {
      unaff_x25 = uVar2 & uVar7;
      plVar5 = *(long **)(*param_1 + unaff_x25 * 8);
    }
    else {
      unaff_x25 = uVar7;
      if (uVar6 <= uVar7) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar7 / uVar6;
        }
        unaff_x25 = uVar7 - uVar4 * uVar6;
      }
      plVar5 = *(long **)(*param_1 + unaff_x25 * 8);
    }
    if (plVar5 != (long *)0x0) {
      if ((uVar2 & uVar6) == 0) {
        do {
          plVar5 = (long *)*plVar5;
          if ((plVar5 == (long *)0x0) || (plVar5[1] != uVar7 && (plVar5[1] & uVar2) != unaff_x25))
          goto LAB_00dd4a44;
        } while (plVar5[2] != uVar7);
      }
      else {
        do {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_00dd4a44;
          uVar2 = plVar5[1];
          if (uVar2 != uVar7) {
            if (uVar6 <= uVar2) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar2 / uVar6;
              }
              uVar2 = uVar2 - uVar4 * uVar6;
            }
            if (uVar2 != unaff_x25) goto LAB_00dd4a44;
          }
        } while (plVar5[2] != uVar7);
      }
      goto LAB_00dd4c2c;
    }
  }
LAB_00dd4a44:
  plVar5 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x38,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0xb8))();
  }
  lVar8 = param_1[6];
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = lVar8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  plVar5[2] = *param_2;
  plVar5[3] = param_2[1];
  plVar5[4] = param_2[2];
  uVar2 = param_2[3];
  plVar5[5] = uVar2;
  if (uVar2 != 0) {
    (**(code **)(*(long *)(uVar2 + 0x48) + 0x10))();
  }
  *(undefined4 *)(plVar5 + 6) = 0;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  *plVar5 = 0;
  plVar5[1] = uVar7;
  if ((uVar6 == 0) || (*(float *)(param_1 + 10) * (float)uVar6 < (float)(param_1[9] + 1))) {
    if (uVar6 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar6 - 1 & uVar6) != 0);
    }
    uVar4 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    uVar2 = uVar2 | uVar6 << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    FUN_00799370(param_1,uVar4);
    uVar6 = param_1[1];
    if ((uVar6 - 1 & uVar6) == 0) {
      unaff_x25 = uVar6 - 1 & uVar7;
      plVar3 = *(long **)(*param_1 + unaff_x25 * 8);
      goto joined_r0x00dd4b9c;
    }
    if (uVar7 < uVar6) {
      plVar3 = *(long **)(*param_1 + uVar7 * 8);
      unaff_x25 = uVar7;
      goto joined_r0x00dd4b9c;
    }
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = uVar7 / uVar6;
    }
    unaff_x25 = uVar7 - uVar2 * uVar6;
    plVar3 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar3 == (long *)0x0) goto LAB_00dd4bb4;
LAB_00dd4b1c:
    *plVar5 = *plVar3;
LAB_00dd4c1c:
    *plVar3 = (long)plVar5;
  }
  else {
    plVar3 = *(long **)(*param_1 + unaff_x25 * 8);
joined_r0x00dd4b9c:
    if (plVar3 != (long *)0x0) goto LAB_00dd4b1c;
LAB_00dd4bb4:
    plVar3 = param_1 + 5;
    *plVar5 = *plVar3;
    *plVar3 = (long)plVar5;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar3;
    if (*plVar5 != 0) {
      uVar7 = *(ulong *)(*plVar5 + 8);
      if ((uVar6 - 1 & uVar6) == 0) {
        uVar7 = uVar7 & uVar6 - 1;
      }
      else if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar6 != 0) {
          uVar2 = uVar7 / uVar6;
        }
        uVar7 = uVar7 - uVar2 * uVar6;
      }
      plVar3 = (long *)(*param_1 + uVar7 * 8);
      goto LAB_00dd4c1c;
    }
  }
  param_1[9] = param_1[9] + 1;
LAB_00dd4c2c:
  return plVar5 + 6;
}


