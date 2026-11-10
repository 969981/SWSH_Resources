/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0074b230; name: FUN_0074b230
 */


void FUN_0074b230(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined1 param_5 [16],long param_6,float *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  float extraout_s0;
  float extraout_var;
  float fVar6;
  float extraout_var_00;
  float extraout_var_01;
  undefined1 auVar5 [16];
  float fVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fStack_1c4;
  float local_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_70;
  
  uVar26 = param_5._8_8_;
  uVar23 = param_5._0_8_;
  uVar19 = param_4._8_8_;
  uVar16 = param_4._0_8_;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  fVar6 = (float)*(undefined8 *)(param_6 + 0x38) - *(float *)(param_6 + 0x28);
  uVar9 = (ulong)(uint)fVar6;
  uVar12 = 0;
  if ((((fVar6 <= 0.0) ||
       ((float)*(undefined8 *)(param_6 + 0x30) - *(float *)(param_6 + 0x20) <= 0.0)) ||
      ((float)((ulong)*(undefined8 *)(param_6 + 0x30) >> 0x20) - *(float *)(param_6 + 0x24) <= 0.0))
     || ((fVar6 = *param_7, fVar6 == 0.0 && (param_7[1] == 0.0)))) {
    uVar12 = *(undefined8 *)(PTR_DAT_027159c0 + 0x10);
    uVar26 = *(undefined8 *)(PTR_DAT_027159c0 + 0x18);
    uVar16 = *(undefined8 *)PTR_DAT_027159c0;
    uVar1 = *(undefined8 *)(PTR_DAT_027159c0 + 8);
    uVar19 = *(undefined8 *)(PTR_DAT_027159c0 + 0x30);
    uVar2 = *(undefined8 *)(PTR_DAT_027159c0 + 0x38);
    uVar23 = *(undefined8 *)(PTR_DAT_027159c0 + 0x20);
    uVar3 = *(undefined8 *)(PTR_DAT_027159c0 + 0x28);
    param_1[2] = uVar12;
    param_1[3] = uVar26;
    *param_1 = uVar16;
    param_1[1] = uVar1;
    param_1[6] = uVar19;
    param_1[7] = uVar2;
    param_1[4] = uVar23;
    param_1[5] = uVar3;
    param_1[0xc] = uVar23;
    param_1[0xd] = uVar3;
    param_1[10] = uVar12;
    param_1[0xb] = uVar26;
    param_1[8] = uVar16;
    param_1[9] = uVar1;
    param_1[0xe] = uVar19;
    param_1[0xf] = uVar2;
    param_1[0x12] = uVar12;
    param_1[0x13] = uVar26;
    param_1[0x10] = uVar16;
    param_1[0x11] = uVar1;
    param_1[0x16] = uVar19;
    param_1[0x17] = uVar2;
    param_1[0x14] = uVar23;
    param_1[0x15] = uVar3;
    param_1[0x1a] = uVar12;
    param_1[0x1b] = uVar26;
    param_1[0x18] = uVar16;
    param_1[0x19] = uVar1;
    param_1[0x1e] = uVar19;
    param_1[0x1f] = uVar2;
    param_1[0x1c] = uVar23;
    param_1[0x1d] = uVar3;
  }
  else {
    FUN_0074a7a0(param_6);
    if (*(char *)(param_6 + 0x10) != '\0') {
      fVar7 = (float)uVar9;
      fVar10 = (float)(uVar9 >> 0x20);
      fVar11 = (float)uVar12;
      param_1 = param_1 + 4;
      uVar4 = 1;
      fVar13 = (float)((ulong)uVar12 >> 0x20);
      fVar14 = (float)uVar16;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar18 = (float)uVar19;
      fVar20 = (float)((ulong)uVar19 >> 0x20);
      fVar21 = (float)uVar23;
      fVar24 = (float)((ulong)uVar23 >> 0x20);
      fVar25 = (float)uVar26;
      fVar27 = (float)((ulong)uVar26 >> 0x20);
      auVar5 = NEON_fmov(0x3f800000,4);
      local_a0 = extraout_s0;
      fStack_9c = extraout_var;
      fStack_98 = extraout_var_00;
      fStack_94 = extraout_var_01;
      uStack_90 = uVar9;
      uStack_88 = uVar12;
      local_80 = uVar16;
      uStack_70 = uVar23;
      while( true ) {
        FUN_0074b560(&local_c0,fVar6,param_7[uVar4],*(undefined4 *)(param_6 + 0x48),
                     *(undefined4 *)(param_6 + 0x4c),param_6,&local_a0);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,0xbf800000);
        fVar8 = (float)((ulong)local_b0 >> 0x20);
        fVar28 = fVar8 - fStack_bc;
        fVar6 = (float)local_b0 - local_c0;
        fVar22 = -(local_c0 + (float)local_b0) / fVar6;
        fVar6 = 2.0 / fVar6;
        fVar8 = -(fStack_bc + fVar8) / fVar28;
        fStack_1c4 = auVar5._12_4_;
        fVar28 = 2.0 / fVar28;
        fVar29 = 2.0 / ((float)uStack_a8 + 1.0);
        fVar15 = ((float)uStack_a8 + -1.0) * -0.5 * fVar29;
        param_1[-3] = CONCAT44(extraout_s0 * 0.0 + extraout_var * 0.0 + extraout_var_00 * 0.0 +
                               extraout_var_01 * fStack_1c4,
                               extraout_s0 * 0.0 + extraout_var * 0.0 + extraout_var_00 * fVar29 +
                               extraout_var_01 * fVar15);
        param_1[-4] = CONCAT44(extraout_s0 * 0.0 + extraout_var * fVar28 + extraout_var_00 * 0.0 +
                               extraout_var_01 * fVar8,
                               extraout_s0 * fVar6 + extraout_var * 0.0 + extraout_var_00 * 0.0 +
                               extraout_var_01 * fVar22);
        param_1[-1] = CONCAT44(fVar7 * 0.0 + fVar10 * 0.0 + fVar11 * 0.0 + fVar13 * fStack_1c4,
                               fVar7 * 0.0 + fVar10 * 0.0 + fVar11 * fVar29 + fVar13 * fVar15);
        param_1[-2] = CONCAT44(fVar7 * 0.0 + fVar10 * fVar28 + fVar11 * 0.0 + fVar13 * fVar8,
                               fVar7 * fVar6 + fVar10 * 0.0 + fVar11 * 0.0 + fVar13 * fVar22);
        param_1[1] = CONCAT44(fVar14 * 0.0 + fVar17 * 0.0 + fVar18 * 0.0 + fVar20 * fStack_1c4,
                              fVar14 * 0.0 + fVar17 * 0.0 + fVar18 * fVar29 + fVar20 * fVar15);
        *param_1 = CONCAT44(fVar14 * 0.0 + fVar17 * fVar28 + fVar18 * 0.0 + fVar20 * fVar8,
                            fVar14 * fVar6 + fVar17 * 0.0 + fVar18 * 0.0 + fVar20 * fVar22);
        param_1[3] = CONCAT44(fVar21 * 0.0 + fVar24 * 0.0 + fVar25 * 0.0 + fVar27 * fStack_1c4,
                              fVar21 * 0.0 + fVar24 * 0.0 + fVar25 * fVar29 + fVar27 * fVar15);
        param_1[2] = CONCAT44(fVar21 * 0.0 + fVar24 * fVar28 + fVar25 * 0.0 + fVar27 * fVar8,
                              fVar21 * fVar6 + fVar24 * 0.0 + fVar25 * 0.0 + fVar27 * fVar22);
        if (*(byte *)(param_6 + 0x10) <= uVar4) break;
        fVar6 = param_7[uVar4];
        param_1 = param_1 + 8;
        uVar4 = uVar4 + 1;
      }
    }
  }
  return;
}


