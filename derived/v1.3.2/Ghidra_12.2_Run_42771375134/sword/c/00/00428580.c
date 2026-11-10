/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00428580; name: FUN_00428580
 */


void FUN_00428580(undefined8 *param_1,float *param_2,uint param_3)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
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
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  if (((ulong)param_2 & 0xf) == 0) {
    fVar20 = *(float *)(param_1 + 0x14);
    fVar16 = *(float *)((long)param_1 + 0xa4);
    fVar17 = *(float *)(param_1 + 0x15);
    fVar15 = *(float *)((long)param_1 + 0xac);
  }
  else {
    fVar15 = *(float *)((long)param_1 + 0xac);
    uVar1 = 0x10 - ((uint)param_2 & 0xf) >> 2;
    fVar20 = *(float *)(param_1 + 0x14);
    fVar16 = *(float *)((long)param_1 + 0xa4);
    fVar17 = *(float *)(param_1 + 0x15);
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    if (uVar1 != 0) {
      pfVar2 = param_2;
      fVar7 = fVar15;
      fVar6 = fVar16;
      do {
        fVar15 = fVar17;
        fVar16 = fVar20;
        fVar20 = *pfVar2;
        fVar17 = *(float *)(param_1 + 0x10) * fVar20 + fVar6 * *(float *)(param_1 + 0x11) +
                 fVar16 * *(float *)((long)param_1 + 0x84) + fVar7 * *(float *)(param_1 + 0x12) +
                 fVar15 * *(float *)((long)param_1 + 0x8c);
        pfVar3 = pfVar2 + 1;
        *pfVar2 = fVar17;
        pfVar2 = pfVar3;
        fVar7 = fVar15;
        fVar6 = fVar16;
      } while (pfVar3 < param_2 + uVar1);
    }
    *(float *)(param_1 + 0x14) = fVar20;
    param_3 = param_3 - uVar1;
    *(float *)((long)param_1 + 0xa4) = fVar16;
    *(float *)(param_1 + 0x15) = fVar17;
    *(float *)((long)param_1 + 0xac) = fVar15;
    param_2 = param_2 + uVar1;
  }
  uVar1 = param_3 & 3;
  if (param_3 - uVar1 != 0) {
    pfVar2 = param_2 + (param_3 - uVar1);
    pfVar3 = pfVar2;
    if (pfVar2 <= param_2 + 4) {
      pfVar3 = param_2 + 4;
    }
    pfVar5 = param_2;
    do {
      pfVar4 = pfVar5 + 4;
      fVar21 = (float)param_1[8] * fVar20;
      fVar22 = (float)((ulong)param_1[8] >> 0x20) * fVar20;
      fVar23 = (float)param_1[9] * fVar20;
      fVar24 = (float)((ulong)param_1[9] >> 0x20) * fVar20;
      fVar6 = (float)param_1[10] * fVar16;
      fVar9 = (float)((ulong)param_1[10] >> 0x20) * fVar16;
      fVar12 = (float)param_1[0xb] * fVar16;
      fVar13 = (float)((ulong)param_1[0xb] >> 0x20) * fVar16;
      uVar25 = *param_1;
      uVar26 = param_1[2];
      uVar27 = param_1[4];
      uVar28 = param_1[6];
      fVar16 = (float)*(undefined8 *)(pfVar5 + 2);
      fVar18 = (float)*(undefined8 *)pfVar5;
      fVar19 = (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
      fVar20 = (float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20);
      fVar7 = (float)param_1[0xc] * fVar17;
      fVar10 = (float)((ulong)param_1[0xc] >> 0x20) * fVar17;
      fVar8 = (float)param_1[0xe] * fVar15;
      fVar11 = (float)((ulong)param_1[0xe] >> 0x20) * fVar15;
      fVar14 = (float)((ulong)param_1[0xf] >> 0x20) * fVar15;
      fVar15 = fVar23 + fVar12 + (float)param_1[1] * fVar16 + (float)param_1[0xd] * fVar17 +
               (float)param_1[0xf] * fVar15 + (float)param_1[3] * fVar16 +
               (float)param_1[5] * fVar19 + (float)param_1[7] * fVar18;
      fVar17 = fVar24 + fVar13 + (float)((ulong)param_1[1] >> 0x20) * fVar20 +
               (float)((ulong)param_1[0xd] >> 0x20) * fVar17 + fVar14 +
               (float)((ulong)param_1[3] >> 0x20) * fVar16 +
               (float)((ulong)param_1[5] >> 0x20) * fVar19 +
               (float)((ulong)param_1[7] >> 0x20) * fVar18;
      *(ulong *)(pfVar5 + 2) = CONCAT44(fVar17,fVar15);
      *(ulong *)pfVar5 =
           CONCAT44(fVar22 + fVar9 + (float)((ulong)uVar25 >> 0x20) * fVar19 + fVar10 + fVar11 +
                    (float)((ulong)uVar26 >> 0x20) * fVar16 +
                    (float)((ulong)uVar27 >> 0x20) * fVar19 +
                    (float)((ulong)uVar28 >> 0x20) * fVar18,
                    fVar21 + fVar6 + (float)uVar25 * fVar18 + fVar7 + fVar8 + (float)uVar26 * fVar16
                    + (float)uVar27 * fVar19 + (float)uVar28 * fVar18);
      pfVar5 = pfVar4;
    } while (pfVar4 < pfVar2);
    param_2 = param_2 + ((long)pfVar3 + ~(ulong)param_2 >> 2 & 0x3ffffffffffffffc) + 4;
  }
  *(float *)(param_1 + 0x14) = fVar20;
  *(float *)((long)param_1 + 0xa4) = fVar16;
  *(float *)(param_1 + 0x15) = fVar17;
  *(float *)((long)param_1 + 0xac) = fVar15;
  if (uVar1 != 0) {
    pfVar2 = param_2;
    do {
      fVar7 = fVar17;
      fVar6 = fVar20;
      fVar20 = *pfVar2;
      fVar17 = *(float *)(param_1 + 0x10) * fVar20 + fVar16 * *(float *)(param_1 + 0x11) +
               fVar6 * *(float *)((long)param_1 + 0x84) + fVar15 * *(float *)(param_1 + 0x12) +
               fVar7 * *(float *)((long)param_1 + 0x8c);
      pfVar3 = pfVar2 + 1;
      *pfVar2 = fVar17;
      pfVar2 = pfVar3;
      fVar16 = fVar6;
      fVar15 = fVar7;
    } while (pfVar3 < param_2 + uVar1);
    *(float *)(param_1 + 0x14) = fVar20;
    *(float *)((long)param_1 + 0xa4) = fVar6;
    *(float *)(param_1 + 0x15) = fVar17;
    *(float *)((long)param_1 + 0xac) = fVar7;
  }
  return;
}


