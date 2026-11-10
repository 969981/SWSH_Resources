/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00398100; name: FUN_00398100
 */


void FUN_00398100(long *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float __x;
  undefined1 (*pauVar13) [16];
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  undefined1 (*pauVar17) [12];
  ulong uVar18;
  undefined1 (*pauVar19) [12];
  int iVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  float fVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  __x = DAT_01d4c710;
  iVar20 = (int)param_1[8];
  if (iVar20 != 0) {
    lVar21 = *param_1;
    lVar22 = param_1[2];
    do {
      uVar3 = iVar20 - 1;
      uVar23 = (ulong)uVar3;
      puVar24 = (undefined8 *)(lVar22 + uVar23 * 0x1c);
      if (uVar3 != 0) {
        Hint_Prefetch((long)puVar24 + -0x1c,0,0,0);
      }
      uVar2 = *(uint *)(lVar22 + uVar23 * 0x1c + 0x18);
      if ((uVar2 & 1) == 0) {
        pauVar13 = (undefined1 (*) [16])(lVar22 + (ulong)(uVar2 >> 1) * 0x1c);
        auVar30 = NEON_fmin(*pauVar13,*(undefined1 (*) [16])(pauVar13[1] + 0xc),4);
        auVar29 = auVar30._0_12_;
        auVar27._12_4_ = 0;
        auVar27._0_12_ = *(undefined1 (*) [12])(*pauVar13 + 0xc);
        auVar5._12_4_ = 0;
        auVar5._0_12_ = *(undefined1 (*) [12])(pauVar13[2] + 8);
        auVar30 = NEON_fmax(auVar27,auVar5,4);
        auVar26 = auVar30._0_12_;
      }
      else {
        uVar4 = uVar2 >> 1 & 0xf;
        if (uVar4 == 0) {
          fVar25 = sqrtf(__x);
          auVar29._4_4_ = fVar25;
          auVar29._0_4_ = fVar25;
          auVar29._8_4_ = fVar25;
          auVar26._0_4_ = -fVar25;
          auVar26._4_4_ = auVar26._0_4_;
          auVar26._8_4_ = auVar26._0_4_;
        }
        else {
          puVar1 = (uint *)(lVar21 + (ulong)(uVar2 >> 5) * 4);
          pauVar13 = (undefined1 (*) [16])(param_2 + (ulong)*puVar1 * 0x18);
          auVar30 = *pauVar13;
          auVar29 = auVar30._0_12_;
          auVar28 = *(undefined1 (*) [16])(*pauVar13 + 0xc);
          auVar26 = auVar28._0_12_;
          if (uVar4 != 1) {
            uVar18 = (ulong)(uVar4 << 2) - 8;
            uVar2 = ((uint)(uVar18 >> 2) & 0x3fffffff) + 1;
            puVar15 = puVar1 + 1;
            if ((uVar2 & 3) != 0) {
              lVar16 = -((ulong)uVar2 & 3);
              puVar14 = puVar15;
              do {
                puVar15 = puVar14 + 1;
                pauVar19 = (undefined1 (*) [12])(param_2 + (ulong)*puVar14 * 0x18);
                auVar31._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar19 + 8) >> 0x20);
                auVar31._0_12_ = *pauVar19;
                auVar30 = NEON_fmin(auVar30,auVar31,4);
                auVar6._12_4_ = (int)((ulong)*(undefined8 *)(pauVar19[1] + 8) >> 0x20);
                auVar6._0_12_ = pauVar19[1];
                auVar28 = NEON_fmax(auVar28,auVar6,4);
                lVar16 = lVar16 + 1;
                puVar14 = puVar15;
              } while (lVar16 != 0);
            }
            auVar29 = auVar30._0_12_;
            auVar26 = auVar28._0_12_;
            if (0xb < uVar18) {
              do {
                pauVar19 = (undefined1 (*) [12])(param_2 + (ulong)*puVar15 * 0x18);
                auVar7._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar19 + 8) >> 0x20);
                auVar7._0_12_ = *pauVar19;
                auVar31 = NEON_fmin(auVar30,auVar7,4);
                pauVar17 = (undefined1 (*) [12])(param_2 + (ulong)puVar15[1] * 0x18);
                auVar30._12_4_ = (int)((ulong)*(undefined8 *)(pauVar19[1] + 8) >> 0x20);
                auVar30._0_12_ = pauVar19[1];
                auVar30 = NEON_fmax(auVar28,auVar30,4);
                auVar28._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
                auVar28._0_12_ = *pauVar17;
                auVar28 = NEON_fmin(auVar31,auVar28,4);
                pauVar19 = (undefined1 (*) [12])(param_2 + (ulong)puVar15[2] * 0x18);
                auVar8._12_4_ = (int)((ulong)*(undefined8 *)(pauVar17[1] + 8) >> 0x20);
                auVar8._0_12_ = pauVar17[1];
                auVar30 = NEON_fmax(auVar30,auVar8,4);
                auVar9._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar19 + 8) >> 0x20);
                auVar9._0_12_ = *pauVar19;
                auVar31 = NEON_fmin(auVar28,auVar9,4);
                pauVar17 = (undefined1 (*) [12])(param_2 + (ulong)puVar15[3] * 0x18);
                auVar10._12_4_ = (int)((ulong)*(undefined8 *)(pauVar19[1] + 8) >> 0x20);
                auVar10._0_12_ = pauVar19[1];
                auVar28 = NEON_fmax(auVar30,auVar10,4);
                auVar11._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
                auVar11._0_12_ = *pauVar17;
                auVar30 = NEON_fmin(auVar31,auVar11,4);
                auVar29 = auVar30._0_12_;
                auVar12._12_4_ = (int)((ulong)*(undefined8 *)(pauVar17[1] + 8) >> 0x20);
                auVar12._0_12_ = pauVar17[1];
                auVar28 = NEON_fmax(auVar28,auVar12,4);
                auVar26 = auVar28._0_12_;
                puVar15 = puVar15 + 4;
              } while (puVar15 != puVar1 + uVar4);
            }
          }
        }
      }
      *puVar24 = auVar29._0_8_;
      *(int *)(puVar24 + 1) = auVar29._8_4_;
      lVar16 = lVar22 + uVar23 * 0x1c;
      *(long *)(lVar16 + 0xc) = auVar26._0_8_;
      iVar20 = iVar20 + -1;
      *(int *)(lVar16 + 0x14) = auVar26._8_4_;
    } while (uVar3 != 0);
  }
  return;
}


