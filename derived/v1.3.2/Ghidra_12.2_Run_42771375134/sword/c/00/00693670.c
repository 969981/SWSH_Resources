/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00693670; name: FUN_00693670
 */


void FUN_00693670(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  byte bVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined4 *puVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *pbVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  undefined1 *puVar28;
  undefined4 uVar29;
  char *pcVar30;
  int iVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  uint uVar37;
  undefined1 *puVar38;
  ulong uVar39;
  
  puVar20 = (undefined4 *)param_1[7];
  pbVar23 = (byte *)(*param_1 + -1);
  uVar6 = puVar20[0x1c];
  uVar8 = puVar20[0x1d];
  pbVar3 = pbVar23 + ((int)param_1[1] - 5);
  iVar7 = puVar20[0xd];
  uVar9 = puVar20[0xe];
  uVar12 = puVar20[0xf];
  puVar28 = (undefined1 *)(param_1[3] + -1);
  iVar31 = (int)puVar28 - (param_2 - (int)param_1[4]);
  lVar25 = *(long *)(puVar20 + 0x10);
  uVar22 = *(ulong *)(puVar20 + 0x12);
  iVar15 = iVar31 + -1;
  puVar4 = puVar28 + ((int)param_1[4] - 0x101);
  puVar38 = (undefined1 *)(lVar25 + -1);
  uVar26 = puVar20[0x14];
  lVar10 = *(long *)(puVar20 + 0x18);
  lVar11 = *(long *)(puVar20 + 0x1a);
  pcVar30 = "invalid distance too far back";
LAB_00693744:
  if (uVar26 < 0xf) {
    uVar33 = (ulong)uVar26;
    uVar17 = uVar26 + 8;
    uVar26 = uVar26 + 0x10;
    uVar22 = ((ulong)pbVar23[1] << (uVar33 & 0x3f)) + uVar22 +
             ((ulong)pbVar23[2] << ((ulong)uVar17 & 0x3f));
    pbVar23 = pbVar23 + 2;
  }
  uVar33 = uVar22 & (uint)~(-1 << (ulong)(uVar6 & 0x1f));
  while( true ) {
    pbVar24 = (byte *)(lVar10 + uVar33 * 4);
    bVar13 = *pbVar24;
    uVar14 = *(ushort *)(pbVar24 + 2);
    uVar22 = uVar22 >> ((ulong)pbVar24[1] & 0x3f);
    uVar26 = uVar26 - pbVar24[1];
    uVar32 = (uint)bVar13;
    uVar17 = (uint)uVar14;
    if (uVar32 == 0) break;
    if ((bVar13 >> 4 & 1) != 0) {
      uVar32 = uVar32 & 0xf;
      if ((bVar13 & 0xf) != 0) {
        if (uVar26 < uVar32) {
          pbVar23 = pbVar23 + 1;
          uVar33 = (ulong)uVar26;
          uVar26 = uVar26 + 8;
          uVar22 = ((ulong)*pbVar23 << (uVar33 & 0x3f)) + uVar22;
        }
        uVar21 = (uint)uVar22;
        uVar22 = uVar22 >> uVar32;
        uVar17 = (uVar21 & (-1 << (ulong)uVar32 ^ 0xffffffffU)) + uVar17;
        uVar26 = uVar26 - uVar32;
      }
      pbVar24 = pbVar23;
      if (uVar26 < 0xf) {
        pbVar24 = pbVar23 + 2;
        uVar33 = (ulong)uVar26;
        uVar32 = uVar26 + 8;
        uVar26 = uVar26 + 0x10;
        uVar22 = ((ulong)pbVar23[1] << (uVar33 & 0x3f)) + uVar22 +
                 ((ulong)*pbVar24 << ((ulong)uVar32 & 0x3f));
      }
      uVar33 = uVar22 & (uint)~(-1 << (ulong)(uVar8 & 0x1f));
      goto LAB_0069384c;
    }
    if ((bVar13 >> 6 & 1) != 0) {
      if ((bVar13 >> 5 & 1) == 0) {
        pcVar30 = "invalid literal/length code";
        goto LAB_00693dbc;
      }
      uVar29 = 0xb;
      goto LAB_00693dc4;
    }
    uVar33 = (uVar22 & (uint)~(-1 << (ulong)(uVar32 & 0x1f))) + (ulong)uVar14;
  }
  puVar28[1] = (char)uVar14;
  puVar35 = puVar28 + 1;
  goto joined_r0x00693c34;
LAB_0069384c:
  pbVar23 = (byte *)(lVar11 + uVar33 * 4);
  bVar13 = *pbVar23;
  uVar14 = *(ushort *)(pbVar23 + 2);
  uVar22 = uVar22 >> ((ulong)pbVar23[1] & 0x3f);
  uVar26 = uVar26 - pbVar23[1];
  pbVar23 = pbVar24;
  if ((bVar13 >> 4 & 1) != 0) goto LAB_00693870;
  if ((bVar13 >> 6 & 1) != 0) {
    pcVar30 = "invalid distance code";
    goto LAB_00693dbc;
  }
  uVar33 = (uVar22 & (uint)~(-1 << (ulong)(bVar13 & 0x1f))) + (ulong)uVar14;
  goto LAB_0069384c;
LAB_00693870:
  uVar21 = bVar13 & 0xf;
  uVar32 = uVar26;
  if (uVar26 < uVar21) {
    pbVar23 = pbVar24 + 1;
    uVar22 = ((ulong)*pbVar23 << ((ulong)uVar26 & 0x3f)) + uVar22;
    uVar32 = uVar26 + 8;
    if (uVar32 < uVar21) {
      pbVar23 = pbVar24 + 2;
      uVar22 = ((ulong)*pbVar23 << ((ulong)uVar32 & 0x3f)) + uVar22;
      uVar32 = uVar26 + 0x10;
    }
  }
  uVar5 = (uint)uVar22 & (-1 << uVar21 ^ 0xffffffffU);
  uVar22 = uVar22 >> uVar21;
  uVar37 = (uint)uVar14;
  uVar2 = uVar5 + uVar37;
  uVar26 = uVar32 - uVar21;
  iVar27 = (int)puVar28;
  uVar32 = uVar2 - (iVar27 - iVar31);
  if (uVar2 < (uint)(iVar27 - iVar31) || uVar32 == 0) {
    iVar27 = 0;
    lVar34 = 0;
    do {
      lVar1 = lVar34 - (ulong)uVar2;
      lVar19 = lVar34 + 3;
      puVar28[lVar34 + 1] = puVar28[lVar1 + 1];
      puVar28[lVar34 + 2] = puVar28[lVar1 + 2];
      iVar27 = iVar27 + -3;
      puVar28[lVar34 + 3] = puVar28[lVar1 + 3];
      lVar34 = lVar19;
    } while (2 < uVar17 + iVar27);
    puVar36 = puVar28 + lVar19;
    puVar35 = puVar36;
    if (uVar17 != (uint)lVar19) {
      puVar36[1] = puVar28[(lVar19 - (ulong)uVar2) + 1];
      puVar35 = puVar36 + 1;
      if (uVar17 - 1 != (uint)lVar19) {
        puVar36[2] = puVar28[(lVar19 - (ulong)uVar2) + 2];
        puVar35 = puVar36 + 2;
      }
    }
    goto joined_r0x00693c34;
  }
  if ((uVar9 < uVar32) && (puVar20[0x6f8] != 0)) {
LAB_00693dbc:
    param_1[6] = (long)pcVar30;
    uVar29 = 0x1d;
LAB_00693dc4:
    *puVar20 = uVar29;
LAB_00693dc8:
    lVar25 = (long)pbVar23 - (ulong)(uVar26 >> 3);
    *(int *)(param_1 + 4) = ((int)puVar4 - (int)puVar28) + 0x101;
    param_1[3] = (long)(puVar28 + 1);
    *param_1 = lVar25 + 1;
    *(int *)(param_1 + 1) = ((int)pbVar3 - (int)lVar25) + 5;
    *(ulong *)(puVar20 + 0x12) = uVar22 & (uint)~(-1 << (ulong)(uVar26 & 7));
    puVar20[0x14] = uVar26 & 7;
    return;
  }
  uVar21 = (uint)uVar14;
  puVar36 = puVar28;
  if (uVar12 == 0) {
    uVar33 = (ulong)(iVar7 - uVar32);
    puVar18 = puVar38 + uVar33;
    uVar16 = uVar17 - uVar32;
    if (uVar32 <= uVar17 && uVar16 != 0) {
      uVar17 = (iVar15 + uVar5 + uVar37) - iVar27;
      puVar35 = puVar28;
      if ((uVar32 & 7) != 0) {
        lVar34 = lVar25 + uVar33;
        lVar19 = 0;
        do {
          lVar1 = lVar19 + 1;
          puVar28[lVar19 + 1] = *(undefined1 *)(lVar34 + lVar19);
          lVar19 = lVar1;
        } while (((iVar31 + uVar21 + uVar5) - iVar27 & 7) != (uint)lVar1);
        puVar35 = puVar28 + lVar1;
        uVar32 = uVar32 - (uint)lVar1;
        puVar18 = (undefined1 *)(lVar34 + lVar1 + -1);
      }
      if (6 < uVar17) {
        puVar18 = puVar18 + 4;
        puVar35 = puVar35 + 4;
        do {
          puVar35[-3] = puVar18[-3];
          puVar35[-2] = puVar18[-2];
          puVar35[-1] = puVar18[-1];
          *puVar35 = *puVar18;
          puVar35[1] = puVar18[1];
          puVar35[2] = puVar18[2];
          puVar35[3] = puVar18[3];
          puVar35[4] = puVar18[4];
          uVar32 = uVar32 - 8;
          puVar18 = puVar18 + 8;
          puVar35 = puVar35 + 8;
        } while (uVar32 != 0);
      }
LAB_00693bb8:
      puVar18 = puVar28 + (ulong)uVar17 + 1 + -(ulong)uVar2;
      puVar36 = puVar28 + (ulong)uVar17 + 1;
      uVar17 = uVar16;
    }
  }
  else if (uVar12 < uVar32) {
    uVar33 = (ulong)((uVar12 + iVar7) - uVar32);
    uVar32 = uVar32 - uVar12;
    uVar16 = uVar17 - uVar32;
    puVar18 = puVar38 + uVar33;
    if (uVar32 <= uVar17 && uVar16 != 0) {
      uVar39 = (ulong)(((iVar15 - uVar12) + uVar5 + uVar21) - iVar27);
      puVar35 = puVar28;
      if ((uVar32 & 7) != 0) {
        lVar34 = lVar25 + uVar33;
        lVar19 = 0;
        do {
          lVar1 = lVar19 + 1;
          puVar28[lVar19 + 1] = *(undefined1 *)(lVar34 + lVar19);
          lVar19 = lVar1;
        } while ((((iVar31 - uVar12) + uVar37 + uVar5) - iVar27 & 7) != (uint)lVar1);
        uVar32 = uVar32 - (uint)lVar1;
        puVar18 = (undefined1 *)(lVar34 + lVar1 + -1);
        puVar35 = puVar28 + lVar1;
      }
      if (6 < (~uVar12 + iVar31 + uVar5 + uVar37) - iVar27) {
        puVar18 = puVar18 + 4;
        puVar35 = puVar35 + 4;
        do {
          puVar35[-3] = puVar18[-3];
          puVar35[-2] = puVar18[-2];
          puVar35[-1] = puVar18[-1];
          *puVar35 = *puVar18;
          puVar35[1] = puVar18[1];
          puVar35[2] = puVar18[2];
          puVar35[3] = puVar18[3];
          puVar35[4] = puVar18[4];
          uVar32 = uVar32 - 8;
          puVar18 = puVar18 + 8;
          puVar35 = puVar35 + 8;
        } while (uVar32 != 0);
      }
      puVar36 = puVar28 + uVar39 + 1;
      puVar18 = puVar38;
      uVar17 = uVar16;
      if (uVar12 <= uVar16 && uVar16 - uVar12 != 0) {
        puVar35 = puVar38;
        uVar17 = uVar12;
        if ((uVar12 & 7) != 0) {
          lVar34 = 0;
          do {
            puVar35 = (undefined1 *)(lVar25 + lVar34);
            lVar19 = lVar34 + uVar39;
            lVar34 = lVar34 + 1;
            puVar28[lVar19 + 2] = *puVar35;
          } while ((uVar12 & 7) != (uint)lVar34);
          puVar36 = puVar28 + lVar34 + uVar39 + 1;
          uVar17 = uVar12 - (uint)lVar34;
          puVar35 = (undefined1 *)(lVar25 + lVar34 + -1);
        }
        if (6 < uVar12 - 1) {
          puVar35 = puVar35 + 4;
          puVar36 = puVar36 + 4;
          do {
            puVar36[-3] = puVar35[-3];
            puVar36[-2] = puVar35[-2];
            puVar36[-1] = puVar35[-1];
            *puVar36 = *puVar35;
            puVar36[1] = puVar35[1];
            puVar36[2] = puVar35[2];
            puVar36[3] = puVar35[3];
            puVar36[4] = puVar35[4];
            uVar17 = uVar17 - 8;
            puVar35 = puVar35 + 8;
            puVar36 = puVar36 + 8;
          } while (uVar17 != 0);
        }
        puVar18 = puVar28 + uVar39 + (ulong)(uVar12 - 1) + 2 + -(ulong)uVar2;
        puVar36 = puVar28 + uVar39 + (ulong)(uVar12 - 1) + 2;
        uVar17 = uVar16 - uVar12;
      }
    }
  }
  else {
    puVar18 = puVar38 + (uVar12 - uVar32);
    uVar16 = uVar17 - uVar32;
    if (uVar32 <= uVar17 && uVar16 != 0) {
      uVar17 = (iVar15 + uVar5 + uVar21) - iVar27;
      puVar35 = puVar28;
      if ((uVar32 & 7) != 0) {
        lVar34 = lVar25 + (ulong)(uVar12 - uVar32);
        lVar19 = 0;
        do {
          lVar1 = lVar19 + 1;
          puVar28[lVar19 + 1] = *(undefined1 *)(lVar34 + lVar19);
          lVar19 = lVar1;
        } while (((iVar31 + uVar21 + uVar5) - iVar27 & 7) != (uint)lVar1);
        puVar35 = puVar28 + lVar1;
        uVar32 = uVar32 - (uint)lVar1;
        puVar18 = (undefined1 *)(lVar34 + lVar1 + -1);
      }
      if (6 < uVar17) {
        puVar18 = puVar18 + 4;
        puVar35 = puVar35 + 4;
        do {
          puVar35[-3] = puVar18[-3];
          puVar35[-2] = puVar18[-2];
          puVar35[-1] = puVar18[-1];
          *puVar35 = *puVar18;
          puVar35[1] = puVar18[1];
          puVar35[2] = puVar18[2];
          puVar35[3] = puVar18[3];
          puVar35[4] = puVar18[4];
          uVar32 = uVar32 - 8;
          puVar18 = puVar18 + 8;
          puVar35 = puVar35 + 8;
        } while (uVar32 != 0);
      }
      goto LAB_00693bb8;
    }
  }
  for (; 2 < uVar17; uVar17 = uVar17 - 3) {
    puVar36[1] = puVar18[1];
    puVar36[2] = puVar18[2];
    puVar18 = puVar18 + 3;
    puVar36[3] = *puVar18;
    puVar36 = puVar36 + 3;
  }
  puVar35 = puVar36;
  if (uVar17 != 0) {
    puVar36[1] = puVar18[1];
    puVar35 = puVar36 + 1;
    if (uVar17 != 1) {
      puVar36[2] = puVar18[2];
      puVar35 = puVar36 + 2;
    }
  }
joined_r0x00693c34:
  puVar28 = puVar35;
  if ((puVar4 <= puVar28) || (pbVar3 <= pbVar23)) goto LAB_00693dc8;
  goto LAB_00693744;
}


