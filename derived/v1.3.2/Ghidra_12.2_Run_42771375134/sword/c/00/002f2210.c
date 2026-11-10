/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f2210; name: FUN_002f2210
 */


void FUN_002f2210(long *param_1,float *param_2,float *param_3)

{
  uint *puVar1;
  ushort *puVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  float *pfVar15;
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
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  uVar6 = *(uint *)(param_1 + 3);
  uVar12 = (ulong)uVar6;
  if (uVar6 == 0) {
    fVar33 = *(float *)((long)param_1 + 0x54);
    fVar36 = *(float *)(param_1 + 0xb);
    fVar32 = *(float *)((long)param_1 + 0x5c);
    fVar28 = *(float *)((long)param_1 + 0x3c);
    fVar30 = *(float *)(param_1 + 8);
    fVar34 = *(float *)((long)param_1 + 0x44);
    fVar16 = 0.0;
  }
  else {
    fVar16 = param_3[2];
    fVar17 = param_3[3];
    pfVar3 = (float *)param_1[1];
    piVar13 = (int *)param_1[2];
    lVar11 = *(long *)(*param_1 + 0x30);
    lVar4 = *(long *)(lVar11 + 0x28);
    lVar5 = *(long *)(lVar11 + 0x30);
    fVar18 = fVar17 * fVar17 + -0.5;
    fVar19 = *param_3;
    fVar20 = param_3[1];
    bVar7 = *(byte *)(lVar11 + 0x5c);
    do {
      if ((bVar7 >> 1 & 1) == 0) {
        puVar1 = (uint *)(lVar5 + (ulong)(uint)(*piVar13 * 3) * 4);
        uVar14 = (ulong)*puVar1;
        uVar8 = (ulong)puVar1[1];
        uVar9 = (ulong)puVar1[2];
      }
      else {
        puVar2 = (ushort *)(lVar5 + (ulong)(uint)(*piVar13 * 3) * 2);
        uVar14 = (ulong)*puVar2;
        uVar8 = (ulong)puVar2[1];
        uVar9 = (ulong)puVar2[2];
      }
      pfVar15 = (float *)(lVar4 + uVar14 * 0xc);
      fVar33 = pfVar15[1];
      fVar28 = pfVar15[2];
      fVar30 = *pfVar15;
      fVar34 = fVar30 * *pfVar3 + fVar33 * pfVar3[3] + fVar28 * pfVar3[6];
      fVar36 = fVar30 * pfVar3[1] + fVar33 * pfVar3[4] + fVar28 * pfVar3[7];
      fVar30 = fVar30 * pfVar3[2] + fVar33 * pfVar3[5] + fVar28 * pfVar3[8];
      fVar34 = fVar34 + fVar34;
      fVar36 = fVar36 + fVar36;
      fVar30 = fVar30 + fVar30;
      fVar33 = fVar19 * fVar34 + fVar20 * fVar36 + fVar16 * fVar30;
      fVar38 = param_3[5] +
               fVar20 * fVar33 + fVar18 * fVar36 + fVar17 * (fVar16 * fVar34 - fVar19 * fVar30);
      fVar37 = param_3[4] +
               fVar19 * fVar33 + fVar18 * fVar34 + fVar17 * (fVar20 * fVar30 - fVar16 * fVar36);
      fVar28 = *(float *)((long)param_1 + 0x3c);
      if (fVar37 <= *(float *)((long)param_1 + 0x3c)) {
        fVar28 = fVar37;
      }
      fVar36 = param_3[6] +
               fVar18 * fVar30 + fVar17 * (fVar19 * fVar36 - fVar20 * fVar34) + fVar16 * fVar33;
      fVar30 = *(float *)(param_1 + 8);
      if (fVar38 <= *(float *)(param_1 + 8)) {
        fVar30 = fVar38;
      }
      fVar31 = *(float *)(param_1 + 0xb);
      fVar33 = *(float *)((long)param_1 + 0x54) + fVar37;
      fVar32 = fVar36 + *(float *)((long)param_1 + 0x5c);
      fVar34 = *(float *)((long)param_1 + 0x44);
      if (fVar36 <= *(float *)((long)param_1 + 0x44)) {
        fVar34 = fVar36;
      }
      fVar29 = *(float *)(param_1 + 9);
      if (*(float *)(param_1 + 9) <= fVar37) {
        fVar29 = fVar37;
      }
      fVar37 = *(float *)((long)param_1 + 0x4c);
      if (*(float *)((long)param_1 + 0x4c) <= fVar38) {
        fVar37 = fVar38;
      }
      pfVar15 = (float *)(lVar4 + uVar8 * 0xc);
      pfVar10 = (float *)(lVar4 + uVar9 * 0xc);
      fVar25 = pfVar15[1];
      fVar24 = pfVar15[2];
      fVar26 = *pfVar15;
      fVar22 = pfVar10[1];
      fVar21 = pfVar10[2];
      fVar23 = *pfVar10;
      *(float *)((long)param_1 + 0x54) = fVar33;
      *(float *)(param_1 + 0xb) = fVar31 + fVar38;
      *(float *)((long)param_1 + 0x5c) = fVar32;
      *(float *)((long)param_1 + 0x3c) = fVar28;
      *(float *)(param_1 + 8) = fVar30;
      *(float *)((long)param_1 + 0x44) = fVar34;
      *(float *)(param_1 + 9) = fVar29;
      fVar35 = *(float *)(param_1 + 10);
      if (*(float *)(param_1 + 10) <= fVar36) {
        fVar35 = fVar36;
      }
      *(float *)((long)param_1 + 0x4c) = fVar37;
      *(float *)(param_1 + 10) = fVar35;
      fVar27 = fVar26 * *pfVar3 + fVar25 * pfVar3[3] + fVar24 * pfVar3[6];
      fVar39 = fVar26 * pfVar3[1] + fVar25 * pfVar3[4] + fVar24 * pfVar3[7];
      fVar36 = fVar26 * pfVar3[2] + fVar25 * pfVar3[5] + fVar24 * pfVar3[8];
      fVar27 = fVar27 + fVar27;
      fVar39 = fVar39 + fVar39;
      fVar36 = fVar36 + fVar36;
      fVar24 = fVar19 * fVar27 + fVar20 * fVar39 + fVar16 * fVar36;
      fVar25 = param_3[4] +
               fVar19 * fVar24 + fVar18 * fVar27 + fVar17 * (fVar20 * fVar36 - fVar16 * fVar39);
      fVar26 = param_3[5] +
               fVar20 * fVar24 + fVar18 * fVar39 + fVar17 * (fVar16 * fVar27 - fVar19 * fVar36);
      fVar24 = param_3[6] +
               fVar18 * fVar36 + fVar17 * (fVar19 * fVar39 - fVar20 * fVar27) + fVar16 * fVar24;
      fVar36 = fVar31 + fVar38 + fVar26;
      if (fVar25 <= fVar28) {
        fVar28 = fVar25;
      }
      fVar33 = fVar33 + fVar25;
      fVar32 = fVar32 + fVar24;
      if (fVar26 <= fVar30) {
        fVar30 = fVar26;
      }
      if (fVar24 <= fVar34) {
        fVar34 = fVar24;
      }
      if (fVar29 <= fVar25) {
        fVar29 = fVar25;
      }
      if (fVar37 <= fVar26) {
        fVar37 = fVar26;
      }
      if (fVar35 <= fVar24) {
        fVar35 = fVar24;
      }
      *(float *)((long)param_1 + 0x54) = fVar33;
      *(float *)(param_1 + 0xb) = fVar36;
      *(float *)((long)param_1 + 0x5c) = fVar32;
      *(float *)((long)param_1 + 0x3c) = fVar28;
      *(float *)(param_1 + 8) = fVar30;
      *(float *)((long)param_1 + 0x44) = fVar34;
      *(float *)(param_1 + 9) = fVar29;
      *(float *)((long)param_1 + 0x4c) = fVar37;
      *(float *)(param_1 + 10) = fVar35;
      piVar13 = piVar13 + 1;
      fVar31 = fVar23 * *pfVar3 + fVar22 * pfVar3[3] + fVar21 * pfVar3[6];
      fVar24 = fVar23 * pfVar3[1] + fVar22 * pfVar3[4] + fVar21 * pfVar3[7];
      fVar38 = fVar23 * pfVar3[2] + fVar22 * pfVar3[5] + fVar21 * pfVar3[8];
      fVar31 = fVar31 + fVar31;
      fVar24 = fVar24 + fVar24;
      fVar38 = fVar38 + fVar38;
      fVar21 = fVar19 * fVar31 + fVar20 * fVar24 + fVar16 * fVar38;
      fVar22 = param_3[4] +
               fVar19 * fVar21 + fVar18 * fVar31 + fVar17 * (fVar20 * fVar38 - fVar16 * fVar24);
      fVar23 = param_3[5] +
               fVar20 * fVar21 + fVar18 * fVar24 + fVar17 * (fVar16 * fVar31 - fVar19 * fVar38);
      fVar38 = param_3[6] +
               fVar18 * fVar38 + fVar17 * (fVar19 * fVar24 - fVar20 * fVar31) + fVar16 * fVar21;
      fVar33 = fVar33 + fVar22;
      if (fVar22 <= fVar28) {
        fVar28 = fVar22;
      }
      fVar36 = fVar36 + fVar23;
      fVar32 = fVar32 + fVar38;
      *(float *)((long)param_1 + 0x54) = fVar33;
      *(float *)(param_1 + 0xb) = fVar36;
      if (fVar23 <= fVar30) {
        fVar30 = fVar23;
      }
      if (fVar38 <= fVar34) {
        fVar34 = fVar38;
      }
      if (fVar29 <= fVar22) {
        fVar29 = fVar22;
      }
      if (fVar37 <= fVar23) {
        fVar37 = fVar23;
      }
      if (fVar35 <= fVar38) {
        fVar35 = fVar38;
      }
      uVar12 = uVar12 - 1;
      *(float *)((long)param_1 + 0x5c) = fVar32;
      *(float *)((long)param_1 + 0x3c) = fVar28;
      *(float *)(param_1 + 8) = fVar30;
      *(float *)((long)param_1 + 0x44) = fVar34;
      *(float *)(param_1 + 9) = fVar29;
      *(float *)((long)param_1 + 0x4c) = fVar37;
      *(float *)(param_1 + 10) = fVar35;
    } while (uVar12 != 0);
    fVar16 = (float)(uVar6 * 3);
  }
  fVar16 = 1.0 / fVar16;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(float *)((long)param_1 + 0x54) = fVar33 * fVar16;
  *(float *)(param_1 + 0xb) = fVar36 * fVar16;
  *(float *)((long)param_1 + 0x5c) = fVar32 * fVar16;
  *param_2 = fVar28;
  param_2[1] = fVar30;
  param_2[2] = fVar34;
  param_2[3] = *(float *)(param_1 + 9);
  param_2[4] = *(float *)((long)param_1 + 0x4c);
  param_2[5] = *(float *)(param_1 + 10);
  return;
}


