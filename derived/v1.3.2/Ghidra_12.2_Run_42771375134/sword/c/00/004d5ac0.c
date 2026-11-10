/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d5ac0; name: FUN_004d5ac0
 */


void FUN_004d5ac0(float param_1,long param_2,ulong *param_3)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  ulong uVar23;
  float fVar24;
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
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float afStack_2010 [2];
  undefined8 uStack_2008;
  float afStack_2000 [2];
  undefined8 uStack_1ff8;
  float afStack_1ff0 [2];
  undefined8 uStack_1fe8;
  undefined8 auStack_1fe0 [502];
  float afStack_1030 [2];
  undefined8 uStack_1028;
  float afStack_1020 [2];
  undefined8 uStack_1018;
  float afStack_1010 [2];
  undefined8 uStack_1008;
  undefined8 auStack_1000 [502];
  float afStack_48 [2];
  
  uVar6 = (uint)param_3[1];
  if ((uVar6 & 0xf00) != 0x100) {
    *(undefined4 *)(param_2 + 0x40) = 0;
    return;
  }
  uVar5 = uVar6 >> 0xc & 0x637;
  uVar11 = uVar5 - (uVar5 >> 1 & 0xf1f1f1f1);
  uVar11 = (uVar11 & 0x33333333) + (uVar11 >> 2 & 0x33333333);
  uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  pfVar18 = (float *)*param_3;
  uVar10 = (ushort)param_3[2];
  uVar17 = (ulong)uVar10;
  lVar8 = *(long *)(param_2 + 0x30);
  lVar9 = *(long *)(param_2 + 0x38);
  lVar14 = -(ulong)(uVar11 << 4);
  pfVar15 = (float *)((long)auStack_1000 + lVar14 + 0xfb0);
  pfVar16 = (float *)((long)pfVar15 - (ulong)(uVar11 << 4));
  if (uVar5 != 0) {
    *(undefined8 *)((long)afStack_48 + lVar14) = *(undefined8 *)(lVar8 + 0xa8);
    *(undefined8 *)pfVar15 = *(undefined8 *)(lVar8 + 0xa0);
    *(undefined8 *)(pfVar16 + 2) = *(undefined8 *)(lVar9 + 0xa8);
    *(undefined8 *)pfVar16 = *(undefined8 *)(lVar9 + 0xa0);
    if (1 < uVar11) {
      *(undefined8 *)((long)afStack_48 + lVar14 + 0x10) = *(undefined8 *)(lVar8 + 0x158);
      *(undefined8 *)((long)afStack_48 + lVar14 + 8) = *(undefined8 *)(lVar8 + 0x150);
      *(undefined8 *)(pfVar16 + 6) = *(undefined8 *)(lVar9 + 0x158);
      *(undefined8 *)(pfVar16 + 4) = *(undefined8 *)(lVar9 + 0x150);
      if (uVar11 != 2) {
        *(undefined8 *)((long)afStack_48 + lVar14 + 0x20) = *(undefined8 *)(lVar8 + 0x208);
        *(undefined8 *)((long)afStack_48 + lVar14 + 0x18) = *(undefined8 *)(lVar8 + 0x200);
        *(undefined8 *)(pfVar16 + 10) = *(undefined8 *)(lVar9 + 0x208);
        *(undefined8 *)(pfVar16 + 8) = *(undefined8 *)(lVar9 + 0x200);
        if (3 < uVar11) {
          *(undefined8 *)((long)afStack_48 + lVar14 + 0x30) = *(undefined8 *)(lVar8 + 0x2b8);
          *(undefined8 *)((long)afStack_48 + lVar14 + 0x28) = *(undefined8 *)(lVar8 + 0x2b0);
          *(undefined8 *)(pfVar16 + 0xe) = *(undefined8 *)(lVar9 + 0x2b8);
          *(undefined8 *)(pfVar16 + 0xc) = *(undefined8 *)(lVar9 + 0x2b0);
          if (uVar11 != 4) {
            *(undefined8 *)((long)afStack_48 + lVar14 + 0x40) = *(undefined8 *)(lVar8 + 0x368);
            *(undefined8 *)((long)afStack_48 + lVar14 + 0x38) = *(undefined8 *)(lVar8 + 0x360);
            *(undefined8 *)(pfVar16 + 0x12) = *(undefined8 *)(lVar9 + 0x368);
            *(undefined8 *)(pfVar16 + 0x10) = *(undefined8 *)(lVar9 + 0x360);
            if (5 < uVar11) {
              *(undefined8 *)((long)afStack_2010 + lVar14 + 0x2018) = *(undefined8 *)(lVar8 + 0x418)
              ;
              *(undefined8 *)((long)afStack_2010 + lVar14 + 0x2010) = *(undefined8 *)(lVar8 + 0x410)
              ;
              *(undefined8 *)(pfVar16 + 0x16) = *(undefined8 *)(lVar9 + 0x418);
              *(undefined8 *)(pfVar16 + 0x14) = *(undefined8 *)(lVar9 + 0x410);
              if (uVar11 != 6) {
                *(undefined8 *)((long)afStack_2010 + lVar14 + 0x2028) =
                     *(undefined8 *)(lVar8 + 0x4c8);
                *(undefined8 *)((long)afStack_2010 + lVar14 + 0x2020) =
                     *(undefined8 *)(lVar8 + 0x4c0);
                *(undefined8 *)(pfVar16 + 0x1a) = *(undefined8 *)(lVar9 + 0x4c8);
                *(undefined8 *)(pfVar16 + 0x18) = *(undefined8 *)(lVar9 + 0x4c0);
              }
            }
          }
        }
      }
    }
  }
  uVar13 = uVar6 >> 0xc & 7;
  uVar12 = uVar13 - (uVar13 >> 1 & 1);
  uVar12 = (uVar12 & 0x33333333) + (uVar12 >> 2 & 0x33333333);
  fVar24 = 0.0;
  uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  if (uVar13 == 0) {
    uVar23 = 0;
    fVar25 = 0.0;
  }
  else {
    if (uVar10 == 0) {
      fVar25 = 0.0;
    }
    else {
      pfVar2 = pfVar18 + uVar17;
      pfVar1 = pfVar18 + 1;
      fVar29 = *(float *)(lVar8 + 0x88);
      fVar26 = *(float *)(lVar8 + 0x80);
      fVar27 = *(float *)(lVar8 + 0x84);
      fVar41 = *(float *)(lVar9 + 0x88);
      pfVar7 = pfVar2;
      if (pfVar2 <= pfVar1) {
        pfVar7 = pfVar1;
      }
      fVar31 = *(float *)(lVar8 + 0x8c);
      fVar28 = *(float *)(lVar8 + 0x90);
      fVar25 = 0.0;
      fVar35 = *(float *)(lVar9 + 0x80);
      fVar37 = *(float *)(lVar9 + 0x84);
      fVar42 = *(float *)(lVar9 + 0x8c);
      fVar40 = *(float *)(lVar9 + 0x90);
      pfVar20 = pfVar18;
      fVar33 = *pfVar15;
      fVar39 = *pfVar16;
      fVar45 = pfVar16[2];
      fVar43 = *(float *)((long)afStack_48 + lVar14 + -4);
      fVar34 = *(float *)((long)afStack_48 + lVar14 + 4);
      fVar36 = *(float *)((long)afStack_48 + lVar14);
      fVar38 = pfVar16[1];
      fVar30 = pfVar16[3];
      do {
        fVar46 = fVar45;
        fVar44 = fVar39;
        fVar32 = fVar33;
        pfVar19 = pfVar20 + 1;
        fVar33 = *pfVar20;
        fVar39 = fVar26 * fVar33 + fVar43 * fVar29 + fVar32 * fVar27 + fVar34 * fVar28 +
                 fVar36 * fVar31;
        pfVar16[3] = fVar46;
        fVar45 = fVar35 * fVar39 + fVar38 * fVar41 + fVar44 * fVar37 + fVar30 * fVar40 +
                 fVar46 * fVar42;
        fVar25 = fVar25 + fVar45 * fVar45;
        *(float *)((long)afStack_48 + lVar14 + 4) = fVar36;
        pfVar16[1] = fVar44;
        *(float *)((long)afStack_48 + lVar14 + -4) = fVar32;
        *pfVar15 = fVar33;
        *(float *)((long)afStack_48 + lVar14) = fVar39;
        *pfVar16 = fVar39;
        pfVar16[2] = fVar45;
        pfVar20 = pfVar19;
        fVar43 = fVar32;
        fVar34 = fVar36;
        fVar36 = fVar39;
        fVar38 = fVar44;
        fVar30 = fVar46;
      } while (pfVar19 < pfVar2);
      pfVar18 = (float *)((long)pfVar1 + ((long)pfVar7 + (-1 - (long)pfVar18) & 0xfffffffffffffffcU)
                         );
    }
    if (uVar12 < 2) {
      uVar23 = 1;
    }
    else {
      if (uVar10 != 0) {
        pfVar2 = pfVar18 + uVar17;
        pfVar1 = pfVar18 + 1;
        fVar26 = *(float *)(lVar8 + 0x130);
        fVar27 = *(float *)(lVar8 + 0x138);
        fVar29 = *(float *)(lVar8 + 0x134);
        pfVar7 = pfVar2;
        if (pfVar2 <= pfVar1) {
          pfVar7 = pfVar1;
        }
        fVar30 = *(float *)(lVar8 + 0x140);
        fVar28 = *(float *)(lVar8 + 0x13c);
        fVar31 = *(float *)(lVar9 + 0x130);
        fVar35 = *(float *)(lVar9 + 0x138);
        fVar37 = *(float *)(lVar9 + 0x134);
        fVar40 = *(float *)(lVar9 + 0x140);
        fVar42 = *(float *)(lVar9 + 0x13c);
        pfVar20 = pfVar18;
        fVar41 = *(float *)((long)afStack_48 + lVar14 + 8);
        fVar33 = pfVar16[4];
        fVar39 = pfVar16[6];
        fVar45 = *(float *)((long)afStack_48 + lVar14 + 0xc);
        fVar43 = pfVar16[5];
        fVar34 = *(float *)((long)afStack_48 + lVar14 + 0x14);
        fVar36 = *(float *)((long)afStack_48 + lVar14 + 0x10);
        fVar38 = pfVar16[7];
        do {
          fVar46 = fVar39;
          fVar44 = fVar33;
          fVar32 = fVar41;
          pfVar19 = pfVar20 + 1;
          fVar41 = *pfVar20;
          pfVar16[5] = fVar44;
          fVar33 = fVar26 * fVar41 + fVar45 * fVar27 + fVar32 * fVar29 + fVar34 * fVar30 +
                   fVar36 * fVar28;
          pfVar16[7] = fVar46;
          fVar39 = fVar31 * fVar33 + fVar43 * fVar35 + fVar44 * fVar37 + fVar38 * fVar40 +
                   fVar46 * fVar42;
          fVar25 = fVar25 + fVar39 * fVar39;
          *(float *)((long)afStack_48 + lVar14 + 0x14) = fVar36;
          *(float *)((long)afStack_48 + lVar14 + 0xc) = fVar32;
          *(float *)((long)afStack_48 + lVar14 + 8) = fVar41;
          *(float *)((long)afStack_48 + lVar14 + 0x10) = fVar33;
          pfVar16[4] = fVar33;
          pfVar16[6] = fVar39;
          pfVar20 = pfVar19;
          fVar45 = fVar32;
          fVar43 = fVar44;
          fVar34 = fVar36;
          fVar36 = fVar33;
          fVar38 = fVar46;
        } while (pfVar19 < pfVar2);
        pfVar18 = (float *)((long)pfVar1 +
                           ((long)pfVar7 + (-1 - (long)pfVar18) & 0xfffffffffffffffcU));
      }
      if (uVar12 == 3) {
        if (uVar10 != 0) {
          pfVar2 = pfVar18 + uVar17;
          pfVar1 = pfVar18 + 1;
          fVar26 = *(float *)(lVar8 + 0x1e0);
          fVar27 = *(float *)(lVar8 + 0x1e8);
          fVar29 = *(float *)(lVar8 + 0x1e4);
          pfVar7 = pfVar2;
          if (pfVar2 <= pfVar1) {
            pfVar7 = pfVar1;
          }
          fVar30 = *(float *)(lVar8 + 0x1f0);
          fVar28 = *(float *)(lVar8 + 0x1ec);
          fVar31 = *(float *)(lVar9 + 0x1e0);
          fVar35 = *(float *)(lVar9 + 0x1e8);
          fVar37 = *(float *)(lVar9 + 0x1e4);
          fVar40 = *(float *)(lVar9 + 0x1f0);
          fVar42 = *(float *)(lVar9 + 0x1ec);
          pfVar20 = pfVar18;
          fVar41 = *(float *)((long)afStack_48 + lVar14 + 0x18);
          fVar33 = pfVar16[8];
          fVar39 = pfVar16[10];
          fVar45 = *(float *)((long)afStack_48 + lVar14 + 0x1c);
          fVar43 = pfVar16[9];
          fVar34 = *(float *)((long)afStack_48 + lVar14 + 0x24);
          fVar36 = *(float *)((long)afStack_48 + lVar14 + 0x20);
          fVar38 = pfVar16[0xb];
          do {
            fVar46 = fVar39;
            fVar44 = fVar33;
            fVar32 = fVar41;
            pfVar19 = pfVar20 + 1;
            fVar41 = *pfVar20;
            pfVar16[9] = fVar44;
            fVar33 = fVar26 * fVar41 + fVar45 * fVar27 + fVar32 * fVar29 + fVar34 * fVar30 +
                     fVar36 * fVar28;
            pfVar16[0xb] = fVar46;
            fVar39 = fVar31 * fVar33 + fVar43 * fVar35 + fVar44 * fVar37 + fVar38 * fVar40 +
                     fVar46 * fVar42;
            fVar25 = fVar25 + fVar39 * fVar39;
            *(float *)((long)afStack_48 + lVar14 + 0x24) = fVar36;
            *(float *)((long)afStack_48 + lVar14 + 0x1c) = fVar32;
            *(float *)((long)afStack_48 + lVar14 + 0x18) = fVar41;
            *(float *)((long)afStack_48 + lVar14 + 0x20) = fVar33;
            pfVar16[8] = fVar33;
            pfVar16[10] = fVar39;
            pfVar20 = pfVar19;
            fVar45 = fVar32;
            fVar43 = fVar44;
            fVar34 = fVar36;
            fVar36 = fVar33;
            fVar38 = fVar46;
          } while (pfVar19 < pfVar2);
          pfVar18 = (float *)((long)pfVar1 +
                             ((long)pfVar7 + (-1 - (long)pfVar18) & 0xfffffffffffffffcU));
        }
        uVar23 = 3;
      }
      else {
        uVar23 = 2;
      }
    }
  }
  uVar6 = uVar6 >> 0xc & 0x630;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x1f0);
  uVar6 = (uVar6 & 0x33333333) + (uVar6 >> 2 & 0x33333333);
  uVar12 = uVar12 + ((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
  if ((uint)uVar23 < uVar12) {
    fVar24 = 0.0;
    do {
      if (uVar10 != 0) {
        pfVar2 = pfVar15 + uVar23 * 4;
        pfVar7 = pfVar16 + uVar23 * 4;
        pfVar20 = pfVar18 + uVar17;
        lVar3 = lVar8 + uVar23 * 0xb0;
        lVar4 = lVar9 + uVar23 * 0xb0;
        pfVar1 = pfVar18 + 1;
        pfVar19 = pfVar20;
        if (pfVar20 <= pfVar1) {
          pfVar19 = pfVar1;
        }
        fVar34 = *(float *)(lVar3 + 0x80);
        fVar36 = *(float *)(lVar3 + 0x84);
        fVar30 = *(float *)(lVar3 + 0x88);
        fVar28 = *(float *)(lVar3 + 0x8c);
        fVar38 = *(float *)(lVar3 + 0x90);
        fVar31 = *(float *)(lVar4 + 0x80);
        fVar35 = *(float *)(lVar4 + 0x84);
        fVar40 = *(float *)(lVar4 + 0x88);
        fVar42 = *(float *)(lVar4 + 0x8c);
        fVar37 = *(float *)(lVar4 + 0x90);
        pfVar21 = pfVar18;
        fVar26 = *pfVar2;
        fVar27 = *pfVar7;
        fVar29 = pfVar2[1];
        fVar41 = pfVar7[1];
        fVar33 = pfVar2[3];
        fVar39 = pfVar2[2];
        fVar45 = pfVar7[3];
        fVar43 = pfVar7[2];
        do {
          fVar46 = fVar27;
          fVar32 = fVar26;
          pfVar22 = pfVar21 + 1;
          fVar26 = *pfVar21;
          pfVar7[1] = fVar46;
          fVar27 = fVar34 * fVar26 + fVar29 * fVar30 + fVar32 * fVar36 + fVar33 * fVar38 +
                   fVar39 * fVar28;
          *pfVar7 = fVar27;
          pfVar7[3] = fVar43;
          fVar44 = fVar31 * fVar27 + fVar41 * fVar40 + fVar46 * fVar35 + fVar45 * fVar37 +
                   fVar43 * fVar42;
          fVar24 = fVar24 + fVar44 * fVar44;
          pfVar2[1] = fVar32;
          *pfVar2 = fVar26;
          pfVar2[3] = fVar39;
          pfVar2[2] = fVar27;
          pfVar7[2] = fVar44;
          pfVar21 = pfVar22;
          fVar29 = fVar32;
          fVar41 = fVar46;
          fVar33 = fVar39;
          fVar39 = fVar27;
          fVar45 = fVar43;
          fVar43 = fVar44;
        } while (pfVar22 < pfVar20);
        pfVar18 = (float *)((long)pfVar1 +
                           ((long)pfVar19 + (-1 - (long)pfVar18) & 0xfffffffffffffffcU));
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar12);
  }
  *(float *)(param_2 + 0x40) =
       (param_1 * DAT_01d4c724 * param_1 * DAT_01d4c724 * (fVar25 + DAT_01d4bb50 * fVar24)) /
       (float)uVar17;
  if (uVar5 != 0) {
    *(undefined8 *)(lVar8 + 0xa8) = *(undefined8 *)((long)afStack_48 + lVar14);
    *(undefined8 *)(lVar8 + 0xa0) = *(undefined8 *)pfVar15;
    *(undefined8 *)(lVar9 + 0xa8) = *(undefined8 *)(pfVar16 + 2);
    *(undefined8 *)(lVar9 + 0xa0) = *(undefined8 *)pfVar16;
    if (1 < uVar11) {
      *(undefined8 *)(lVar8 + 0x158) = *(undefined8 *)((long)afStack_48 + lVar14 + 0x10);
      *(undefined8 *)(lVar8 + 0x150) = *(undefined8 *)((long)afStack_48 + lVar14 + 8);
      *(undefined8 *)(lVar9 + 0x158) = *(undefined8 *)(pfVar16 + 6);
      *(undefined8 *)(lVar9 + 0x150) = *(undefined8 *)(pfVar16 + 4);
      if (uVar11 != 2) {
        *(undefined8 *)(lVar8 + 0x208) = *(undefined8 *)((long)afStack_48 + lVar14 + 0x20);
        *(undefined8 *)(lVar8 + 0x200) = *(undefined8 *)((long)afStack_48 + lVar14 + 0x18);
        *(undefined8 *)(lVar9 + 0x208) = *(undefined8 *)(pfVar16 + 10);
        *(undefined8 *)(lVar9 + 0x200) = *(undefined8 *)(pfVar16 + 8);
        if (3 < uVar11) {
          *(undefined8 *)(lVar8 + 0x2b8) = *(undefined8 *)((long)afStack_48 + lVar14 + 0x30);
          *(undefined8 *)(lVar8 + 0x2b0) = *(undefined8 *)((long)afStack_48 + lVar14 + 0x28);
          *(undefined8 *)(lVar9 + 0x2b8) = *(undefined8 *)(pfVar16 + 0xe);
          *(undefined8 *)(lVar9 + 0x2b0) = *(undefined8 *)(pfVar16 + 0xc);
          if (uVar11 != 4) {
            *(undefined8 *)(lVar8 + 0x368) = *(undefined8 *)((long)afStack_48 + lVar14 + 0x40);
            *(undefined8 *)(lVar8 + 0x360) = *(undefined8 *)((long)afStack_48 + lVar14 + 0x38);
            *(undefined8 *)(lVar9 + 0x368) = *(undefined8 *)(pfVar16 + 0x12);
            *(undefined8 *)(lVar9 + 0x360) = *(undefined8 *)(pfVar16 + 0x10);
            if (5 < uVar11) {
              *(undefined8 *)(lVar8 + 0x418) = *(undefined8 *)((long)afStack_2010 + lVar14 + 0x2018)
              ;
              *(undefined8 *)(lVar8 + 0x410) = *(undefined8 *)((long)afStack_2010 + lVar14 + 0x2010)
              ;
              *(undefined8 *)(lVar9 + 0x418) = *(undefined8 *)(pfVar16 + 0x16);
              *(undefined8 *)(lVar9 + 0x410) = *(undefined8 *)(pfVar16 + 0x14);
              if (uVar11 != 6) {
                *(undefined8 *)(lVar8 + 0x4c8) =
                     *(undefined8 *)((long)afStack_2010 + lVar14 + 0x2028);
                *(undefined8 *)(lVar8 + 0x4c0) =
                     *(undefined8 *)((long)afStack_2010 + lVar14 + 0x2020);
                *(undefined8 *)(lVar9 + 0x4c8) = *(undefined8 *)(pfVar16 + 0x1a);
                *(undefined8 *)(lVar9 + 0x4c0) = *(undefined8 *)(pfVar16 + 0x18);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}


