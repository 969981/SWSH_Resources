/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005156a0; name: FUN_005156a0
 */


void FUN_005156a0(float *param_1,undefined8 *param_2)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong unaff_x19;
  ulong uVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int local_b0 [4];
  float local_a0 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_a0[3] = 0.0;
  local_a0[4] = 0.0;
  local_a0[1] = 0.0;
  local_a0[2] = 0.0;
  local_a0[6] = 0.0;
  local_a0[7] = 0.0;
  local_a0[8] = 0.0;
  local_a0[9] = 0.0;
  local_a0[0xd] = 0.0;
  local_a0[0xe] = 0.0;
  iVar6 = 0;
  local_a0[0xb] = 0.0;
  local_a0[0xc] = 0.0;
  local_a0[0xf] = 1.0;
  local_a0[10] = 1.0;
  local_a0[5] = 1.0;
  local_a0[0] = 1.0;
  local_50 = param_2[2];
  local_48 = param_2[3];
  local_60 = *param_2;
  local_58 = param_2[1];
  local_40 = param_2[4];
  local_38 = param_2[5];
  local_30 = param_2[6];
  local_28 = param_2[7];
  local_b0[0] = 0;
  local_b0[1] = 1;
  local_b0[2] = 2;
  local_b0[3] = 3;
  lVar11 = 1;
  uVar5 = 0;
  do {
    fVar15 = local_a0[uVar5 * 4 + (long)iVar6 + 0x10];
    uVar1 = uVar5 + 1;
    uVar12 = uVar5;
    iVar4 = iVar6;
    if (uVar1 < 4) {
      if ((1 - (uint)uVar5 & 1) == 0) {
        uVar10 = uVar5 & 0xffffffff;
        lVar7 = lVar11;
        if (uVar5 == 2) {
          iVar4 = -1;
          uVar12 = unaff_x19;
        }
        else {
LAB_005157c0:
          do {
            uVar9 = (uint)lVar7;
            if (ABS(local_a0[uVar5 * 4 + (long)local_b0[lVar7] + 0x10]) <= ABS(fVar15)) {
              uVar9 = (uint)uVar10;
            }
            if (ABS(local_a0[uVar5 * 4 + (long)local_b0[(int)uVar9] + 0x10]) <
                ABS(local_a0[uVar5 * 4 + (long)local_b0[lVar7 + 1] + 0x10])) {
              uVar9 = (uint)lVar7 + 1;
            }
            uVar10 = (ulong)uVar9;
            lVar7 = lVar7 + 2;
            iVar4 = local_b0[(int)uVar9];
            fVar15 = local_a0[uVar5 * 4 + (long)iVar4 + 0x10];
          } while (lVar7 != 4);
          uVar12 = (ulong)(int)uVar9;
        }
      }
      else {
        lVar7 = lVar11 + 1;
        uVar9 = (uint)lVar11;
        if (ABS(local_a0[uVar5 * 4 + (long)local_b0[lVar11] + 0x10]) <= ABS(fVar15)) {
          uVar9 = (uint)uVar5;
        }
        uVar10 = (ulong)uVar9;
        uVar12 = (ulong)(int)uVar9;
        iVar4 = local_b0[(int)uVar9];
        fVar15 = local_a0[uVar5 * 4 + (long)iVar4 + 0x10];
        if (uVar5 != 2) goto LAB_005157c0;
      }
    }
    if (fVar15 == 0.0) {
      return;
    }
    local_b0[uVar5] = iVar4;
    local_b0[uVar12] = iVar6;
    lVar8 = (long)local_b0[uVar5];
    lVar7 = lVar8 * 4;
    fVar15 = 1.0 / local_a0[uVar5 * 4 + lVar8 + 0x10];
    pfVar2 = local_a0 + lVar8;
    pfVar3 = local_a0 + lVar8 + 0x10;
    if (uVar5 == 0) {
      *pfVar3 = fVar15 * *pfVar3;
      fVar16 = fVar15 * *pfVar2;
      *pfVar2 = fVar16;
LAB_00515890:
      *(float *)((long)&local_50 + lVar7) = fVar15 * *(float *)((long)&local_50 + lVar7);
      uVar12 = 0;
      local_a0[lVar8 + 4] = fVar15 * local_a0[lVar8 + 4];
LAB_005158ac:
      *(float *)((long)&local_40 + lVar7) = fVar15 * *(float *)((long)&local_40 + lVar7);
      unaff_x19 = 0;
      uVar10 = uVar12;
    }
    else {
      fVar16 = fVar15 * *pfVar2;
      *pfVar2 = fVar16;
      if (uVar5 == 1) goto LAB_00515890;
      uVar12 = 1;
      uVar10 = 1;
      local_a0[lVar8 + 4] = fVar15 * local_a0[lVar8 + 4];
      unaff_x19 = uVar12;
      if (uVar5 < 3) goto LAB_005158ac;
    }
    fVar18 = *(float *)((long)&local_30 + lVar7);
    local_a0[lVar8 + 8] = fVar15 * local_a0[lVar8 + 8];
    fVar17 = local_a0[lVar8 + 0xc];
    *(float *)((long)&local_30 + lVar7) = fVar15 * fVar18;
    local_a0[lVar8 + 0xc] = fVar15 * fVar17;
    if (uVar5 == 0) {
LAB_00515994:
      lVar13 = (long)local_b0[1];
      fVar15 = local_a0[uVar5 * 4 + lVar13 + 0x10] / local_a0[uVar5 * 4 + lVar8 + 0x10];
      if (uVar5 == 0) {
        local_a0[lVar13 + 0x10] = local_a0[lVar13 + 0x10] - fVar15 * *pfVar3;
      }
      lVar14 = lVar13 * 4;
      local_a0[lVar13] = local_a0[lVar13] - fVar15 * *pfVar2;
      if (uVar10 == 0) {
        *(float *)((long)&local_50 + lVar14) =
             *(float *)((long)&local_50 + lVar14) - fVar15 * *(float *)((long)&local_50 + lVar8 * 4)
        ;
      }
      local_a0[lVar13 + 4] = local_a0[lVar13 + 4] - fVar15 * local_a0[lVar8 + 4];
      if (unaff_x19 == 0) {
        *(float *)((long)&local_40 + lVar14) =
             *(float *)((long)&local_40 + lVar14) - fVar15 * *(float *)((long)&local_40 + lVar8 * 4)
        ;
      }
      fVar16 = *(float *)((long)&local_30 + lVar14);
      local_a0[lVar13 + 8] = local_a0[lVar13 + 8] - fVar15 * local_a0[lVar8 + 8];
      *(float *)((long)&local_30 + lVar14) = fVar16 - fVar15 * *(float *)((long)&local_30 + lVar7);
      local_a0[lVar13 + 0xc] = local_a0[lVar13 + 0xc] - fVar15 * local_a0[lVar8 + 0xc];
      if (uVar5 != 2) goto LAB_00515a60;
LAB_00515b2c:
      lVar13 = (long)local_b0[3];
      fVar15 = local_a0[uVar5 * 4 + lVar13 + 0x10] / local_a0[uVar5 * 4 + lVar8 + 0x10];
      if (uVar5 == 0) {
        local_a0[lVar13 + 0x10] = local_a0[lVar13 + 0x10] - fVar15 * *pfVar3;
      }
      lVar14 = lVar13 * 4;
      local_a0[lVar13] = local_a0[lVar13] - fVar15 * *pfVar2;
      if (uVar10 == 0) {
        *(float *)((long)&local_50 + lVar14) =
             *(float *)((long)&local_50 + lVar14) - fVar15 * *(float *)((long)&local_50 + lVar8 * 4)
        ;
      }
      local_a0[lVar13 + 4] = local_a0[lVar13 + 4] - fVar15 * local_a0[lVar8 + 4];
      if (unaff_x19 == 0) {
        *(float *)((long)&local_40 + lVar14) =
             *(float *)((long)&local_40 + lVar14) - fVar15 * *(float *)((long)&local_40 + lVar8 * 4)
        ;
      }
      fVar16 = *(float *)((long)&local_30 + lVar14);
      local_a0[lVar13 + 8] = local_a0[lVar13 + 8] - fVar15 * local_a0[lVar8 + 8];
      *(float *)((long)&local_30 + lVar14) = fVar16 - fVar15 * *(float *)((long)&local_30 + lVar7);
      local_a0[lVar13 + 0xc] = local_a0[lVar13 + 0xc] - fVar15 * local_a0[lVar8 + 0xc];
    }
    else {
      lVar13 = (long)local_b0[0];
      lVar14 = lVar13 * 4;
      fVar15 = local_a0[uVar5 * 4 + lVar13 + 0x10] / local_a0[uVar5 * 4 + lVar8 + 0x10];
      local_a0[lVar13] = local_a0[lVar13] - fVar15 * fVar16;
      if ((int)uVar10 == 0) {
        *(float *)((long)&local_50 + lVar14) =
             *(float *)((long)&local_50 + lVar14) - fVar15 * *(float *)((long)&local_50 + lVar8 * 4)
        ;
      }
      local_a0[lVar13 + 4] = local_a0[lVar13 + 4] - fVar15 * local_a0[lVar8 + 4];
      if ((int)unaff_x19 == 0) {
        *(float *)((long)&local_40 + lVar14) =
             *(float *)((long)&local_40 + lVar14) - fVar15 * *(float *)((long)&local_40 + lVar8 * 4)
        ;
      }
      fVar16 = *(float *)((long)&local_30 + lVar14);
      local_a0[lVar13 + 8] = local_a0[lVar13 + 8] - fVar15 * local_a0[lVar8 + 8];
      *(float *)((long)&local_30 + lVar14) = fVar16 - fVar15 * *(float *)((long)&local_30 + lVar7);
      local_a0[lVar13 + 0xc] = local_a0[lVar13 + 0xc] - fVar15 * local_a0[lVar8 + 0xc];
      if (uVar5 != 1) goto LAB_00515994;
LAB_00515a60:
      lVar13 = (long)local_b0[2];
      fVar15 = local_a0[uVar5 * 4 + lVar13 + 0x10] / local_a0[uVar5 * 4 + lVar8 + 0x10];
      if (uVar5 == 0) {
        local_a0[lVar13 + 0x10] = local_a0[lVar13 + 0x10] - fVar15 * *pfVar3;
      }
      lVar14 = lVar13 * 4;
      local_a0[lVar13] = local_a0[lVar13] - fVar15 * *pfVar2;
      if (uVar10 == 0) {
        *(float *)((long)&local_50 + lVar14) =
             *(float *)((long)&local_50 + lVar14) - fVar15 * *(float *)((long)&local_50 + lVar8 * 4)
        ;
      }
      local_a0[lVar13 + 4] = local_a0[lVar13 + 4] - fVar15 * local_a0[lVar8 + 4];
      if (unaff_x19 == 0) {
        *(float *)((long)&local_40 + lVar14) =
             *(float *)((long)&local_40 + lVar14) - fVar15 * *(float *)((long)&local_40 + lVar8 * 4)
        ;
      }
      fVar16 = *(float *)((long)&local_30 + lVar14);
      local_a0[lVar13 + 8] = local_a0[lVar13 + 8] - fVar15 * local_a0[lVar8 + 8];
      *(float *)((long)&local_30 + lVar14) = fVar16 - fVar15 * *(float *)((long)&local_30 + lVar7);
      local_a0[lVar13 + 0xc] = local_a0[lVar13 + 0xc] - fVar15 * local_a0[lVar8 + 0xc];
      if (uVar5 != 3) goto LAB_00515b2c;
    }
    if (3 < uVar1) {
      lVar11 = (long)local_b0[0];
      *param_1 = local_a0[lVar11];
      param_1[4] = local_a0[lVar11 + 4];
      param_1[8] = local_a0[lVar11 + 8];
      param_1[0xc] = local_a0[lVar11 + 0xc];
      lVar11 = (long)local_b0[1];
      param_1[1] = local_a0[lVar11];
      param_1[5] = local_a0[lVar11 + 4];
      param_1[9] = local_a0[lVar11 + 8];
      param_1[0xd] = local_a0[lVar11 + 0xc];
      lVar11 = (long)local_b0[2];
      param_1[2] = local_a0[lVar11];
      param_1[6] = local_a0[lVar11 + 4];
      fVar15 = local_a0[lVar11 + 8];
      param_1[0xe] = local_a0[lVar11 + 0xc];
      lVar11 = (long)local_b0[3];
      param_1[3] = local_a0[lVar11];
      param_1[7] = local_a0[lVar11 + 4];
      fVar16 = local_a0[lVar11 + 8];
      param_1[10] = fVar15;
      param_1[0xb] = fVar16;
      param_1[0xf] = local_a0[lVar11 + 0xc];
      return;
    }
    iVar6 = local_b0[uVar1];
    lVar11 = lVar11 + 1;
    uVar5 = uVar1;
  } while( true );
}


