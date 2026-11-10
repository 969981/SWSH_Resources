/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00428a50; name: FUN_00428a50
 */


void FUN_00428a50(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 uint param_5)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  ulong uVar20;
  ushort *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  
  uVar2 = (uint)(ushort)param_1[0xc6];
  if ((uint)*(ushort *)((long)param_1 + 0x31a) <= (uint)(ushort)param_1[0xc6]) {
    uVar2 = (uint)*(ushort *)((long)param_1 + 0x31a);
  }
  if (param_5 == 0) {
    return;
  }
  lVar14 = *(long *)(param_1 + 2);
  uVar15 = *param_1;
  uVar17 = (ulong)*(ushort *)((long)param_1 + 0x316);
  uVar2 = uVar2 & 0xfffc;
  uVar13 = param_1[4];
LAB_00428aa8:
  lVar18 = (long)param_1 + (ulong)(ushort)param_1[0xc5] * 2;
  uVar3 = *(ushort *)(lVar18 + 0x214);
  uVar16 = (uint)*(ushort *)((long)param_1 + (ulong)((uint)uVar17 & 0xffff) * 2 + 0x294);
  uVar5 = uVar15 - uVar16;
  uVar6 = uVar15 - uVar3;
  if (uVar5 <= uVar6) {
    uVar6 = uVar5;
  }
  uVar5 = uVar15 - uVar13;
  if (uVar6 <= uVar15 - uVar13) {
    uVar5 = uVar6;
  }
  uVar6 = param_5;
  if (uVar5 <= param_5) {
    uVar6 = uVar5;
  }
  if (3 < uVar6) {
    uVar7 = (uVar3 - 1) - uVar15;
    uVar5 = (uVar13 - 1) - uVar15;
    uVar15 = (uVar16 - 1) - uVar15;
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if (uVar5 <= uVar15) {
      uVar5 = uVar15;
    }
    if (uVar5 <= ~param_5) {
      uVar5 = ~param_5;
    }
    puVar10 = param_2;
    puVar11 = param_4;
    puVar12 = param_3;
    uVar15 = uVar6;
    do {
      uVar22 = *puVar10;
      puVar9 = (undefined8 *)(lVar14 + (ulong)uVar13 * 4);
      puVar9[1] = puVar10[1];
      *puVar9 = uVar22;
      param_1[4] = param_1[4] + 4;
      if (uVar2 == 0) {
        uVar17 = 0;
        uVar23 = 0;
        uVar22 = 0;
        uVar25 = 0;
        uVar24 = 0;
        if ((short)param_1[0xc6] != 0) goto LAB_00428c90;
      }
      else {
        uVar25 = 0;
        uVar24 = 0;
        uVar23 = 0;
        uVar22 = 0;
        uVar17 = 0;
        pfVar19 = (float *)(param_1 + 0x45);
        puVar21 = (ushort *)((long)param_1 + 0x29a);
        do {
          fVar26 = pfVar19[-0x40];
          fVar32 = pfVar19[-0x3f];
          puVar9 = (undefined8 *)(lVar14 + (ulong)puVar21[-0x43] * 4);
          uVar36 = puVar9[1];
          uVar34 = *puVar9;
          puVar9 = (undefined8 *)(lVar14 + (ulong)puVar21[-0x42] * 4);
          uVar30 = puVar9[1];
          uVar28 = *puVar9;
          puVar9 = (undefined8 *)(lVar14 + (ulong)puVar21[-0x41] * 4);
          uVar37 = puVar9[1];
          uVar35 = *puVar9;
          fVar27 = pfVar19[-0x3e];
          fVar33 = pfVar19[-0x3d];
          puVar9 = (undefined8 *)(lVar14 + (ulong)puVar21[-0x40] * 4);
          uVar31 = puVar9[1];
          uVar29 = *puVar9;
          uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) + (float)((ulong)uVar34 >> 0x20) * fVar26
                            + (float)((ulong)uVar28 >> 0x20) * fVar32 +
                            (float)((ulong)uVar35 >> 0x20) * fVar27 +
                            (float)((ulong)uVar29 >> 0x20) * fVar33,
                            (float)uVar24 + (float)uVar34 * fVar26 + (float)uVar28 * fVar32 +
                            (float)uVar35 * fVar27 + (float)uVar29 * fVar33);
          uVar25 = CONCAT44((float)((ulong)uVar25 >> 0x20) + (float)((ulong)uVar36 >> 0x20) * fVar26
                            + (float)((ulong)uVar30 >> 0x20) * fVar32 +
                            (float)((ulong)uVar37 >> 0x20) * fVar27 +
                            (float)((ulong)uVar31 >> 0x20) * fVar33,
                            (float)uVar25 + (float)uVar36 * fVar26 + (float)uVar30 * fVar32 +
                            (float)uVar37 * fVar27 + (float)uVar31 * fVar33);
          puVar9 = (undefined8 *)(lVar14 + (ulong)puVar21[-3] * 4);
          uVar37 = puVar9[1];
          uVar36 = *puVar9;
          fVar26 = *pfVar19;
          puVar9 = (undefined8 *)(lVar14 + (ulong)puVar21[-2] * 4);
          uVar35 = puVar9[1];
          uVar34 = *puVar9;
          fVar27 = pfVar19[1];
          puVar9 = (undefined8 *)(lVar14 + (ulong)puVar21[-1] * 4);
          uVar30 = puVar9[1];
          uVar28 = *puVar9;
          fVar32 = pfVar19[2];
          fVar33 = pfVar19[3];
          pfVar19 = pfVar19 + 4;
          puVar9 = (undefined8 *)(lVar14 + (ulong)*puVar21 * 4);
          uVar31 = puVar9[1];
          uVar29 = *puVar9;
          uVar22 = CONCAT44((float)((ulong)uVar22 >> 0x20) + fVar26 * (float)((ulong)uVar36 >> 0x20)
                            + (float)((ulong)uVar34 >> 0x20) * fVar27 +
                            (float)((ulong)uVar28 >> 0x20) * fVar32 +
                            (float)((ulong)uVar29 >> 0x20) * fVar33,
                            (float)uVar22 + fVar26 * (float)uVar36 + (float)uVar34 * fVar27 +
                            (float)uVar28 * fVar32 + (float)uVar29 * fVar33);
          uVar23 = CONCAT44((float)((ulong)uVar23 >> 0x20) + fVar26 * (float)((ulong)uVar37 >> 0x20)
                            + (float)((ulong)uVar35 >> 0x20) * fVar27 +
                            (float)((ulong)uVar30 >> 0x20) * fVar32 +
                            (float)((ulong)uVar31 >> 0x20) * fVar33,
                            (float)uVar23 + fVar26 * (float)uVar37 + (float)uVar35 * fVar27 +
                            (float)uVar30 * fVar32 + (float)uVar31 * fVar33);
          puVar21[-0x43] = puVar21[-0x43] + 4;
          puVar21[-0x42] = puVar21[-0x42] + 4;
          puVar21[-0x41] = puVar21[-0x41] + 4;
          puVar21[-0x40] = puVar21[-0x40] + 4;
          puVar21[-3] = puVar21[-3] + 4;
          puVar21[-2] = puVar21[-2] + 4;
          puVar21[-1] = puVar21[-1] + 4;
          uVar17 = uVar17 + 4;
          *puVar21 = *puVar21 + 4;
          puVar21 = puVar21 + 4;
        } while (uVar17 < uVar2);
        uVar17 = (ulong)uVar2;
        if (uVar2 < (ushort)param_1[0xc6]) {
LAB_00428c90:
          uVar20 = uVar17;
          do {
            uVar3 = *(ushort *)((long)param_1 + uVar20 * 2 + 0x214);
            puVar9 = (undefined8 *)(lVar14 + (ulong)uVar3 * 4);
            uVar29 = puVar9[1];
            uVar28 = *puVar9;
            uVar1 = uVar20 + 1;
            fVar26 = (float)param_1[uVar20 + 5];
            *(ushort *)((long)param_1 + uVar20 * 2 + 0x214) = uVar3 + 4;
            uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) +
                              (float)((ulong)uVar28 >> 0x20) * fVar26,
                              (float)uVar24 + (float)uVar28 * fVar26);
            uVar25 = CONCAT44((float)((ulong)uVar25 >> 0x20) +
                              (float)((ulong)uVar29 >> 0x20) * fVar26,
                              (float)uVar25 + (float)uVar29 * fVar26);
            uVar20 = uVar1;
          } while (uVar1 < (ushort)param_1[0xc6]);
        }
      }
      if ((uint)uVar17 < (uint)*(ushort *)((long)param_1 + 0x31a)) {
        do {
          uVar3 = *(ushort *)((long)param_1 + uVar17 * 2 + 0x294);
          puVar9 = (undefined8 *)(lVar14 + (ulong)uVar3 * 4);
          uVar29 = puVar9[1];
          uVar28 = *puVar9;
          uVar20 = uVar17 + 1;
          fVar26 = (float)param_1[uVar17 + 0x45];
          *(ushort *)((long)param_1 + uVar17 * 2 + 0x294) = uVar3 + 4;
          uVar22 = CONCAT44((float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar28 >> 0x20) * fVar26
                            ,(float)uVar22 + (float)uVar28 * fVar26);
          uVar23 = CONCAT44((float)((ulong)uVar23 >> 0x20) + (float)((ulong)uVar29 >> 0x20) * fVar26
                            ,(float)uVar23 + (float)uVar29 * fVar26);
          uVar17 = uVar20;
        } while (uVar20 < *(ushort *)((long)param_1 + 0x31a));
      }
      uVar15 = uVar15 - 4;
      puVar12[1] = uVar25;
      *puVar12 = uVar24;
      puVar11[1] = uVar23;
      *puVar11 = uVar22;
      if (uVar15 < 4) goto code_r0x00428d24;
      uVar13 = param_1[4];
      puVar11 = puVar11 + 2;
      puVar12 = puVar12 + 2;
      puVar10 = puVar10 + 2;
    } while( true );
  }
  if (uVar15 == uVar3) goto LAB_00428d64;
  goto LAB_00428d84;
code_r0x00428d24:
  lVar18 = (ulong)(-uVar5 - 5 & 0xfffffffc) * 4;
  param_4 = (undefined8 *)((long)param_4 + lVar18 + 0x10);
  param_3 = (undefined8 *)((long)param_3 + lVar18 + 0x10);
  param_2 = (undefined8 *)((long)param_2 + lVar18 + 0x10);
  lVar18 = (long)param_1 + (ulong)(ushort)param_1[0xc5] * 2;
  uVar15 = *param_1;
  if (uVar15 == *(ushort *)(lVar18 + 0x214)) {
LAB_00428d64:
    *(undefined2 *)(lVar18 + 0x214) = 0;
    uVar4 = (ushort)param_1[0xc6];
    uVar3 = (short)param_1[0xc5] + 1;
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    *(ushort *)(param_1 + 0xc5) = uVar3 - uVar8 * uVar4;
  }
LAB_00428d84:
  uVar17 = (ulong)*(ushort *)((long)param_1 + 0x316);
  if (uVar15 == *(ushort *)((long)param_1 + uVar17 * 2 + 0x294)) {
    *(undefined2 *)((long)param_1 + uVar17 * 2 + 0x294) = 0;
    uVar3 = *(ushort *)((long)param_1 + 0x31a);
    uVar13 = *(ushort *)((long)param_1 + 0x316) + 1 & 0xffff;
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar13 / uVar3;
    }
    uVar13 = uVar13 - uVar5 * uVar3;
    uVar17 = (ulong)uVar13;
    *(short *)((long)param_1 + 0x316) = (short)uVar13;
    uVar13 = param_1[4];
  }
  else {
    uVar13 = param_1[4];
  }
  if (uVar13 == uVar15) {
    uVar13 = 0;
    param_1[4] = 0;
  }
  param_5 = param_5 - uVar6;
  if (param_5 == 0) {
    return;
  }
  goto LAB_00428aa8;
}


