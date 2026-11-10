/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b6dea0; name: FUN_00b6dea0
 */


void FUN_00b6dea0(long *param_1,long param_2,undefined8 param_3,undefined4 param_4,int param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x27;
  undefined8 uVar10;
  float fVar11;
  undefined4 local_6c;
  undefined1 auStack_68 [8];
  
  local_6c = param_4;
  lVar2 = FUN_00b877d0(auStack_68,param_3,&local_6c,param_2 + 0x60);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar8 = *(ulong *)(param_2 + 0x10);
  plVar1 = (long *)(param_2 + 8);
  uVar9 = (ulong)param_5;
  if (uVar8 != 0) {
    uVar6 = uVar8 - 1;
    if ((uVar6 & uVar8) == 0) {
      unaff_x27 = uVar6 & uVar9;
      plVar4 = *(long **)(*plVar1 + unaff_x27 * 8);
    }
    else {
      unaff_x27 = uVar9;
      if (uVar8 <= uVar9) {
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = uVar9 / uVar8;
        }
        unaff_x27 = uVar9 - uVar7 * uVar8;
      }
      plVar4 = *(long **)(*plVar1 + unaff_x27 * 8);
    }
    if (plVar4 != (long *)0x0) {
      if ((uVar6 & uVar8) == 0) {
        while ((plVar4 = (long *)*plVar4, plVar4 != (long *)0x0 &&
               (plVar4[1] == uVar9 || (plVar4[1] & uVar6) == unaff_x27))) {
          if ((int)plVar4[2] == param_5) {
            return;
          }
        }
      }
      else {
        while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
          uVar6 = plVar4[1];
          if (uVar6 != uVar9) {
            if (uVar8 <= uVar6) {
              uVar7 = 0;
              if (uVar8 != 0) {
                uVar7 = uVar6 / uVar8;
              }
              uVar6 = uVar6 - uVar7 * uVar8;
            }
            if (uVar6 != unaff_x27) break;
          }
          if (*(int *)(plVar4 + 2) == param_5) {
            return;
          }
        }
      }
    }
  }
  plVar4 = (long *)(**(code **)(**(long **)(param_2 + 0x38) + 0x10))
                             (*(long **)(param_2 + 0x38),0x20,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x38) + 0xb8))();
  }
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *(int *)(plVar4 + 2) = param_5;
  lVar3 = *param_1;
  plVar4[3] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  *plVar4 = 0;
  plVar4[1] = uVar9;
  fVar11 = (float)(*(long *)(param_2 + 0x50) + 1);
  if ((uVar8 == 0) || (*(float *)(param_2 + 0x58) * (float)uVar8 < fVar11)) {
    if (uVar8 < 3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)((uVar8 - 1 & uVar8) != 0);
    }
    uVar7 = (ulong)(fVar11 / *(float *)(param_2 + 0x58));
    uVar6 = uVar6 | uVar8 << 1;
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    FUN_00a89680(plVar1,uVar7);
    uVar8 = *(ulong *)(param_2 + 0x10);
    if ((uVar8 - 1 & uVar8) == 0) {
      unaff_x27 = uVar8 - 1 & uVar9;
      plVar5 = *(long **)(*plVar1 + unaff_x27 * 8);
      goto joined_r0x00b6e0dc;
    }
    if (uVar9 < uVar8) {
      plVar5 = *(long **)(*plVar1 + uVar9 * 8);
      unaff_x27 = uVar9;
      goto joined_r0x00b6e0dc;
    }
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = uVar9 / uVar8;
    }
    unaff_x27 = uVar9 - uVar6 * uVar8;
    plVar5 = *(long **)(*plVar1 + unaff_x27 * 8);
    if (plVar5 != (long *)0x0) goto LAB_00b6e05c;
LAB_00b6e0f4:
    plVar5 = (long *)(param_2 + 0x30);
    *plVar4 = *plVar5;
    *plVar5 = (long)plVar4;
    *(long **)(*(long *)(param_2 + 8) + unaff_x27 * 8) = plVar5;
    if (*plVar4 == 0) goto LAB_00b6e160;
    uVar9 = *(ulong *)(*plVar4 + 8);
    if ((uVar8 - 1 & uVar8) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar6 * uVar8;
    }
    plVar5 = (long *)(*plVar1 + uVar9 * 8);
  }
  else {
    plVar5 = *(long **)(*plVar1 + unaff_x27 * 8);
joined_r0x00b6e0dc:
    if (plVar5 == (long *)0x0) goto LAB_00b6e0f4;
LAB_00b6e05c:
    *plVar4 = *plVar5;
  }
  *plVar5 = (long)plVar4;
LAB_00b6e160:
  *(long *)(param_2 + 0x50) = *(long *)(param_2 + 0x50) + 1;
  return;
}


