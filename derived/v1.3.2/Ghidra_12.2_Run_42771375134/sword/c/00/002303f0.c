/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002303f0; name: FUN_002303f0
 */


void FUN_002303f0(long *param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  undefined1 *__src;
  undefined1 *__src_00;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  long lVar23;
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
  undefined1 auStack_190 [256];
  undefined1 *local_90;
  char local_88;
  
  uVar4 = *(uint *)((long)param_1 + 0x2c);
  if (uVar4 != 0) {
    iVar19 = uVar4 - 1;
    local_90 = auStack_190;
    local_88 = '\0';
    if (0 < iVar19) {
      uVar20 = 0;
      uVar14 = 0;
      __src = auStack_190;
      iVar21 = 0x40;
      __src_00 = auStack_190;
      if (0 < iVar19) goto LAB_00230494;
LAB_002306d4:
      iVar19 = (int)uVar20;
      if (iVar19 != 0) {
        uVar20 = (ulong)(iVar19 - 2);
        iVar19 = *(int *)(__src_00 + (ulong)(iVar19 - 1) * 4);
        uVar14 = *(uint *)(__src_00 + uVar20 * 4);
        if ((int)uVar14 < iVar19) {
LAB_00230494:
          if (4 < iVar19 - uVar14) {
            iVar13 = uVar14 + iVar19;
            if (iVar13 < 0) {
              iVar13 = iVar13 + 1;
            }
            pfVar12 = (float *)(param_1 + (long)(iVar13 >> 1) + 0x106);
            pfVar11 = (float *)(param_1 + (long)(int)uVar14 + 0x106);
            fVar24 = *pfVar12;
            fVar26 = *pfVar11;
            if (fVar24 < fVar26) {
              lVar8 = *(long *)pfVar11;
              *(long *)pfVar11 = *(long *)pfVar12;
              *(long *)pfVar12 = lVar8;
              fVar26 = *pfVar11;
              fVar24 = (float)lVar8;
            }
            fVar28 = *(float *)(param_1 + (long)iVar19 + 0x106);
            plVar1 = param_1 + (long)iVar19 + 0x106;
            if (fVar28 < fVar26) {
              lVar8 = *(long *)pfVar11;
              *(long *)pfVar11 = *plVar1;
              *plVar1 = lVar8;
              fVar28 = (float)lVar8;
              fVar24 = *pfVar12;
            }
            lVar8 = (long)iVar19;
            if (fVar28 < fVar24) {
              lVar15 = *(long *)pfVar12;
              *(long *)pfVar12 = *plVar1;
              *plVar1 = lVar15;
            }
            lVar15 = *(long *)pfVar12;
            uVar9 = lVar8 - 1;
            pfVar11 = (float *)(param_1 + lVar8 + 0x105);
            fVar24 = (float)lVar15;
            *(long *)pfVar12 = param_1[lVar8 + 0x105];
            param_1[lVar8 + 0x105] = lVar15;
            uVar16 = (ulong)uVar14;
            while( true ) {
              iVar13 = (int)uVar16;
              lVar8 = 0x838;
              lVar15 = 0;
              do {
                lVar23 = lVar15;
                lVar6 = lVar8 + (long)iVar13 * 8;
                lVar8 = lVar8 + 8;
                lVar15 = lVar23 + 1;
              } while (*(float *)((long)param_1 + lVar6) < fVar24);
              pfVar12 = (float *)(param_1 + (long)(int)uVar9 + 0x106);
              do {
                pfVar12 = pfVar12 + -2;
                uVar18 = (int)uVar9 - 1;
                uVar9 = (ulong)uVar18;
              } while (fVar24 < *pfVar12);
              lVar8 = param_1[(long)iVar13 + lVar23 + 0x107];
              uVar16 = lVar15 + (uVar16 & 0xffffffff);
              if ((int)uVar18 <= (int)uVar16) break;
              param_1[(long)iVar13 + lVar23 + 0x107] = *(long *)pfVar12;
              *(long *)pfVar12 = lVar8;
              fVar24 = *pfVar11;
            }
            iVar22 = (int)lVar15;
            param_1[(long)iVar13 + lVar23 + 0x107] = *(long *)pfVar11;
            *(long *)pfVar11 = lVar8;
            uVar18 = (uint)uVar20;
            if ((iVar19 - iVar13) - iVar22 <= (int)((iVar13 - uVar14) + iVar22)) {
              if (iVar21 - 1U <= uVar18) {
                memcpy((void *)0x0,__src,(ulong)(uVar18 << 2));
                __src = (undefined1 *)0x0;
                __src_00 = (undefined1 *)0x0;
                iVar21 = iVar21 << 1;
              }
              *(int *)(__src_00 + uVar20 * 4) = iVar22 + iVar13 + 1;
              uVar20 = (ulong)(uVar18 + 2);
              *(int *)(__src_00 + (ulong)(uVar18 + 1) * 4) = iVar19;
              iVar19 = iVar13 + iVar22 + -1;
              if (iVar19 <= (int)uVar14) goto LAB_002306d4;
              goto LAB_00230494;
            }
            if (iVar21 - 1U <= uVar18) {
                    /* try { // try from 002305e8 to 0023061b has its CatchHandler @ 00230c08 */
              memcpy((void *)0x0,__src_00,(ulong)(uVar18 << 2));
              __src = (undefined1 *)0x0;
              __src_00 = (undefined1 *)0x0;
              iVar21 = iVar21 << 1;
            }
            *(uint *)(__src_00 + uVar20 * 4) = uVar14;
            uVar20 = (ulong)(uVar18 + 2);
            *(int *)(__src_00 + (ulong)(uVar18 + 1) * 4) = iVar13 + -1 + iVar22;
            uVar14 = iVar13 + iVar22 + 1;
            if (iVar19 <= (int)uVar14) goto LAB_002306d4;
            goto LAB_00230494;
          }
          pfVar12 = (float *)(param_1 + (long)(int)uVar14 + 0x107);
          uVar16 = (long)(int)uVar14;
          do {
            uVar14 = uVar14 + 1;
            lVar8 = 0;
            uVar9 = uVar16 + 1;
            uVar17 = uVar16 & 0xffffffff;
            pfVar11 = pfVar12;
            do {
              iVar13 = (int)lVar8;
              lVar8 = lVar8 + 1;
              uVar18 = uVar14 + iVar13;
              if (*(float *)(param_1 + (long)(int)(uint)uVar17 + 0x106) <= *pfVar11) {
                uVar18 = (uint)uVar17;
              }
              uVar17 = (ulong)uVar18;
              pfVar11 = pfVar11 + 2;
            } while ((long)(uVar16 + lVar8) < (long)iVar19);
            if (uVar18 != (uint)uVar16) {
              uVar17 = -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | uVar17 << 3;
              lVar8 = *(long *)((long)param_1 + uVar17 + 0x830);
              *(long *)((long)param_1 + uVar17 + 0x830) = param_1[uVar16 + 0x106];
              param_1[uVar16 + 0x106] = lVar8;
            }
            pfVar12 = pfVar12 + 2;
            uVar16 = uVar9;
          } while (uVar9 != (long)iVar19);
        }
        goto LAB_002306d4;
      }
      if (local_88 != '\0') {
                    /* try { // try from 00230704 to 0023070b has its CatchHandler @ 00230c04 */
        FUN_00401ce0(&local_90,local_90);
      }
    }
    fVar24 = DAT_01d4bac8;
    piVar2 = (int *)((long)param_1 + 0xa34);
    uVar20 = 0;
    do {
      uVar14 = *(uint *)((long)param_1 + uVar20 * 8 + 0x834);
      iVar19 = *(int *)((long)param_1 + (ulong)uVar14 * 0x20 + 0x44);
      iVar21 = (int)param_1[(ulong)uVar14 * 4 + 9];
      iVar13 = *(int *)((long)param_1 + (ulong)uVar14 * 0x20 + 0x4c);
      switch(*(undefined4 *)((long)param_1 + (ulong)uVar14 * 0x20 + 0x3c)) {
      case 0:
        piVar10 = piVar2;
        for (iVar22 = (int)param_1[0x146]; iVar22 != 0; iVar22 = iVar22 + -1) {
          if (((*piVar10 == iVar19) || (piVar10[1] == iVar19)) || (piVar10[2] == iVar19))
          goto switchD_0023075c_default;
          piVar10 = piVar10 + 3;
        }
        break;
      case 1:
        piVar10 = piVar2;
        for (iVar22 = (int)param_1[0x146]; iVar22 != 0; iVar22 = iVar22 + -1) {
          if (((*piVar10 == iVar21) || (piVar10[1] == iVar21)) || (piVar10[2] == iVar21))
          goto switchD_0023075c_default;
          piVar10 = piVar10 + 3;
        }
        break;
      case 2:
        piVar10 = piVar2;
        for (iVar22 = (int)param_1[0x146]; iVar22 != 0; iVar22 = iVar22 + -1) {
          if (((*piVar10 == iVar13) || (piVar10[1] == iVar13)) || (piVar10[2] == iVar13))
          goto switchD_0023075c_default;
          piVar10 = piVar10 + 3;
        }
        break;
      case 3:
        iVar22 = (int)param_1[0x146];
        if (iVar22 != 0) {
          piVar10 = piVar2;
          do {
            iVar3 = piVar10[1];
            iVar5 = piVar10[2];
            if (*piVar10 == iVar19) {
              if (iVar3 == iVar21) goto switchD_0023075c_default;
joined_r0x00230844:
              if (iVar5 == iVar21) goto switchD_0023075c_default;
            }
            else if ((iVar3 == iVar19) || (bVar7 = iVar5 == iVar19, iVar5 = iVar3, bVar7)) {
              if (*piVar10 != iVar21) goto joined_r0x00230844;
              goto switchD_0023075c_default;
            }
            iVar22 = iVar22 + -1;
            piVar10 = piVar10 + 3;
          } while (iVar22 != 0);
        }
        break;
      case 4:
        iVar22 = (int)param_1[0x146];
        if (iVar22 != 0) {
          piVar10 = piVar2;
          do {
            iVar3 = piVar10[1];
            iVar5 = piVar10[2];
            if (*piVar10 == iVar21) {
              if (iVar3 == iVar13) goto switchD_0023075c_default;
joined_r0x002308b0:
              if (iVar5 == iVar13) goto switchD_0023075c_default;
            }
            else if ((iVar3 == iVar21) || (bVar7 = iVar5 == iVar21, iVar5 = iVar3, bVar7)) {
              if (*piVar10 != iVar13) goto joined_r0x002308b0;
              goto switchD_0023075c_default;
            }
            iVar22 = iVar22 + -1;
            piVar10 = piVar10 + 3;
          } while (iVar22 != 0);
        }
        break;
      case 5:
        iVar22 = (int)param_1[0x146];
        if (iVar22 != 0) {
          piVar10 = piVar2;
          do {
            iVar3 = piVar10[1];
            iVar5 = piVar10[2];
            if (*piVar10 == iVar19) {
              if (iVar3 == iVar13) goto switchD_0023075c_default;
joined_r0x0023095c:
              if (iVar5 == iVar13) goto switchD_0023075c_default;
            }
            else if ((iVar3 == iVar19) || (bVar7 = iVar5 == iVar19, iVar5 = iVar3, bVar7)) {
              if (*piVar10 != iVar13) goto joined_r0x0023095c;
              goto switchD_0023075c_default;
            }
            iVar22 = iVar22 + -1;
            piVar10 = piVar10 + 3;
          } while (iVar22 != 0);
        }
        break;
      default:
        goto switchD_0023075c_default;
      }
      fVar26 = *(float *)(param_1 + (ulong)uVar14 * 4 + 8);
      pfVar12 = (float *)(param_1 + (ulong)uVar14 * 4 + 6);
      if (*(float *)(param_1 + uVar20 + 0x106) <= fVar24) {
        fVar28 = *(float *)(param_1 + (ulong)uVar14 * 4 + 7);
        pfVar11 = (float *)((long)param_1 + (ulong)uVar14 * 0x20 + 0x34);
        fVar25 = *pfVar11;
        fVar37 = 0.0;
        fVar29 = 0.0;
        fVar25 = *pfVar12 * *pfVar12 + fVar25 * fVar25 + fVar28 * fVar28;
        fVar28 = 0.0;
        if (0.0 < fVar25) {
          fVar37 = sqrtf(fVar25);
          fVar37 = 1.0 / fVar37;
          fVar29 = fVar37 * *pfVar11;
          fVar28 = *pfVar12 * fVar37;
          fVar37 = fVar37 * *(float *)(param_1 + (ulong)uVar14 * 4 + 7);
        }
        fVar28 = -fVar28;
        fVar29 = -fVar29;
        fVar25 = 0.0;
        fVar37 = -fVar37;
        lVar8 = param_1[3];
        uVar14 = *(uint *)(lVar8 + 0x1000);
      }
      else {
        fVar25 = sqrtf(*(float *)(param_1 + uVar20 + 0x106));
        fVar29 = 1.0 / fVar25;
        fVar28 = fVar29 * *pfVar12;
        fVar37 = fVar29 * *(float *)(param_1 + (ulong)uVar14 * 4 + 7);
        fVar29 = fVar29 * *(float *)((long)param_1 + (ulong)uVar14 * 0x20 + 0x34);
        lVar8 = param_1[3];
        uVar14 = *(uint *)(lVar8 + 0x1000);
      }
      if (uVar14 < 0x40) {
        fVar38 = *(float *)(*param_1 + 4);
        pfVar11 = (float *)param_1[2];
        pfVar12 = (float *)param_1[4];
        fVar30 = *pfVar11;
        fVar31 = pfVar11[1];
        fVar35 = fVar28 + fVar28;
        fVar34 = fVar37 + fVar37;
        fVar32 = pfVar11[2];
        fVar33 = pfVar11[3];
        fVar27 = fVar29 + fVar29;
        fVar36 = *pfVar12 + fVar28 * fVar38;
        fVar37 = fVar37 * fVar38 + pfVar12[2];
        fVar29 = fVar29 * fVar38 + pfVar12[1];
        fVar36 = fVar36 + fVar36;
        fVar28 = fVar35 * fVar30 + fVar27 * fVar31 + fVar34 * fVar32;
        fVar29 = fVar29 + fVar29;
        fVar40 = fVar33 * fVar33 + -0.5;
        fVar37 = fVar37 + fVar37;
        fVar42 = fVar30 * fVar36 + fVar31 * fVar29 + fVar32 * fVar37;
        pfVar12 = (float *)(lVar8 + (ulong)uVar14 * 0x40);
        fVar43 = pfVar11[5];
        fVar39 = pfVar11[6];
        fVar41 = pfVar11[4];
        *(uint *)(lVar8 + 0x1000) = uVar14 + 1;
        *pfVar12 = -(fVar30 * fVar28 +
                    fVar35 * fVar40 + fVar33 * (fVar34 * fVar31 - fVar27 * fVar32));
        pfVar12[1] = -(fVar31 * fVar28 +
                      fVar27 * fVar40 + fVar33 * (fVar35 * fVar32 - fVar34 * fVar30));
        pfVar12[6] = fVar40 * fVar37 + fVar33 * (fVar30 * fVar29 - fVar31 * fVar36) +
                     fVar32 * fVar42 + fVar39;
        pfVar12[4] = fVar30 * fVar42 +
                     fVar40 * fVar36 + fVar33 * (fVar31 * fVar37 - fVar32 * fVar29) + fVar41;
        pfVar12[5] = fVar31 * fVar42 +
                     fVar40 * fVar29 + fVar33 * (fVar32 * fVar36 - fVar30 * fVar37) + fVar43;
        pfVar12[0xd] = fVar26;
        pfVar12[2] = -(fVar34 * fVar40 + fVar33 * (fVar27 * fVar30 - fVar35 * fVar31) +
                      fVar32 * fVar28);
        pfVar12[3] = fVar25 - fVar38;
      }
switchD_0023075c_default:
      uVar14 = *(uint *)(param_1 + 0x146);
      if (uVar14 < 0x40) {
        *(uint *)(param_1 + 0x146) = uVar14 + 1;
        *(int *)((long)param_1 + (ulong)uVar14 * 0xc + 0xa34) = iVar19;
        *(int *)((long)param_1 + (ulong)uVar14 * 0xc + 0xa38) = iVar21;
        *(int *)((long)param_1 + (ulong)uVar14 * 0xc + 0xa3c) = iVar13;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar4);
  }
  return;
}


