/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01077ed0; name: FUN_01077ed0
 */


void FUN_01077ed0(long *param_1,int param_2,ulong param_3,byte param_4,long *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong unaff_x26;
  ulong local_70;
  byte local_68;
  undefined7 uStack_67;
  
  uVar2 = FUN_0106f400(*(undefined8 *)(*param_1 + 0x60));
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar2 = param_5[1];
  if (uVar2 == 0) {
LAB_01078074:
    plVar8 = (long *)(**(code **)(*(long *)param_5[6] + 0x10))((long *)param_5[6],0x18,8);
    if (plVar8 == (long *)0x0) {
      (**(code **)(*(long *)param_5[6] + 0xb8))();
    }
    lVar10 = param_5[6];
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_010782cc;
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    plVar8[2] = param_3;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    *plVar8 = 0;
    plVar8[1] = param_3;
    if ((uVar2 == 0) || (*(float *)(param_5 + 10) * (float)uVar2 < (float)(param_5[9] + 1))) {
      if (uVar2 < 3) {
        uVar4 = 1;
      }
      else {
        uVar4 = (ulong)((uVar2 - 1 & uVar2) != 0);
      }
      uVar3 = (ulong)((float)(param_5[9] + 1) / *(float *)(param_5 + 10));
      uVar4 = uVar4 | uVar2 << 1;
      if (uVar3 <= uVar4) {
        uVar3 = uVar4;
      }
      FUN_01078960(param_5,uVar3);
      uVar2 = param_5[1];
      if ((uVar2 - 1 & uVar2) == 0) {
        unaff_x26 = uVar2 - 1 & param_3;
        plVar5 = *(long **)(*param_5 + unaff_x26 * 8);
        goto joined_r0x01078184;
      }
      if (param_3 < uVar2) {
        plVar5 = *(long **)(*param_5 + param_3 * 8);
        unaff_x26 = param_3;
        goto joined_r0x01078184;
      }
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = param_3 / uVar2;
      }
      unaff_x26 = param_3 - uVar4 * uVar2;
      plVar5 = *(long **)(*param_5 + unaff_x26 * 8);
      if (plVar5 != (long *)0x0) goto LAB_01078118;
LAB_0107819c:
      plVar5 = param_5 + 5;
      *plVar8 = *plVar5;
      *plVar5 = (long)plVar8;
      *(long **)(*param_5 + unaff_x26 * 8) = plVar5;
      if (*plVar8 != 0) {
        uVar4 = *(ulong *)(*plVar8 + 8);
        if ((uVar2 - 1 & uVar2) == 0) {
          uVar4 = uVar4 & uVar2 - 1;
        }
        else if (uVar2 <= uVar4) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar4 / uVar2;
          }
          uVar4 = uVar4 - uVar3 * uVar2;
        }
        plVar5 = (long *)(*param_5 + uVar4 * 8);
        goto LAB_01078204;
      }
    }
    else {
      plVar5 = *(long **)(*param_5 + unaff_x26 * 8);
joined_r0x01078184:
      if (plVar5 == (long *)0x0) goto LAB_0107819c;
LAB_01078118:
      *plVar8 = *plVar5;
LAB_01078204:
      *plVar5 = (long)plVar8;
    }
    param_5[9] = param_5[9] + 1;
  }
  else {
    uVar3 = uVar2 - 1;
    uVar4 = uVar3 & uVar2;
    if (uVar4 == 0) {
      uVar7 = uVar3 & param_3;
      lVar6 = *param_5;
      plVar8 = *(long **)(lVar6 + uVar7 * 8);
    }
    else {
      uVar7 = param_3;
      if (uVar2 <= param_3) {
        uVar7 = 0;
        if (uVar2 != 0) {
          uVar7 = param_3 / uVar2;
        }
        uVar7 = param_3 - uVar7 * uVar2;
      }
      lVar6 = *param_5;
      plVar8 = *(long **)(lVar6 + uVar7 * 8);
    }
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar4 == 0) {
        do {
          uVar9 = plVar8[1];
          if (uVar9 != param_3 && (uVar9 & uVar3) != uVar7) break;
          if ((uVar9 == param_3) && (plVar8[2] == param_3)) {
            return;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == param_3) {
            if (plVar8[2] == param_3) {
              return;
            }
          }
          else {
            if (uVar2 <= uVar9) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar9 / uVar2;
              }
              uVar9 = uVar9 - uVar1 * uVar2;
            }
            if (uVar9 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    if (uVar4 == 0) {
      unaff_x26 = uVar3 & param_3;
      plVar8 = *(long **)(lVar6 + unaff_x26 * 8);
      if (plVar8 != (long *)0x0) goto LAB_01077ffc;
      goto LAB_01078074;
    }
    unaff_x26 = param_3;
    if (uVar2 <= param_3) {
      uVar7 = 0;
      if (uVar2 != 0) {
        uVar7 = param_3 / uVar2;
      }
      unaff_x26 = param_3 - uVar7 * uVar2;
    }
    plVar8 = *(long **)(lVar6 + unaff_x26 * 8);
    if (plVar8 == (long *)0x0) goto LAB_01078074;
LAB_01077ffc:
    if (uVar4 == 0) {
      do {
        plVar8 = (long *)*plVar8;
        if ((plVar8 == (long *)0x0) || (plVar8[1] != param_3 && (plVar8[1] & uVar3) != unaff_x26))
        goto LAB_01078074;
      } while (plVar8[2] != param_3);
    }
    else {
      do {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_01078074;
        uVar4 = plVar8[1];
        if (uVar4 != param_3) {
          if (uVar2 <= uVar4) {
            uVar3 = 0;
            if (uVar2 != 0) {
              uVar3 = uVar4 / uVar2;
            }
            uVar4 = uVar4 - uVar3 * uVar2;
          }
          if (uVar4 != unaff_x26) goto LAB_01078074;
        }
      } while (plVar8[2] != param_3);
    }
  }
  local_68 = param_4 & 1;
  plVar8 = param_1 + (long)param_2 * 6 + 3;
  puVar11 = (ulong *)*plVar8;
  local_70 = param_3;
  if (puVar11 == (ulong *)param_1[(long)param_2 * 6 + 4]) {
    FUN_01078f90(param_1 + (long)param_2 * 6 + 2,&local_70);
  }
  else {
    lVar10 = param_1[(long)param_2 * 6 + 5];
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_010782cc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *puVar11 = local_70;
    puVar11[1] = CONCAT71(uStack_67,local_68);
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    *plVar8 = *plVar8 + 0x10;
  }
  return;
}


