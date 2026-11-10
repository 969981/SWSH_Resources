/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a8ea0; name: FUN_004a8ea0
 */


void FUN_004a8ea0(uint param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
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
  
  fVar7 = DAT_01d4c63c;
  fVar6 = DAT_01d4c240;
  fVar5 = DAT_01d4c19c;
  fVar4 = DAT_01d4c070;
  fVar3 = DAT_01d4bdf0;
  fVar13 = DAT_01d4bad8;
  if (param_1 < 5) {
    lVar8 = 0;
    puVar9 = (undefined4 *)(param_2 + 0x100);
    do {
      puVar9[-0x40] = 0x3f800000;
      fVar13 = *(float *)((long)&DAT_01d56600 + lVar8);
      uVar2 = *(undefined4 *)((long)&DAT_01d56608 + lVar8);
      *puVar9 = *(undefined4 *)((long)&DAT_01d56604 + lVar8);
      puVar9[0x20] = uVar2;
      lVar8 = lVar8 + 0x10;
      puVar9[-0x20] = -fVar13;
      puVar9 = puVar9 + 1;
    } while (lVar8 != 0x200);
  }
  else {
    uVar1 = param_1 & 3;
    lVar8 = 0;
    do {
      while( true ) {
        fVar15 = (float)(&DAT_01d56600)[lVar8 * 4];
        fVar14 = (float)(&DAT_01d56604)[lVar8 * 4];
        fVar16 = fVar14 * fVar14;
        fVar19 = (float)(&DAT_01d56608)[lVar8 * 4];
        puVar9 = (undefined4 *)(param_2 + lVar8 * 4);
        *puVar9 = 0x3f800000;
        puVar9[0x20] = -fVar15;
        puVar9[0x40] = fVar14;
        puVar9[0x60] = fVar19;
        if (fVar16 < fVar3) break;
        if ((ulong)param_1 - 5 < 3) {
          lVar10 = 4;
        }
        else {
          uVar11 = 0x80;
          lVar10 = 4;
          do {
            uVar12 = uVar11 >> 7;
            puVar9[uVar11 & 0xffffff80] = 0;
            *(undefined4 *)((long)puVar9 + ((uVar12 & 0x1ffffff) << 9 | 0x80)) = 0;
            lVar10 = lVar10 + 4;
            *(undefined4 *)((long)puVar9 + ((uVar12 & 0x1ffffff) << 9 | 0x100)) = 0;
            uVar11 = uVar11 + 0x80;
            *(undefined4 *)((long)puVar9 + ((uVar12 & 0x1ffffff) << 9 | 0x180)) = 0;
          } while ((ulong)param_1 - (ulong)uVar1 != lVar10);
        }
        if (uVar1 != 0) {
          uVar11 = lVar10 << 5;
          lVar10 = -(ulong)uVar1;
          do {
            uVar12 = uVar11 & 0xffffffe0;
            uVar11 = uVar11 + 0x20;
            lVar10 = lVar10 + 1;
            puVar9[uVar12] = 0;
          } while (lVar10 != 0);
        }
        puVar9[0xc0] = fVar16;
        if (9 < param_1) {
          puVar9[0x180] = fVar14;
        }
LAB_004a90cc:
        lVar8 = lVar8 + 1;
        if (lVar8 == 0x20) {
          return;
        }
      }
      fVar17 = 1.0 - fVar16;
      fVar18 = SQRT(fVar17);
      puVar9[0xc0] = fVar16 * 1.5 + -0.5;
      fVar15 = (1.0 / fVar18) * -fVar15;
      fVar19 = (1.0 / fVar18) * fVar19;
      fVar21 = fVar19 * fVar19;
      fVar22 = fVar15 * fVar15;
      fVar23 = fVar17 * fVar5;
      fVar20 = (fVar19 + fVar19) * fVar15;
      puVar9[0xa0] = fVar18 * fVar14 * fVar6 * fVar15;
      puVar9[0xe0] = fVar18 * fVar14 * fVar5 * (fVar19 + fVar19);
      puVar9[0x80] = fVar20 * fVar23;
      puVar9[0x100] = (fVar21 - fVar22) * fVar23;
      if (param_1 < 10) goto LAB_004a90cc;
      fVar23 = fVar17 * fVar7 * fVar18;
      fVar18 = fVar16 * 5.0 * fVar18 * fVar4 - fVar18 * fVar4;
      fVar17 = fVar14 * fVar13 * fVar17;
      puVar9[0x140] = fVar20 * fVar17;
      puVar9[0x180] = fVar14 * 0.5 * (fVar16 * 5.0 + -3.0);
      puVar9[0x160] = fVar18 * fVar15;
      puVar9[0x1a0] = fVar18 * fVar19;
      puVar9[0x120] = fVar15 * fVar23 * (fVar21 * 3.0 - fVar22);
      puVar9[0x1c0] = (fVar21 - fVar22) * fVar17;
      puVar9[0x1e0] = fVar19 * fVar23 * (fVar21 - fVar22 * 3.0);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x20);
  }
  return;
}


