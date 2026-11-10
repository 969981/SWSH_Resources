/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d81f0; name: FUN_012d81f0
 */


void FUN_012d81f0(long param_1,ulong *param_2,long *param_3,long *param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x25;
  undefined8 uVar9;
  float fVar10;
  long local_a8 [9];
  long local_60;
  long local_58;
  
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[8] = *param_3;
  local_60 = param_3[1];
  local_58 = param_3[2];
  if (param_5 != 0) {
    param_5 = param_5 * 0x18;
    plVar4 = local_a8;
    do {
      param_5 = param_5 + -0x18;
      *plVar4 = *param_4;
      param_4 = param_4 + 3;
      plVar4 = plVar4 + 1;
    } while (param_5 != 0);
  }
  uVar8 = *param_2;
  uVar7 = *(ulong *)(param_1 + 0x230);
  plVar4 = (long *)(param_1 + 0x228);
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar5 & uVar7) == 0) {
      unaff_x25 = uVar5 & uVar8;
      plVar2 = *(long **)(*plVar4 + unaff_x25 * 8);
    }
    else {
      unaff_x25 = uVar8;
      if (uVar7 <= uVar8) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar8 / uVar7;
        }
        unaff_x25 = uVar8 - uVar6 * uVar7;
      }
      plVar2 = *(long **)(*plVar4 + unaff_x25 * 8);
    }
    if (plVar2 != (long *)0x0) {
      if ((uVar5 & uVar7) == 0) {
        while ((plVar2 = (long *)*plVar2, plVar2 != (long *)0x0 &&
               (plVar2[1] == uVar8 || (plVar2[1] & uVar5) == unaff_x25))) {
          if (plVar2[2] == uVar8) {
            return;
          }
        }
      }
      else {
        while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
          uVar5 = plVar2[1];
          if (uVar5 != uVar8) {
            if (uVar7 <= uVar5) {
              uVar6 = 0;
              if (uVar7 != 0) {
                uVar6 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar6 * uVar7;
            }
            if (uVar5 != unaff_x25) break;
          }
          if (plVar2[2] == uVar8) {
            return;
          }
        }
      }
    }
  }
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 600) + 0x10))
                             (*(long **)(param_1 + 600),0x70,8);
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 600) + 0xb8))();
  }
  uVar9 = *(undefined8 *)(param_1 + 600);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar9;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  plVar2[2] = *param_2;
  plVar2[3] = local_a8[0];
  plVar2[4] = local_a8[1];
  plVar2[5] = local_a8[2];
  plVar2[6] = local_a8[3];
  plVar2[7] = local_a8[4];
  plVar2[8] = local_a8[5];
  plVar2[9] = local_a8[6];
  plVar2[10] = local_a8[7];
  plVar2[0xb] = local_a8[8];
  plVar2[0xc] = local_60;
  plVar2[0xd] = local_58;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  *plVar2 = 0;
  plVar2[1] = uVar8;
  fVar10 = (float)(*(long *)(param_1 + 0x270) + 1);
  if ((uVar7 == 0) || (*(float *)(param_1 + 0x278) * (float)uVar7 < fVar10)) {
    if (uVar7 < 3) {
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)((uVar7 - 1 & uVar7) != 0);
    }
    uVar6 = (ulong)(fVar10 / *(float *)(param_1 + 0x278));
    uVar5 = uVar5 | uVar7 << 1;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_012dbfd0(plVar4,uVar6);
    uVar7 = *(ulong *)(param_1 + 0x230);
    if ((uVar7 - 1 & uVar7) == 0) {
      unaff_x25 = uVar7 - 1 & uVar8;
      plVar3 = *(long **)(*plVar4 + unaff_x25 * 8);
      goto joined_r0x012d8484;
    }
    if (uVar8 < uVar7) {
      plVar3 = *(long **)(*plVar4 + uVar8 * 8);
      unaff_x25 = uVar8;
      goto joined_r0x012d8484;
    }
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = uVar8 / uVar7;
    }
    unaff_x25 = uVar8 - uVar5 * uVar7;
    plVar3 = *(long **)(*plVar4 + unaff_x25 * 8);
    if (plVar3 != (long *)0x0) goto LAB_012d8404;
LAB_012d849c:
    *plVar2 = *(long *)(param_1 + 0x250);
    *(long **)(param_1 + 0x250) = plVar2;
    *(long *)(*(long *)(param_1 + 0x228) + unaff_x25 * 8) = param_1 + 0x250;
    if (*plVar2 == 0) goto LAB_012d8508;
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
    plVar3 = (long *)(*plVar4 + uVar8 * 8);
  }
  else {
    plVar3 = *(long **)(*plVar4 + unaff_x25 * 8);
joined_r0x012d8484:
    if (plVar3 == (long *)0x0) goto LAB_012d849c;
LAB_012d8404:
    *plVar2 = *plVar3;
  }
  *plVar3 = (long)plVar2;
LAB_012d8508:
  *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x270) + 1;
  return;
}


