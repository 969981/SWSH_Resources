/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de8690; name: FUN_00de8690
 */


void FUN_00de8690(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  float extraout_var;
  float extraout_var_00;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_64;
  float local_58;
  float local_54;
  
  if ((*(char *)(param_1 + 0x140) == '\0') || (*(char *)(*(long *)PTR_DAT_027194e8 + 0x68) != '\0'))
  {
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d0);
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8);
    *(undefined8 *)(param_1 + 0x120) = uVar11;
  }
  fVar14 = *(float *)(param_1 + 0x7c);
  local_58 = 0.0;
  local_54 = 0.0;
  if (fVar14 != *(float *)(param_1 + 0x80)) {
    local_54 = (*(float *)(param_1 + 0xa0) - fVar14) / (*(float *)(param_1 + 0x80) - fVar14);
  }
  local_64 = 1.0;
  pfVar1 = &local_64;
  if (local_54 <= 1.0) {
    pfVar1 = &local_54;
  }
  pfVar2 = &local_58;
  if (0.0 <= local_54) {
    pfVar2 = pfVar1;
  }
  fVar14 = (float)(int)(*pfVar2 / DAT_01d4bec4) * DAT_01d4bec4;
  fVar16 = *(float *)PTR_DAT_0271ecc8 +
           fVar14 * (*(float *)PTR_DAT_0271ecc0 - *(float *)PTR_DAT_0271ecc8);
  *(float *)(param_1 + 0xf0) = fVar14;
  *(float *)(param_1 + 0xf4) = fVar16;
  if (*(float *)(param_1 + 0x78) <= *(float *)(param_1 + 0xa0)) {
    plVar5 = *(long **)(param_1 + 0x88);
    if (*(char *)((long)plVar5 + 0x44c) == '\0') {
      pcVar7 = *(code **)(*plVar5 + 0x178);
      puVar6 = PTR_DAT_0271e870;
    }
    else {
      pcVar7 = *(code **)(*plVar5 + 0x1c0);
      puVar6 = (undefined *)((long)plVar5 + 0x44c);
    }
    fVar14 = (float)(*pcVar7)(0,plVar5,puVar6);
    local_54 = 0.0;
    uVar4 = thunk_FUN_00e46320(*(undefined8 *)(param_1 + 0x88));
    bVar3 = (uVar4 & 1) == 0;
    fVar9 = 0.125;
    if (bVar3) {
      fVar9 = 0.25;
    }
    fVar9 = ABS(fVar16 - fVar14) * fVar9;
    local_54 = DAT_01d4c434;
    if (bVar3) {
      local_54 = DAT_01d4bb3c;
    }
    *(float *)(param_1 + 0xf8) = fVar9;
    pfVar1 = &local_54;
    if (local_54 <= fVar9) {
      pfVar1 = (float *)(param_1 + 0xf8);
    }
    *(float *)(param_1 + 0xf8) = *pfVar1;
  }
  else {
    uVar4 = thunk_FUN_00e46320(*(undefined8 *)(param_1 + 0x88));
    uVar8 = 0x3e000000;
    if ((uVar4 & 1) == 0) {
      uVar8 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0xf8) = uVar8;
  }
  auVar12 = FUN_007101c0(*(long *)(param_1 + 0x88) + 0xa0);
  uVar4 = FUN_007101c0(param_1 + 0x110);
  if (*(float *)(param_1 + 0xa0) <= 0.0) {
    uVar4 = uVar4 >> 0x20;
  }
  else {
    fVar17 = *(float *)(param_1 + 0xa4);
    FUN_00ac7ad0(param_1 + 0x120);
    fVar9 = DAT_01d4be68;
    fVar16 = DAT_01d4bdf4;
    fVar14 = DAT_01d4bb38;
    fVar10 = (fVar17 + extraout_var + DAT_01d4bb38) / DAT_01d4bdf4;
    fVar15 = 1.0;
    if (fVar10 < 0.0) {
      fVar15 = -1.0;
    }
    fVar10 = fVar10 - fVar15 * (float)(int)fVar10;
    fVar15 = fVar10 + 1.0;
    if (0.0 <= fVar10) {
      fVar15 = fVar10;
    }
    fVar10 = fVar15 * DAT_01d4bdf4 + DAT_01d4be68;
    uVar4 = (ulong)(uint)fVar10;
    if (*(char *)(param_1 + 0x140) != '\0') {
      fVar10 = ((auVar12._4_4_ - fVar10) + DAT_01d4bb38) / DAT_01d4bdf4;
      fVar15 = 1.0;
      if (fVar10 < 0.0) {
        fVar15 = -1.0;
      }
      fVar10 = fVar10 - fVar15 * (float)(int)fVar10;
      fVar15 = fVar10 + 1.0;
      if (0.0 <= fVar10) {
        fVar15 = fVar10;
      }
      if ((*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) * 5.0 <=
          ABS(fVar15 * DAT_01d4bdf4 + DAT_01d4be68)) {
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d0);
        *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8);
        *(undefined8 *)(param_1 + 0x120) = uVar11;
        FUN_00ac7ad0(param_1 + 0x120);
        fVar14 = (fVar17 + extraout_var_00 + fVar14) / fVar16;
        fVar10 = 1.0;
        if (fVar14 < 0.0) {
          fVar10 = -1.0;
        }
        fVar14 = fVar14 - fVar10 * (float)(int)fVar14;
        fVar10 = fVar14 + 1.0;
        if (0.0 <= fVar14) {
          fVar10 = fVar14;
        }
        uVar4 = (ulong)(uint)(fVar10 * fVar16 + fVar9);
      }
    }
  }
  auVar13 = FUN_00a92cd0(uVar4,auVar12._0_8_,auVar12._8_8_ & 0xffffffff);
  *(undefined1 (*) [16])(param_1 + 0x110) = auVar13;
  puVar6 = PTR_FloatPi_02715160;
  fVar14 = ((auVar12._4_4_ - (float)uVar4) + DAT_01d4bb38) / DAT_01d4bdf4;
  fVar16 = 1.0;
  if (fVar14 < 0.0) {
    fVar16 = -1.0;
  }
  fVar14 = fVar14 - fVar16 * (float)(int)fVar14;
  fVar16 = fVar14 + 1.0;
  if (0.0 <= fVar14) {
    fVar16 = fVar14;
  }
  local_54 = fVar16 * DAT_01d4bdf4 + DAT_01d4be68;
  *(float *)(param_1 + 0x130) = local_54;
  local_58 = -1.0;
  local_64 = 1.0;
  local_54 = local_54 / ((*(float *)puVar6 / *(float *)PTR_FloatDegree180_027194f0) * DAT_01d4c234);
  pfVar1 = &local_64;
  if (local_54 <= 1.0) {
    pfVar1 = &local_54;
  }
  pfVar2 = &local_58;
  if (-1.0 <= local_54) {
    pfVar2 = pfVar1;
  }
  *(float *)(param_1 + 0x138) = *pfVar2;
  return;
}


