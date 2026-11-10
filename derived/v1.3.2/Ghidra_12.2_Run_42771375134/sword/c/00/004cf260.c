/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cf260; name: FUN_004cf260
 */


void FUN_004cf260(undefined8 *param_1,float *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  float *pfVar2;
  long *plVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
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
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  if (((ulong)param_2 & 0xf) != 0) {
    uVar1 = 0x10 - ((uint)param_2 & 0xf) >> 2;
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    pfVar2 = (float *)(param_1[0x14] + (ulong)param_4 * 0x10);
    fVar20 = *pfVar2;
    pfVar5 = pfVar2 + 1;
    fVar18 = *pfVar5;
    pfVar7 = pfVar2 + 2;
    fVar19 = *pfVar7;
    pfVar6 = pfVar2 + 3;
    fVar17 = *pfVar6;
    if (uVar1 != 0) {
      pfVar2 = param_2;
      fVar8 = fVar18;
      fVar9 = fVar17;
      do {
        fVar17 = fVar19;
        fVar18 = fVar20;
        fVar20 = *pfVar2;
        fVar19 = *(float *)(param_1 + 0x10) * fVar20 + fVar8 * *(float *)(param_1 + 0x11) +
                 fVar18 * *(float *)((long)param_1 + 0x84) + fVar9 * *(float *)(param_1 + 0x12) +
                 fVar17 * *(float *)((long)param_1 + 0x8c);
        pfVar5 = pfVar2 + 1;
        *pfVar2 = fVar19;
        pfVar2 = pfVar5;
        fVar8 = fVar18;
        fVar9 = fVar17;
      } while (pfVar5 < param_2 + uVar1);
      pfVar2 = (float *)(param_1[0x14] + (ulong)param_4 * 0x10);
      pfVar5 = pfVar2 + 1;
      pfVar7 = pfVar2 + 2;
      pfVar6 = pfVar2 + 3;
    }
    param_3 = param_3 - uVar1;
    *pfVar2 = fVar20;
    *pfVar5 = fVar18;
    *pfVar7 = fVar19;
    *pfVar6 = fVar17;
    param_2 = param_2 + uVar1;
  }
  uVar4 = (ulong)param_4;
  plVar3 = param_1 + 0x14;
  pfVar6 = (float *)(*plVar3 + uVar4 * 0x10);
  uVar1 = param_3 & 3;
  fVar20 = *pfVar6;
  pfVar2 = pfVar6 + 1;
  pfVar5 = pfVar6 + 2;
  fVar18 = *pfVar5;
  pfVar7 = pfVar6 + 3;
  fVar17 = *pfVar7;
  fVar19 = *pfVar2;
  if (param_3 - uVar1 != 0) {
    pfVar2 = param_2 + (param_3 - uVar1);
    pfVar5 = pfVar2;
    if (pfVar2 <= param_2 + 4) {
      pfVar5 = param_2 + 4;
    }
    pfVar7 = param_2;
    do {
      pfVar6 = pfVar7 + 4;
      fVar23 = (float)param_1[8] * fVar20;
      fVar24 = (float)((ulong)param_1[8] >> 0x20) * fVar20;
      fVar25 = (float)param_1[9] * fVar20;
      fVar26 = (float)((ulong)param_1[9] >> 0x20) * fVar20;
      fVar8 = (float)param_1[10] * fVar19;
      fVar11 = (float)((ulong)param_1[10] >> 0x20) * fVar19;
      fVar14 = (float)param_1[0xb] * fVar19;
      fVar15 = (float)((ulong)param_1[0xb] >> 0x20) * fVar19;
      uVar27 = *param_1;
      uVar28 = param_1[2];
      uVar29 = param_1[4];
      uVar30 = param_1[6];
      fVar19 = (float)*(undefined8 *)(pfVar7 + 2);
      fVar21 = (float)*(undefined8 *)pfVar7;
      fVar22 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
      fVar20 = (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20);
      fVar9 = (float)param_1[0xc] * fVar18;
      fVar12 = (float)((ulong)param_1[0xc] >> 0x20) * fVar18;
      fVar10 = (float)param_1[0xe] * fVar17;
      fVar13 = (float)((ulong)param_1[0xe] >> 0x20) * fVar17;
      fVar16 = (float)((ulong)param_1[0xf] >> 0x20) * fVar17;
      fVar17 = fVar25 + fVar14 + (float)param_1[1] * fVar19 + (float)param_1[0xd] * fVar18 +
               (float)param_1[0xf] * fVar17 + (float)param_1[3] * fVar19 +
               (float)param_1[5] * fVar22 + (float)param_1[7] * fVar21;
      fVar18 = fVar26 + fVar15 + (float)((ulong)param_1[1] >> 0x20) * fVar20 +
               (float)((ulong)param_1[0xd] >> 0x20) * fVar18 + fVar16 +
               (float)((ulong)param_1[3] >> 0x20) * fVar19 +
               (float)((ulong)param_1[5] >> 0x20) * fVar22 +
               (float)((ulong)param_1[7] >> 0x20) * fVar21;
      *(ulong *)(pfVar7 + 2) = CONCAT44(fVar18,fVar17);
      *(ulong *)pfVar7 =
           CONCAT44(fVar24 + fVar11 + (float)((ulong)uVar27 >> 0x20) * fVar22 + fVar12 + fVar13 +
                    (float)((ulong)uVar28 >> 0x20) * fVar19 +
                    (float)((ulong)uVar29 >> 0x20) * fVar22 +
                    (float)((ulong)uVar30 >> 0x20) * fVar21,
                    fVar23 + fVar8 + (float)uVar27 * fVar21 + fVar9 + fVar10 +
                    (float)uVar28 * fVar19 + (float)uVar29 * fVar22 + (float)uVar30 * fVar21);
      pfVar7 = pfVar6;
    } while (pfVar6 < pfVar2);
    pfVar6 = (float *)(*plVar3 + uVar4 * 0x10);
    param_2 = param_2 + ((long)pfVar5 + ~(ulong)param_2 >> 2 & 0x3ffffffffffffffc) + 4;
    pfVar2 = pfVar6 + 1;
    pfVar5 = pfVar6 + 2;
    pfVar7 = pfVar6 + 3;
  }
  *pfVar6 = fVar20;
  *pfVar2 = fVar19;
  *pfVar5 = fVar18;
  *pfVar7 = fVar17;
  if (uVar1 != 0) {
    pfVar2 = (float *)(param_1[0x14] + uVar4 * 0x10);
    pfVar5 = param_2;
    fVar20 = *pfVar2;
    fVar19 = pfVar2[2];
    fVar18 = pfVar2[1];
    fVar17 = pfVar2[3];
    do {
      fVar9 = fVar19;
      fVar8 = fVar20;
      fVar20 = *pfVar5;
      fVar19 = *(float *)(param_1 + 0x10) * fVar20 + fVar18 * *(float *)(param_1 + 0x11) +
               fVar8 * *(float *)((long)param_1 + 0x84) + fVar17 * *(float *)(param_1 + 0x12) +
               fVar9 * *(float *)((long)param_1 + 0x8c);
      pfVar2 = pfVar5 + 1;
      *pfVar5 = fVar19;
      pfVar5 = pfVar2;
      fVar18 = fVar8;
      fVar17 = fVar9;
    } while (pfVar2 < param_2 + uVar1);
    pfVar2 = (float *)(*plVar3 + uVar4 * 0x10);
    *pfVar2 = fVar20;
    pfVar2[1] = fVar8;
    pfVar2[2] = fVar19;
    pfVar2[3] = fVar9;
  }
  return;
}


