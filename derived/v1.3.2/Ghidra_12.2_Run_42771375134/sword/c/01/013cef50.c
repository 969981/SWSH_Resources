/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013cef50; name: FUN_013cef50
 */


undefined8 FUN_013cef50(long param_1,float *param_2,undefined8 *param_3,undefined1 *param_4)

{
  float *pfVar1;
  float *pfVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_2c;
  float local_28;
  float local_24;
  
  lVar5 = *(long *)(param_1 + 0xc0);
  if (*(long *)(param_1 + 200) != lVar5) {
    uVar9 = *(ulong *)(param_1 + 0xf0);
    uVar6 = uVar9 + *(long *)(param_1 + 0xf8);
    lVar4 = *(long *)(lVar5 + (uVar9 / 0x2a) * 8) + (uVar9 % 0x2a) * 0x60;
    uVar7 = uVar6 / 0x2a;
    uVar6 = uVar6 % 0x2a;
    lVar8 = *(long *)(lVar5 + uVar7 * 8) + uVar6 * 0x60;
    if (lVar8 != lVar4) {
      plVar3 = (long *)(lVar5 + (uVar9 / 0x2a) * 8);
      uVar9 = 0;
      uVar10 = *(long *)(param_1 + 0xf8) - 4;
      do {
        local_24 = *(float *)(lVar4 + 0x1c);
        if ((-1.5 > local_24 && uVar9 <= uVar10) && (-1.5 <= local_24 || uVar10 != uVar9)) {
          fVar11 = *(float *)(lVar4 + 0x30);
          local_24 = ABS(local_24);
          if (*(long *)(param_1 + 200) == lVar5) {
            fVar13 = local_24;
            if (lVar4 != 0) goto LAB_013cf08c;
          }
          else {
            lVar5 = *(long *)(lVar5 + uVar7 * 8) + uVar6 * 0x60;
            if (lVar5 != lVar4) goto LAB_013cf04c;
          }
          fVar13 = fVar11;
          goto LAB_013cf0c8;
        }
        lVar4 = lVar4 + 0x60;
        uVar9 = uVar9 + 1;
        if (lVar4 - *plVar3 == 0xfc0) {
          plVar3 = plVar3 + 1;
          lVar4 = *plVar3;
        }
      } while (lVar8 != lVar4);
    }
  }
  return 0;
LAB_013cf04c:
  do {
    lVar8 = lVar4;
    lVar4 = lVar8 + 0x60;
    fVar13 = ABS(*(float *)(lVar8 + 0x1c));
    if (ABS(*(float *)(lVar8 + 0x1c)) <= local_24) {
      fVar13 = local_24;
    }
    local_24 = fVar13;
    if (lVar4 - *plVar3 == 0xfc0) {
      plVar3 = plVar3 + 1;
      lVar4 = *plVar3;
    }
  } while (lVar5 != lVar4);
  fVar13 = *(float *)(lVar8 + 0x30);
  goto LAB_013cf0c8;
LAB_013cf08c:
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 0x60;
    local_24 = ABS(*(float *)(lVar5 + 0x1c));
    if (ABS(*(float *)(lVar5 + 0x1c)) <= fVar13) {
      local_24 = fVar13;
    }
    if (lVar4 - *plVar3 == 0xfc0) {
      plVar3 = plVar3 + 1;
      lVar4 = *plVar3;
    }
    fVar13 = local_24;
  } while (lVar4 != 0);
  fVar13 = *(float *)(lVar5 + 0x30);
LAB_013cf0c8:
  local_28 = 1.5;
  local_2c = 5.0;
  pfVar1 = &local_2c;
  if (local_24 <= 5.0) {
    pfVar1 = &local_24;
  }
  fVar14 = *(float *)PTR_FloatPi_02715160;
  pfVar2 = &local_28;
  if (1.5 <= local_24) {
    pfVar2 = pfVar1;
  }
  fVar12 = *(float *)PTR_FloatDegree180_027194f0;
  *param_2 = ((*pfVar2 + -1.5) / 3.5) * DAT_01d4bebc + 0.25;
  fVar14 = (fVar14 / fVar12) * 0.0;
  FUN_00a92cd0(fVar13 - fVar11,fVar14,fVar14);
  param_3[1] = extraout_var_00;
  *param_3 = CONCAT44(extraout_var,extraout_s0);
  *param_4 = 1;
  return 1;
}


