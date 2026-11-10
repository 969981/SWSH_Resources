/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00227300; name: FUN_00227300
 */


undefined8
FUN_00227300(float param_1,float param_2,float param_3,float param_4,long param_5,long param_6,
            float *param_7,float *param_8,long param_9,undefined8 param_10,undefined8 param_11,
            float *param_12,float *param_13,undefined4 *param_14,undefined4 *param_15,
            undefined4 *param_16,float *param_17)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  float *pfVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
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
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  
  *param_14 = 0xffffffff;
  lVar3 = *(long *)(param_5 + 0x20);
  uVar4 = *(uint *)(param_5 + 0x10);
  fVar16 = *(float *)(param_9 + 0x44);
  fVar17 = *(float *)(param_9 + 0x24);
  fVar18 = *(float *)(param_9 + 0x28);
  fVar24 = *(float *)(param_9 + 0x2c);
  fVar26 = *(float *)(param_9 + 0x30);
  fVar28 = *(float *)(param_9 + 0x34);
  fVar29 = *(float *)(param_9 + 0x38);
  fVar14 = *(float *)(param_9 + 0x3c);
  fVar15 = *(float *)(param_9 + 0x40);
  if (uVar4 * 0x14 != 0) {
    uVar6 = 0;
    do {
      lVar1 = *(long *)(param_5 + 0x18) + uVar6;
      uVar2 = (int)uVar6 + 0x80;
      uVar6 = (ulong)uVar2;
      Hint_Prefetch(lVar1,0,0,0);
    } while (uVar2 < uVar4 * 0x14);
  }
  puVar8 = param_15;
  if (uVar4 != 0) {
    uVar6 = 0;
    pfVar9 = (float *)(*(long *)(param_5 + 0x18) + 0xc);
    puVar7 = param_15;
    do {
      while( true ) {
        fVar12 = pfVar9[-3];
        fVar11 = pfVar9[-2];
        fVar10 = pfVar9[-1];
        puVar8 = puVar7;
        if (0.0 <= (fVar17 * param_1 + fVar26 * param_2 + fVar14 * param_3) * fVar12 +
                   (fVar18 * param_1 + fVar28 * param_2 + fVar15 * param_3) * fVar11 +
                   (fVar24 * param_1 + fVar29 * param_2 + fVar16 * param_3) * fVar10) break;
LAB_00227794:
        uVar6 = uVar6 + 1;
        pfVar9 = pfVar9 + 5;
        puVar7 = puVar8;
        if (uVar4 <= uVar6) goto LAB_002277bc;
      }
      local_b8 = fVar12 * *(float *)(param_9 + 0x24) + fVar11 * *(float *)(param_9 + 0x30) +
                 fVar10 * *(float *)(param_9 + 0x3c);
      local_b4 = fVar12 * *(float *)(param_9 + 0x28) + fVar11 * *(float *)(param_9 + 0x34) +
                 fVar10 * *(float *)(param_9 + 0x40);
      local_b0 = fVar12 * *(float *)(param_9 + 0x2c) + fVar11 * *(float *)(param_9 + 0x38) +
                 fVar10 * *(float *)(param_9 + 0x44);
      fVar10 = sqrtf(local_b8 * local_b8 + local_b4 * local_b4 + local_b0 * local_b0);
      if (0.0 < fVar10) {
        fVar11 = 1.0 / fVar10;
        local_b8 = fVar11 * local_b8;
        local_b4 = fVar11 * local_b4;
        local_b0 = fVar11 * local_b0;
      }
      fVar22 = local_b8 * param_7[1] + local_b4 * param_7[4] + local_b0 * param_7[7];
      fVar21 = local_b8 * *param_7 + local_b4 * param_7[3] + local_b0 * param_7[6];
      fVar23 = local_b8 * param_7[2] + local_b4 * param_7[5] + local_b0 * param_7[8];
      fVar11 = *param_7 * fVar21 + param_7[1] * fVar22 + param_7[2] * fVar23;
      fVar12 = param_7[3] * fVar21 + param_7[4] * fVar22 + param_7[5] * fVar23;
      fVar19 = param_7[6] * fVar21 + param_7[7] * fVar22 + param_7[8] * fVar23;
      fVar25 = fVar21 * *param_8 + fVar22 * param_8[1] + fVar23 * param_8[2];
      fVar13 = fVar21 * *param_17 + fVar22 * param_17[1] + fVar23 * param_17[2];
      fVar27 = fVar21 * param_8[3] + fVar22 * param_8[4] + fVar23 * param_8[5];
      fVar11 = fVar11 * (float)(*(uint *)(param_5 + 0x44) | (uint)fVar11 & 0x80000000) +
               fVar12 * (float)(*(uint *)(param_5 + 0x48) | (uint)fVar12 & 0x80000000) +
               fVar19 * (float)(*(uint *)(param_5 + 0x4c) | (uint)fVar19 & 0x80000000);
      fVar12 = fVar21 * param_8[6] + fVar22 * param_8[7] + fVar23 * param_8[8];
      fVar12 = fVar25 * (float)(*(uint *)(param_6 + 0x44) | (uint)fVar25 & 0x80000000) +
               fVar27 * (float)(*(uint *)(param_6 + 0x48) | (uint)fVar27 & 0x80000000) +
               fVar12 * (float)(*(uint *)(param_6 + 0x4c) | (uint)fVar12 & 0x80000000);
      if (fVar11 <= *(float *)(param_5 + 0x40)) {
        fVar11 = *(float *)(param_5 + 0x40);
      }
      if (fVar12 <= *(float *)(param_6 + 0x40)) {
        fVar12 = *(float *)(param_6 + 0x40);
      }
      fVar19 = fVar13 + fVar11 + fVar12;
      fVar13 = (fVar11 + fVar12) - fVar13;
      if (fVar13 <= fVar19) {
        fVar19 = fVar13;
      }
      if (fVar19 <= *param_12) {
        puVar8 = puVar7 + 1;
        *puVar7 = (int)uVar6;
        fVar10 = 1.0 / fVar10;
        fVar12 = pfVar9[-3];
        fVar11 = pfVar9[-1];
        pfVar5 = (float *)(lVar3 + (ulong)*(byte *)((long)pfVar9 + 7) * 0xc);
        fVar13 = pfVar9[-2];
        fVar20 = *pfVar5;
        fVar25 = pfVar5[1];
        fVar19 = *pfVar9;
        fVar27 = pfVar5[2];
        (**(code **)(param_6 + 0x58))(param_6,&local_b8,param_11,param_10,&local_a4,&local_a8);
        if ((param_4 - fVar10 * fVar19 < local_a4) ||
           (fVar11 = fVar10 * (fVar12 * fVar20 + fVar13 * fVar25 + fVar11 * fVar27),
           local_a8 + param_4 < fVar11)) {
          return 0;
        }
        fVar10 = -(fVar10 * fVar19) - local_a4;
        fVar11 = local_a8 - fVar11;
        if (fVar11 <= fVar10) {
          fVar10 = fVar11;
        }
        if (fVar10 < *param_12) {
          *param_13 = fVar21;
          param_13[1] = fVar22;
          param_13[2] = fVar23;
          *param_12 = fVar10;
          *param_14 = (int)uVar6;
        }
        goto LAB_00227794;
      }
      uVar6 = uVar6 + 1;
      pfVar9 = pfVar9 + 5;
    } while (uVar6 < uVar4);
  }
LAB_002277bc:
  *param_16 = (int)((ulong)((long)puVar8 - (long)param_15) >> 2);
  return 1;
}


