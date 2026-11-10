/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b12b0; name: FUN_004b12b0
 */


undefined8 FUN_004b12b0(float param_1,long param_2,ulong param_3,undefined1 (*param_4) [16])

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  
  uVar8 = (uint)(param_3 >> 0xc);
  uVar5 = uVar8 & 0xffff7;
  uVar14 = (uint)param_3;
  uVar4 = uVar14 - ((uVar8 & 0xfffff) - uVar5 >> 3);
  uVar2 = uVar4 & 0xff;
  if (((uVar14 & 0xf00) == 0x100) && ((uVar4 & 0xfe) != 0)) {
    puVar9 = *(uint **)(param_2 + 0x78);
    uVar3 = *(uint *)(param_2 + 0x80);
    puVar11 = puVar9;
    if (uVar3 == 0) {
LAB_004b135c:
      if (puVar11 == puVar9 + (ulong)uVar3 * 4) goto LAB_004b13c4;
      bVar6 = true;
      if ((uVar14 >> 0xe & 1) != 0) goto LAB_004b1370;
LAB_004b13d8:
      if (bVar6) goto LAB_004b13fc;
    }
    else {
      lVar12 = (ulong)uVar3 << 4;
      do {
        if (*puVar11 == (uVar5 << 0xc | uVar2 | 0x100)) goto LAB_004b135c;
        lVar12 = lVar12 + -0x10;
        puVar11 = puVar11 + 4;
      } while (lVar12 != 0);
LAB_004b13c4:
      lVar12 = FUN_0047b520(param_2);
      bVar6 = lVar12 != 0;
      if ((uVar14 >> 0xe & 1) == 0) goto LAB_004b13d8;
LAB_004b1370:
      if (!bVar6) goto LAB_004b13d8;
      puVar9 = *(uint **)(param_2 + 0x78);
      uVar3 = *(uint *)(param_2 + 0x80);
      puVar11 = puVar9;
      if (uVar3 == 0) {
LAB_004b13e4:
        if (puVar11 != puVar9 + (ulong)uVar3 * 4) goto LAB_004b13fc;
      }
      else {
        lVar12 = (ulong)uVar3 << 4;
        do {
          if (*puVar11 ==
              (uVar4 - (uVar5 - (uVar8 & 0xffff3) >> 2) & 0xff | (uVar8 & 0xffff3) << 0xc | 0x100))
          goto LAB_004b13e4;
          lVar12 = lVar12 + -0x10;
          puVar11 = puVar11 + 4;
        } while (lVar12 != 0);
      }
      lVar12 = FUN_0047b520(param_2);
      if (lVar12 != 0) goto LAB_004b13fc;
    }
LAB_004b14c4:
    uVar7 = 2;
  }
  else {
LAB_004b13fc:
    if ((param_3 & 0xff) != 0) {
                    /* WARNING: Subroutine does not return */
      memset(param_4,0,(ulong)((uVar14 & 0xff) << 2));
    }
    if ((uVar5 == 3) && (*(int *)(param_2 + 0x54) == 1)) {
      fVar15 = sinf(param_1);
      uVar10 = 1;
      fVar15 = DAT_01d4bfe0 + fVar15 * (DAT_01d4c244 * fVar15 + 0.5);
      fVar15 = fVar15 * fVar15;
      *(float *)*param_4 = (1.0 - fVar15) + *(float *)*param_4;
    }
    else {
      puVar9 = *(uint **)(param_2 + 0x78);
      uVar4 = *(uint *)(param_2 + 0x80);
      puVar11 = puVar9;
      if (uVar4 == 0) {
LAB_004b14b0:
        if (puVar11 == puVar9 + (ulong)uVar4 * 4) goto LAB_004b14cc;
        lVar12 = *(long *)(puVar11 + 2);
      }
      else {
        lVar12 = (ulong)uVar4 << 4;
        do {
          if (*puVar11 == (uVar5 << 0xc | uVar14 & 0xf00 | uVar2)) goto LAB_004b14b0;
          lVar12 = lVar12 + -0x10;
          puVar11 = puVar11 + 4;
        } while (lVar12 != 0);
LAB_004b14cc:
        lVar12 = FUN_0047b520(param_2);
      }
      if (lVar12 == 0) goto LAB_004b14c4;
      fVar15 = sinf(param_1);
      fVar16 = cosf(param_1);
      uVar4 = 0xffffffff;
      do {
        do {
          uVar8 = uVar4;
          uVar4 = uVar8 + 1;
          pfVar1 = (float *)(lVar12 + (ulong)uVar4 * 0x10);
          fVar18 = *pfVar1 * fVar15 + fVar16 * pfVar1[1];
          fVar20 = pfVar1[2] * fVar15 + fVar16 * pfVar1[3];
        } while (fVar18 < 0.0);
      } while (fVar20 < 0.0);
      fVar16 = 1.0 / (fVar20 * fVar20 + fVar18 * fVar18);
      lVar12 = (ulong)*(ushort *)(&DAT_01d56800 + (ulong)uVar4 * 4 + ((ulong)uVar2 - 1) * 0x20 + 2)
               * 4;
      fVar15 = fVar16 * fVar20 * fVar20;
      *(float *)(*param_4 + lVar12) = *(float *)(*param_4 + lVar12) + fVar18 * fVar18 * fVar16;
      uVar10 = (ulong)*(ushort *)
                       (&DAT_01d56800 + (ulong)(uVar8 + 2) * 4 + ((ulong)uVar2 - 1) * 0x20 + 2);
    }
    uVar2 = (uVar14 & 0xff) + 3 >> 2;
    *(float *)(*param_4 + uVar10 * 4) = *(float *)(*param_4 + uVar10 * 4) + fVar15;
    if (param_4 < param_4 + uVar2) {
      uVar4 = uVar2 * 0x10;
      pauVar13 = param_4;
      if ((uVar4 + 0x1f >> 4 & 1) == 0) {
        pauVar13 = param_4 + 1;
        auVar17 = NEON_frsqrte(*param_4,4);
        auVar17 = NEON_frecpe(auVar17,4);
        *(long *)(*param_4 + 8) = auVar17._8_8_;
        *(long *)*param_4 = auVar17._0_8_;
      }
      if (0xf < (ulong)uVar4 - 1) {
        do {
          auVar19 = NEON_frsqrte(pauVar13[1],4);
          auVar17 = NEON_frsqrte(*pauVar13,4);
          auVar17 = NEON_frecpe(auVar17,4);
          *(long *)(*pauVar13 + 8) = auVar17._8_8_;
          *(long *)*pauVar13 = auVar17._0_8_;
          auVar17 = NEON_frecpe(auVar19,4);
          *(long *)(pauVar13[1] + 8) = auVar17._8_8_;
          *(long *)pauVar13[1] = auVar17._0_8_;
          pauVar13 = pauVar13 + 2;
        } while (pauVar13 < param_4 + uVar2);
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}


