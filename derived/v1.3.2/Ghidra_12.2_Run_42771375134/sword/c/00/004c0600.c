/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c0600; name: FUN_004c0600
 */


void FUN_004c0600(uint *param_1,long param_2,long *param_3,long *param_4,long *param_5,long *param_6
                 )

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float *pfVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  bool bVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
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
  
  uVar24 = *param_1;
  if (uVar24 != 2) {
    uVar17 = 2;
    uVar20 = 1;
    uVar19 = 0;
    do {
      uVar1 = uVar19 + 1;
      if (uVar1 < uVar24 - 1) {
        pfVar2 = (float *)(param_2 + uVar19 * 8);
        uVar22 = (ulong)uVar17;
        uVar21 = uVar20;
        do {
          uVar12 = (uint)(uVar21 + 1);
          if (uVar12 < uVar24) {
            pfVar3 = (float *)(param_2 + uVar21 * 8);
            uVar23 = uVar22;
            do {
              uVar13 = (ulong)(uVar24 - 1);
              plVar7 = param_4;
              plVar9 = param_6;
              if (uVar23 != uVar13 && (uVar19 != uVar13 && uVar21 != uVar13)) {
                plVar7 = param_3;
                plVar9 = param_5;
              }
              uVar13 = FUN_004c09a0(param_1,param_2,uVar19 & 0xffffffff,uVar21 & 0xffffffff,
                                    uVar23 & 0xffffffff);
              if ((uVar13 & 1) == 0) {
                if ((plVar7 != (long *)0x0) && (*(uint *)(plVar7 + 1) != 0)) {
                  lVar18 = (ulong)*(uint *)(plVar7 + 1) * 0x18;
                  puVar14 = (uint *)(*plVar7 + 8);
                  do {
                    lVar18 = lVar18 + -0x18;
                    if ((uVar19 == puVar14[-2]) && (uVar21 == puVar14[-1])) {
                      bVar10 = uVar23 == *puVar14;
                    }
                    else {
                      bVar10 = false;
                    }
                  } while ((lVar18 != 0) && (puVar14 = puVar14 + 6, !bVar10));
                  if (bVar10) goto LAB_004c0940;
                }
                uVar8 = *(uint *)(plVar9 + 1);
                uVar24 = *(uint *)((long)plVar9 + 0xc);
                if (uVar8 < uVar24) {
LAB_004c0820:
                  if (uVar24 <= uVar8) goto LAB_004c0844;
                  uVar24 = *(uint *)(plVar9 + 1);
                  *(uint *)(plVar9 + 1) = uVar24 + 1;
                  puVar16 = (undefined4 *)(*plVar9 + (ulong)uVar24 * 0x18);
                }
                else {
                  uVar24 = uVar24 + 4;
                  lVar18 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,(ulong)uVar24 * 0x18);
                  if (lVar18 != 0) {
                    lVar11 = *plVar9;
                    if ((lVar11 != 0) && (lVar11 != lVar18)) {
                      uVar13 = (ulong)*(uint *)(plVar9 + 1);
                      if (*(uint *)(plVar9 + 1) != 0) {
                        lVar15 = 0;
                        while( true ) {
                          uVar13 = uVar13 - 1;
                          puVar4 = (undefined8 *)(lVar11 + lVar15);
                          puVar5 = (undefined8 *)(lVar18 + lVar15);
                          *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
                          *puVar5 = *puVar4;
                          *(undefined4 *)((long)puVar5 + 0xc) = *(undefined4 *)((long)puVar4 + 0xc);
                          *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar4 + 2);
                          *(undefined4 *)((long)puVar5 + 0x14) =
                               *(undefined4 *)((long)puVar4 + 0x14);
                          if (uVar13 == 0) break;
                          lVar11 = *plVar9;
                          lVar15 = lVar15 + 0x18;
                        }
                        lVar11 = *plVar9;
                      }
                      FUN_00404870(*(undefined4 *)PTR_DAT_02712e28,lVar11);
                    }
                    *plVar9 = lVar18;
                    *(uint *)((long)plVar9 + 0xc) = uVar24;
                    goto LAB_004c0820;
                  }
LAB_004c0844:
                  puVar16 = (undefined4 *)0x0;
                }
                *puVar16 = (int)uVar19;
                puVar16[1] = (int)uVar21;
                puVar16[2] = (int)uVar23;
                fVar25 = *pfVar2;
                fVar27 = pfVar2[1];
                fVar28 = *pfVar3;
                fVar29 = pfVar3[1];
                pfVar6 = (float *)(param_2 + uVar23 * 8);
                fVar30 = *pfVar6;
                fVar31 = pfVar6[1];
                fVar33 = (fVar27 - fVar29) * fVar30 + fVar25 * (fVar29 - fVar31) +
                         fVar28 * (fVar31 - fVar27);
                fVar35 = fVar28 * fVar28 + fVar29 * fVar29;
                fVar36 = fVar30 * fVar30 + fVar31 * fVar31;
                fVar34 = fVar25 * fVar25 + fVar27 * fVar27;
                fVar32 = (fVar29 * fVar34 - fVar35 * fVar27) + fVar31 * (fVar35 - fVar34) +
                         (fVar27 - fVar29) * fVar36;
                fVar26 = (fVar35 - fVar34) * fVar30 + fVar25 * (fVar36 - fVar35) +
                         fVar28 * (fVar34 - fVar36);
                puVar16[3] = fVar32 / (fVar33 + fVar33);
                puVar16[4] = -fVar26 / (fVar33 + fVar33);
                puVar16[5] = SQRT(fVar32 * fVar32 +
                                  ((fVar29 * fVar25 - fVar27 * fVar28) * fVar36 +
                                   fVar31 * (fVar34 * fVar28 - fVar25 * fVar35) +
                                  fVar30 * (fVar35 * fVar27 - fVar29 * fVar34)) * fVar33 * 4.0 +
                                  fVar26 * fVar26) / (ABS(fVar33) + ABS(fVar33));
                uVar24 = *param_1;
              }
LAB_004c0940:
              uVar23 = uVar23 + 1;
            } while ((uint)uVar23 < uVar24);
          }
          uVar22 = uVar22 + 1;
          uVar21 = uVar21 + 1;
        } while (uVar12 < uVar24 - 1);
      }
      uVar17 = uVar17 + 1;
      uVar20 = uVar20 + 1;
      uVar19 = uVar1;
    } while (uVar1 < uVar24 - 2);
  }
  return;
}


