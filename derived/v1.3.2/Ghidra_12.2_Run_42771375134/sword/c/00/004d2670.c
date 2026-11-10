/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d2670; name: FUN_004d2670
 */


undefined8 FUN_004d2670(long param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
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
  undefined1 auVar26 [16];
  
  if ((param_3 & 1) != 0) {
    pvVar5 = (void *)FUN_00404750(*(undefined4 *)PTR_DAT_02712e28,
                                  (uint)*(byte *)(param_1 + 8) * 4 + 0xc & 0x7f0,0x10);
    *(void **)(param_1 + 0x10) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      memset(pvVar5,0,(ulong)*(byte *)(param_1 + 8) << 2);
    }
  }
  if ((param_3 >> 2 & 1) != 0) {
    pvVar5 = (void *)FUN_00404750(*(undefined4 *)PTR_DAT_02712e28,
                                  (uint)*(byte *)(param_1 + 8) * 4 + 0xc & 0x7f0,0x10);
    *(void **)(param_1 + 0x18) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      memset(pvVar5,0,(ulong)*(byte *)(param_1 + 8) << 2);
    }
  }
  puVar3 = PTR_DAT_02712e28;
  if ((param_3 >> 4 & 1) != 0) {
    uVar6 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,(uint)*(byte *)(param_1 + 8) * 0xb0);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    lVar7 = FUN_00404690(*(undefined4 *)puVar3,(uint)*(byte *)(param_1 + 8) * 0xb0);
    *(long *)(param_1 + 0x38) = lVar7;
    if (lVar7 == 0) {
      return 2;
    }
    if (*(long *)(param_1 + 0x30) == 0) {
      return 2;
    }
    fVar16 = DAT_01d4bc5c / (float)param_2;
    fVar10 = sinf(fVar16);
    fVar16 = cosf(fVar16);
    if (*(char *)(param_1 + 8) == '\0') {
      bVar4 = true;
    }
    else {
      fVar10 = fVar10 * DAT_01d4bb4c;
      fVar12 = DAT_01d4c118 - fVar16 * DAT_01d4c794;
      fVar11 = fVar16 * DAT_01d4c794 + DAT_01d4c118;
      fVar14 = 1.0 / (fVar12 + fVar10);
      fVar25 = (fVar12 - fVar10) * fVar14;
      fVar12 = (fVar11 + fVar10) * DAT_01d4c07c * fVar14;
      fVar10 = (fVar11 - fVar10) * DAT_01d4c07c * fVar14;
      fVar13 = -fVar25;
      fVar21 = fVar10 * fVar13;
      fVar24 = (DAT_01d4c4f4 + DAT_01d4bf38 * fVar16) * fVar14;
      fVar11 = -fVar24;
      fVar22 = fVar10 * fVar11 * fVar11;
      fVar17 = fVar25 * fVar24;
      fVar14 = (DAT_01d4c0d8 + DAT_01d4c2f8 * fVar16) * fVar14;
      fVar18 = fVar10 - fVar24 * fVar14;
      fVar20 = fVar14 * fVar13;
      fVar19 = fVar20 - fVar24 * fVar18;
      fVar16 = fVar14 - fVar24 * fVar12;
      fVar15 = (fVar10 - fVar25 * fVar12) - fVar24 * fVar16;
      uVar9 = 1;
      fVar23 = fVar24 * fVar24;
      auVar26 = NEON_fmov(0x3f800000,4);
      lVar8 = 0;
      lVar2 = lVar7;
      while( true ) {
        if (lVar2 != 0) {
          puVar1 = (undefined8 *)(lVar7 + lVar8);
          puVar1[0x14] = 0;
          puVar1[0x15] = 0;
          puVar1[1] = auVar26._8_8_;
          *puVar1 = auVar26._0_8_;
          *(undefined4 *)(puVar1 + 0x12) = 0x80000000;
          *(undefined4 *)(puVar1 + 0xc) = 0x80000000;
          *(undefined4 *)((long)puVar1 + 100) = 0;
          *(undefined4 *)(puVar1 + 0xd) = 0x80000000;
          *(undefined4 *)((long)puVar1 + 0x6c) = 0;
          *(undefined4 *)(puVar1 + 0xe) = 0x80000000;
          *(undefined4 *)((long)puVar1 + 0x74) = 0;
          *(undefined4 *)(puVar1 + 0xf) = 0;
          *(undefined4 *)((long)puVar1 + 0x7c) = 0x80000000;
          puVar1[0x10] = 0x3f800000;
          puVar1[0x11] = 0x8000000000000000;
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[8] = 0;
          puVar1[9] = 0x80000000;
          puVar1[10] = 0x8000000000000000;
          puVar1[0xb] = 0x8000000000000000;
          lVar7 = *(long *)(param_1 + 0x38);
        }
        puVar1 = (undefined8 *)(lVar7 + lVar8);
        *(float *)(puVar1 + 0x10) = fVar12;
        *(float *)((long)puVar1 + 0x84) = fVar14;
        *(float *)(puVar1 + 0x11) = fVar10;
        *(float *)((long)puVar1 + 0x8c) = fVar11;
        *(float *)(puVar1 + 0x12) = fVar13;
        puVar1[2] = 0;
        *(undefined4 *)(puVar1 + 3) = 0;
        *(float *)((long)puVar1 + 0x1c) = fVar16;
        puVar1[4] = 0;
        *(float *)(puVar1 + 5) = fVar16;
        *(float *)((long)puVar1 + 0x2c) = fVar15;
        *(undefined4 *)(puVar1 + 6) = 0;
        *(float *)((long)puVar1 + 0x34) = fVar16;
        *(float *)(puVar1 + 7) = fVar15;
        *(float *)((long)puVar1 + 0x3c) = (fVar20 + fVar12 * fVar17) - fVar24 * fVar15;
        *(float *)(puVar1 + 8) = fVar14;
        *(float *)((long)puVar1 + 0x44) = fVar18;
        *(float *)(puVar1 + 9) = fVar19;
        *(float *)((long)puVar1 + 0x4c) = fVar21 - fVar24 * (fVar19 + fVar20);
        *(float *)(puVar1 + 10) = fVar10;
        *(float *)((long)puVar1 + 0x54) = fVar10 * fVar11;
        *(float *)(puVar1 + 0xb) = fVar22 + fVar21;
        *(float *)((long)puVar1 + 0x5c) = (fVar21 * -2.0 - fVar22) * fVar24;
        *(float *)(puVar1 + 0xc) = fVar11;
        *(float *)((long)puVar1 + 100) = fVar23 - fVar25;
        *(float *)(puVar1 + 0xd) = (fVar25 * -2.0 + fVar23) * fVar11;
        *(float *)((long)puVar1 + 0x6c) = fVar25 * fVar25 + fVar23 * (fVar23 + fVar25 * -3.0);
        *(float *)(puVar1 + 0xe) = fVar13;
        *(float *)((long)puVar1 + 0x74) = fVar17;
        *(float *)(puVar1 + 0xf) = fVar17 * fVar11 + fVar25 * fVar25;
        *(float *)((long)puVar1 + 0x7c) = (fVar25 * -2.0 * fVar25 - fVar17 * fVar11) * fVar24;
        puVar1[1] = CONCAT44(fVar12,fVar12);
        *puVar1 = CONCAT44(fVar12,fVar12);
        if (*(byte *)(param_1 + 8) <= uVar9) break;
        lVar7 = *(long *)(param_1 + 0x38);
        lVar8 = lVar8 + 0xb0;
        uVar9 = uVar9 + 1;
        lVar2 = lVar7 + lVar8;
      }
      bVar4 = *(byte *)(param_1 + 8) == 0;
    }
    fVar16 = DAT_01d4bf3c / (float)param_2;
    fVar10 = sinf(fVar16);
    fVar16 = cosf(fVar16);
    if (!bVar4) {
      fVar14 = 1.0 / (fVar10 + 1.0);
      fVar23 = fVar16 * -2.0 * fVar14;
      fVar24 = fVar14 - fVar14 * fVar10;
      fVar17 = fVar24 * fVar23;
      fVar22 = fVar23 * fVar23;
      fVar10 = (fVar16 + 1.0) * 0.5 * fVar14;
      fVar14 = -(fVar16 + 1.0) * fVar14;
      fVar16 = -fVar23;
      fVar18 = fVar10 - fVar23 * fVar14;
      fVar12 = -fVar24;
      fVar20 = fVar14 * fVar12;
      fVar11 = fVar10 * fVar16;
      fVar21 = fVar10 * fVar12;
      fVar13 = fVar11 + fVar14;
      fVar19 = fVar20 - fVar23 * fVar18;
      fVar15 = (fVar21 + fVar10) - fVar23 * fVar13;
      auVar26 = NEON_fmov(0x3f800000,4);
      lVar7 = 0;
      uVar9 = 0;
      do {
        lVar8 = *(long *)(param_1 + 0x30);
        if (lVar8 + lVar7 != 0) {
          puVar1 = (undefined8 *)(lVar8 + lVar7);
          puVar1[0x14] = 0;
          puVar1[0x15] = 0;
          puVar1[1] = auVar26._8_8_;
          *puVar1 = auVar26._0_8_;
          *(undefined4 *)(puVar1 + 0x12) = 0x80000000;
          *(undefined4 *)(puVar1 + 0xc) = 0x80000000;
          *(undefined4 *)((long)puVar1 + 100) = 0;
          *(undefined4 *)(puVar1 + 0xd) = 0x80000000;
          *(undefined4 *)((long)puVar1 + 0x6c) = 0;
          *(undefined4 *)(puVar1 + 0xe) = 0x80000000;
          *(undefined4 *)((long)puVar1 + 0x74) = 0;
          *(undefined4 *)(puVar1 + 0xf) = 0;
          *(undefined4 *)((long)puVar1 + 0x7c) = 0x80000000;
          puVar1[0x10] = 0x3f800000;
          puVar1[0x11] = 0x8000000000000000;
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[8] = 0;
          puVar1[9] = 0x80000000;
          puVar1[10] = 0x8000000000000000;
          puVar1[0xb] = 0x8000000000000000;
          lVar8 = *(long *)(param_1 + 0x30);
        }
        puVar1 = (undefined8 *)(lVar8 + lVar7);
        lVar7 = lVar7 + 0xb0;
        *(float *)((long)puVar1 + 0x7c) = (fVar24 * -2.0 * fVar24 - fVar17 * fVar16) * fVar23;
        *(float *)(puVar1 + 0x10) = fVar10;
        *(float *)((long)puVar1 + 0x84) = fVar14;
        *(float *)(puVar1 + 0x11) = fVar10;
        *(float *)((long)puVar1 + 0x8c) = fVar16;
        *(float *)(puVar1 + 0x12) = fVar12;
        uVar9 = uVar9 + 1;
        puVar1[2] = 0;
        *(undefined4 *)(puVar1 + 3) = 0;
        *(float *)((long)puVar1 + 0x1c) = fVar13;
        puVar1[4] = 0;
        *(float *)(puVar1 + 5) = fVar13;
        *(float *)((long)puVar1 + 0x2c) = fVar15;
        *(undefined4 *)(puVar1 + 6) = 0;
        *(float *)((long)puVar1 + 0x34) = fVar13;
        *(float *)(puVar1 + 7) = fVar15;
        *(float *)((long)puVar1 + 0x3c) = (fVar20 + fVar10 * fVar17) - fVar23 * fVar15;
        *(float *)(puVar1 + 8) = fVar14;
        *(float *)((long)puVar1 + 0x44) = fVar18;
        *(float *)(puVar1 + 9) = fVar19;
        *(float *)((long)puVar1 + 0x4c) = fVar21 - fVar23 * (fVar19 + fVar20);
        *(float *)(puVar1 + 10) = fVar10;
        *(float *)((long)puVar1 + 0x54) = fVar11;
        *(float *)(puVar1 + 0xb) = fVar11 * fVar16 + fVar21;
        *(float *)((long)puVar1 + 0x5c) = (fVar21 * -2.0 - fVar11 * fVar16) * fVar23;
        *(float *)(puVar1 + 0xc) = fVar16;
        *(float *)((long)puVar1 + 100) = fVar22 - fVar24;
        *(float *)(puVar1 + 0xd) = (fVar24 * -2.0 + fVar22) * fVar16;
        *(float *)((long)puVar1 + 0x6c) = fVar24 * fVar24 + fVar22 * (fVar22 + fVar24 * -3.0);
        *(float *)(puVar1 + 0xe) = fVar12;
        *(float *)((long)puVar1 + 0x74) = fVar17;
        *(float *)(puVar1 + 0xf) = fVar17 * fVar16 + fVar24 * fVar24;
        puVar1[1] = CONCAT44(fVar10,fVar10);
        *puVar1 = CONCAT44(fVar10,fVar10);
      } while (uVar9 < *(byte *)(param_1 + 8));
    }
  }
  puVar3 = PTR_DAT_02712e28;
  if ((param_3 >> 1 & 1) == 0) {
    *(uint *)(param_1 + 0x44) = param_3;
    return 1;
  }
  pvVar5 = (void *)FUN_00404750(*(undefined4 *)PTR_DAT_02712e28,
                                (uint)*(byte *)(param_1 + 8) * 4 + 0xc & 0x7f0,0x10);
  *(void **)(param_1 + 0x20) = pvVar5;
  if (pvVar5 != (void *)0x0) {
    if (*(byte *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      memset(pvVar5,0,(ulong)*(byte *)(param_1 + 8) << 2);
    }
    pvVar5 = (void *)FUN_00404750(*(undefined4 *)puVar3,0,0x10);
    *(void **)(param_1 + 0x28) = pvVar5;
    if (pvVar5 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(pvVar5,0,0);
    }
  }
  return 2;
}


