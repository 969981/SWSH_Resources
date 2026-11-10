/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e4040; name: FUN_007e4040
 */


undefined8 * FUN_007e4040(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *local_98 [2];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  undefined8 *local_68;
  code *local_60;
  void *local_58;
  
  lVar5 = *(long *)(param_1[2] + 0x98);
  uVar12 = *(ulong *)(lVar5 + 0xa8);
  uVar1 = (long)param_1 * 0xffff + (long)(int)param_2;
  if (uVar12 != 0) {
    uVar13 = uVar12 - 1;
    if ((uVar13 & uVar12) == 0) {
      uVar8 = uVar13 & uVar1;
      plVar10 = *(long **)(*(long *)(lVar5 + 0xa0) + uVar8 * 8);
    }
    else {
      uVar8 = uVar1;
      if (uVar12 <= uVar1) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar1 / uVar12;
        }
        uVar8 = uVar1 - uVar8 * uVar12;
      }
      plVar10 = *(long **)(*(long *)(lVar5 + 0xa0) + uVar8 * 8);
    }
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if ((uVar13 & uVar12) == 0) {
        do {
          uVar12 = plVar10[1];
          if (uVar1 != uVar12 && (uVar12 & uVar13) != uVar8) break;
          if (((uVar1 == uVar12) && ((undefined8 *)plVar10[2] == param_1)) &&
             (*(uint *)(plVar10 + 3) == param_2)) goto LAB_007e44d0;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar10[1];
          if (uVar1 == uVar13) {
            if (((undefined8 *)plVar10[2] == param_1) && (*(uint *)(plVar10 + 3) == param_2))
            goto LAB_007e44d0;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar3 = 0;
              if (uVar12 != 0) {
                uVar3 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar3 * uVar12;
            }
            if (uVar13 != uVar8) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_007e4174:
  lVar2 = lVar5 + 0x120;
  FUN_00801420(lVar2);
  uVar12 = *(ulong *)(lVar5 + 0xd0);
  plVar10 = (long *)(lVar5 + 200);
  if (uVar12 != 0) {
    uVar13 = uVar12 - 1;
    if ((uVar13 & uVar12) == 0) {
      uVar8 = uVar13 & uVar1;
      plVar11 = *(long **)(*plVar10 + uVar8 * 8);
    }
    else {
      uVar8 = uVar1;
      if (uVar12 <= uVar1) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar1 / uVar12;
        }
        uVar8 = uVar1 - uVar8 * uVar12;
      }
      plVar11 = *(long **)(*plVar10 + uVar8 * 8);
    }
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if ((uVar13 & uVar12) == 0) {
        do {
          uVar12 = plVar11[1];
          if (uVar12 != uVar1 && (uVar12 & uVar13) != uVar8) break;
          if (((uVar12 == uVar1) && ((undefined8 *)plVar11[2] == param_1)) &&
             (*(uint *)(plVar11 + 3) == param_2)) goto LAB_007e44dc;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar11[1];
          if (uVar13 == uVar1) {
            if (((undefined8 *)plVar11[2] == param_1) && (*(uint *)(plVar11 + 3) == param_2))
            goto LAB_007e44dc;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar3 = 0;
              if (uVar12 != 0) {
                uVar3 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar3 * uVar12;
            }
            if (uVar13 != uVar8) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  FUN_008014c0(lVar2);
LAB_007e4268:
  FUN_00801420(lVar2);
  uVar12 = *(ulong *)(lVar5 + 0xd0);
  if (uVar12 != 0) {
    uVar13 = uVar12 - 1;
    if ((uVar13 & uVar12) == 0) {
      uVar8 = uVar13 & uVar1;
      plVar11 = *(long **)(*plVar10 + uVar8 * 8);
    }
    else {
      uVar8 = uVar1;
      if (uVar12 <= uVar1) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar1 / uVar12;
        }
        uVar8 = uVar1 - uVar8 * uVar12;
      }
      plVar11 = *(long **)(*plVar10 + uVar8 * 8);
    }
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if ((uVar13 & uVar12) == 0) {
        do {
          uVar12 = plVar11[1];
          if (uVar12 != uVar1 && (uVar12 & uVar13) != uVar8) break;
          if (((uVar12 == uVar1) && ((undefined8 *)plVar11[2] == param_1)) &&
             (*(uint *)(plVar11 + 3) == param_2)) goto LAB_007e44f0;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar11[1];
          if (uVar13 == uVar1) {
            if (((undefined8 *)plVar11[2] == param_1) && (*(uint *)(plVar11 + 3) == param_2))
            goto LAB_007e44f0;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar3 = 0;
              if (uVar12 != 0) {
                uVar3 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar3 * uVar12;
            }
            if (uVar13 != uVar8) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
LAB_007e4348:
  pbVar9 = (byte *)*param_1;
  if ((*pbVar9 & 1) == 0) {
    pbVar9 = pbVar9 + 1;
  }
  else {
    pbVar9 = *(byte **)(pbVar9 + 0x10);
  }
  FUN_0080f330(local_80,"UNKNOWN_ENUM_VALUE_%s_%d",pbVar9,(code *)(ulong)param_2);
  if (DAT_029f55a0 != 2) {
    local_58 = (void *)((ulong)local_58 & 0xffffffffffffff00);
    local_68 = (undefined8 *)(PTR_DAT_02716670 + 0x10);
    local_60 = FUN_007f76a0;
    FUN_00801c10(&DAT_029f55a0,&local_68);
    FUN_00801390(&local_68);
  }
  uVar14 = *(undefined8 *)(DAT_029f5590 + 0x20);
  puVar15 = (undefined8 *)FUN_007e1f40(uVar14,0x28);
  uVar6 = FUN_007e1d20(uVar14,local_80);
  *puVar15 = uVar6;
  std::operator+((string *)param_1[1],".");
  pvVar4 = (void *)((ulong)local_80 | 1);
  if ((local_80[0] & 1) != 0) {
    pvVar4 = local_70;
  }
  puVar7 = (ulong *)std::string::append((char *)local_98,(ulong)pvVar4);
  local_68 = (undefined8 *)*puVar7;
  local_60 = (code *)puVar7[1];
  local_58 = (void *)puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  uVar6 = FUN_007e1d20(uVar14,&local_68);
  puVar15[1] = uVar6;
  if (((ulong)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  *(uint *)(puVar15 + 2) = param_2;
  puVar15[3] = param_1;
  uVar6 = FUN_00850fb0();
  puVar15[4] = uVar6;
  local_98[0] = puVar15;
  local_68 = param_1;
  local_60 = (code *)(ulong)param_2;
  FUN_007e17f0(plVar10,&local_68,local_98);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
LAB_007e44a8:
  FUN_008014c0(lVar2);
  return puVar15;
LAB_007e44d0:
  if ((undefined8 *)plVar10[4] != (undefined8 *)0x0) {
    return (undefined8 *)plVar10[4];
  }
  goto LAB_007e4174;
LAB_007e44dc:
  puVar15 = (undefined8 *)plVar11[4];
  FUN_008014c0(lVar2);
  if (puVar15 != (undefined8 *)0x0) {
    return puVar15;
  }
  goto LAB_007e4268;
LAB_007e44f0:
  puVar15 = (undefined8 *)plVar11[4];
  if (puVar15 != (undefined8 *)0x0) goto LAB_007e44a8;
  goto LAB_007e4348;
}


