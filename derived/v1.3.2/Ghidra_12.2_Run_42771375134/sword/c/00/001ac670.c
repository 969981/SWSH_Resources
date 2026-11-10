/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ac670; name: FUN_001ac670
 */


void FUN_001ac670(float param_1,long param_2,uint param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  ulong uVar8;
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
  float local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_48;
  float local_44;
  
  if (param_3 != 0) {
    uVar8 = (ulong)param_3;
    do {
      while( true ) {
        fVar11 = 0.0;
        fVar10 = *(float *)(param_4 + 4);
        fVar9 = *(float *)(param_4 + 8);
        pfVar7 = (float *)(param_2 + 0x78);
        fVar25 = *pfVar7;
        fVar20 = *(float *)(param_2 + 0x7c);
        fVar21 = *(float *)(param_2 + 0x80);
        fVar13 = (fVar20 * fVar20 + fVar21 * fVar21) - fVar10 * fVar10;
        fVar19 = -fVar9;
        fVar14 = fVar9 * fVar9 + fVar25 * fVar25 + fVar13;
        fVar16 = (fVar9 + fVar9) * fVar25;
        fVar18 = fVar14 - fVar16;
        fVar16 = fVar16 + fVar14;
        local_94 = fVar9;
        local_48 = fVar10;
        local_44 = param_1;
        if ((fVar9 < fVar25) || (fVar25 < fVar19)) break;
        if ((0.0 <= fVar16) && ((0.0 <= fVar13 && (0.0 <= fVar18)))) goto LAB_001ac9cc;
code_r0x001acaa8:
        fVar13 = fVar25;
        if (fVar25 <= fVar19) {
          fVar13 = fVar19;
        }
        if (fVar9 <= fVar13) {
          fVar13 = fVar9;
        }
        fVar25 = fVar25 - fVar13;
        fVar9 = fVar11;
        if ((((fVar21 != 0.0) || (fVar20 != 0.0)) || (fVar14 = 1.0, fVar25 != 0.0)) &&
           (fVar16 = fVar21 * fVar21 + fVar20 * fVar20 + fVar25 * fVar25, fVar14 = fVar11,
           0.0 < fVar16)) {
          fVar9 = sqrtf(fVar16);
          fVar9 = 1.0 / fVar9;
          fVar11 = fVar25 * fVar9;
          fVar14 = fVar20 * fVar9;
          fVar9 = fVar21 * fVar9;
        }
        fVar10 = *(float *)(param_2 + 0x5c) + fVar10;
        *(float *)(param_2 + 0xa0) = fVar11;
        *(float *)(param_2 + 0xa4) = fVar14;
        *(float *)(param_2 + 0xa8) = fVar9;
        *(undefined4 *)(param_2 + 0x2c) = 0;
        *(float *)(param_2 + 0xb8) = fVar13 + fVar11 * fVar10;
        *(float *)(param_2 + 0xbc) = fVar14 * fVar10 + 0.0;
        *(float *)(param_2 + 0xc0) = fVar9 * fVar10 + 0.0;
LAB_001acb50:
        uVar6 = *(uint *)(param_2 + 0x84) | 8;
LAB_001acb58:
        *(uint *)(param_2 + 0x84) = uVar6;
joined_r0x001ac7f0:
        uVar8 = uVar8 - 1;
        param_2 = param_2 + 200;
        if (uVar8 == 0) {
          return;
        }
      }
      if ((fVar18 < 0.0) || (fVar16 < 0.0)) goto code_r0x001acaa8;
LAB_001ac9cc:
      fVar12 = *(float *)(param_2 + 0x90);
      fVar17 = *(float *)(param_2 + 0x88);
      fVar15 = *(float *)(param_2 + 0x8c);
      fVar24 = fVar15 - fVar20;
      fVar22 = fVar12 - fVar21;
      fVar23 = fVar17 - fVar25;
      fVar20 = fVar20 * fVar24 + fVar21 * fVar22;
      fVar11 = fVar24 * fVar24 + fVar22 * fVar22;
      local_a0 = fVar23 * fVar23 + fVar11;
      fVar14 = fVar20 * fVar20 - fVar13 * fVar11;
      local_b0 = fVar23;
      fStack_ac = fVar24;
      local_a8 = fVar22;
      fStack_9c = fVar11;
      local_98 = local_a0;
      if (fVar14 < 0.0) {
LAB_001aca24:
        if ((*(byte *)(param_2 + 0x84) >> 1 & 1) == 0) {
          fVar11 = fVar17;
          if (fVar17 <= fVar19) {
            fVar11 = fVar19;
          }
          if (fVar9 <= fVar11) {
            fVar11 = fVar9;
          }
          fVar17 = fVar17 - fVar11;
          *(float *)(param_2 + 0xa0) = fVar17;
          *(float *)(param_2 + 0xa4) = fVar15;
          fVar17 = fVar17 * fVar17;
          fVar15 = fVar15 * fVar15;
          *(float *)(param_2 + 0xa8) = fVar12;
LAB_001aca50:
          fVar9 = sqrtf(fVar12 * fVar12 + fVar15 + fVar17);
          fVar13 = 0.0;
          if (fVar10 + param_1 <= fVar9) goto joined_r0x001ac7f0;
          if (fVar9 == 0.0) {
            *(undefined8 *)(param_2 + 0xa0) = 0;
            *(undefined4 *)(param_2 + 0xa8) = 0;
            fVar14 = fVar13;
            fVar16 = fVar13;
          }
          else {
            fVar13 = 1.0 / fVar9;
            fVar16 = fVar13 * *(float *)(param_2 + 0xa0);
            fVar14 = fVar13 * *(float *)(param_2 + 0xa4);
            fVar13 = fVar13 * *(float *)(param_2 + 0xa8);
            *(float *)(param_2 + 0xa0) = fVar16;
            *(float *)(param_2 + 0xa4) = fVar14;
            *(float *)(param_2 + 0xa8) = fVar13;
          }
          fVar10 = *(float *)(param_2 + 0x5c) + fVar10;
          uVar6 = *(uint *)(param_2 + 0x84);
          *(uint *)(param_2 + 0x84) = uVar6 | 0x20;
          *(float *)(param_2 + 0xb8) = fVar11 + fVar16 * fVar10;
          *(float *)(param_2 + 0xbc) = fVar14 * fVar10 + 0.0;
          *(float *)(param_2 + 0xc0) = fVar13 * fVar10 + 0.0;
          if (fVar10 <= fVar9) goto joined_r0x001ac7f0;
          uVar6 = uVar6 | 0x30;
          goto LAB_001acb58;
        }
        goto joined_r0x001ac7f0;
      }
      fVar21 = fVar25 * fVar23 + fVar20;
      fVar26 = fVar21 - fVar23 * fVar9;
      fVar21 = fVar23 * fVar9 + fVar21;
      fVar18 = fVar26 * fVar26 - fVar18 * local_a0;
      fVar16 = fVar21 * fVar21 - fVar16 * local_a0;
      if (fVar13 < 0.0) {
        if (fVar25 <= 0.0) {
          pfVar4 = &local_b4;
          pfVar5 = &local_98;
          local_b4 = fVar19;
        }
        else {
          pfVar4 = &local_94;
          pfVar5 = &local_a0;
          fVar16 = fVar18;
          fVar21 = fVar26;
        }
        FUN_001acba0(fVar16,fVar21,param_2,pfVar7,param_2 + 0x88,&local_b0,&local_94,&local_48,
                     pfVar4,pfVar5,&local_44);
        goto joined_r0x001ac7f0;
      }
      if ((fVar11 == 0.0) || (fVar14 <= 0.0)) goto LAB_001aca24;
      fVar13 = sqrtf(fVar14);
      fVar11 = -(fVar20 + fVar13) / fVar11;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (0.0 <= fVar11) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar11)) {
          bVar1 = fVar11 < 1.0;
          bVar2 = fVar11 == 1.0;
          bVar3 = false;
        }
      }
      if (!bVar2 && bVar1 == bVar3) {
        if ((*(byte *)(param_2 + 0x84) >> 1 & 1) != 0) goto joined_r0x001ac7f0;
        fVar17 = *(float *)(param_2 + 0x88);
        fVar15 = *(float *)(param_2 + 0x8c);
        fVar11 = fVar17;
        if (fVar17 <= fVar19) {
          fVar11 = fVar19;
        }
        if (fVar9 <= fVar11) {
          fVar11 = fVar9;
        }
        fVar12 = *(float *)(param_2 + 0x90);
        *(float *)(param_2 + 0xa8) = fVar12;
        fVar17 = fVar17 - fVar11;
        *(float *)(param_2 + 0xa0) = fVar17;
        *(float *)(param_2 + 0xa4) = fVar15;
        fVar17 = fVar17 * fVar17;
        fVar15 = fVar15 * fVar15;
        goto LAB_001aca50;
      }
      fVar13 = fVar23 * fVar11 + *(float *)(param_2 + 0x78);
      if (fVar13 <= fVar9) {
        if (fVar13 < fVar19) {
          pfVar4 = &local_b4;
          pfVar5 = &local_98;
          local_b4 = fVar19;
          goto LAB_001ac8c8;
        }
        if (*(float *)(param_2 + 0x2c) <= fVar11) goto joined_r0x001ac7f0;
        *(float *)(param_2 + 0x2c) = fVar11;
        *(undefined4 *)(param_2 + 0xa0) = 0;
        *(float *)(param_2 + 0xb8) = *(float *)(param_2 + 0x78);
        *(float *)(param_2 + 0xbc) = *(float *)(param_2 + 0x7c);
        *(float *)(param_2 + 0xc0) = *(float *)(param_2 + 0x80);
        *(float *)(param_2 + 0xa4) = (1.0 / fVar10) * (fVar24 * fVar11 + *(float *)(param_2 + 0x7c))
        ;
        *(float *)(param_2 + 0xa8) = (1.0 / fVar10) * (fVar22 * fVar11 + *(float *)(param_2 + 0x80))
        ;
        goto LAB_001acb50;
      }
      pfVar4 = &local_94;
      pfVar5 = &local_a0;
      fVar16 = fVar18;
      fVar21 = fVar26;
LAB_001ac8c8:
      FUN_001acba0(fVar16,fVar21,param_2,pfVar7,param_2 + 0x88,&local_b0,&local_94,&local_48,pfVar4,
                   pfVar5,&local_44);
      param_2 = param_2 + 200;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}


