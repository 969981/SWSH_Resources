/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a87b0; name: FUN_004a87b0
 */


/* WARNING: Removing unreachable block (ram,0x004a8888) */
/* WARNING: Removing unreachable block (ram,0x004a8914) */

undefined8 FUN_004a87b0(float param_1,uint param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  float *pfVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  puVar10 = PTR_DAT_02712a90;
  fVar21 = DAT_01d4bb38 / (float)(param_2 & 0x7fffffff);
  uVar13 = (uint)(DAT_01d4be58 + param_1 * fVar21);
  if ((int)param_2 < 0) {
    uVar13 = (uVar13 & 1) + uVar13;
    uVar16 = uVar13 * 8;
    if ((uVar16 < *(uint *)(param_3 + 1)) || (uVar16 <= *(uint *)((long)param_3 + 0xc)))
    goto LAB_004a8a4c;
    uVar3 = *(uint *)((long)param_3 + 0xc) + (uVar16 - *(uint *)(param_3 + 1));
    puVar11 = (undefined8 *)FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar3 << 4,0x10);
    if (puVar11 == (undefined8 *)0x0) {
      return 2;
    }
    puVar12 = (undefined8 *)*param_3;
    if ((puVar12 != (undefined8 *)0x0) && (puVar12 != puVar11)) {
      uVar4 = *(uint *)(param_3 + 1);
      if (uVar4 != 0) {
        uVar19 = *puVar12;
        puVar11[1] = puVar12[1];
        *puVar11 = uVar19;
        if (uVar4 != 1) {
          if (uVar4 == 2) {
            lVar14 = 1;
          }
          else {
            lVar1 = 0;
            do {
              lVar14 = lVar1;
              lVar1 = *param_3 + lVar14 * 0x10;
              uVar19 = *(undefined8 *)(lVar1 + 0x10);
              puVar11[lVar14 * 2 + 3] = *(undefined8 *)(lVar1 + 0x18);
              puVar11[lVar14 * 2 + 2] = uVar19;
              lVar1 = *param_3 + lVar14 * 0x10;
              uVar19 = *(undefined8 *)(lVar1 + 0x20);
              puVar11[lVar14 * 2 + 5] = *(undefined8 *)(lVar1 + 0x28);
              puVar11[lVar14 * 2 + 4] = uVar19;
              lVar1 = lVar14 + 2;
            } while (((ulong)uVar4 - 1) - (ulong)(~uVar4 & 1) != lVar14 + 2);
            lVar14 = lVar14 + 3;
            if ((~uVar4 & 1) == 0) goto LAB_004a8a38;
          }
          puVar12 = (undefined8 *)(*param_3 + lVar14 * 0x10);
          uVar19 = *puVar12;
          (puVar11 + lVar14 * 2)[1] = puVar12[1];
          puVar11[lVar14 * 2] = uVar19;
        }
LAB_004a8a38:
        puVar12 = (undefined8 *)*param_3;
      }
      FUN_004047f0(*(undefined4 *)puVar10,puVar12);
    }
    *param_3 = (long)puVar11;
    *(uint *)((long)param_3 + 0xc) = uVar3;
LAB_004a8a4c:
    *(uint *)(param_3 + 1) = uVar16;
    fVar18 = cosf(fVar21);
    fVar9 = DAT_01d4c78c;
    fVar8 = DAT_01d4c778;
    fVar7 = DAT_01d4c4f0;
    fVar6 = DAT_01d4bfe0;
    fVar5 = DAT_01d4bcc8;
    fVar17 = DAT_01d4bc58;
    fVar22 = DAT_01d4bbb8;
    fVar21 = DAT_01d4badc;
    if (uVar13 == 0) {
      return 1;
    }
    fVar20 = (1.0 - fVar18) / (float)uVar13;
    fVar18 = fVar18 + fVar20 * 0.5;
    pfVar15 = (float *)*param_3;
    do {
      fVar23 = SQRT(1.0 - fVar18 * fVar18);
      fVar24 = fVar23 * fVar6;
      *pfVar15 = fVar23;
      pfVar15[4] = fVar24;
      pfVar15[5] = fVar24;
      pfVar15[0xc] = fVar23 * fVar8;
      pfVar15[0xd] = fVar24;
      pfVar15[8] = fVar23 * fVar5;
      pfVar15[9] = fVar23;
      pfVar15[2] = fVar18;
      pfVar15[6] = fVar18;
      pfVar15[10] = fVar18;
      pfVar15[0xe] = fVar18;
      pfVar15[0x12] = fVar18;
      pfVar15[0x16] = fVar18;
      pfVar15[0x1a] = fVar18;
      pfVar15[0x1e] = fVar18;
      fVar18 = fVar18 + fVar20;
      pfVar15[1] = 0.0;
      pfVar15[3] = 0.0;
      pfVar15[7] = 0.0;
      pfVar15[0xb] = 0.0;
      pfVar15[0xf] = 0.0;
      pfVar15[0x13] = 0.0;
      pfVar15[0x17] = 0.0;
      pfVar15[0x1b] = 0.0;
      pfVar15[0x1f] = 0.0;
      pfVar15[0x10] = -fVar23;
      pfVar15[0x11] = fVar23 * fVar21;
      pfVar15[0x14] = fVar23 * fVar22;
      pfVar15[0x15] = fVar23 * fVar7;
      pfVar15[0x18] = fVar23 * fVar17;
      pfVar15[0x19] = -fVar23;
      pfVar15[0x1c] = fVar23 * fVar9;
      pfVar15[0x1d] = fVar23 * fVar7;
      uVar13 = uVar13 - 1;
      pfVar15 = pfVar15 + 0x20;
    } while (uVar13 != 0);
    return 1;
  }
  iVar2 = 0;
  if ((uVar13 & 3) != 0) {
    iVar2 = 4 - (uVar13 & 3);
  }
  uVar13 = iVar2 + uVar13;
  if ((uVar13 < *(uint *)(param_3 + 1)) || (uVar13 <= *(uint *)((long)param_3 + 0xc)))
  goto LAB_004a898c;
  uVar16 = *(uint *)((long)param_3 + 0xc) + (uVar13 - *(uint *)(param_3 + 1));
  puVar11 = (undefined8 *)FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar16 << 4,0x10);
  if (puVar11 == (undefined8 *)0x0) {
    return 2;
  }
  puVar12 = (undefined8 *)*param_3;
  if ((puVar12 != (undefined8 *)0x0) && (puVar12 != puVar11)) {
    uVar3 = *(uint *)(param_3 + 1);
    if (uVar3 != 0) {
      uVar19 = *puVar12;
      puVar11[1] = puVar12[1];
      *puVar11 = uVar19;
      if (uVar3 != 1) {
        if (uVar3 == 2) {
          lVar14 = 1;
        }
        else {
          lVar1 = 0;
          do {
            lVar14 = lVar1;
            lVar1 = *param_3 + lVar14 * 0x10;
            uVar19 = *(undefined8 *)(lVar1 + 0x10);
            puVar11[lVar14 * 2 + 3] = *(undefined8 *)(lVar1 + 0x18);
            puVar11[lVar14 * 2 + 2] = uVar19;
            lVar1 = *param_3 + lVar14 * 0x10;
            uVar19 = *(undefined8 *)(lVar1 + 0x20);
            puVar11[lVar14 * 2 + 5] = *(undefined8 *)(lVar1 + 0x28);
            puVar11[lVar14 * 2 + 4] = uVar19;
            lVar1 = lVar14 + 2;
          } while (((ulong)uVar3 - 1) - (ulong)(~uVar3 & 1) != lVar14 + 2);
          lVar14 = lVar14 + 3;
          if ((~uVar3 & 1) == 0) goto LAB_004a8978;
        }
        puVar12 = (undefined8 *)(*param_3 + lVar14 * 0x10);
        uVar19 = *puVar12;
        (puVar11 + lVar14 * 2)[1] = puVar12[1];
        puVar11[lVar14 * 2] = uVar19;
      }
LAB_004a8978:
      puVar12 = (undefined8 *)*param_3;
    }
    FUN_004047f0(*(undefined4 *)puVar10,puVar12);
  }
  *param_3 = (long)puVar11;
  *(uint *)((long)param_3 + 0xc) = uVar16;
LAB_004a898c:
  fVar21 = fVar21 / (float)uVar13;
  fVar22 = fVar21 * (float)uVar13;
  *(uint *)(param_3 + 1) = uVar13;
  pfVar15 = (float *)*param_3;
  uVar16 = 0;
  do {
    fVar17 = sinf(-fVar22);
    *pfVar15 = fVar17;
    pfVar15[1] = 0.0;
    fVar17 = cosf(fVar22);
    fVar22 = fVar22 - (fVar21 + fVar21);
    uVar16 = uVar16 + 1;
    pfVar15[2] = fVar17;
    pfVar15[3] = 0.0;
    pfVar15 = pfVar15 + 4;
  } while (uVar16 < uVar13);
  return 1;
}


