/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00226e50; name: FUN_00226e50
 */


undefined8
FUN_00226e50(float param_1,float param_2,float param_3,float param_4,long param_5,long param_6,
            float *param_7,float *param_8,long param_9,undefined8 param_10,undefined8 param_11,
            float *param_12,float *param_13,undefined4 *param_14,float *param_15)

{
  long lVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
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
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  
  *param_14 = 0xffffffff;
  uVar2 = *(uint *)(param_5 + 0x10);
  if (uVar2 != 0) {
    uVar5 = 0;
    lVar1 = *(long *)(param_5 + 0x20);
    fVar11 = *(float *)(param_9 + 0x24);
    fVar12 = *(float *)(param_9 + 0x28);
    fVar13 = *(float *)(param_9 + 0x2c);
    fVar15 = *(float *)(param_9 + 0x30);
    fVar16 = *(float *)(param_9 + 0x34);
    fVar18 = *(float *)(param_9 + 0x38);
    fVar7 = *(float *)(param_9 + 0x3c);
    fVar14 = *(float *)(param_9 + 0x40);
    fVar17 = *(float *)(param_9 + 0x44);
    pfVar4 = (float *)(*(long *)(param_5 + 0x18) + 0xc);
    do {
      fVar9 = pfVar4[-3];
      fVar8 = pfVar4[-2];
      fVar6 = pfVar4[-1];
      if (0.0 <= (fVar11 * param_1 + fVar15 * param_2 + fVar7 * param_3) * fVar9 +
                 (fVar12 * param_1 + fVar16 * param_2 + fVar14 * param_3) * fVar8 +
                 (fVar13 * param_1 + fVar18 * param_2 + fVar17 * param_3) * fVar6) {
        local_b8 = fVar9 * *(float *)(param_9 + 0x24) + fVar8 * *(float *)(param_9 + 0x30) +
                   fVar6 * *(float *)(param_9 + 0x3c);
        local_b4 = fVar9 * *(float *)(param_9 + 0x28) + fVar8 * *(float *)(param_9 + 0x34) +
                   fVar6 * *(float *)(param_9 + 0x40);
        local_b0 = fVar9 * *(float *)(param_9 + 0x2c) + fVar8 * *(float *)(param_9 + 0x38) +
                   fVar6 * *(float *)(param_9 + 0x44);
        fVar6 = sqrtf(local_b8 * local_b8 + local_b4 * local_b4 + local_b0 * local_b0);
        if (0.0 < fVar6) {
          fVar8 = 1.0 / fVar6;
          local_b8 = fVar8 * local_b8;
          local_b4 = fVar8 * local_b4;
          local_b0 = fVar8 * local_b0;
        }
        fVar22 = local_b8 * param_7[1] + local_b4 * param_7[4] + local_b0 * param_7[7];
        fVar21 = local_b8 * *param_7 + local_b4 * param_7[3] + local_b0 * param_7[6];
        fVar23 = local_b8 * param_7[2] + local_b4 * param_7[5] + local_b0 * param_7[8];
        fVar8 = *param_7 * fVar21 + param_7[1] * fVar22 + param_7[2] * fVar23;
        fVar9 = param_7[3] * fVar21 + param_7[4] * fVar22 + param_7[5] * fVar23;
        fVar19 = param_7[6] * fVar21 + param_7[7] * fVar22 + param_7[8] * fVar23;
        fVar24 = fVar21 * *param_8 + fVar22 * param_8[1] + fVar23 * param_8[2];
        fVar25 = fVar21 * param_8[3] + fVar22 * param_8[4] + fVar23 * param_8[5];
        fVar10 = fVar21 * *param_15 + fVar22 * param_15[1] + fVar23 * param_15[2];
        fVar8 = fVar8 * (float)(*(uint *)(param_5 + 0x44) | (uint)fVar8 & 0x80000000) +
                fVar9 * (float)(*(uint *)(param_5 + 0x48) | (uint)fVar9 & 0x80000000) +
                fVar19 * (float)(*(uint *)(param_5 + 0x4c) | (uint)fVar19 & 0x80000000);
        fVar9 = fVar21 * param_8[6] + fVar22 * param_8[7] + fVar23 * param_8[8];
        fVar9 = fVar24 * (float)(*(uint *)(param_6 + 0x44) | (uint)fVar24 & 0x80000000) +
                fVar25 * (float)(*(uint *)(param_6 + 0x48) | (uint)fVar25 & 0x80000000) +
                fVar9 * (float)(*(uint *)(param_6 + 0x4c) | (uint)fVar9 & 0x80000000);
        if (fVar8 <= *(float *)(param_5 + 0x40)) {
          fVar8 = *(float *)(param_5 + 0x40);
        }
        if (fVar9 <= *(float *)(param_6 + 0x40)) {
          fVar9 = *(float *)(param_6 + 0x40);
        }
        fVar19 = fVar10 + fVar8 + fVar9;
        fVar10 = (fVar8 + fVar9) - fVar10;
        if (fVar10 <= fVar19) {
          fVar19 = fVar10;
        }
        if (fVar19 <= *param_12) {
          fVar6 = 1.0 / fVar6;
          fVar9 = pfVar4[-3];
          pfVar3 = (float *)(lVar1 + (ulong)*(byte *)((long)pfVar4 + 7) * 0xc);
          fVar10 = pfVar4[-2];
          fVar8 = pfVar4[-1];
          fVar20 = *pfVar3;
          fVar24 = pfVar3[1];
          fVar19 = *pfVar4;
          fVar25 = pfVar3[2];
          (**(code **)(param_6 + 0x58))(param_6,&local_b8,param_11,param_10,&local_a4,&local_a8);
          if ((param_4 - fVar6 * fVar19 < local_a4) ||
             (fVar8 = fVar6 * (fVar9 * fVar20 + fVar10 * fVar24 + fVar8 * fVar25),
             local_a8 + param_4 < fVar8)) {
            return 0;
          }
          fVar6 = -(fVar6 * fVar19) - local_a4;
          fVar8 = local_a8 - fVar8;
          if (fVar8 <= fVar6) {
            fVar6 = fVar8;
          }
          if (fVar6 < *param_12) {
            *param_13 = fVar21;
            param_13[1] = fVar22;
            param_13[2] = fVar23;
            *param_12 = fVar6;
            *param_14 = (int)uVar5;
          }
        }
      }
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 5;
    } while (uVar5 < uVar2);
  }
  return 1;
}


