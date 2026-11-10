/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002523d0; name: FUN_002523d0
 */


bool FUN_002523d0(long param_1,float *param_2,float *param_3,uint *param_4,long param_5,uint param_6
                 ,ulong param_7,ulong param_8)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  float fVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  short sVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint local_5c [3];
  
  fVar12 = *(float *)(*(long *)(param_1 + 0x18) + 0x18);
  bVar7 = fVar12 < 0.0;
  if (*(float *)(*(long *)(param_1 + 0x18) + 0x14) < 0.0) {
    bVar7 = 0.0 <= fVar12;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (0.0 < *(float *)(lVar8 + 0x58)) {
    bVar7 = (bool)(bVar7 ^ 1);
  }
  lVar10 = 1;
  if (bVar7) {
    lVar10 = 2;
  }
  lVar2 = 1;
  if (!bVar7) {
    lVar2 = 2;
  }
  local_5c[0] = param_6 >> 1;
  uVar11 = (ulong)local_5c[0];
  if (*(char *)(*(long *)(lVar8 + 0x50) + uVar11 * 4 + 2) < '\0') {
    if ((param_6 & 1) != 0) {
      local_5c[lVar10] = *(int *)(lVar8 + 0x3c) + local_5c[0] + 1;
      local_5c[lVar2] = local_5c[0];
      local_5c[0] = local_5c[0] + 1;
      uVar9 = uVar11;
      goto joined_r0x002524b0;
    }
    uVar5 = *(int *)(lVar8 + 0x3c) + local_5c[0];
    local_5c[lVar10] = local_5c[0];
    uVar1 = uVar5 + 1;
    local_5c[lVar2] = uVar1;
  }
  else {
    if ((param_6 & 1) == 0) {
      local_5c[lVar10] = local_5c[0] + 1;
      uVar1 = *(int *)(lVar8 + 0x3c) + local_5c[0];
      uVar9 = (ulong)uVar1;
      local_5c[lVar2] = uVar1;
      goto joined_r0x002524b0;
    }
    uVar1 = local_5c[0] + 1;
    uVar5 = *(int *)(lVar8 + 0x3c) + uVar1;
    local_5c[lVar10] = *(int *)(lVar8 + 0x3c) + local_5c[0];
    local_5c[lVar2] = uVar1;
  }
  local_5c[0] = uVar5;
  uVar9 = (ulong)uVar1;
joined_r0x002524b0:
  if (param_5 != 0) {
    lVar2 = 8;
    if (!bVar7) {
      lVar2 = 0;
    }
    lVar3 = 0;
    if (!bVar7) {
      lVar3 = 8;
    }
    FUN_00252b50(lVar8,param_6,local_5c[0],local_5c[lVar10],uVar9,param_5 + lVar2,param_5 + 4,
                 param_5 + lVar3);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = local_5c[0];
    param_4[1] = local_5c[1];
    param_4[2] = local_5c[2];
  }
  if ((param_8 & 1) == 0) {
    if ((param_7 & 1) == 0) {
      fVar15 = 0.0;
      fVar12 = 0.0;
      fVar14 = 0.0;
    }
    else {
      fVar15 = param_2[4];
      fVar12 = param_2[5];
      fVar14 = param_2[6];
    }
    lVar8 = *(long *)(param_1 + 0x18);
    uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x3c);
    lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    fVar16 = *(float *)(lVar8 + 0x10);
    fVar17 = *(float *)(lVar8 + 0x14);
    fVar13 = *(float *)(lVar8 + 0x18);
    sVar20 = *(short *)(lVar10 + (ulong)local_5c[0] * 4);
    uVar5 = 0;
    if (uVar1 != 0) {
      uVar5 = local_5c[0] / uVar1;
    }
    *param_3 = fVar15 + fVar17 * (float)uVar5;
    param_3[1] = fVar12 + fVar16 * (float)(int)sVar20;
    param_3[2] = fVar14 + fVar13 * (float)(local_5c[0] - uVar5 * uVar1);
    uVar5 = 0;
    if (uVar1 != 0) {
      uVar5 = local_5c[1] / uVar1;
    }
    sVar20 = *(short *)(lVar10 + (ulong)local_5c[1] * 4);
    param_3[5] = fVar14 + fVar13 * (float)(local_5c[1] - uVar5 * uVar1);
    param_3[3] = fVar15 + fVar17 * (float)uVar5;
    param_3[4] = fVar12 + fVar16 * (float)(int)sVar20;
    uVar5 = 0;
    if (uVar1 != 0) {
      uVar5 = local_5c[2] / uVar1;
    }
    fVar12 = fVar12 + fVar16 * (float)(int)*(short *)(lVar10 + (ulong)local_5c[2] * 4);
    fVar15 = fVar15 + fVar17 * (float)uVar5;
    fVar14 = fVar14 + fVar13 * (float)(local_5c[2] - uVar5 * uVar1);
  }
  else {
    fVar13 = param_2[2];
    fVar16 = param_2[3];
    lVar8 = *(long *)(param_1 + 0x18);
    fVar21 = *(float *)(lVar8 + 0x10);
    fVar12 = *(float *)(lVar8 + 0x14);
    fVar14 = *(float *)(lVar8 + 0x18);
    uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x3c);
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    fVar19 = fVar16 * fVar16 + -0.5;
    fVar18 = *param_2;
    fVar17 = param_2[1];
    if ((param_7 & 1) == 0) {
      uVar5 = 0;
      if (uVar1 != 0) {
        uVar5 = local_5c[0] / uVar1;
      }
      fVar15 = fVar21 * (float)(int)*(short *)(lVar8 + (ulong)local_5c[0] * 4);
      fVar15 = fVar15 + fVar15;
      fVar6 = fVar12 * (float)uVar5 + fVar12 * (float)uVar5;
      fVar22 = fVar14 * (float)(local_5c[0] - uVar5 * uVar1);
      fVar22 = fVar22 + fVar22;
      fVar23 = fVar6 * fVar18 + fVar15 * fVar17 + fVar22 * fVar13;
      param_3[1] = fVar17 * fVar23 + fVar15 * fVar19 + fVar16 * (fVar6 * fVar13 - fVar22 * fVar18);
      param_3[2] = fVar22 * fVar19 + fVar16 * (fVar15 * fVar18 - fVar6 * fVar17) + fVar13 * fVar23;
      *param_3 = fVar18 * fVar23 + fVar6 * fVar19 + fVar16 * (fVar22 * fVar17 - fVar15 * fVar13);
      uVar5 = 0;
      if (uVar1 != 0) {
        uVar5 = local_5c[1] / uVar1;
      }
      fVar15 = fVar21 * (float)(int)*(short *)(lVar8 + (ulong)local_5c[1] * 4);
      fVar15 = fVar15 + fVar15;
      fVar6 = fVar12 * (float)uVar5 + fVar12 * (float)uVar5;
      fVar22 = fVar14 * (float)(local_5c[1] - uVar5 * uVar1);
      fVar22 = fVar22 + fVar22;
      fVar23 = fVar6 * fVar18 + fVar15 * fVar17 + fVar22 * fVar13;
      param_3[4] = fVar17 * fVar23 + fVar15 * fVar19 + fVar16 * (fVar6 * fVar13 - fVar22 * fVar18);
      param_3[5] = fVar22 * fVar19 + fVar16 * (fVar15 * fVar18 - fVar6 * fVar17) + fVar13 * fVar23;
      param_3[3] = fVar18 * fVar23 + fVar6 * fVar19 + fVar16 * (fVar22 * fVar17 - fVar15 * fVar13);
      uVar5 = 0;
      if (uVar1 != 0) {
        uVar5 = local_5c[2] / uVar1;
      }
      fVar21 = fVar21 * (float)(int)*(short *)(lVar8 + (ulong)local_5c[2] * 4);
      fVar21 = fVar21 + fVar21;
      fVar22 = fVar12 * (float)uVar5 + fVar12 * (float)uVar5;
      fVar14 = fVar14 * (float)(local_5c[2] - uVar5 * uVar1);
      fVar14 = fVar14 + fVar14;
      fVar6 = fVar22 * fVar18 + fVar21 * fVar17 + fVar14 * fVar13;
      fVar15 = fVar18 * fVar6 + fVar22 * fVar19 + fVar16 * (fVar14 * fVar17 - fVar21 * fVar13);
      fVar12 = fVar17 * fVar6 + fVar21 * fVar19 + fVar16 * (fVar22 * fVar13 - fVar14 * fVar18);
      fVar14 = fVar14 * fVar19 + fVar16 * (fVar21 * fVar18 - fVar22 * fVar17) + fVar13 * fVar6;
    }
    else {
      uVar5 = 0;
      if (uVar1 != 0) {
        uVar5 = local_5c[0] / uVar1;
      }
      fVar6 = fVar21 * (float)(int)*(short *)(lVar8 + (ulong)local_5c[0] * 4);
      fVar6 = fVar6 + fVar6;
      fVar22 = fVar14 * (float)(local_5c[0] - uVar5 * uVar1);
      fVar15 = fVar12 * (float)uVar5 + fVar12 * (float)uVar5;
      fVar22 = fVar22 + fVar22;
      fVar24 = fVar15 * fVar18 + fVar6 * fVar17 + fVar22 * fVar13;
      fVar25 = param_2[6];
      fVar23 = param_2[5];
      *param_3 = param_2[4] +
                 fVar18 * fVar24 + fVar15 * fVar19 + fVar16 * (fVar22 * fVar17 - fVar6 * fVar13);
      param_3[1] = fVar23 + fVar17 * fVar24 +
                            fVar6 * fVar19 + fVar16 * (fVar15 * fVar13 - fVar22 * fVar18);
      param_3[2] = fVar25 + fVar22 * fVar19 + fVar16 * (fVar6 * fVar18 - fVar15 * fVar17) +
                            fVar13 * fVar24;
      uVar5 = 0;
      if (uVar1 != 0) {
        uVar5 = local_5c[1] / uVar1;
      }
      fVar6 = fVar21 * (float)(int)*(short *)(lVar8 + (ulong)local_5c[1] * 4);
      fVar22 = fVar14 * (float)(local_5c[1] - uVar5 * uVar1);
      fVar6 = fVar6 + fVar6;
      fVar15 = fVar12 * (float)uVar5 + fVar12 * (float)uVar5;
      fVar22 = fVar22 + fVar22;
      fVar24 = fVar15 * fVar18 + fVar6 * fVar17 + fVar22 * fVar13;
      fVar25 = param_2[6];
      fVar23 = param_2[5];
      param_3[3] = param_2[4] +
                   fVar18 * fVar24 + fVar15 * fVar19 + fVar16 * (fVar22 * fVar17 - fVar6 * fVar13);
      param_3[4] = fVar23 + fVar17 * fVar24 +
                            fVar6 * fVar19 + fVar16 * (fVar15 * fVar13 - fVar22 * fVar18);
      param_3[5] = fVar25 + fVar22 * fVar19 + fVar16 * (fVar6 * fVar18 - fVar15 * fVar17) +
                            fVar13 * fVar24;
      uVar5 = 0;
      if (uVar1 != 0) {
        uVar5 = local_5c[2] / uVar1;
      }
      fVar21 = fVar21 * (float)(int)*(short *)(lVar8 + (ulong)local_5c[2] * 4);
      fVar21 = fVar21 + fVar21;
      fVar14 = fVar14 * (float)(local_5c[2] - uVar5 * uVar1);
      fVar6 = fVar12 * (float)uVar5 + fVar12 * (float)uVar5;
      fVar14 = fVar14 + fVar14;
      fVar22 = fVar6 * fVar18 + fVar21 * fVar17 + fVar14 * fVar13;
      fVar12 = param_2[5] +
               fVar17 * fVar22 + fVar21 * fVar19 + fVar16 * (fVar6 * fVar13 - fVar14 * fVar18);
      fVar15 = param_2[4] +
               fVar18 * fVar22 + fVar6 * fVar19 + fVar16 * (fVar14 * fVar17 - fVar21 * fVar13);
      fVar14 = param_2[6] +
               fVar14 * fVar19 + fVar16 * (fVar21 * fVar18 - fVar6 * fVar17) + fVar13 * fVar22;
    }
  }
  param_3[6] = fVar15;
  param_3[7] = fVar12;
  param_3[8] = fVar14;
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x50) + uVar11 * 4;
  pbVar4 = (byte *)(lVar8 + 2);
  if ((param_6 & 1) != 0) {
    pbVar4 = (byte *)(lVar8 + 3);
  }
  return ((*pbVar4 ^ 0xff) & 0x7f) != 0;
}


