/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3d850; name: FUN_00e3d850
 */


void FUN_00e3d850(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  undefined1 auVar8 [16];
  int *piVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ushort *puVar17;
  float extraout_s0;
  float fVar18;
  undefined8 extraout_var;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  
  FUN_00e3c4a0();
  piVar9 = *(int **)(*(long *)PTR_DAT_02717c48 + 0x48);
  uVar11 = (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9));
  puVar1 = (uint *)((long)piVar9 + uVar11);
  uVar14 = (ulong)*puVar1;
  puVar1 = (uint *)((long)puVar1 + uVar14);
  puVar12 = puVar1 + 1;
  uVar13 = (ulong)*puVar1;
  if (uVar13 != 0) {
    lVar15 = (long)piVar9 + uVar11 + uVar14;
    puVar1 = puVar12 + uVar13;
    lVar10 = -0x340d631b7bddd9bb;
    do {
      piVar9 = (int *)((long)puVar12 + (ulong)*puVar12);
      puVar2 = (uint *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)));
      piVar3 = (int *)((long)puVar2 + (ulong)*puVar2);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) ||
         (uVar11 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar11 == 0)) {
        if (*(long *)(param_1 + 0x618) == 0) goto LAB_00e3d924;
      }
      else if (*(long *)(param_1 + 0x618) == *(long *)((long)piVar3 + uVar11)) {
LAB_00e3d924:
        uVar13 = (ulong)*(ushort *)((long)piVar9 + (0x1a - (long)*piVar9));
        puVar2 = (uint *)((long)piVar9 + uVar13);
        uVar14 = (ulong)*puVar2;
        uVar11 = (ulong)*(uint *)((long)puVar2 + uVar14);
        if (uVar11 != 0) {
          lVar16 = 0;
          lVar4 = lVar15 + uVar14 + uVar13 + (ulong)*puVar12;
          do {
            uVar13 = (ulong)*(uint *)(lVar4 + lVar16 + 8);
            lVar5 = uVar13 + *(ushort *)
                              (lVar4 + (uVar13 - (long)*(int *)(lVar4 + uVar13 + lVar16 + 8)) +
                               lVar16 + 0xc);
            lVar5 = lVar5 + (ulong)*(uint *)(lVar4 + lVar5 + lVar16 + 8);
            lVar6 = lVar4 + lVar16 + (lVar5 - *(int *)(lVar4 + lVar5 + lVar16 + 8));
            if ((*(ushort *)(lVar6 + 8) < 5) ||
               (uVar13 = (ulong)*(ushort *)(lVar6 + 0xc), uVar13 == 0)) {
              piVar9 = (int *)0x0;
            }
            else {
              lVar5 = lVar5 + uVar13;
              piVar9 = (int *)(lVar4 + lVar16 + lVar5 + (ulong)*(uint *)(lVar4 + lVar5 + lVar16 + 8)
                              + 8);
            }
            puVar17 = (ushort *)((long)piVar9 - (long)*piVar9);
            uVar7 = *puVar17;
            fVar18 = 0.0;
            fVar19 = 0.0;
            if (4 < uVar7) {
              fVar18 = 0.0;
              if ((ulong)puVar17[2] != 0) {
                fVar18 = *(float *)((long)piVar9 + (ulong)puVar17[2]);
              }
              if ((uVar7 < 9) || ((ulong)puVar17[4] == 0)) {
                fVar19 = 0.0;
              }
              else {
                fVar19 = *(float *)((long)piVar9 + (ulong)puVar17[4]);
              }
            }
            fVar19 = (float)extraout_var - fVar19;
            fVar20 = (float)((ulong)extraout_var >> 0x20) - 0.0;
            fVar18 = (extraout_s0 - fVar18) * (extraout_s0 - fVar18);
            fVar19 = fVar19 * fVar19;
            fVar20 = fVar20 * fVar20;
            auVar21._4_4_ = 0;
            auVar21._0_4_ = fVar18;
            auVar21._8_4_ = fVar19;
            auVar21._12_4_ = fVar20;
            auVar8._4_4_ = 0;
            auVar8._0_4_ = fVar18;
            auVar8._8_4_ = fVar19;
            auVar8._12_4_ = fVar20;
            auVar21 = NEON_ext(auVar21,auVar8,8,1);
            if (auVar21._0_4_ + fVar18 + auVar21._4_4_ + 0.0 < 1.0) {
              if (uVar7 < 0x17) {
                lVar10 = 0;
              }
              else {
                lVar10 = 0;
                if ((ulong)puVar17[0xb] != 0) {
                  lVar10 = *(long *)((long)piVar9 + (ulong)puVar17[0xb]);
                }
              }
              break;
            }
            lVar16 = lVar16 + 4;
          } while (uVar11 * 4 != lVar16);
        }
      }
      lVar15 = lVar15 + 4;
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar1);
    fVar18 = 0.0;
    if (lVar10 < -0x11d3368529c4d41b) {
      if (lVar10 < -0x49908f1fc2f14be5) {
        if (lVar10 == -0x7ba56544fe787231) {
          fVar18 = DAT_01d4c3ac;
        }
        else if (lVar10 == -0x61f047e7694f4612) {
          fVar18 = DAT_01d4c0a4;
        }
        else if (lVar10 == -0x600ce5415f488fe3) {
          fVar18 = DAT_01d4bc94;
        }
      }
      else if (lVar10 < -0x340d631b7bddd9bb) {
        if (lVar10 == -0x49908f1fc2f14be5) {
          fVar18 = DAT_01d4c678;
        }
        else if (lVar10 == -0x37e9c01b85778061) {
          fVar18 = DAT_01d4c61c;
        }
      }
      else {
        if (lVar10 == -0x340d631b7bddd9bb) {
          return;
        }
        if (lVar10 == -0x268ca172861fc2ce) {
          fVar18 = DAT_01d4c2f4;
        }
      }
    }
    else if (lVar10 < 0x2d6a0f2cc555980c) {
      if (lVar10 < -0xbd3894affa9fb92) {
        if (lVar10 == -0x11d3368529c4d41b) {
          fVar18 = DAT_01d4c1fc;
        }
        else if (lVar10 == -0xe8ceb980cfb339d) {
          fVar18 = DAT_01d4c620;
        }
      }
      else if (lVar10 == -0xbd3894affa9fb92) {
        fVar18 = 28.0;
      }
      else if (lVar10 == 0x262213ece8c9d9fe) {
        fVar18 = DAT_01d4bde0;
      }
    }
    else if (lVar10 < 0x6a43cd5d8c5c0a80) {
      if (lVar10 == 0x2d6a0f2cc555980c) {
        fVar18 = DAT_01d4c180;
      }
      else if (lVar10 == 0x436cc06aa788e431) {
        fVar18 = DAT_01d4c43c;
      }
    }
    else if (lVar10 == 0x6a43cd5d8c5c0a80) {
      fVar18 = DAT_01d4c340;
    }
    else if (lVar10 == 0x764f22108611fa10) {
      fVar18 = DAT_01d4c440;
    }
    fVar19 = *(float *)PTR_FloatPi_02715160;
    fVar20 = *(float *)PTR_FloatDegree180_027194f0;
    *(float *)(param_1 + 0x3d4) = (fVar19 / fVar20) * -10.0;
    *(float *)(param_1 + 0x3d0) = fVar18 * (fVar19 / fVar20);
  }
  return;
}


