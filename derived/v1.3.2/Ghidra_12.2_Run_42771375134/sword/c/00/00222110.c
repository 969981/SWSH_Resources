/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00222110; name: FUN_00222110
 */


void FUN_00222110(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  ushort uVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  ushort *puVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float local_a0 [4];
  float local_90 [8];
  
  puVar15 = *(ushort **)(param_1 + 0x98);
  lVar3 = *(long *)(puVar15 + 0xc);
  lVar4 = *(long *)(puVar15 + 0x10);
  local_90[4] = 0.0;
  local_90[5] = 0.0;
  local_90[6] = 0.0;
  local_90[7] = 0.0;
  local_90[0] = 0.0;
  local_90[1] = 0.0;
  local_90[2] = 0.0;
  local_90[3] = 0.0;
  uVar7 = *puVar15;
  uVar21 = (uint)*param_2 & 0x7fffffff;
  uVar1 = (uint)((ulong)*param_2 >> 0x20) & 0x7fffffff;
  uVar2 = (uint)param_2[1] & 0x7fffffff;
  if ((uVar21 < uVar1 && uVar2 <= uVar1) && (uVar1 <= uVar21 || uVar1 != uVar2)) {
    lVar19 = 0;
    uVar20 = 2;
    uVar21 = 1;
  }
  else {
    bVar12 = uVar21 <= uVar2;
    bVar13 = uVar2 == uVar21;
    uVar20 = (ulong)(!bVar12 || bVar13);
    lVar19 = 1;
    if (!bVar12 || bVar13) {
      lVar19 = 2;
    }
    uVar21 = (uint)(bVar12 && !bVar13) << 1;
  }
  fVar31 = local_90[(ulong)uVar21 - 4];
  fVar22 = fabsf(fVar31);
  fVar28 = (float)(uVar7 - 1) * 0.5;
  lVar5 = *(long *)(param_1 + 0xa0);
  uVar20 = (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x98) + 8) +
                           (ulong)((int)(fVar28 * ((1.0 / fVar22) * local_90[lVar19 + -4] + 1.0) +
                                        0.5) +
                                  ((int)(fVar28 * (local_90[uVar20 - 4] * (1.0 / fVar22) + 1.0) +
                                        0.5) + (int)(CONCAT44(uVar21,fVar31) >> 0x1f) * (uint)uVar7)
                                  * (uint)uVar7));
  puVar8 = (undefined8 *)(lVar5 + uVar20 * 0xc);
  uVar11 = *puVar8;
  fVar28 = (float)*param_2;
  fVar22 = (float)uVar11 * fVar28;
  fVar31 = (float)((ulong)*param_2 >> 0x20);
  fVar25 = (float)((ulong)uVar11 >> 0x20) * fVar31;
  fVar23 = (float)param_2[1];
  fVar26 = (float)puVar8[1] * fVar23;
  fVar24 = (float)((ulong)param_2[1] >> 0x20);
  fVar27 = fVar24 * 0.0;
  auVar29._4_4_ = fVar25;
  auVar29._0_4_ = fVar22;
  auVar29._8_4_ = fVar26;
  auVar29._12_4_ = fVar27;
  auVar10._4_4_ = fVar25;
  auVar10._0_4_ = fVar22;
  auVar10._8_4_ = fVar26;
  auVar10._12_4_ = fVar27;
  auVar29 = NEON_ext(auVar29,auVar10,8,1);
  fVar22 = fVar22 + fVar25 + auVar29._0_4_ + auVar29._4_4_;
  do {
    uVar17 = (ulong)*(ushort *)(lVar3 + uVar20 * 4);
    if (uVar17 == 0) {
      return;
    }
    pbVar18 = (byte *)(lVar4 + (ulong)*(ushort *)(lVar3 + uVar20 * 4 + 2));
    uVar16 = uVar20;
    do {
      while( true ) {
        bVar6 = *pbVar18;
        pfVar9 = (float *)(lVar5 + (ulong)bVar6 * 0xc);
        auVar30._0_4_ = fVar28 * *pfVar9;
        auVar30._4_4_ = fVar31 * pfVar9[1];
        auVar30._8_4_ = fVar23 * pfVar9[2];
        auVar30._12_4_ = fVar24 * 0.0;
        auVar29 = NEON_ext(auVar30,auVar30,8,1);
        fVar25 = auVar30._0_4_ + auVar30._4_4_ + auVar29._0_4_ + auVar29._4_4_;
        if (fVar22 < fVar25) break;
LAB_002222b8:
        pbVar18 = pbVar18 + 1;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) goto LAB_002222e4;
      }
      uVar21 = 1 << (ulong)(bVar6 & 0x1f);
      if (((uint)local_90[bVar6 >> 5] & uVar21) != 0) goto LAB_002222b8;
      local_90[bVar6 >> 5] = (float)((uint)local_90[bVar6 >> 5] | uVar21);
      uVar16 = (ulong)(uint)bVar6;
      pbVar18 = pbVar18 + 1;
      uVar17 = uVar17 - 1;
      fVar22 = fVar25;
    } while (uVar17 != 0);
LAB_002222e4:
    iVar14 = (int)uVar20;
    uVar20 = uVar16;
    if ((int)uVar16 == iVar14) {
      return;
    }
  } while( true );
}


