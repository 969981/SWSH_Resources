/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1be60; name: FUN_00e1be60
 */


void FUN_00e1be60(long param_1,long param_2,int param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong unaff_x28;
  float fVar19;
  
  lVar6 = *(long *)(param_2 + 8);
  lVar14 = param_1 + (long)param_3 * 0x58;
  puVar1 = (ulong *)(lVar6 + 0x60);
  if (*(long *)(lVar6 + 0x78) != 0) {
    puVar1 = (ulong *)(lVar6 + 0x68);
  }
  puVar15 = (ulong *)(lVar14 + 0x50);
  uVar10 = *puVar15;
  plVar16 = (long *)(lVar14 + 0x48);
  if (uVar10 != 0) {
    uVar7 = *puVar1;
    uVar12 = uVar10 - 1;
    if ((uVar12 & uVar10) == 0) {
      uVar9 = uVar12 & uVar7;
      plVar11 = *(long **)(*plVar16 + uVar9 * 8);
    }
    else {
      uVar9 = uVar7;
      if (uVar10 <= uVar7) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar7 / uVar10;
        }
        uVar9 = uVar7 - uVar9 * uVar10;
      }
      plVar11 = *(long **)(*plVar16 + uVar9 * 8);
    }
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if ((uVar12 & uVar10) == 0) {
        do {
          uVar10 = plVar11[1];
          if (uVar10 != uVar7 && (uVar10 & uVar12) != uVar9) break;
          if ((uVar10 == uVar7) && (plVar11[2] == uVar7)) {
            return;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar7) {
            if (plVar11[2] == uVar7) {
              return;
            }
          }
          else {
            if (uVar10 <= uVar12) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar4 * uVar10;
            }
            if (uVar12 != uVar9) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  plVar13 = *(long **)(param_1 + 8);
  plVar11 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x120,0x10);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_00e1c384:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar13;
  puVar5 = PTR_DAT_0271f550;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  *plVar11 = (long)(puVar5 + 0x10);
  plVar11[2] = (long)(PTR_DAT_02710a48 + 0x10);
  lVar14 = *(long *)(param_2 + 8);
  plVar11[3] = lVar14;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  plVar11[4] = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[5] = 0;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,plVar11 + 8);
    lVar14 = *(long *)(param_2 + 0x10);
    lVar2 = *(long *)(param_2 + 0x18);
    lVar3 = *(long *)(param_2 + 0x28);
    plVar11[6] = *(long *)(param_2 + 0x20);
    plVar11[7] = lVar3;
    plVar11[4] = lVar14;
    plVar11[5] = lVar2;
  }
  plVar11[0x14] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0;
  plVar11[0x15] = 0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,plVar11 + 0x18);
    lVar14 = *(long *)(param_2 + 0x90);
    lVar2 = *(long *)(param_2 + 0x98);
    lVar3 = *(long *)(param_2 + 0xa8);
    plVar11[0x16] = *(long *)(param_2 + 0xa0);
    plVar11[0x17] = lVar3;
    plVar11[0x14] = lVar14;
    plVar11[0x15] = lVar2;
  }
  plVar11[2] = (long)(PTR_DAT_02710ac8 + 0x10);
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  uVar7 = *puVar1;
  uVar10 = *puVar15;
  if (uVar10 != 0) {
    uVar12 = uVar10 - 1;
    if ((uVar12 & uVar10) == 0) {
      unaff_x28 = uVar12 & uVar7;
      plVar8 = *(long **)(*plVar16 + unaff_x28 * 8);
    }
    else {
      unaff_x28 = uVar7;
      if (uVar10 <= uVar7) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar7 / uVar10;
        }
        unaff_x28 = uVar7 - uVar9 * uVar10;
      }
      plVar8 = *(long **)(*plVar16 + unaff_x28 * 8);
    }
    if (plVar8 != (long *)0x0) {
      if ((uVar12 & uVar10) == 0) {
        do {
          plVar8 = (long *)*plVar8;
          if ((plVar8 == (long *)0x0) || (plVar8[1] != uVar7 && (plVar8[1] & uVar12) != unaff_x28))
          goto LAB_00e1c178;
        } while (plVar8[2] != uVar7);
      }
      else {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_00e1c178;
          uVar12 = plVar8[1];
          if (uVar12 != uVar7) {
            if (uVar10 <= uVar12) {
              uVar9 = 0;
              if (uVar10 != 0) {
                uVar9 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar9 * uVar10;
            }
            if (uVar12 != unaff_x28) goto LAB_00e1c178;
          }
        } while (plVar8[2] != uVar7);
      }
      if (plVar11 == (long *)0x0) {
        return;
      }
      (**(code **)*plVar11)(plVar11);
                    /* WARNING: Could not recover jumptable at 0x00e1c174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar11,0x120,0x10);
      return;
    }
  }
LAB_00e1c178:
  lVar6 = (long)param_3;
  puVar17 = (undefined8 *)(param_1 + lVar6 * 0x58 + 0x78);
  plVar8 = (long *)(**(code **)(*(long *)*puVar17 + 0x10))((long *)*puVar17,0x38,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*(long *)*puVar17 + 0xb8))();
  }
  uVar18 = *puVar17;
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00e1c384;
  *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar18;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  plVar8[2] = *puVar1;
  plVar8[3] = (long)plVar11;
  plVar8[4] = (long)plVar13;
  plVar8[5] = 0x120;
  plVar8[6] = 0x10;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  *plVar8 = 0;
  plVar8[1] = uVar7;
  lVar14 = param_1 + lVar6 * 0x58;
  plVar11 = (long *)(lVar14 + 0x90);
  fVar19 = *(float *)(lVar14 + 0x98);
  if ((uVar10 == 0) || (fVar19 * (float)uVar10 < (float)(*plVar11 + 1))) {
    if (uVar10 < 3) {
      uVar12 = 1;
    }
    else {
      uVar12 = (ulong)((uVar10 - 1 & uVar10) != 0);
    }
    uVar9 = (ulong)((float)(*plVar11 + 1) / fVar19);
    uVar12 = uVar12 | uVar10 << 1;
    if (uVar9 <= uVar12) {
      uVar9 = uVar12;
    }
    FUN_010162c0(plVar16,uVar9);
    uVar10 = *puVar15;
    if ((uVar10 - 1 & uVar10) == 0) {
      unaff_x28 = uVar10 - 1 & uVar7;
      plVar13 = *(long **)(*plVar16 + unaff_x28 * 8);
      goto joined_r0x00e1c2cc;
    }
    if (uVar7 < uVar10) {
      plVar13 = *(long **)(*plVar16 + uVar7 * 8);
      unaff_x28 = uVar7;
      goto joined_r0x00e1c2cc;
    }
    uVar12 = 0;
    if (uVar10 != 0) {
      uVar12 = uVar7 / uVar10;
    }
    unaff_x28 = uVar7 - uVar12 * uVar10;
    plVar13 = *(long **)(*plVar16 + unaff_x28 * 8);
    if (plVar13 != (long *)0x0) goto LAB_00e1c24c;
LAB_00e1c2e4:
    plVar13 = (long *)(param_1 + lVar6 * 0x58 + 0x70);
    *plVar8 = *plVar13;
    *plVar13 = (long)plVar8;
    *(long **)(*plVar16 + unaff_x28 * 8) = plVar13;
    if (*plVar8 == 0) goto LAB_00e1c358;
    uVar7 = *(ulong *)(*plVar8 + 8);
    if ((uVar10 - 1 & uVar10) == 0) {
      uVar7 = uVar7 & uVar10 - 1;
    }
    else if (uVar10 <= uVar7) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar7 / uVar10;
      }
      uVar7 = uVar7 - uVar12 * uVar10;
    }
    plVar13 = (long *)(*plVar16 + uVar7 * 8);
  }
  else {
    plVar13 = *(long **)(*plVar16 + unaff_x28 * 8);
joined_r0x00e1c2cc:
    if (plVar13 == (long *)0x0) goto LAB_00e1c2e4;
LAB_00e1c24c:
    *plVar8 = *plVar13;
  }
  *plVar13 = (long)plVar8;
LAB_00e1c358:
  *plVar11 = *plVar11 + 1;
  return;
}


