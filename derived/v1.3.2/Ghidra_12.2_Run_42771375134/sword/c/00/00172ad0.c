/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00172ad0; name: FUN_00172ad0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00172ad0(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  float *pfVar18;
  ulong uVar19;
  float *pfVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  int iVar28;
  long lVar29;
  float *pfVar30;
  int iVar31;
  long lVar32;
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
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  
  lVar1 = param_2 + 0x88;
  iVar12 = FUN_003ff4b0(lVar1,0x80);
  puVar11 = PTR_DAT_02710e28;
  uVar8 = *(uint *)(param_2 + 0x18);
  lVar13 = *(long *)(param_2 + 0x58);
  lVar14 = *(long *)(param_2 + 0x68);
  iVar5 = *(int *)(param_2 + 0x28);
  lVar15 = *(long *)(param_2 + 0x70);
  iVar12 = iVar12 + -0x80;
  iVar28 = 0;
  if (iVar12 < iVar5) {
    lVar23 = *(long *)(param_2 + 0x20);
    uVar21 = 0x80;
    do {
      while( true ) {
        iVar31 = iVar5 - iVar12;
        iVar22 = iVar31;
        if (0x7f < iVar31) {
          iVar22 = 0x80;
        }
        uVar21 = uVar21 - iVar22;
        if (0 < iVar31) {
          lVar26 = lVar23 + (long)iVar12 * 0x50;
          iVar31 = 0;
          do {
            if (*(code **)puVar11 != (code *)0x0) {
              (**(code **)puVar11)(*(undefined4 *)(param_1 + 0x58),lVar26);
            }
            iVar31 = iVar31 + 1;
            lVar26 = lVar26 + 0x50;
          } while (iVar31 < iVar22);
          iVar12 = iVar12 + iVar31;
          iVar28 = iVar28 + iVar31;
        }
        if (uVar21 == 0) break;
        if (iVar5 <= iVar12) goto LAB_00172bf0;
      }
      uVar21 = 0x80;
      iVar12 = FUN_003ff4b0(lVar1,0x80);
      iVar12 = iVar12 + -0x80;
    } while (iVar12 < iVar5);
  }
  else {
    uVar21 = 0x80;
  }
LAB_00172bf0:
  fVar10 = DAT_01d4be54;
  uVar9 = iVar12 - iVar5;
  if ((int)uVar9 < (int)uVar8) {
    lVar23 = *(long *)(param_2 + 8);
    lVar26 = *(long *)(param_2 + 0x10);
    uVar6 = *(uint *)(param_2 + 0x1c);
    do {
      uVar4 = uVar8 - uVar9;
      if ((int)uVar21 <= (int)(uVar8 - uVar9)) {
        uVar4 = uVar21;
      }
      if (0 < (int)uVar4) {
        uVar2 = uVar9 + ~uVar8;
        uVar27 = -(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar9 << 5;
        if ((int)uVar2 <= (int)~uVar21) {
          uVar2 = ~uVar21;
        }
        pfVar30 = (float *)(lVar26 + (ulong)uVar6 * 0x70 + 0x70 + (long)(int)uVar9 * 0x70);
        uVar16 = -(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar9 << 3;
        lVar32 = lVar14 + 0x100 + uVar16;
        lVar25 = 0;
        lVar24 = lVar13;
        lVar29 = lVar23;
        do {
          uVar21 = uVar9 + 4 + (int)lVar25;
          if ((long)(int)uVar8 + -1 <= (long)(int)uVar9 + 4 + lVar25) {
            uVar21 = (uint)((long)(int)uVar8 + -1);
          }
          uVar19 = -(ulong)(uVar21 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar21 << 3;
          lVar17 = *(long *)(lVar14 + uVar19);
          Hint_Prefetch(lVar17,0,0,0);
          Hint_Prefetch(lVar17 + 0x80,0,0,0);
          Hint_Prefetch(uVar27 + lVar29 + 0x80,0,0,0);
          lVar17 = uVar27 + lVar24;
          Hint_Prefetch(lVar17 + 0x80,0,0,0);
          Hint_Prefetch(lVar32,0,0,0);
          Hint_Prefetch(lVar15 + uVar19,0,0,0);
          fVar41 = *(float *)(param_1 + 0x58);
          fVar43 = pfVar30[0x1b];
          if (fVar43 != 0.0) {
            if (((uint)fVar43 & 1) != 0) {
              *(undefined4 *)(lVar24 + uVar27) = 0;
              *(undefined4 *)(lVar29 + uVar27) = 0;
            }
            if (((uint)fVar43 >> 1 & 1) != 0) {
              *(undefined4 *)(lVar24 + uVar27 + 4) = 0;
              *(undefined4 *)(lVar29 + uVar27 + 4) = 0;
            }
            if (((uint)fVar43 >> 2 & 1) != 0) {
              *(undefined4 *)(lVar24 + uVar27 + 8) = 0;
              *(undefined4 *)(lVar29 + uVar27 + 8) = 0;
            }
            if (((uint)fVar43 >> 3 & 1) != 0) {
              *(undefined4 *)(lVar17 + 0x10) = 0;
              *(undefined4 *)(lVar29 + uVar27 + 0x10) = 0;
            }
            if (((uint)fVar43 >> 4 & 1) != 0) {
              *(undefined4 *)(lVar17 + 0x14) = 0;
              *(undefined4 *)(lVar29 + uVar27 + 0x14) = 0;
            }
            if (((uint)fVar43 >> 5 & 1) != 0) {
              *(undefined4 *)(lVar17 + 0x18) = 0;
              *(undefined4 *)(lVar29 + uVar27 + 0x18) = 0;
            }
          }
          pfVar3 = (float *)(lVar24 + uVar27);
          fVar45 = *pfVar30 + *pfVar3;
          fVar56 = pfVar30[2] + pfVar3[2];
          fVar46 = pfVar30[1] + pfVar3[1];
          pfVar18 = (float *)(lVar29 + uVar27);
          fVar47 = pfVar3[6];
          fVar35 = pfVar3[4];
          fVar36 = pfVar3[5];
          pfVar30[0x18] = fVar41 * fVar45 + pfVar30[0x18];
          pfVar30[0x19] = fVar41 * fVar46 + pfVar30[0x19];
          pfVar30[0x1a] = fVar41 * fVar56 + pfVar30[0x1a];
          *pfVar30 = *pfVar30 + *pfVar18;
          pfVar30[1] = pfVar30[1] + pfVar18[1];
          fVar43 = fVar35 * pfVar30[8] + fVar36 * pfVar30[0xb] + fVar47 * pfVar30[0xe] + pfVar30[4];
          fVar44 = fVar35 * pfVar30[9] + fVar36 * pfVar30[0xc] + fVar47 * pfVar30[0xf] + pfVar30[5];
          fVar35 = fVar35 * pfVar30[10] + fVar36 * pfVar30[0xd] + fVar47 * pfVar30[0x10] +
                   pfVar30[6];
          pfVar30[2] = pfVar30[2] + pfVar18[2];
          fVar33 = pfVar18[6];
          fVar36 = pfVar18[4];
          fVar47 = pfVar18[5];
          fVar38 = fVar43 * fVar43 + fVar44 * fVar44 + fVar35 * fVar35;
          pfVar30[4] = pfVar30[4] +
                       pfVar30[8] * fVar36 + pfVar30[0xb] * fVar47 + pfVar30[0xe] * fVar33;
          pfVar30[5] = pfVar30[5] +
                       pfVar30[9] * fVar36 + pfVar30[0xc] * fVar47 + pfVar30[0xf] * fVar33;
          pfVar30[6] = pfVar30[6] +
                       pfVar30[10] * fVar36 + pfVar30[0xd] * fVar47 + pfVar30[0x10] * fVar33;
          if (fVar38 != 0.0) {
            fVar36 = sqrtf(fVar38);
            if (fVar10 < fVar36) {
              fVar47 = 0.0;
              fVar34 = 0.0;
              fVar33 = 0.0;
              if (0.0 < fVar38) {
                fVar36 = sqrtf(fVar38);
                fVar36 = 1.0 / fVar36;
                fVar34 = fVar43 * fVar36 * fVar10;
                fVar33 = fVar44 * fVar36 * fVar10;
                fVar47 = fVar35 * fVar36 * fVar10;
              }
              fVar36 = fVar10;
              fVar43 = fVar34;
              fVar44 = fVar33;
              fVar35 = fVar47;
            }
            fVar47 = fVar41 * fVar36 * 0.5;
            fVar41 = sinf(fVar47);
            fVar47 = cosf(fVar47);
            fVar41 = fVar41 / fVar36;
            fVar36 = fVar43 * fVar41;
            fVar33 = fVar44 * fVar41;
            fVar38 = pfVar30[0x14];
            fVar34 = pfVar30[0x15];
            fVar37 = pfVar30[0x16];
            fVar48 = pfVar30[0x17];
            fVar41 = fVar35 * fVar41;
            fVar40 = fVar47 * fVar34 +
                     ((fVar38 * fVar41 + fVar33 * fVar48 + fVar34 * 0.0) - fVar36 * fVar37);
            fVar39 = fVar47 * fVar38 +
                     ((fVar38 * 0.0 + fVar36 * fVar48 + fVar33 * fVar37) - fVar41 * fVar34);
            fVar42 = fVar47 * fVar37 +
                     ((fVar36 * fVar34 + fVar41 * fVar48 + fVar37 * 0.0) - fVar38 * fVar33);
            fVar36 = fVar47 * fVar48 +
                     (((fVar48 * 0.0 - fVar38 * fVar36) - fVar33 * fVar34) - fVar41 * fVar37);
            fVar41 = sqrtf(fVar36 * fVar36 + fVar42 * fVar42 + fVar39 * fVar39 + fVar40 * fVar40);
            fVar41 = 1.0 / fVar41;
            pfVar30[0x14] = fVar41 * fVar39;
            pfVar30[0x15] = fVar41 * fVar40;
            pfVar30[0x16] = fVar41 * fVar42;
            pfVar30[0x17] = fVar41 * fVar36;
          }
          *pfVar3 = fVar45;
          pfVar3[1] = fVar46;
          pfVar3[4] = fVar43;
          pfVar3[5] = fVar44;
          pfVar3[2] = fVar56;
          pfVar3[6] = fVar35;
          pfVar18 = *(float **)(lVar15 + uVar16 + lVar25 * 8);
          pfVar20 = *(float **)(pfVar18 + 10);
          *pfVar18 = *pfVar20;
          pfVar18[1] = pfVar20[1];
          pfVar18[2] = pfVar20[2];
          pfVar18[3] = pfVar20[3];
          pfVar18[4] = pfVar20[4];
          pfVar18[5] = pfVar20[5];
          pfVar18[6] = pfVar20[6];
          fVar43 = pfVar30[0x14];
          *pfVar20 = fVar43;
          fVar41 = pfVar30[0x15];
          pfVar20[1] = fVar41;
          fVar44 = pfVar30[0x16];
          pfVar20[2] = fVar44;
          fVar35 = pfVar30[0x17];
          pfVar20[3] = fVar35;
          pfVar20[4] = pfVar30[0x18];
          pfVar20[5] = pfVar30[0x19];
          pfVar20[6] = pfVar30[0x1a];
          fVar36 = *pfVar30;
          pfVar20[0x10] = fVar36;
          fVar47 = pfVar30[1];
          pfVar20[0x11] = fVar47;
          fVar33 = pfVar30[2];
          pfVar20[0x12] = fVar33;
          fVar38 = pfVar30[4];
          pfVar20[0x14] = fVar38;
          fVar45 = pfVar30[5];
          pfVar20[0x15] = fVar45;
          fVar46 = pfVar30[6];
          pfVar20[0x16] = fVar46;
          fVar34 = *(float *)(param_1 + 0x58);
          fVar56 = pfVar20[0x23];
          iVar12 = *(int *)(*(long *)(param_3 + 0x68) +
                           (ulong)*(uint *)(*(long *)(param_3 + 0xf0) +
                                           ((ulong)(uint)pfVar30[0x12] & 0x3ffffff) * 4) * 4);
          if (*(char *)(param_1 + 100) == '\0') {
            if (*(char *)(param_1 + 0x66) != '\0') {
              fVar36 = 1.0;
              if (iVar12 != 0) {
                fVar36 = 1.0;
                if (1 < (uint)pfVar20[0x26]) {
                  fVar36 = 1.0 / (float)(uint)pfVar20[0x26];
                }
              }
              pfVar18[0x13] = fVar36;
            }
            if ((DAT_01d4bba4 <= fVar56) && (fVar34 <= fVar56)) goto LAB_001737a4;
            fVar47 = pfVar20[0x1d];
            fVar36 = 1.0;
            if (0.0 < pfVar20[0x1c]) {
              fVar36 = 1.0 / pfVar20[0x1c];
              if (fVar47 <= 0.0) goto LAB_001734e4;
LAB_00172ce0:
              fVar47 = 1.0 / fVar47;
            }
            else {
              if (0.0 < fVar47) goto LAB_00172ce0;
LAB_001734e4:
              fVar47 = 1.0;
            }
            fVar33 = 1.0;
            if (0.0 < pfVar20[0x1e]) {
              fVar33 = 1.0 / pfVar20[0x1e];
            }
            fVar37 = pfVar3[4] + pfVar3[4];
            fVar40 = pfVar3[5] + pfVar3[5];
            fVar48 = pfVar3[6] + pfVar3[6];
            fVar49 = fVar35 * fVar35 + -0.5;
            fVar50 = fVar37 * fVar43 + fVar40 * fVar41 + fVar48 * fVar44;
            fVar45 = pfVar3[1] + pfVar18[0xd];
            fVar38 = *pfVar3 + pfVar18[0xc];
            fVar46 = pfVar3[2] + pfVar18[0xe];
            fVar42 = fVar50 * fVar41 +
                     (fVar40 * fVar49 - (fVar37 * fVar44 - fVar48 * fVar43) * fVar35) +
                     pfVar18[0x11];
            fVar39 = fVar50 * fVar43 +
                     (fVar37 * fVar49 - (fVar48 * fVar41 - fVar40 * fVar44) * fVar35) +
                     pfVar18[0x10];
            pfVar18[0x10] = fVar39;
            pfVar18[0x11] = fVar42;
            fVar41 = (fVar48 * fVar49 - (fVar40 * fVar43 - fVar37 * fVar41) * fVar35) +
                     fVar50 * fVar44 + pfVar18[0x12];
            pfVar18[0x12] = fVar41;
            pfVar18[0xc] = fVar38;
            pfVar18[0xd] = fVar45;
            pfVar18[0xe] = fVar46;
            fVar43 = 1.0;
            if (pfVar20[0x1f] != 0.0) {
              fVar43 = pfVar20[0x1f];
            }
            fVar44 = pfVar20[0x25];
            fVar43 = (fVar38 * fVar38 + fVar45 * fVar45 + fVar46 * fVar46 +
                     (fVar36 * fVar39 * fVar39 + fVar47 * fVar42 * fVar42 + fVar33 * fVar41 * fVar41
                     ) * fVar43) * 0.5;
            fVar41 = pfVar20[0x21] * (float)((int)fVar44 + 1);
            if (fVar43 < fVar41) goto LAB_001737a4;
            pfVar18[0xc] = 0.0;
            pfVar18[0xd] = 0.0;
            pfVar18[0xe] = 0.0;
            pfVar18[0x10] = 0.0;
            pfVar18[0x11] = 0.0;
            pfVar18[0x12] = 0.0;
            if (fVar41 == 0.0) {
              fVar43 = DAT_01d4c464;
            }
            else {
              fVar43 = (float)NEON_fminnm(fVar43 / fVar41,0x40000000);
              fVar43 = fVar43 * 0.5 * DAT_01d4c464;
            }
            fVar34 = fVar34 * ((float)((int)fVar44 + 1) + -1.0) + fVar43;
            pfVar20[0x24] = fVar34;
            uVar7 = *(ushort *)(pfVar18 + 7) & 0x20 | 8;
            if (fVar56 != 0.0) {
              uVar7 = *(ushort *)(pfVar18 + 7) & 0x20;
            }
            *(ushort *)(pfVar18 + 7) = uVar7;
          }
          else {
            fVar39 = pfVar20[0x1d];
            fVar37 = 1.0;
            if (0.0 < pfVar20[0x1c]) {
              fVar37 = 1.0 / pfVar20[0x1c];
              if (fVar39 <= 0.0) goto LAB_00173250;
LAB_001736c0:
              fVar39 = 1.0 / fVar39;
            }
            else {
              if (0.0 < fVar39) goto LAB_001736c0;
LAB_00173250:
              fVar39 = 1.0;
            }
            fVar40 = 1.0;
            if (0.0 < pfVar20[0x1e]) {
              fVar40 = 1.0 / pfVar20[0x1e];
            }
            fVar51 = pfVar3[4] + pfVar3[4];
            fVar52 = pfVar3[5] + pfVar3[5];
            fVar42 = *pfVar3;
            fVar48 = pfVar3[1];
            fVar53 = pfVar3[6] + pfVar3[6];
            fVar54 = fVar35 * fVar35 + -0.5;
            fVar55 = fVar51 * fVar43 + fVar52 * fVar41 + fVar53 * fVar44;
            fVar49 = fVar55 * fVar43 +
                     (fVar51 * fVar54 - (fVar53 * fVar41 - fVar52 * fVar44) * fVar35);
            fVar50 = fVar55 * fVar41 +
                     (fVar52 * fVar54 - (fVar51 * fVar44 - fVar53 * fVar43) * fVar35);
            fVar44 = (fVar53 * fVar54 - (fVar52 * fVar43 - fVar51 * fVar41) * fVar35) +
                     fVar55 * fVar44;
            fVar41 = pfVar3[2];
            fVar43 = 1.0;
            if (pfVar20[0x1f] != 0.0) {
              fVar43 = pfVar20[0x1f];
            }
            fVar35 = (fVar42 * fVar42 + fVar48 * fVar48 + fVar41 * fVar41 +
                     fVar43 * (fVar40 * fVar44 * fVar44 +
                              fVar37 * fVar49 * fVar49 + fVar39 * fVar50 * fVar50)) * 0.5;
            fVar51 = 0.0;
            if (iVar12 != 0) {
              fVar51 = pfVar20[0x26];
              if (9 < (uint)fVar51) {
                fVar51 = 1.4013e-44;
              }
              fVar51 = (float)(uint)fVar51;
            }
            fVar53 = pfVar18[0xf] - fVar34;
            fVar54 = pfVar20[0x22];
            fVar52 = fVar34 + pfVar18[0x13];
            if (1.0 < fVar52) {
              fVar52 = 1.0;
            }
            if (fVar53 <= 0.0) {
              fVar53 = 0.0;
            }
            if (iVar12 == 0) {
              fVar52 = 1.0;
            }
            pfVar18[0xf] = fVar53;
            if (fVar51 * fVar54 <= fVar35) {
              pfVar18[0xf] = 1.5;
LAB_001736dc:
              uVar7 = *(ushort *)(pfVar18 + 7);
              pfVar18[0x13] = fVar52;
LAB_001736e8:
              uVar7 = uVar7 & 0x20 | (uVar7 & 1) << 2;
              *(ushort *)(pfVar18 + 7) = uVar7;
            }
            else {
              if (1.0 < fVar51) {
                fVar51 = fVar34 * -0.5 + 1.0;
                pfVar20[0x10] = fVar51 * fVar36;
                pfVar20[0x11] = fVar51 * fVar47;
                fVar52 = DAT_01d4bec4;
                pfVar20[0x12] = fVar51 * fVar33;
                pfVar20[0x14] = fVar51 * fVar38;
                pfVar20[0x15] = fVar51 * fVar45;
                pfVar20[0x16] = fVar51 * fVar46;
              }
              if (fVar53 != 0.0) goto LAB_001736dc;
              uVar7 = *(ushort *)(pfVar18 + 7);
              pfVar18[0x13] = fVar52;
              if (fVar54 * 0.25 <= fVar35) goto LAB_001736e8;
              uVar7 = (uVar7 & 0x20 | (uVar7 & 1) << 1) ^ 3;
              *(ushort *)(pfVar18 + 7) = uVar7;
              *pfVar20 = *pfVar18;
              pfVar20[1] = pfVar18[1];
              pfVar20[2] = pfVar18[2];
              pfVar20[3] = pfVar18[3];
              pfVar20[4] = pfVar18[4];
              pfVar20[5] = pfVar18[5];
              pfVar20[6] = pfVar18[6];
            }
            if ((fVar56 < DAT_01d4bba4) || (fVar56 < fVar34)) {
              fVar42 = fVar42 + pfVar18[0xc];
              fVar48 = fVar48 + pfVar18[0xd];
              fVar41 = fVar41 + pfVar18[0xe];
              fVar50 = fVar50 + pfVar18[0x11];
              fVar49 = fVar49 + pfVar18[0x10];
              fVar44 = fVar44 + pfVar18[0x12];
              pfVar18[0xc] = fVar42;
              pfVar18[0xd] = fVar48;
              pfVar18[0xe] = fVar41;
              pfVar18[0x10] = fVar49;
              pfVar18[0x11] = fVar50;
              pfVar18[0x12] = fVar44;
              fVar36 = pfVar20[0x21];
              if (fVar36 <= fVar35) {
                fVar35 = pfVar20[0x25];
                fVar43 = (fVar42 * fVar42 + fVar48 * fVar48 + fVar41 * fVar41 +
                         fVar43 * (fVar37 * fVar49 * fVar49 + fVar39 * fVar50 * fVar50 +
                                  fVar40 * fVar44 * fVar44)) * 0.5;
                fVar41 = fVar36 * (float)((int)fVar35 + 1);
                if (fVar41 <= fVar43) {
                  pfVar18[0x10] = 0.0;
                  pfVar18[0x11] = 0.0;
                  pfVar18[0x12] = 0.0;
                  pfVar18[0xc] = 0.0;
                  pfVar18[0xd] = 0.0;
                  pfVar18[0xe] = 0.0;
                  if (fVar36 == 0.0) {
                    fVar43 = DAT_01d4c464;
                  }
                  else {
                    fVar43 = (float)NEON_fminnm(fVar43 / fVar41,0x40000000);
                    fVar43 = fVar43 * 0.5 * DAT_01d4c464;
                  }
                  fVar34 = fVar34 * ((float)((int)fVar35 + 1) + -1.0) + fVar43;
                  pfVar20[0x24] = fVar34;
                  if (fVar56 == 0.0) {
                    *(ushort *)(pfVar18 + 7) = uVar7 | 8;
                  }
                  goto joined_r0x00172d68;
                }
              }
            }
LAB_001737a4:
            fVar34 = fVar56 - fVar34;
            if (fVar34 <= 0.0) {
              fVar34 = 0.0;
            }
            pfVar20[0x24] = fVar34;
          }
joined_r0x00172d68:
          if (fVar34 == 0.0) {
            pfVar18[0xc] = 0.0;
            pfVar18[0xd] = 0.0;
            pfVar18[0xe] = 0.0;
            pfVar18[0x10] = 0.0;
            pfVar18[0x11] = 0.0;
            pfVar18[0x12] = 0.0;
            *(ushort *)(pfVar18 + 7) = *(ushort *)(pfVar18 + 7) | 0x10;
          }
          lVar25 = lVar25 + 1;
          lVar29 = lVar29 + 0x20;
          lVar24 = lVar24 + 0x20;
          pfVar30 = pfVar30 + 0x1c;
          lVar32 = lVar32 + 8;
        } while ((int)lVar25 < (int)uVar4);
        iVar28 = (iVar28 + -1) - uVar2;
      }
      uVar21 = 0x80;
      iVar12 = FUN_003ff4b0(lVar1,0x80);
      uVar9 = (-0x80 - iVar5) + iVar12;
    } while ((int)uVar9 < (int)uVar8);
  }
  DataMemoryBarrier(2,3);
  FUN_003ff4b0(param_2 + 0x8c,iVar28);
  return;
}


