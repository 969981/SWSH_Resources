/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00775ee0; name: FUN_00775ee0
 */


void FUN_00775ee0(long param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x28;
  float fVar12;
  long local_68;
  
  plVar1 = (long *)(param_1 + 0x220);
  FUN_0010d170(&local_68,*(undefined8 *)(param_2 + 8));
  uVar10 = *(ulong *)(param_1 + 0x228);
  puVar2 = (ulong *)PTR_DAT_02710920;
  if (local_68 != 0) {
    puVar2 = (ulong *)(local_68 + 0x58);
  }
  uVar11 = *puVar2;
  if (uVar10 != 0) {
    uVar7 = uVar10 - 1;
    if ((uVar7 & uVar10) == 0) {
      unaff_x28 = uVar7 & uVar11;
      plVar6 = *(long **)(*plVar1 + unaff_x28 * 8);
    }
    else {
      unaff_x28 = uVar11;
      if (uVar10 <= uVar11) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar11 / uVar10;
        }
        unaff_x28 = uVar11 - uVar8 * uVar10;
      }
      plVar6 = *(long **)(*plVar1 + unaff_x28 * 8);
    }
    if (plVar6 != (long *)0x0) {
      if ((uVar7 & uVar10) == 0) {
        do {
          plVar6 = (long *)*plVar6;
          if ((plVar6 == (long *)0x0) || (plVar6[1] != uVar11 && (plVar6[1] & uVar7) != unaff_x28))
          goto LAB_00776000;
          puVar2 = (ulong *)PTR_DAT_02710920;
          if (plVar6[2] != 0) {
            puVar2 = (ulong *)(plVar6[2] + 0x58);
          }
        } while (*puVar2 != uVar11);
      }
      else {
        do {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_00776000;
          uVar7 = plVar6[1];
          if (uVar7 != uVar11) {
            if (uVar10 <= uVar7) {
              uVar8 = 0;
              if (uVar10 != 0) {
                uVar8 = uVar7 / uVar10;
              }
              uVar7 = uVar7 - uVar8 * uVar10;
            }
            if (uVar7 != unaff_x28) goto LAB_00776000;
          }
          puVar2 = (ulong *)PTR_DAT_02710920;
          if (plVar6[2] != 0) {
            puVar2 = (ulong *)(plVar6[2] + 0x58);
          }
        } while (*puVar2 != uVar11);
      }
      goto LAB_007761d0;
    }
  }
LAB_00776000:
  plVar6 = (long *)(**(code **)(**(long **)(param_1 + 0x250) + 0x10))
                             (*(long **)(param_1 + 0x250),0x20,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x250) + 0xb8))();
  }
  uVar9 = *(undefined8 *)(param_1 + 0x250);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  lVar3 = local_68;
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar9;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  local_68 = 0;
  plVar6[2] = lVar3;
  *(undefined4 *)(plVar6 + 3) = param_3;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  *plVar6 = 0;
  plVar6[1] = uVar11;
  fVar12 = (float)(*(long *)(param_1 + 0x268) + 1);
  if ((uVar10 == 0) || (*(float *)(param_1 + 0x270) * (float)uVar10 < fVar12)) {
    if (uVar10 < 3) {
      uVar7 = 1;
    }
    else {
      uVar7 = (ulong)((uVar10 - 1 & uVar10) != 0);
    }
    uVar8 = (ulong)(fVar12 / *(float *)(param_1 + 0x270));
    uVar7 = uVar7 | uVar10 << 1;
    if (uVar8 <= uVar7) {
      uVar8 = uVar7;
    }
    FUN_00777b30(plVar1,uVar8);
    uVar10 = *(ulong *)(param_1 + 0x228);
    if ((uVar10 - 1 & uVar10) == 0) {
      unaff_x28 = uVar10 - 1 & uVar11;
      plVar5 = *(long **)(*plVar1 + unaff_x28 * 8);
      goto joined_r0x0077613c;
    }
    if (uVar11 < uVar10) {
      plVar5 = *(long **)(*plVar1 + uVar11 * 8);
      unaff_x28 = uVar11;
      goto joined_r0x0077613c;
    }
    uVar7 = 0;
    if (uVar10 != 0) {
      uVar7 = uVar11 / uVar10;
    }
    unaff_x28 = uVar11 - uVar7 * uVar10;
    plVar5 = *(long **)(*plVar1 + unaff_x28 * 8);
    if (plVar5 == (long *)0x0) goto LAB_00776154;
LAB_007760bc:
    *plVar6 = *plVar5;
LAB_007761bc:
    *plVar5 = (long)plVar6;
  }
  else {
    plVar5 = *(long **)(*plVar1 + unaff_x28 * 8);
joined_r0x0077613c:
    if (plVar5 != (long *)0x0) goto LAB_007760bc;
LAB_00776154:
    *plVar6 = *(long *)(param_1 + 0x248);
    *(long **)(param_1 + 0x248) = plVar6;
    *(long *)(*(long *)(param_1 + 0x220) + unaff_x28 * 8) = param_1 + 0x248;
    if (*plVar6 != 0) {
      uVar11 = *(ulong *)(*plVar6 + 8);
      if ((uVar10 - 1 & uVar10) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar7 * uVar10;
      }
      plVar5 = (long *)(*plVar1 + uVar11 * 8);
      goto LAB_007761bc;
    }
  }
  *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x268) + 1;
LAB_007761d0:
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_00777850(param_1 + 0x130,param_2,param_3,param_4,param_5);
  return;
}


