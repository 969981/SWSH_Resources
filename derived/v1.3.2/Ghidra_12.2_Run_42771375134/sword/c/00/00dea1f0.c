/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dea1f0; name: FUN_00dea1f0
 */


void FUN_00dea1f0(long param_1)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar14;
  float fVar15;
  float fVar16;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_28;
  long local_18;
  
  if (*(char *)(param_1 + 0x1d0) != '\0') {
    fVar13 = *(float *)(param_1 + 0x1dc) + 1.0;
    fVar14 = fVar13 / *(float *)(param_1 + 0x1d4);
    fVar16 = fVar14;
    if (1.0 < fVar14) {
      fVar16 = 1.0;
    }
    fVar15 = 0.0;
    if (0.0 <= fVar14) {
      fVar15 = fVar16;
    }
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
    uVar5 = (ulong)(fVar15 * DAT_01d4bef8 * (fVar16 / *(float *)PTR_FloatDegree180_027194f0));
    *(float *)(param_1 + 0x1dc) = fVar13;
    *(float *)(*(long *)(param_1 + 0x88) + 0x280) =
         *(float *)(param_1 + 0x1d8) *
         (*(float *)(PTR_SinCosSampleTable_02715d20 + (uVar5 >> 0x18 & 0xff) * 0x10) +
          *(float *)((long)(PTR_SinCosSampleTable_02715d20 + (uVar5 >> 0x18 & 0xff) * 0x10) + 8) *
          (float)((uint)uVar5 & 0xffffff) * DAT_01d4bc78 + -1.0) * 0.5;
    if (1.0 <= fVar15) {
      *(undefined1 *)(param_1 + 0x1d0) = 0;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x60)) {
  case 1:
    uVar5 = FUN_00e45920(*(undefined8 *)(param_1 + 0x88));
    if ((uVar5 & 1) != 0) {
      plVar11 = *(long **)(param_1 + 0x88);
      if ((int)plVar11[0xb7] == 2) {
        uVar2 = thunk_FUN_00e46320(plVar11);
        uVar2 = uVar2 ^ 1;
      }
      else {
        uVar2 = 0;
      }
      (**(code **)(*plVar11 + 0x1a8))(plVar11,PTR_DAT_0271ecf0,uVar2 & 1);
    }
    if ((*(char *)(param_1 + 0x84) == '\0') &&
       (uVar5 = (**(code **)(**(long **)(param_1 + 0x88) + 0x218))(), (uVar5 & 1) == 0)) {
      (**(code **)(**(long **)(param_1 + 0x88) + 0x180))
                (*(undefined4 *)PTR_DAT_0271ecd0,*(long **)(param_1 + 0x88),PTR_DAT_0271e870);
    }
    if (*(uint *)(param_1 + 0xfc) < 7) {
      FUN_0075e7d0(0x3f000000,*(long *)(param_1 + 0x88) + 0xa0,param_1 + 0x110);
      lVar6 = *(long *)(param_1 + 0x88);
      *(undefined1 *)(lVar6 + 0xc0) = 1;
      *(undefined8 *)(lVar6 + 0xa8) = extraout_var_00;
      *(ulong *)(lVar6 + 0xa0) = CONCAT44(extraout_var,extraout_s0);
    }
    if (*(int *)(param_1 + 0x1e4) == 0) {
      iVar3 = FUN_00debaa0(param_1);
      if (iVar3 - 1U < 2) {
        puVar7 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
        uVar5 = *puVar7;
        uVar9 = puVar7[1];
        do {
          uVar10 = uVar5 ^ uVar9;
          iVar8 = (int)uVar9;
          iVar3 = (int)uVar5;
          uVar9 = uVar10 >> 0x1b | uVar10 << 0x25;
          uVar5 = uVar10 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar10 << 0x10;
          uVar2 = iVar3 + iVar8 & 0x3f;
        } while (0x3c < uVar2);
        iVar3 = uVar2 + 0x186;
LAB_00dea624:
        *puVar7 = uVar5;
        puVar7[1] = uVar9;
      }
      else {
        if (iVar3 != 6) {
          puVar7 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
          uVar5 = *puVar7;
          uVar9 = puVar7[1];
          do {
            uVar10 = uVar5 ^ uVar9;
            iVar8 = (int)uVar9;
            iVar3 = (int)uVar5;
            uVar9 = uVar10 >> 0x1b | uVar10 << 0x25;
            uVar5 = uVar10 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar10 << 0x10;
            uVar2 = iVar3 + iVar8 & 0x3f;
          } while (0x3c < uVar2);
          iVar3 = uVar2 + 0xf0;
          goto LAB_00dea624;
        }
        iVar3 = 5;
      }
      *(int *)(param_1 + 0x1e4) = iVar3;
    }
    plVar11 = *(long **)(*(long *)(param_1 + 0x88) + 0x418);
    if (((plVar11 != *(long **)(*(long *)(param_1 + 0x88) + 0x420)) &&
        (lVar6 = *plVar11, lVar6 != 0)) &&
       (puVar12 = *(undefined8 **)(lVar6 + 0x60), puVar12 != (undefined8 *)0x0)) {
      plVar11 = (long *)(**(code **)*puVar12)(puVar12);
      lVar6 = FUN_00c781c0();
      for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        if (plVar11 == (long *)lVar6) {
          puVar12 = puVar12 + -10;
          goto LAB_00dea680;
        }
      }
    }
    puVar12 = (undefined8 *)0x0;
LAB_00dea680:
    local_28 = FUN_0069d2b0(puVar12);
    local_50 = -0x71c2fe1d13edeed4;
    local_48 = "fi_idling";
    local_40 = 9;
    local_38 = 0;
    uVar5 = FUN_00dc0080(*(undefined8 *)(param_1 + 0x88),&local_50);
    if ((uVar5 & 1) == 0) {
      local_70 = -0x3067136198e9a3a8;
      local_68 = "fi0047_idling06_loop";
      local_60 = 0x14;
      local_58 = 0;
      uVar5 = FUN_00dc0080(*(undefined8 *)(param_1 + 0x88),&local_70);
      uVar5 = uVar5 & 0xffffffff;
      lVar6 = 0;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
        lVar6 = local_58;
      }
    }
    else {
      uVar5 = 1;
      lVar6 = local_58;
    }
    local_58 = lVar6;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if ((uVar5 & 1) != 0) {
      return;
    }
    uVar5 = FUN_006b94c0(&local_28);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (*(uint *)(param_1 + 0x1e0) < *(uint *)(param_1 + 0x1e4)) {
      *(uint *)(param_1 + 0x1e0) = *(uint *)(param_1 + 0x1e0) + 1;
      return;
    }
    iVar3 = FUN_00debaa0(param_1);
    if (*(int *)(*(long *)PTR_DAT_027194e8 + 0xcb8) != 1) {
      FUN_00c58c00(&local_50,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
      local_78 = local_50;
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
      }
      (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(&local_70);
      local_80 = local_70;
      local_70 = 0;
      FUN_00e7f8a0(DAT_01d4bec4,&local_78,&local_80);
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
      }
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        local_50 = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x88) + 400))
                (*(long **)(param_1 + 0x88),PTR_DAT_0271ed08,iVar3);
      (**(code **)(**(long **)(param_1 + 0x88) + 0x1b0))
                (*(long **)(param_1 + 0x88),PTR_DAT_0271ed10);
    }
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    if (iVar3 - 1U < 2) {
      puVar7 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      uVar5 = *puVar7;
      uVar9 = puVar7[1];
      do {
        uVar10 = uVar5 ^ uVar9;
        iVar8 = (int)uVar9;
        iVar3 = (int)uVar5;
        uVar9 = uVar10 >> 0x1b | uVar10 << 0x25;
        uVar5 = uVar10 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar10 << 0x10;
        uVar2 = iVar3 + iVar8 & 0x3f;
      } while (0x3c < uVar2);
      iVar3 = uVar2 + 0x186;
    }
    else {
      if (iVar3 == 6) {
        iVar3 = 5;
        goto LAB_00dea920;
      }
      puVar7 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      uVar5 = *puVar7;
      uVar9 = puVar7[1];
      do {
        uVar10 = uVar5 ^ uVar9;
        iVar8 = (int)uVar9;
        iVar3 = (int)uVar5;
        uVar9 = uVar10 >> 0x1b | uVar10 << 0x25;
        uVar5 = uVar10 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar10 << 0x10;
        uVar2 = iVar3 + iVar8 & 0x3f;
      } while (0x3c < uVar2);
      iVar3 = uVar2 + 0xf0;
    }
    *puVar7 = uVar5;
    puVar7[1] = uVar9;
LAB_00dea920:
    *(int *)(param_1 + 0x1e4) = iVar3;
    return;
  case 2:
    break;
  case 3:
    FUN_00deac10(param_1);
    goto LAB_00dea488;
  case 4:
    FUN_00deaff0(param_1);
    return;
  case 5:
    FUN_00deb1a0(param_1);
    return;
  case 6:
    FUN_00deb3b0(param_1);
    return;
  default:
    return;
  }
  fVar16 = *(float *)(param_1 + 0x130);
  if (ABS(fVar16) <= DAT_01d4c554) {
LAB_00dea3f8:
    uVar4 = 0xffffffff;
LAB_00dea3fc:
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    fVar13 = -22.0;
    fVar16 = 1.0;
    *(undefined4 *)(param_1 + 0x1a8) = uVar4;
  }
  else {
    if (0.0 <= fVar16) {
      if (fVar16 <= 0.0) goto LAB_00dea3f8;
      uVar4 = 1;
      if (*(int *)(param_1 + 0x1a8) == 1) goto LAB_00dea3a8;
      goto LAB_00dea3fc;
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x1a8) != 0) goto LAB_00dea3fc;
LAB_00dea3a8:
    if (30.0 < *(float *)(param_1 + 400)) goto LAB_00dea3fc;
    fVar13 = *(float *)(param_1 + 0x194) + 1.0;
    fVar14 = ABS(fVar16) + *(float *)(param_1 + 0x19c);
    fVar16 = *(float *)(param_1 + 400) + 1.0;
    *(float *)(param_1 + 0x194) = fVar13;
    *(float *)(param_1 + 0x19c) = fVar14;
    *(undefined4 *)(param_1 + 0x1a8) = uVar4;
    if (fVar13 <= 0.0) {
      fVar13 = -22.0;
    }
    else {
      fVar13 = (fVar14 / fVar13) * 30.0 + -22.0;
    }
  }
  fVar13 = fVar13 / 18.0;
  fVar14 = 1.0;
  local_28 = CONCAT44(0x3f800000,(undefined4)local_28);
  plVar11 = &local_28;
  if (fVar13 <= 1.0) {
    plVar11 = &local_18;
  }
  local_18 = (ulong)(uint)fVar13 << 0x20;
  pfVar1 = (float *)&local_18;
  if (0.0 <= fVar13) {
    pfVar1 = (float *)((long)plVar11 + 4);
  }
  fVar13 = *pfVar1;
  *(float *)(param_1 + 0x1a0) = fVar13;
  if (fVar13 == 0.0) {
    if (0.0 < *(float *)(param_1 + 0x198)) {
      fVar14 = -1.0;
      goto LAB_00dea474;
    }
  }
  else {
    fVar16 = 0.0;
LAB_00dea474:
    *(float *)(param_1 + 0x198) = *(float *)(param_1 + 0x198) + fVar14;
  }
  *(float *)(param_1 + 400) = fVar16;
  FUN_00dea940(param_1);
LAB_00dea488:
  FUN_00deaac0(param_1);
  return;
}


