/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013ab40; name: FUN_0013ab40
 */


void FUN_0013ab40(uint *param_1,float *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ushort *puVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar13 = (ulong)*param_1;
  lVar12 = *(long *)(param_1 + 4);
  if (*param_1 != 0) {
    fVar18 = *param_2;
    fVar19 = param_2[1];
    fVar20 = param_2[2];
    puVar11 = (uint *)(lVar12 + 0x10);
    do {
      if (*(long *)(puVar11 + 4) != 0) {
        uVar2 = puVar11[-3] * 2;
        uVar3 = puVar11[-1] * 2;
        uVar4 = *puVar11 * 2;
        uVar5 = puVar11[1] * 2;
        uVar6 = puVar11[2] * 2;
        fVar21 = (float)(uVar2 & 0x7ffffffe);
        if (-1 < (int)uVar2) {
          fVar21 = (float)~uVar2;
        }
        fVar24 = (float)(uVar4 & 0x7ffffffe);
        fVar21 = fVar21 - fVar18;
        uVar2 = puVar11[-2] * 2;
        fVar22 = (float)(uVar2 & 0x7ffffffe);
        if (-1 < (int)uVar2) {
          fVar22 = (float)~uVar2;
        }
        fVar23 = (float)(uVar3 & 0x7ffffffe);
        if (-1 < (int)uVar3) {
          fVar23 = (float)~uVar3;
        }
        if (-1 < (int)uVar4) {
          fVar24 = (float)~uVar4;
        }
        fVar25 = (float)(uVar5 & 0x7ffffffe);
        if (-1 < (int)uVar5) {
          fVar25 = (float)~uVar5;
        }
        fVar22 = fVar22 - fVar19;
        fVar26 = (float)(uVar6 & 0x7ffffffe);
        fVar23 = fVar23 - fVar20;
        if (-1 < (int)uVar6) {
          fVar26 = (float)~uVar6;
        }
        fVar24 = fVar24 - fVar18;
        fVar25 = fVar25 - fVar19;
        uVar2 = (uint)fVar21 | 0x80000000;
        if ((int)fVar21 < 0) {
          uVar2 = ~(uint)fVar21;
        }
        puVar11[-3] = uVar2 >> 1;
        uVar2 = (uint)fVar22 | 0x80000000;
        if ((int)fVar22 < 0) {
          uVar2 = ~(uint)fVar22;
        }
        fVar26 = fVar26 - fVar20;
        puVar11[-2] = uVar2 >> 1;
        uVar2 = (uint)fVar23 | 0x80000000;
        if ((int)fVar23 < 0) {
          uVar2 = ~(uint)fVar23;
        }
        puVar11[-1] = uVar2 >> 1;
        uVar2 = (uint)fVar24 | 0x80000000;
        if ((int)fVar24 < 0) {
          uVar2 = ~(uint)fVar24;
        }
        *puVar11 = uVar2 >> 1;
        uVar2 = (uint)fVar25 | 0x80000000;
        if ((int)fVar25 < 0) {
          uVar2 = ~(uint)fVar25;
        }
        puVar11[1] = uVar2 >> 1;
        uVar2 = (uint)fVar26 | 0x80000000;
        if ((int)fVar26 < 0) {
          uVar2 = ~(uint)fVar26;
        }
        puVar11[2] = uVar2 >> 1;
      }
      puVar11 = puVar11 + 0xe;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  uVar2 = param_1[10];
  if (uVar2 != 0) {
    lVar14 = *(long *)(param_1 + 8);
    uVar13 = 0;
    do {
      uVar1 = *(ushort *)(lVar14 + uVar13 * 0xc + 4);
      uVar15 = (ulong)uVar1;
      if (uVar15 != 0) {
        uVar17 = (ulong)*(uint *)(lVar14 + uVar13 * 0xc);
        pfVar16 = (float *)(*(long *)(param_1 + 0x530) + uVar17 * 0x18);
        fVar18 = *(float *)(*(long *)(param_1 + 0x532) + uVar17 * 4);
        fVar24 = pfVar16[1] - fVar18;
        fVar19 = *pfVar16 - fVar18;
        fVar22 = pfVar16[2] - fVar18;
        fVar20 = pfVar16[3] + fVar18;
        uVar3 = (uint)fVar19 | 0x80000000;
        fVar21 = pfVar16[4] + fVar18;
        fVar18 = pfVar16[5] + fVar18;
        if ((int)fVar19 < 0) {
          uVar3 = ~(uint)fVar19;
        }
        uVar4 = (uint)fVar24 | 0x80000000;
        if ((int)fVar24 < 0) {
          uVar4 = ~(uint)fVar24;
        }
        uVar5 = (uint)fVar22 | 0x80000000;
        if ((int)fVar22 < 0) {
          uVar5 = ~(uint)fVar22;
        }
        uVar6 = (uint)fVar20 | 0x80000000;
        if ((int)fVar20 < 0) {
          uVar6 = ~(uint)fVar20;
        }
        uVar7 = (uint)fVar21 | 0x80000000;
        if ((int)fVar21 < 0) {
          uVar7 = ~(uint)fVar21;
        }
        uVar8 = (uint)fVar18 | 0x80000000;
        if ((int)fVar18 < 0) {
          uVar8 = ~(uint)fVar18;
        }
        lVar9 = lVar14 + uVar13 * 0xc;
        if (uVar1 == 1) {
          lVar9 = lVar9 + 8;
        }
        else {
          lVar9 = *(long *)(param_1 + uVar15 * 4 + 0x26) + (ulong)*(uint *)(lVar9 + 8) * 4;
        }
        puVar10 = (ushort *)(lVar9 + 2);
        do {
          lVar9 = *(long *)(lVar12 + (ulong)*puVar10 * 0x38 + 0x20);
          puVar11 = (uint *)(*(long *)(lVar9 + 0x80) + (ulong)puVar10[-1] * 8);
          if ((puVar11[1] & 1) == 0) {
            lVar9 = *(long *)(lVar9 + 0xa0);
          }
          else {
            lVar9 = *(long *)(lVar9 + 0x98);
          }
          puVar11 = (uint *)(lVar9 + (ulong)*puVar11 * 0x18);
          puVar10 = puVar10 + 2;
          uVar15 = uVar15 - 1;
          *puVar11 = uVar3 >> 1;
          puVar11[1] = uVar4 >> 1;
          puVar11[2] = uVar5 >> 1;
          puVar11[3] = uVar6 >> 1;
          puVar11[4] = uVar7 >> 1;
          puVar11[5] = uVar8 >> 1;
        } while (uVar15 != 0);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar2);
  }
  return;
}


