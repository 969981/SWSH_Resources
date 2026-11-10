/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d5f9c0; name: FUN_00d5f9c0
 */


long * FUN_00d5f9c0(long *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  long lVar9;
  
  uVar1 = *param_2;
  uVar8 = (ulong)uVar1;
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
          goto LAB_00d5fa84;
        } while (*(uint *)(plVar6 + 2) != uVar1);
      }
      else {
        do {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_00d5fa84;
          uVar3 = plVar6[1];
          if (uVar3 != uVar8) {
            if (uVar7 <= uVar3) {
              uVar5 = 0;
              if (uVar7 != 0) {
                uVar5 = uVar3 / uVar7;
              }
              uVar3 = uVar3 - uVar5 * uVar7;
            }
            if (uVar3 != unaff_x24) goto LAB_00d5fa84;
          }
        } while (*(uint *)(plVar6 + 2) != uVar1);
      }
      goto LAB_00d5fc5c;
    }
  }
LAB_00d5fa84:
  plVar6 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x38,8);
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
  uVar1 = *param_2;
  plVar6[5] = 0;
  plVar6[6] = 0;
  *(uint *)(plVar6 + 2) = uVar1;
  plVar6[3] = -0x340d631b7bddd9bb;
  plVar6[4] = (long)&DAT_01d38550;
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
    FUN_00d60880(param_1,uVar5);
    uVar7 = param_1[1];
    if ((uVar7 - 1 & uVar7) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
      goto joined_r0x00d5fbcc;
    }
    if (uVar8 < uVar7) {
      plVar4 = *(long **)(*param_1 + uVar8 * 8);
      unaff_x24 = uVar8;
      goto joined_r0x00d5fbcc;
    }
    uVar3 = 0;
    if (uVar7 != 0) {
      uVar3 = uVar8 / uVar7;
    }
    unaff_x24 = uVar8 - uVar3 * uVar7;
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 == (long *)0x0) goto LAB_00d5fbe4;
LAB_00d5fb4c:
    *plVar6 = *plVar4;
LAB_00d5fc4c:
    *plVar4 = (long)plVar6;
  }
  else {
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
joined_r0x00d5fbcc:
    if (plVar4 != (long *)0x0) goto LAB_00d5fb4c;
LAB_00d5fbe4:
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
      goto LAB_00d5fc4c;
    }
  }
  param_1[9] = param_1[9] + 1;
LAB_00d5fc5c:
  return plVar6 + 3;
}


