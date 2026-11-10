/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d14a10; name: FUN_00d14a10
 */


int * FUN_00d14a10(long *param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  long lVar9;
  
  iVar1 = *param_2;
  uVar8 = (ulong)iVar1;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar5 & uVar7) == 0) {
      unaff_x24 = uVar5 & uVar8;
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar6 * uVar7;
      }
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if (plVar4 != (long *)0x0) {
      if ((uVar5 & uVar7) == 0) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) || (plVar4[1] != uVar8 && (plVar4[1] & uVar5) != unaff_x24))
          goto LAB_00d14adc;
          plVar2 = plVar4 + 2;
        } while ((int)*plVar2 != iVar1);
      }
      else {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_00d14adc;
          uVar5 = plVar4[1];
          if (uVar5 != uVar8) {
            if (uVar7 <= uVar5) {
              uVar6 = 0;
              if (uVar7 != 0) {
                uVar6 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar6 * uVar7;
            }
            if (uVar5 != unaff_x24) goto LAB_00d14adc;
          }
          plVar2 = plVar4 + 2;
        } while ((int)*plVar2 != iVar1);
      }
      goto LAB_00d14c9c;
    }
  }
LAB_00d14adc:
  plVar2 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x18,4);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0xb8))();
  }
  lVar9 = param_1[6];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *(int *)(plVar2 + 2) = *param_2;
  *(undefined1 *)((long)plVar2 + 0x14) = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  *plVar2 = 0;
  plVar2[1] = uVar8;
  if ((uVar7 == 0) || (*(float *)(param_1 + 10) * (float)uVar7 < (float)(param_1[9] + 1))) {
    if (uVar7 < 3) {
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)((uVar7 - 1 & uVar7) != 0);
    }
    uVar6 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    uVar5 = uVar5 | uVar7 << 1;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_00d17750(param_1,uVar6);
    uVar7 = param_1[1];
    if ((uVar7 - 1 & uVar7) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
      goto joined_r0x00d14c08;
    }
    if (uVar8 < uVar7) {
      plVar4 = *(long **)(*param_1 + uVar8 * 8);
      unaff_x24 = uVar8;
      goto joined_r0x00d14c08;
    }
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = uVar8 / uVar7;
    }
    unaff_x24 = uVar8 - uVar5 * uVar7;
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 == (long *)0x0) goto LAB_00d14c20;
LAB_00d14b88:
    *plVar2 = *plVar4;
LAB_00d14c88:
    *plVar4 = (long)plVar2;
  }
  else {
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
joined_r0x00d14c08:
    if (plVar4 != (long *)0x0) goto LAB_00d14b88;
LAB_00d14c20:
    plVar4 = param_1 + 5;
    *plVar2 = *plVar4;
    *plVar4 = (long)plVar2;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar4;
    if (*plVar2 != 0) {
      uVar8 = *(ulong *)(*plVar2 + 8);
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
      plVar4 = (long *)(*param_1 + uVar8 * 8);
      goto LAB_00d14c88;
    }
  }
  plVar2 = plVar2 + 2;
  param_1[9] = param_1[9] + 1;
LAB_00d14c9c:
  return (int *)((long)plVar2 + 4);
}


