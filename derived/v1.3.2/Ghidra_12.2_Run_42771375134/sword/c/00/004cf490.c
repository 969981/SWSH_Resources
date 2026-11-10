/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cf490; name: FUN_004cf490
 */


void FUN_004cf490(undefined8 *param_1,float *param_2,uint param_3,uint param_4,long *param_5)

{
  uint uVar1;
  float *pfVar2;
  long *plVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
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
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  if (((ulong)param_2 & 0xf) != 0) {
    uVar1 = 0x10 - ((uint)param_2 & 0xf) >> 2;
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    pfVar7 = (float *)(param_1[0x14] + (ulong)param_4 * 0x10);
    fVar21 = *pfVar7;
    pfVar2 = pfVar7 + 1;
    fVar19 = *pfVar2;
    pfVar5 = pfVar7 + 2;
    fVar20 = *pfVar5;
    pfVar6 = pfVar7 + 3;
    fVar18 = *pfVar6;
    if (uVar1 != 0) {
      pfVar7 = (float *)*param_5;
      pfVar2 = param_2;
      fVar9 = fVar19;
      fVar10 = fVar18;
      do {
        fVar19 = fVar21;
        fVar18 = fVar20;
        pfVar5 = pfVar2 + 1;
        fVar21 = *pfVar2;
        fVar20 = *(float *)(param_1 + 0x10) * fVar21 + fVar9 * *(float *)(param_1 + 0x11) +
                 fVar19 * *(float *)((long)param_1 + 0x84) + fVar10 * *(float *)(param_1 + 0x12) +
                 fVar18 * *(float *)((long)param_1 + 0x8c);
        *pfVar7 = fVar20;
        pfVar7 = (float *)(*param_5 + 4);
        *param_5 = (long)pfVar7;
        pfVar2 = pfVar5;
        fVar9 = fVar19;
        fVar10 = fVar18;
      } while (pfVar5 < param_2 + uVar1);
      pfVar7 = (float *)(param_1[0x14] + (ulong)param_4 * 0x10);
      pfVar2 = pfVar7 + 1;
      pfVar5 = pfVar7 + 2;
      pfVar6 = pfVar7 + 3;
    }
    param_3 = param_3 - uVar1;
    *pfVar7 = fVar21;
    *pfVar2 = fVar19;
    *pfVar5 = fVar20;
    *pfVar6 = fVar18;
    param_2 = param_2 + uVar1;
  }
  uVar4 = (ulong)param_4;
  plVar3 = param_1 + 0x14;
  pfVar6 = (float *)(*plVar3 + uVar4 * 0x10);
  uVar1 = param_3 & 3;
  fVar21 = *pfVar6;
  pfVar7 = pfVar6 + 1;
  pfVar2 = pfVar6 + 2;
  fVar19 = *pfVar2;
  pfVar5 = pfVar6 + 3;
  fVar18 = *pfVar5;
  fVar20 = *pfVar7;
  if (param_3 - uVar1 != 0) {
    pfVar7 = param_2 + (param_3 - uVar1);
    pfVar2 = pfVar7;
    if (pfVar7 <= param_2 + 4) {
      pfVar2 = param_2 + 4;
    }
    puVar8 = (undefined8 *)*param_5;
    pfVar5 = param_2;
    do {
      pfVar6 = pfVar5 + 4;
      fVar24 = (float)param_1[8] * fVar21;
      fVar25 = (float)((ulong)param_1[8] >> 0x20) * fVar21;
      fVar26 = (float)param_1[9] * fVar21;
      fVar27 = (float)((ulong)param_1[9] >> 0x20) * fVar21;
      fVar9 = (float)param_1[10] * fVar20;
      fVar12 = (float)((ulong)param_1[10] >> 0x20) * fVar20;
      fVar15 = (float)param_1[0xb] * fVar20;
      fVar16 = (float)((ulong)param_1[0xb] >> 0x20) * fVar20;
      uVar28 = *param_1;
      uVar29 = param_1[2];
      uVar30 = param_1[4];
      uVar31 = param_1[6];
      fVar20 = (float)*(undefined8 *)(pfVar5 + 2);
      fVar22 = (float)*(undefined8 *)pfVar5;
      fVar23 = (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
      fVar21 = (float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20);
      fVar10 = (float)param_1[0xc] * fVar19;
      fVar13 = (float)((ulong)param_1[0xc] >> 0x20) * fVar19;
      fVar11 = (float)param_1[0xe] * fVar18;
      fVar14 = (float)((ulong)param_1[0xe] >> 0x20) * fVar18;
      fVar17 = (float)((ulong)param_1[0xf] >> 0x20) * fVar18;
      fVar18 = fVar26 + fVar15 + (float)param_1[1] * fVar20 + (float)param_1[0xd] * fVar19 +
               (float)param_1[0xf] * fVar18 + (float)param_1[3] * fVar20 +
               (float)param_1[5] * fVar23 + (float)param_1[7] * fVar22;
      fVar19 = fVar27 + fVar16 + (float)((ulong)param_1[1] >> 0x20) * fVar21 +
               (float)((ulong)param_1[0xd] >> 0x20) * fVar19 + fVar17 +
               (float)((ulong)param_1[3] >> 0x20) * fVar20 +
               (float)((ulong)param_1[5] >> 0x20) * fVar23 +
               (float)((ulong)param_1[7] >> 0x20) * fVar22;
      puVar8[1] = CONCAT44(fVar19,fVar18);
      *puVar8 = CONCAT44(fVar25 + fVar12 + (float)((ulong)uVar28 >> 0x20) * fVar23 + fVar13 + fVar14
                         + (float)((ulong)uVar29 >> 0x20) * fVar20 +
                         (float)((ulong)uVar30 >> 0x20) * fVar23 +
                         (float)((ulong)uVar31 >> 0x20) * fVar22,
                         fVar24 + fVar9 + (float)uVar28 * fVar22 + fVar10 + fVar11 +
                         (float)uVar29 * fVar20 + (float)uVar30 * fVar23 + (float)uVar31 * fVar22);
      puVar8 = (undefined8 *)(*param_5 + 0x10);
      *param_5 = (long)puVar8;
      pfVar5 = pfVar6;
    } while (pfVar6 < pfVar7);
    pfVar6 = (float *)(*plVar3 + uVar4 * 0x10);
    param_2 = param_2 + ((long)pfVar2 + ~(ulong)param_2 >> 2 & 0x3ffffffffffffffc) + 4;
    pfVar7 = pfVar6 + 1;
    pfVar2 = pfVar6 + 2;
    pfVar5 = pfVar6 + 3;
  }
  *pfVar6 = fVar21;
  *pfVar7 = fVar20;
  *pfVar2 = fVar19;
  *pfVar5 = fVar18;
  if (uVar1 != 0) {
    pfVar2 = (float *)(param_1[0x14] + uVar4 * 0x10);
    pfVar7 = (float *)*param_5;
    pfVar5 = param_2;
    fVar21 = *pfVar2;
    fVar20 = pfVar2[2];
    fVar19 = pfVar2[1];
    fVar18 = pfVar2[3];
    do {
      fVar10 = fVar20;
      fVar9 = fVar21;
      pfVar2 = pfVar5 + 1;
      fVar21 = *pfVar5;
      fVar20 = *(float *)(param_1 + 0x10) * fVar21 + fVar19 * *(float *)(param_1 + 0x11) +
               fVar9 * *(float *)((long)param_1 + 0x84) + fVar18 * *(float *)(param_1 + 0x12) +
               fVar10 * *(float *)((long)param_1 + 0x8c);
      *pfVar7 = fVar20;
      pfVar7 = (float *)(*param_5 + 4);
      *param_5 = (long)pfVar7;
      pfVar5 = pfVar2;
      fVar19 = fVar9;
      fVar18 = fVar10;
    } while (pfVar2 < param_2 + uVar1);
    pfVar7 = (float *)(*plVar3 + uVar4 * 0x10);
    *pfVar7 = fVar21;
    pfVar7[1] = fVar9;
    pfVar7[2] = fVar20;
    pfVar7[3] = fVar10;
  }
  return;
}


