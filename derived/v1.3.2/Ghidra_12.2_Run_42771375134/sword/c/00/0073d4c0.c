/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073d4c0; name: FUN_0073d4c0
 */


long * FUN_0073d4c0(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  long lVar9;
  
  iVar1 = *param_2;
  uVar8 = (ulong)iVar1;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar3 = uVar7 - 1;
    if ((uVar3 & uVar7) == 0) {
      unaff_x24 = uVar3 & uVar8;
      plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar5 * uVar7;
      }
      plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if (plVar6 != (long *)0x0) {
      if ((uVar3 & uVar7) == 0) {
        do {
          plVar6 = (long *)*plVar6;
          if ((plVar6 == (long *)0x0) || (plVar6[1] != uVar8 && (plVar6[1] & uVar3) != unaff_x24))
          goto LAB_0073d584;
        } while ((int)plVar6[2] != iVar1);
      }
      else {
        do {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_0073d584;
          uVar3 = plVar6[1];
          if (uVar3 != uVar8) {
            if (uVar7 <= uVar3) {
              uVar5 = 0;
              if (uVar7 != 0) {
                uVar5 = uVar3 / uVar7;
              }
              uVar3 = uVar3 - uVar5 * uVar7;
            }
            if (uVar3 != unaff_x24) goto LAB_0073d584;
          }
        } while ((int)plVar6[2] != iVar1);
      }
      goto LAB_0073d740;
    }
  }
LAB_0073d584:
  plVar6 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x20,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0xb8))();
  }
  lVar9 = param_1[6];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar9;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *(int *)(plVar6 + 2) = *param_2;
  plVar6[3] = 0;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  *plVar6 = 0;
  plVar6[1] = uVar8;
  if ((uVar7 == 0) || (*(float *)(param_1 + 10) * (float)uVar7 < (float)(param_1[9] + 1))) {
    if (uVar7 < 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = (ulong)((uVar7 - 1 & uVar7) != 0);
    }
    uVar5 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    uVar3 = uVar3 | uVar7 << 1;
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    FUN_00740150(param_1,uVar5);
    uVar7 = param_1[1];
    if ((uVar7 - 1 & uVar7) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
      goto joined_r0x0073d6b0;
    }
    if (uVar8 < uVar7) {
      plVar4 = *(long **)(*param_1 + uVar8 * 8);
      unaff_x24 = uVar8;
      goto joined_r0x0073d6b0;
    }
    uVar3 = 0;
    if (uVar7 != 0) {
      uVar3 = uVar8 / uVar7;
    }
    unaff_x24 = uVar8 - uVar3 * uVar7;
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 == (long *)0x0) goto LAB_0073d6c8;
LAB_0073d630:
    *plVar6 = *plVar4;
LAB_0073d730:
    *plVar4 = (long)plVar6;
  }
  else {
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
joined_r0x0073d6b0:
    if (plVar4 != (long *)0x0) goto LAB_0073d630;
LAB_0073d6c8:
    plVar4 = param_1 + 5;
    *plVar6 = *plVar4;
    *plVar4 = (long)plVar6;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar4;
    if (*plVar6 != 0) {
      uVar8 = *(ulong *)(*plVar6 + 8);
      if ((uVar7 - 1 & uVar7) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar3 * uVar7;
      }
      plVar4 = (long *)(*param_1 + uVar8 * 8);
      goto LAB_0073d730;
    }
  }
  param_1[9] = param_1[9] + 1;
LAB_0073d740:
  return plVar6 + 3;
}


