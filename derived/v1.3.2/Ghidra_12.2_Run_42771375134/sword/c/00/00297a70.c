/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00297a70; name: FUN_00297a70
 */


undefined8
FUN_00297a70(ulong param_1,float *param_2,float *param_3,float *param_4,byte *param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  int iVar7;
  long lVar8;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float fStack_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d0;
  float fStack_2cc;
  float local_2c8;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b0;
  float fStack_2ac;
  float local_2a8;
  float local_2a0 [36];
  float local_210 [36];
  undefined8 local_180;
  float local_178;
  undefined8 local_170;
  float local_168;
  float local_160 [24];
  float local_100 [24];
  
  if (((*param_5 >> 4 & 1) == 0) &&
     (uVar2 = FUN_00298560(param_2 + 0xc,param_2 + 9,param_2,param_3 + 0xc,param_3 + 9,param_3,1),
     (uVar2 & 1) != 0)) {
    *(undefined4 *)(param_6 + 0x30) = 0;
    *(undefined2 *)(param_6 + 0x14) = 6;
    fVar10 = param_4[1];
    fVar13 = param_4[2];
    *(float *)(param_6 + 0x24) = -*param_4;
    *(float *)(param_6 + 0x28) = -fVar10;
    *(float *)(param_6 + 0x2c) = -fVar13;
  }
  else {
    FUN_00295e20(local_100,param_2 + 9,param_2 + 0xc,param_2,param_2 + 3,param_2 + 6);
    FUN_00295e20(local_160,param_3 + 9,param_3 + 0xc,param_3,param_3 + 3,param_3 + 6);
    local_2a0[0] = param_2[0xc];
    local_2a0[1] = param_2[0xd];
    local_2a0[2] = param_2[0xe];
    local_210[1] = -local_2a0[1];
    local_210[2] = -local_2a0[2];
    local_210[0] = -local_2a0[0];
    lVar5 = 0;
    fVar28 = *param_2;
    fVar26 = param_2[1];
    iVar7 = -1;
    fVar27 = param_2[4];
    fVar31 = param_2[5];
    fVar29 = param_2[2];
    fVar30 = param_2[3];
    fVar13 = param_2[10];
    fVar14 = param_2[0xb];
    fVar16 = *param_4;
    fVar17 = param_4[1];
    fVar32 = param_2[8];
    fVar24 = param_2[6];
    fVar25 = param_2[7];
    fVar10 = -param_2[9];
    local_308 = (fVar28 * fVar10 - fVar26 * fVar13) - fVar29 * fVar14;
    fVar11 = param_4[2];
    do {
      fVar9 = *(float *)((long)local_160 + lVar5);
      fVar12 = *(float *)((long)local_160 + lVar5 + 4);
      local_180 = CONCAT44(-(fVar30 * fVar16 + fVar27 * fVar17 + fVar31 * fVar11),
                           -(fVar28 * fVar16 + fVar26 * fVar17 + fVar29 * fVar11));
      fVar15 = *(float *)((long)local_160 + lVar5 + 8);
      local_168 = ((fVar24 * fVar10 - fVar25 * fVar13) - fVar32 * fVar14) +
                  fVar24 * fVar9 + fVar25 * fVar12 + fVar32 * fVar15;
      local_170 = CONCAT44(((fVar30 * fVar10 - fVar27 * fVar13) - fVar31 * fVar14) +
                           fVar30 * fVar9 + fVar27 * fVar12 + fVar31 * fVar15,
                           local_308 + fVar28 * fVar9 + fVar26 * fVar12 + fVar29 * fVar15);
      local_178 = -(fVar24 * fVar16 + fVar25 * fVar17 + fVar32 * fVar11);
      iVar1 = FUN_00239e60(local_210,local_2a0,&local_170,&local_180,&local_2b0,&local_2c0);
      if (((local_2b0 <= (float)param_1) && (iVar1 != -1)) && (0.0 <= local_2b0)) {
        lVar3 = (long)iVar1 * 0xc;
        fVar9 = param_2[1];
        fVar19 = param_2[2];
        fVar12 = *(float *)(&DAT_01d4d42c + lVar3);
        fVar15 = *(float *)(&DAT_01d4d430 + lVar3);
        fVar20 = param_2[4];
        fVar22 = param_2[5];
        fVar18 = *(float *)(&DAT_01d4d434 + lVar3);
        fVar23 = param_2[8];
        fVar21 = param_2[7];
        *(float *)(param_6 + 0x24) = fVar12 * *param_2 + fVar15 * param_2[3] + fVar18 * param_2[6];
        *(float *)(param_6 + 0x28) = fVar12 * fVar9 + fVar15 * fVar20 + fVar18 * fVar21;
        *(float *)(param_6 + 0x2c) = fVar12 * fVar19 + fVar15 * fVar22 + fVar18 * fVar23;
        *(float *)(param_6 + 0x18) = *(float *)((long)local_160 + lVar5);
        *(undefined4 *)(param_6 + 0x1c) = *(undefined4 *)((long)local_160 + lVar5 + 4);
        iVar7 = 0;
        *(undefined4 *)(param_6 + 0x20) = *(undefined4 *)((long)local_160 + lVar5 + 8);
        param_1 = (ulong)(uint)local_2b0;
      }
      lVar5 = lVar5 + 0xc;
    } while (lVar5 != 0x60);
    local_2a0[0] = param_3[0xc];
    local_2a0[1] = param_3[0xd];
    local_2a0[2] = param_3[0xe];
    local_210[1] = -local_2a0[1];
    local_210[2] = -local_2a0[2];
    local_210[0] = -local_2a0[0];
    lVar5 = 0;
    fVar26 = param_3[8];
    fVar10 = -param_3[9];
    local_2f4 = *param_3;
    fVar27 = param_3[1];
    fVar16 = param_3[10];
    fVar17 = param_3[0xb];
    fVar24 = param_3[4];
    fVar25 = param_3[5];
    fVar28 = param_3[2];
    local_2f8 = param_3[3];
    local_2fc = param_3[6];
    fVar29 = param_3[7];
    fVar13 = *param_4;
    fVar11 = param_4[1];
    local_300 = (local_2f4 * fVar10 - fVar27 * fVar16) - fVar28 * fVar17;
    local_304 = (local_2f8 * fVar10 - fVar24 * fVar16) - fVar25 * fVar17;
    fVar14 = param_4[2];
    local_168 = local_2fc * fVar13 + fVar29 * fVar11 + fVar26 * fVar14;
    local_170 = CONCAT44(local_2f8 * fVar13 + fVar24 * fVar11 + fVar25 * fVar14,
                         local_2f4 * fVar13 + fVar27 * fVar11 + fVar28 * fVar14);
    do {
      fVar13 = *(float *)((long)local_100 + lVar5);
      fVar11 = *(float *)((long)local_100 + lVar5 + 4);
      fVar14 = *(float *)((long)local_100 + lVar5 + 8);
      local_178 = ((local_2fc * fVar10 - fVar29 * fVar16) - fVar26 * fVar17) +
                  local_2fc * fVar13 + fVar29 * fVar11 + fVar26 * fVar14;
      local_180 = CONCAT44(local_304 + local_2f8 * fVar13 + fVar24 * fVar11 + fVar25 * fVar14,
                           local_300 + local_2f4 * fVar13 + fVar27 * fVar11 + fVar28 * fVar14);
      iVar1 = FUN_00239e60(local_210,local_2a0,&local_180,&local_170,&local_2b0,&local_2c0);
      if (((local_2b0 <= (float)param_1) && (iVar1 != -1)) && (0.0 <= local_2b0)) {
        lVar3 = (long)iVar1 * 0xc;
        fVar11 = param_3[4];
        fVar14 = param_3[6];
        fVar30 = param_3[7];
        fVar13 = param_3[3];
        fVar12 = *(float *)(&DAT_01d4d434 + lVar3);
        fVar32 = *(float *)(&DAT_01d4d430 + lVar3);
        fVar9 = *param_3;
        fVar15 = param_3[1];
        fVar31 = -*(float *)(&DAT_01d4d42c + lVar3);
        *(float *)(param_6 + 0x2c) =
             (param_3[2] * fVar31 - param_3[5] * fVar32) - param_3[8] * fVar12;
        *(float *)(param_6 + 0x24) = (fVar9 * fVar31 - fVar13 * fVar32) - fVar14 * fVar12;
        *(float *)(param_6 + 0x28) = (fVar15 * fVar31 - fVar11 * fVar32) - fVar30 * fVar12;
        fVar11 = param_4[2];
        fVar13 = param_4[1];
        fVar14 = *(float *)((long)local_100 + lVar5 + 4);
        fVar30 = *(float *)((long)local_100 + lVar5 + 8);
        iVar7 = 1;
        *(float *)(param_6 + 0x18) = local_2b0 * *param_4 + *(float *)((long)local_100 + lVar5);
        *(float *)(param_6 + 0x1c) = local_2b0 * fVar13 + fVar14;
        *(float *)(param_6 + 0x20) = local_2b0 * fVar11 + fVar30;
        param_1 = (ulong)(uint)local_2b0;
      }
      lVar5 = lVar5 + 0xc;
    } while (lVar5 != 0x60);
    lVar3 = FUN_00295e10();
    lVar4 = FUN_00295e10();
    fVar10 = *param_2;
    fVar13 = param_2[1];
    fVar26 = param_2[8];
    fVar11 = param_2[2];
    fVar14 = param_2[3];
    fVar16 = param_2[4];
    fVar17 = param_2[5];
    fVar24 = param_2[6];
    fVar25 = param_2[7];
    lVar5 = 0;
    do {
      fVar27 = *(float *)((long)&DAT_01d4d474 + lVar5);
      fVar28 = *(float *)((long)&DAT_01d4d478 + lVar5);
      fVar29 = *(float *)((long)&DAT_01d4d47c + lVar5);
      *(float *)((long)local_210 + lVar5) = fVar27 * fVar10 + fVar28 * fVar14 + fVar29 * fVar24;
      pfVar6 = (float *)(((ulong)local_210 | 4) + lVar5);
      lVar5 = lVar5 + 0xc;
      *pfVar6 = fVar27 * fVar13 + fVar28 * fVar16 + fVar29 * fVar25;
      pfVar6[1] = fVar27 * fVar11 + fVar28 * fVar17 + fVar29 * fVar26;
    } while (lVar5 != 0x90);
    fVar10 = *param_3;
    fVar13 = param_3[1];
    fVar26 = param_3[8];
    fVar11 = param_3[2];
    fVar14 = param_3[3];
    fVar16 = param_3[4];
    fVar17 = param_3[5];
    lVar5 = 0;
    fVar24 = param_3[6];
    fVar25 = param_3[7];
    do {
      fVar27 = *(float *)((long)&DAT_01d4d474 + lVar5);
      fVar28 = *(float *)((long)&DAT_01d4d478 + lVar5);
      fVar29 = *(float *)((long)&DAT_01d4d47c + lVar5);
      *(float *)((long)local_2a0 + lVar5) = fVar27 * fVar10 + fVar28 * fVar14 + fVar29 * fVar24;
      pfVar6 = (float *)(((ulong)local_2a0 | 4) + lVar5);
      lVar5 = lVar5 + 0xc;
      *pfVar6 = fVar27 * fVar13 + fVar28 * fVar16 + fVar29 * fVar25;
      pfVar6[1] = fVar27 * fVar11 + fVar28 * fVar17 + fVar29 * fVar26;
      fVar27 = DAT_01d4c4d4;
    } while (lVar5 != 0x90);
    lVar5 = 0;
    do {
      fVar10 = local_210[lVar5 * 3];
      fVar13 = local_210[lVar5 * 3 + 1];
      fVar11 = local_210[lVar5 * 3 + 2];
      if (0.0 <= fVar10 * *param_4 + fVar13 * param_4[1] + fVar11 * param_4[2]) {
        uVar2 = (ulong)*(byte *)(lVar3 + lVar5 * 2);
        local_2b0 = local_100[uVar2 * 3];
        fStack_2ac = local_100[uVar2 * 3 + 1];
        local_2a8 = local_100[uVar2 * 3 + 2];
        uVar2 = (ulong)*(byte *)(lVar3 + (lVar5 << 1 | 1U));
        local_2c0 = local_100[uVar2 * 3];
        local_2bc = local_100[uVar2 * 3 + 1];
        local_2b8 = local_100[uVar2 * 3 + 2];
        fVar16 = local_2c0 - local_2b0;
        fVar17 = local_2bc - fStack_2ac;
        fVar24 = local_2b8 - local_2a8;
        fVar14 = sqrtf(fVar16 * fVar16 + fVar17 * fVar17 + fVar24 * fVar24);
        if (0.0 < fVar14) {
          fVar14 = fVar27 / fVar14;
          local_2b0 = local_2b0 - fVar16 * fVar14;
          fStack_2ac = fStack_2ac - fVar17 * fVar14;
          local_2c0 = fVar16 * fVar14 + local_2c0;
          local_2bc = fVar17 * fVar14 + local_2bc;
          local_2a8 = local_2a8 - fVar24 * fVar14;
          local_2b8 = fVar24 * fVar14 + local_2b8;
        }
        lVar8 = 0;
        pfVar6 = (float *)((ulong)local_2a0 | 4);
        do {
          if ((pfVar6[-1] * *param_4 + *pfVar6 * param_4[1] + pfVar6[1] * param_4[2] < 0.0) &&
             (pfVar6[-1] * fVar10 + *pfVar6 * fVar13 + pfVar6[1] * fVar11 < 0.0)) {
            uVar2 = (ulong)*(byte *)(lVar4 + lVar8);
            local_2d0 = local_160[uVar2 * 3];
            fStack_2cc = local_160[uVar2 * 3 + 1];
            local_2c8 = local_160[uVar2 * 3 + 2];
            uVar2 = (ulong)((byte *)(lVar4 + lVar8))[1];
            local_2e0 = local_160[uVar2 * 3];
            local_2dc = local_160[uVar2 * 3 + 1];
            local_2d8 = local_160[uVar2 * 3 + 2];
            fVar16 = local_2e0 - local_2d0;
            fVar17 = local_2dc - fStack_2cc;
            fVar24 = local_2d8 - local_2c8;
            fVar14 = sqrtf(fVar16 * fVar16 + fVar17 * fVar17 + fVar24 * fVar24);
            if (0.0 < fVar14) {
              fVar14 = fVar27 / fVar14;
              local_2d0 = local_2d0 - fVar16 * fVar14;
              fStack_2cc = fStack_2cc - fVar17 * fVar14;
              local_2e0 = fVar16 * fVar14 + local_2e0;
              local_2dc = fVar17 * fVar14 + local_2dc;
              local_2c8 = local_2c8 - fVar24 * fVar14;
              local_2d8 = fVar24 * fVar14 + local_2d8;
            }
            uVar2 = FUN_00239870(&local_2b0,&local_2c0,param_4,&local_2d0,&local_2e0,&local_2e4,
                                 &local_2f0);
            if ((local_2e4 <= (float)param_1) && ((uVar2 & 1) != 0)) {
              local_170 = CONCAT44(fStack_2ac,local_2b0);
              local_168 = local_2a8;
              local_180 = CONCAT44(fStack_2cc,local_2d0);
              local_178 = local_2c8;
              fVar14 = *param_4;
              fVar16 = param_4[1];
              local_308 = local_2c0;
              local_304 = local_2bc;
              local_2fc = local_2b8;
              local_300 = local_2e0;
              local_2f8 = local_2dc;
              iVar7 = 2;
              *(float *)(param_6 + 0x20) = local_2e4 * param_4[2] + local_2e8;
              local_2f4 = local_2d8;
              *(float *)(param_6 + 0x18) = local_2e4 * fVar14 + local_2f0;
              *(float *)(param_6 + 0x1c) = local_2e4 * fVar16 + fStack_2ec;
              param_1 = (ulong)(uint)local_2e4;
            }
          }
          lVar8 = lVar8 + 2;
          pfVar6 = pfVar6 + 3;
        } while (lVar8 != 0x18);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0xc);
    if (iVar7 == -1) {
      return 0;
    }
    if (iVar7 == 2) {
      local_210[0] = local_308 - (float)local_170;
      local_210[1] = local_304 - local_170._4_4_;
      local_210[2] = local_2fc - local_168;
      local_2a0[0] = local_300 - (float)local_180;
      local_2a0[1] = local_2f8 - local_180._4_4_;
      local_2a0[2] = local_2f4 - local_178;
      FUN_0024ac90(param_1,param_6 + 0x24,&local_170,local_210,&local_180,local_2a0,param_4);
      fVar10 = sqrtf(*(float *)(param_6 + 0x24) * *(float *)(param_6 + 0x24) +
                     *(float *)(param_6 + 0x28) * *(float *)(param_6 + 0x28) +
                     *(float *)(param_6 + 0x2c) * *(float *)(param_6 + 0x2c));
      if (0.0 < fVar10) {
        fVar10 = 1.0 / fVar10;
        *(float *)(param_6 + 0x24) = fVar10 * *(float *)(param_6 + 0x24);
        *(float *)(param_6 + 0x28) = fVar10 * *(float *)(param_6 + 0x28);
        *(float *)(param_6 + 0x2c) = fVar10 * *(float *)(param_6 + 0x2c);
      }
    }
    *(undefined2 *)(param_6 + 0x14) = 7;
    *(int *)(param_6 + 0x30) = (int)param_1;
  }
  return 1;
}


