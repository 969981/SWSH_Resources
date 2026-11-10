/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002354e0; name: FUN_002354e0
 */


float FUN_002354e0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_118;
  float fStack_114;
  float local_110;
  float local_108;
  float fStack_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_58;
  float local_54;
  
  fVar13 = *param_2;
  local_f4 = param_2[1];
  local_f0 = param_2[2];
  fVar14 = fVar13 * fVar13 + local_f4 * local_f4 + local_f0 * local_f0;
  if (fVar14 < DAT_01d4c1d0) {
    if (param_6 != (float *)0x0) {
      *param_6 = 0.0;
    }
    fStack_ac = param_4[1] + param_3[1];
    local_a8 = param_4[2] + param_3[2];
    local_b0 = *param_4 + *param_3;
    fStack_bc = param_3[1] + param_5[1];
    local_c0 = *param_3 + *param_5;
    local_b8 = param_3[2] + param_5[2];
    FUN_00236a20(&local_d0,param_1,param_3,&local_b0,&local_c0,&local_f8,&local_108);
    if (param_7 != (float *)0x0) {
      *param_7 = local_f8;
    }
    if (param_8 != (float *)0x0) {
      *param_8 = local_108;
    }
    return (local_d0 - *param_1) * (local_d0 - *param_1) +
           (local_cc - param_1[1]) * (local_cc - param_1[1]) +
           (local_c8 - param_1[2]) * (local_c8 - param_1[2]);
  }
  fVar1 = param_4[2];
  local_b8 = param_5[2];
  fVar3 = *param_4;
  fVar2 = param_4[1];
  local_c0 = *param_5;
  fStack_bc = param_5[1];
  fVar4 = fVar2 * local_b8 - fVar1 * fStack_bc;
  fVar5 = fVar1 * local_c0 - fVar3 * local_b8;
  fVar11 = fVar3 * fStack_bc - fVar2 * local_c0;
  fVar15 = local_f0 * fVar11 + fVar13 * fVar4 + local_f4 * fVar5;
  if (fVar15 * fVar15 < fVar14 * DAT_01d4c1cc * (fVar11 * fVar11 + fVar4 * fVar4 + fVar5 * fVar5)) {
    fVar13 = (float)FUN_00234f30(param_1,param_2,param_3,param_4,&local_d4,&local_d8);
    local_dc = 0.0;
    fVar14 = (float)FUN_00234f30(param_1,param_2,param_3,param_5,&local_e0,&local_e8);
    local_e4 = 0.0;
    if (fVar14 < fVar13) {
      local_d8 = 0.0;
      local_d4 = local_e0;
      local_dc = local_e8;
      fVar13 = fVar14;
    }
    local_f4 = param_3[1] + param_4[1];
    local_f0 = param_3[2] + param_4[2];
    local_f8 = *param_3 + *param_4;
    fStack_104 = param_5[1] - param_4[1];
    local_108 = *param_5 - *param_4;
    local_100 = param_5[2] - param_4[2];
    fVar14 = (float)FUN_00234f30(param_1,param_2,&local_f8,&local_108,&local_e0,&local_e8);
    local_e4 = 1.0 - local_e8;
    if (fVar14 < fVar13) {
      local_dc = local_e8;
      local_d4 = local_e0;
      fVar13 = fVar14;
      local_d8 = local_e4;
    }
    fStack_ac = param_4[1] + param_3[1];
    local_a8 = param_4[2] + param_3[2];
    local_b0 = *param_4 + *param_3;
    fStack_bc = param_3[1] + param_5[1];
    local_c0 = *param_3 + *param_5;
    local_b8 = param_3[2] + param_5[2];
    FUN_00236a20(&local_d0,param_1,param_3,&local_b0,&local_c0,&local_118,&local_54);
    local_e8 = local_54;
    local_e4 = local_118;
    fVar14 = local_d0 - *param_1;
    fVar1 = local_cc - param_1[1];
    local_e0 = 0.0;
    fVar2 = local_c8 - param_1[2];
    fVar14 = fVar14 * fVar14 + fVar1 * fVar1 + fVar2 * fVar2;
    if (fVar14 < fVar13) {
      local_d8 = local_118;
      local_d4 = 0.0;
      local_dc = local_54;
      fVar13 = fVar14;
    }
    local_118 = *param_1 + *param_2;
    fStack_114 = param_1[1] + param_2[1];
    local_110 = param_1[2] + param_2[2];
    fStack_ac = param_4[1] + param_3[1];
    local_b0 = *param_4 + *param_3;
    local_a8 = param_4[2] + param_3[2];
    fStack_bc = param_3[1] + param_5[1];
    local_c0 = *param_3 + *param_5;
    local_b8 = param_3[2] + param_5[2];
    FUN_00236a20(&local_d0,&local_118,param_3,&local_b0,&local_c0,&local_54,&local_58);
    local_d0 = local_d0 - local_118;
LAB_002358b8:
    fVar14 = local_d0 * local_d0 + (local_cc - fStack_114) * (local_cc - fStack_114) +
             (local_c8 - local_110) * (local_c8 - local_110);
    if (fVar14 < fVar13) {
      local_d4 = 1.0;
      local_d8 = local_54;
      fVar13 = fVar14;
      local_dc = local_58;
    }
    goto joined_r0x002363ec;
  }
  fVar4 = *param_3;
  fVar21 = param_3[1];
  fVar16 = fVar21 - param_1[1];
  fVar17 = fVar4 - *param_1;
  fVar25 = fVar13 * fVar3 + local_f4 * fVar2 + local_f0 * fVar1;
  fVar26 = fVar13 * local_c0 + local_f4 * fStack_bc + local_f0 * local_b8;
  fVar24 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar22 = fVar3 * local_c0 + fVar2 * fStack_bc + fVar1 * local_b8;
  fVar19 = param_3[2];
  fVar18 = fVar19 - param_1[2];
  fVar23 = local_c0 * local_c0 + fStack_bc * fStack_bc + local_b8 * local_b8;
  fVar7 = fVar13 * fVar17 + local_f4 * fVar16 + local_f0 * fVar18;
  fVar6 = fVar17 * fVar3 + fVar16 * fVar2 + fVar18 * fVar1;
  fVar5 = fVar17 * local_c0 + fVar16 * fStack_bc + fVar18 * local_b8;
  fVar8 = fVar24 * fVar23 - fVar22 * fVar22;
  fVar15 = fVar23 * fVar25 - fVar22 * fVar26;
  fVar11 = fVar24 * fVar26 - fVar22 * fVar25;
  fVar9 = (fVar14 * fVar8 - fVar15 * fVar25) - fVar11 * fVar26;
  fVar10 = fVar25 * fVar26 - fVar14 * fVar22;
  if (fVar9 == 0.0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = 1.0 / fVar9;
  }
  fVar12 = fVar7 * fVar9;
  fVar20 = fVar6 * fVar9;
  fVar9 = fVar5 * fVar9;
  local_d4 = (fVar8 * fVar12 - fVar15 * fVar20) - fVar11 * fVar9;
  local_d8 = (fVar15 * fVar12 - (fVar14 * fVar23 - fVar26 * fVar26) * fVar20) - fVar10 * fVar9;
  fVar15 = (fVar11 * fVar12 - fVar10 * fVar20) - (fVar14 * fVar24 - fVar25 * fVar25) * fVar9;
  fVar11 = local_d8 + fVar15;
  local_dc = fVar15;
  if (local_d4 < 0.0) {
    if (1.0 < fVar11) {
      if (0.0 <= local_d8) {
        if (0.0 <= fVar15) {
          local_b0 = fVar4 + fVar3;
          fStack_ac = fVar21 + fVar2;
          local_a8 = fVar19 + fVar1;
          local_c0 = local_c0 - fVar3;
          fStack_bc = fStack_bc - fVar2;
          local_b8 = local_b8 - fVar1;
          fVar13 = (float)FUN_00234f30(param_1,param_2,&local_b0,&local_c0,&local_d4,&local_dc);
          local_d8 = 1.0 - local_dc;
          goto LAB_00235e2c;
        }
        fVar13 = (float)FUN_00234f30(param_1,param_2,param_3,param_4,&local_d4,&local_d8);
        local_dc = 0.0;
      }
      else {
        fVar13 = (float)FUN_00234f30(param_1,param_2,param_3,param_5,&local_d4,&local_dc);
        local_d8 = 0.0;
      }
      fStack_ac = param_3[1] + param_4[1];
      local_a8 = param_3[2] + param_4[2];
      local_b0 = *param_3 + *param_4;
      fStack_bc = param_5[1] - param_4[1];
      local_c0 = *param_5 - *param_4;
      local_b8 = param_5[2] - param_4[2];
      fVar14 = (float)FUN_00234f30(param_1,param_2,&local_b0,&local_c0,&local_e0,&local_e8);
      local_e4 = 1.0 - local_e8;
      if (fVar14 < fVar13) {
        local_d4 = local_e0;
        local_dc = local_e8;
        local_d8 = local_e4;
LAB_00235cd4:
        fVar13 = fVar14;
        local_e8 = local_dc;
        local_e4 = local_d8;
      }
    }
    else if (local_d8 < 0.0) {
      fVar13 = (float)FUN_00234f30(param_1,param_2,param_3,param_5,&local_d4,&local_dc);
      local_d8 = 0.0;
      if (fVar15 < 0.0) {
        fVar14 = (float)FUN_00234f30(param_1,param_2,param_3,param_4,&local_e0,&local_e4);
        local_e8 = 0.0;
        if (fVar14 < fVar13) {
          local_d8 = local_e4;
          local_d4 = local_e0;
          local_dc = 0.0;
          goto LAB_00235cd4;
        }
      }
    }
    else {
      if (0.0 <= fVar15) {
        fStack_bc = fVar21 + fStack_bc;
        local_b0 = fVar4 + fVar3;
        fStack_ac = fVar21 + fVar2;
        local_a8 = fVar19 + fVar1;
        local_c0 = fVar4 + local_c0;
        local_b8 = fVar19 + local_b8;
        FUN_00236a20(&local_d0,param_1,param_3,&local_b0,&local_c0,&local_f8,&local_108);
        local_d4 = 0.0;
        local_d8 = local_f8;
        fVar13 = (local_d0 - *param_1) * (local_d0 - *param_1) +
                 (local_cc - param_1[1]) * (local_cc - param_1[1]) +
                 (local_c8 - param_1[2]) * (local_c8 - param_1[2]);
        local_dc = local_108;
        goto joined_r0x002363ec;
      }
      fVar13 = (float)FUN_00234f30(param_1,param_2,param_3,param_4,&local_d4,&local_d8);
      local_dc = 0.0;
    }
LAB_00235e2c:
    fStack_ac = param_4[1] + param_3[1];
    local_a8 = param_4[2] + param_3[2];
    local_b0 = *param_4 + *param_3;
    fStack_bc = param_3[1] + param_5[1];
    local_c0 = *param_3 + *param_5;
    local_b8 = param_3[2] + param_5[2];
    FUN_00236a20(&local_d0,param_1,param_3,&local_b0,&local_c0,&local_f8,&local_108);
    fVar14 = (local_d0 - *param_1) * (local_d0 - *param_1) +
             (local_cc - param_1[1]) * (local_cc - param_1[1]) +
             (local_c8 - param_1[2]) * (local_c8 - param_1[2]);
    if (fVar14 < fVar13) {
      local_d4 = 0.0;
      local_d8 = local_f8;
      fVar13 = fVar14;
      local_dc = local_108;
    }
    goto joined_r0x002363ec;
  }
  if (1.0 < local_d4) {
    if (1.0 < fVar11) {
      if (0.0 <= local_d8) {
        if (0.0 <= fVar15) {
          local_b0 = fVar4 + fVar3;
          fStack_ac = fVar21 + fVar2;
          local_a8 = fVar19 + fVar1;
          local_c0 = local_c0 - fVar3;
          fStack_bc = fStack_bc - fVar2;
          local_b8 = local_b8 - fVar1;
          fVar13 = (float)FUN_00234f30(param_1,param_2,&local_b0,&local_c0,&local_d4,&local_dc);
          local_d8 = 1.0 - local_dc;
          goto LAB_002362ec;
        }
        fVar13 = (float)FUN_00234f30(param_1,param_2,param_3,param_4,&local_d4,&local_d8);
        local_dc = 0.0;
      }
      else {
        fVar13 = (float)FUN_00234f30(param_1,param_2,param_3,param_5,&local_d4,&local_dc);
        local_d8 = 0.0;
      }
      fStack_ac = param_3[1] + param_4[1];
      local_a8 = param_3[2] + param_4[2];
      local_b0 = *param_3 + *param_4;
      fStack_bc = param_5[1] - param_4[1];
      local_c0 = *param_5 - *param_4;
      local_b8 = param_5[2] - param_4[2];
      fVar14 = (float)FUN_00234f30(param_1,param_2,&local_b0,&local_c0,&local_e0,&local_e8);
      local_e4 = 1.0 - local_e8;
      if (fVar14 < fVar13) {
        local_d4 = local_e0;
        local_dc = local_e8;
        local_d8 = local_e4;
LAB_00235fe8:
        fVar13 = fVar14;
        local_e8 = local_dc;
        local_e4 = local_d8;
      }
    }
    else if (0.0 <= local_d8) {
      if (0.0 <= fVar15) {
        local_f8 = fVar13 + *param_1;
        local_f4 = local_f4 + param_1[1];
        local_f0 = local_f0 + param_1[2];
        fStack_ac = fVar21 + fVar2;
        fStack_bc = fVar21 + fStack_bc;
        local_b0 = fVar4 + fVar3;
        local_c0 = fVar4 + local_c0;
        local_a8 = fVar19 + fVar1;
        local_b8 = fVar19 + local_b8;
        FUN_00236a20(&local_d0,&local_f8,param_3,&local_b0,&local_c0,&local_108,&local_118);
        local_d4 = 1.0;
        local_d8 = local_108;
        fVar13 = (local_d0 - local_f8) * (local_d0 - local_f8) +
                 (local_cc - local_f4) * (local_cc - local_f4) +
                 (local_c8 - local_f0) * (local_c8 - local_f0);
        local_dc = local_118;
        goto joined_r0x002363ec;
      }
      fVar13 = (float)FUN_00234f30(param_1,param_2,param_3,param_4,&local_d4,&local_d8);
      local_dc = 0.0;
    }
    else {
      fVar13 = (float)FUN_00234f30(param_1,param_2,param_3,param_5,&local_d4,&local_dc);
      local_d8 = 0.0;
      if (fVar15 < 0.0) {
        fVar14 = (float)FUN_00234f30(param_1,param_2,param_3,param_4,&local_e0,&local_e4);
        local_e8 = 0.0;
        if (fVar14 < fVar13) {
          local_d8 = local_e4;
          local_d4 = local_e0;
          local_dc = 0.0;
          goto LAB_00235fe8;
        }
      }
    }
LAB_002362ec:
    local_f4 = param_1[1] + param_2[1];
    local_f8 = *param_1 + *param_2;
    local_f0 = param_1[2] + param_2[2];
    fStack_ac = param_4[1] + param_3[1];
    local_b0 = *param_4 + *param_3;
    local_a8 = param_4[2] + param_3[2];
    fStack_bc = param_3[1] + param_5[1];
    local_c0 = *param_3 + *param_5;
    local_b8 = param_3[2] + param_5[2];
    FUN_00236a20(&local_d0,&local_f8,param_3,&local_b0,&local_c0,&local_108,&local_118);
    local_d0 = local_d0 - local_f8;
    fStack_114 = local_f4;
    local_110 = local_f0;
    local_58 = local_118;
    local_54 = local_108;
    goto LAB_002358b8;
  }
  if (fVar11 <= 1.0) {
    if (local_d8 < 0.0) {
      fVar13 = (float)FUN_00234f30(param_1,param_2,param_3,param_5,&local_d4,&local_dc);
      local_d8 = 0.0;
      if ((fVar15 < 0.0) &&
         (fVar14 = (float)FUN_00234f30(param_1,param_2,param_3,param_4,&local_e0,&local_e4),
         fVar14 < fVar13)) {
        local_dc = 0.0;
        local_d8 = local_e4;
        fVar13 = fVar14;
        local_d4 = local_e0;
      }
    }
    else if (fVar15 < 0.0) {
      fVar13 = (float)FUN_00234f30(param_1,param_2,param_3,param_4,&local_d4,&local_d8);
      local_dc = 0.0;
    }
    else {
      fVar13 = fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18 +
               fVar15 * (fVar5 + fVar5 + fVar23 * fVar15 + local_d4 * -fVar26 + fVar22 * local_d8) +
               local_d4 *
               ((fVar15 * -fVar26 + fVar14 * local_d4 + local_d8 * -fVar25) - (fVar7 + fVar7)) +
               local_d8 * (fVar6 + fVar6 + fVar22 * fVar15 + local_d4 * -fVar25 + fVar24 * local_d8)
      ;
    }
    goto joined_r0x002363ec;
  }
  if (0.0 <= local_d8) {
    if (fVar15 < 0.0) {
      fVar13 = (float)FUN_00234f30(param_1,param_2,param_3,param_4,&local_d4,&local_d8);
      local_dc = 0.0;
      goto LAB_002360b8;
    }
    local_b0 = fVar4 + fVar3;
    fStack_ac = fVar21 + fVar2;
    local_a8 = fVar19 + fVar1;
    local_c0 = local_c0 - fVar3;
    fStack_bc = fStack_bc - fVar2;
    local_b8 = local_b8 - fVar1;
    fVar14 = (float)FUN_00234f30(param_1,param_2,&local_b0,&local_c0,&local_d4,&local_dc);
  }
  else {
    fVar13 = (float)FUN_00234f30(param_1,param_2,param_3,param_5,&local_d4,&local_dc);
    local_d8 = 0.0;
LAB_002360b8:
    fStack_ac = param_3[1] + param_4[1];
    local_a8 = param_3[2] + param_4[2];
    local_b0 = *param_3 + *param_4;
    fStack_bc = param_5[1] - param_4[1];
    local_c0 = *param_5 - *param_4;
    local_b8 = param_5[2] - param_4[2];
    fVar14 = (float)FUN_00234f30(param_1,param_2,&local_b0,&local_c0,&local_e0,&local_e8);
    if (fVar13 <= fVar14) goto joined_r0x002363ec;
    local_dc = local_e8;
    local_d4 = local_e0;
  }
  local_d8 = 1.0 - local_dc;
  fVar13 = fVar14;
joined_r0x002363ec:
  if (param_6 != (float *)0x0) {
    *param_6 = local_d4;
  }
  if (param_7 != (float *)0x0) {
    *param_7 = local_d8;
  }
  if (param_8 != (float *)0x0) {
    *param_8 = local_dc;
  }
  return fVar13;
}


