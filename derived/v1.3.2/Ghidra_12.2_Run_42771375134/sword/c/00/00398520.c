/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00398520; name: FUN_00398520
 */


void FUN_00398520(long *param_1,long param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float __x;
  ulong uVar14;
  undefined1 (*pauVar15) [16];
  uint *puVar16;
  uint *puVar17;
  long lVar18;
  undefined1 (*pauVar19) [12];
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined1 (*pauVar23) [12];
  uint uVar24;
  undefined8 *puVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  float fVar29;
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  __x = DAT_01d4c710;
  lVar20 = param_1[10];
  if (lVar20 != 0) {
    iVar27 = *(uint *)(param_1 + 0xc) + 1;
    if (iVar27 != 0) {
      lVar22 = *param_1;
      lVar26 = param_1[2];
      uVar14 = (ulong)*(uint *)(param_1 + 0xc);
      do {
        uVar4 = *(uint *)(lVar20 + uVar14 * 4);
        if (uVar4 != 0) {
          uVar28 = (ulong)(uint)(iVar27 << 5);
          uVar24 = 0x80000000;
          iVar27 = 0x1f;
          do {
            uVar28 = (ulong)((int)uVar28 - 1);
            puVar25 = (undefined8 *)(lVar26 + uVar28 * 0x1c);
            Hint_Prefetch(puVar25,0,0,0);
            if ((uVar24 & uVar4) != 0) {
              uVar3 = *(uint *)(lVar26 + uVar28 * 0x1c + 0x18);
              if ((uVar3 & 1) == 0) {
                pauVar15 = (undefined1 (*) [16])(lVar26 + (ulong)(uVar3 >> 1) * 0x1c);
                auVar34 = NEON_fmin(*pauVar15,*(undefined1 (*) [16])(pauVar15[1] + 0xc),4);
                auVar33 = auVar34._0_12_;
                auVar31._12_4_ = 0;
                auVar31._0_12_ = *(undefined1 (*) [12])(*pauVar15 + 0xc);
                auVar6._12_4_ = 0;
                auVar6._0_12_ = *(undefined1 (*) [12])(pauVar15[2] + 8);
                auVar34 = NEON_fmax(auVar31,auVar6,4);
                auVar30 = auVar34._0_12_;
              }
              else {
                uVar5 = uVar3 >> 1 & 0xf;
                if (uVar5 == 0) {
                  fVar29 = sqrtf(__x);
                  auVar33._4_4_ = fVar29;
                  auVar33._0_4_ = fVar29;
                  auVar33._8_4_ = fVar29;
                  auVar30._0_4_ = -fVar29;
                  auVar30._4_4_ = auVar30._0_4_;
                  auVar30._8_4_ = auVar30._0_4_;
                }
                else {
                  puVar1 = (uint *)(lVar22 + (ulong)(uVar3 >> 5) * 4);
                  pauVar15 = (undefined1 (*) [16])(param_2 + (ulong)*puVar1 * 0x18);
                  auVar34 = *pauVar15;
                  auVar33 = auVar34._0_12_;
                  auVar32 = *(undefined1 (*) [16])(*pauVar15 + 0xc);
                  auVar30 = auVar32._0_12_;
                  if (uVar5 != 1) {
                    uVar21 = (ulong)(uVar5 << 2) - 8;
                    uVar3 = ((uint)(uVar21 >> 2) & 0x3fffffff) + 1;
                    puVar17 = puVar1 + 1;
                    if ((uVar3 & 3) != 0) {
                      lVar18 = -((ulong)uVar3 & 3);
                      puVar16 = puVar17;
                      do {
                        puVar17 = puVar16 + 1;
                        pauVar23 = (undefined1 (*) [12])(param_2 + (ulong)*puVar16 * 0x18);
                        auVar35._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
                        auVar35._0_12_ = *pauVar23;
                        auVar34 = NEON_fmin(auVar34,auVar35,4);
                        auVar7._12_4_ = (int)((ulong)*(undefined8 *)(pauVar23[1] + 8) >> 0x20);
                        auVar7._0_12_ = pauVar23[1];
                        auVar32 = NEON_fmax(auVar32,auVar7,4);
                        lVar18 = lVar18 + 1;
                        puVar16 = puVar17;
                      } while (lVar18 != 0);
                    }
                    auVar30 = auVar32._0_12_;
                    auVar33 = auVar34._0_12_;
                    if (0xb < uVar21) {
                      do {
                        pauVar23 = (undefined1 (*) [12])(param_2 + (ulong)*puVar17 * 0x18);
                        auVar8._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
                        auVar8._0_12_ = *pauVar23;
                        auVar35 = NEON_fmin(auVar34,auVar8,4);
                        pauVar19 = (undefined1 (*) [12])(param_2 + (ulong)puVar17[1] * 0x18);
                        auVar34._12_4_ = (int)((ulong)*(undefined8 *)(pauVar23[1] + 8) >> 0x20);
                        auVar34._0_12_ = pauVar23[1];
                        auVar34 = NEON_fmax(auVar32,auVar34,4);
                        auVar32._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar19 + 8) >> 0x20);
                        auVar32._0_12_ = *pauVar19;
                        auVar32 = NEON_fmin(auVar35,auVar32,4);
                        pauVar23 = (undefined1 (*) [12])(param_2 + (ulong)puVar17[2] * 0x18);
                        auVar9._12_4_ = (int)((ulong)*(undefined8 *)(pauVar19[1] + 8) >> 0x20);
                        auVar9._0_12_ = pauVar19[1];
                        auVar34 = NEON_fmax(auVar34,auVar9,4);
                        auVar10._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
                        auVar10._0_12_ = *pauVar23;
                        auVar35 = NEON_fmin(auVar32,auVar10,4);
                        pauVar19 = (undefined1 (*) [12])(param_2 + (ulong)puVar17[3] * 0x18);
                        auVar11._12_4_ = (int)((ulong)*(undefined8 *)(pauVar23[1] + 8) >> 0x20);
                        auVar11._0_12_ = pauVar23[1];
                        auVar32 = NEON_fmax(auVar34,auVar11,4);
                        auVar12._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar19 + 8) >> 0x20);
                        auVar12._0_12_ = *pauVar19;
                        auVar34 = NEON_fmin(auVar35,auVar12,4);
                        auVar33 = auVar34._0_12_;
                        auVar13._12_4_ = (int)((ulong)*(undefined8 *)(pauVar19[1] + 8) >> 0x20);
                        auVar13._0_12_ = pauVar19[1];
                        auVar32 = NEON_fmax(auVar32,auVar13,4);
                        auVar30 = auVar32._0_12_;
                        puVar17 = puVar17 + 4;
                      } while (puVar17 != puVar1 + uVar5);
                    }
                  }
                }
              }
              *puVar25 = auVar33._0_8_;
              *(int *)(puVar25 + 1) = auVar33._8_4_;
              lVar18 = lVar26 + uVar28 * 0x1c;
              *(long *)(lVar18 + 0xc) = auVar30._0_8_;
              *(int *)(lVar18 + 0x14) = auVar30._8_4_;
            }
            uVar24 = uVar24 >> 1;
            bVar2 = iVar27 != 0;
            iVar27 = iVar27 + -1;
          } while (bVar2);
          *(undefined4 *)(lVar20 + uVar14 * 4) = 0;
        }
        iVar27 = (int)uVar14;
        bVar2 = uVar14 != 0;
        uVar14 = uVar14 - 1;
      } while (bVar2);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


