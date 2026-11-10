/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006904e0; name: FUN_006904e0
 */


void FUN_006904e0(long param_1,long *param_2)

{
  bool bVar1;
  uint *puVar2;
  short *psVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  ulong uVar28;
  long *plVar29;
  long lVar30;
  int iVar31;
  undefined2 *puVar32;
  ushort uVar33;
  int *piVar34;
  long lVar35;
  short *psVar36;
  ushort *puVar37;
  uint uVar38;
  long lVar39;
  ushort auStack_30 [5];
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  
  uVar17 = *(uint *)(param_2[2] + 0x14);
  lVar20 = *param_2;
  lVar24 = *(long *)param_2[2];
  *(undefined8 *)(param_1 + 0x14a4) = 0x23d00000000;
  if ((int)uVar17 < 1) {
    iVar25 = 0;
    uVar22 = 0xffffffff;
    if (lVar24 != 0) goto LAB_00690588;
LAB_00690604:
    do {
      uVar27 = (uint)uVar22;
      uVar21 = uVar27;
      if ((int)uVar27 < 2) {
        uVar21 = uVar27 + 1;
      }
      uVar22 = (ulong)uVar21;
      uVar38 = 0;
      if ((int)uVar27 < 2) {
        uVar38 = uVar27 + 1;
      }
      *(int *)(param_1 + 0x14a4) = (int)((long)iVar25 + 1);
      *(uint *)(param_1 + ((long)iVar25 + 1) * 4 + 0xbb0) = uVar38;
      *(undefined2 *)(lVar20 + (-(ulong)(uVar38 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar38 << 2))
           = 1;
      *(undefined1 *)(param_1 + (int)uVar38 + 0x14ac) = 0;
      *(long *)(param_1 + 0x1708) = *(long *)(param_1 + 0x1708) + -1;
      iVar25 = *(int *)(param_1 + 0x14a4);
    } while (iVar25 < 2);
  }
  else {
    uVar28 = 0;
    puVar32 = (undefined2 *)(lVar20 + 2);
    uVar22 = 0xffffffff;
    do {
      while (puVar32[-1] != 0) {
        lVar18 = (long)*(int *)(param_1 + 0x14a4) + 1;
        *(int *)(param_1 + 0x14a4) = (int)lVar18;
        *(int *)(param_1 + lVar18 * 4 + 0xbb0) = (int)uVar28;
        uVar22 = uVar28 & 0xffffffff;
        *(undefined1 *)(param_1 + 0x14ac + uVar28) = 0;
        uVar28 = uVar28 + 1;
        puVar32 = puVar32 + 2;
        if (uVar17 == uVar28) goto LAB_0069056c;
      }
      *puVar32 = 0;
      uVar28 = uVar28 + 1;
      puVar32 = puVar32 + 2;
    } while (uVar17 != uVar28);
LAB_0069056c:
    uVar21 = (uint)uVar22;
    iVar25 = *(int *)(param_1 + 0x14a4);
    if (iVar25 < 2) {
      if (lVar24 == 0) goto LAB_00690604;
LAB_00690588:
      do {
        uVar27 = (uint)uVar22;
        uVar21 = uVar27;
        if ((int)uVar27 < 2) {
          uVar21 = uVar27 + 1;
        }
        uVar22 = (ulong)uVar21;
        uVar38 = 0;
        if ((int)uVar27 < 2) {
          uVar38 = uVar27 + 1;
        }
        *(int *)(param_1 + 0x14a4) = (int)((long)iVar25 + 1);
        *(uint *)(param_1 + ((long)iVar25 + 1) * 4 + 0xbb0) = uVar38;
        uVar28 = -(ulong)(uVar38 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar38 << 2;
        *(undefined2 *)(lVar20 + uVar28) = 1;
        *(undefined1 *)(param_1 + (int)uVar38 + 0x14ac) = 0;
        *(long *)(param_1 + 0x1708) = *(long *)(param_1 + 0x1708) + -1;
        *(ulong *)(param_1 + 0x1710) =
             *(long *)(param_1 + 0x1710) - (ulong)*(ushort *)(lVar24 + uVar28 + 2);
        iVar25 = *(int *)(param_1 + 0x14a4);
      } while (iVar25 < 2);
    }
  }
  *(uint *)(param_2 + 1) = uVar21;
  uVar27 = *(uint *)(param_1 + 0x14a4);
  if (1 < (int)uVar27) {
    uVar22 = (ulong)(uVar27 >> 1);
    do {
      lVar24 = param_1 + uVar22 * 4;
      iVar25 = *(int *)(lVar24 + 0xbb0);
      uVar38 = (int)uVar22 * 2;
      if ((int)uVar38 <= (int)uVar27) {
        uVar28 = uVar22 & 0xffffffff;
        do {
          uVar14 = uVar38;
          if ((int)uVar38 < (int)uVar27) {
            puVar2 = (uint *)(param_1 + 0xbb0 + ((long)(int)uVar38 | 1U) * 4);
            puVar16 = (uint *)(param_1 + 0xbb0 + (long)(int)uVar38 * 4);
            lVar24 = (long)(int)*puVar2;
            uVar10 = *(ushort *)(lVar20 + lVar24 * 4);
            uVar33 = *(ushort *)(lVar20 + (long)(int)*puVar16 * 4);
            if ((uVar10 < uVar33) ||
               ((uVar10 == uVar33 &&
                (*(byte *)(param_1 + 0x14ac + lVar24) <=
                 *(byte *)(param_1 + 0x14ac + (long)(int)*puVar16))))) {
              puVar16 = puVar2;
              uVar14 = (uint)((long)(int)uVar38 | 1U);
            }
          }
          else {
            puVar16 = (uint *)(param_1 + (long)(int)uVar38 * 4 + 0xbb0);
          }
          uVar27 = *puVar16;
          uVar10 = *(ushort *)(lVar20 + (long)iVar25 * 4);
          uVar33 = *(ushort *)
                    (lVar20 + (-(ulong)(uVar27 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar27 << 2));
          if ((uVar10 < uVar33) ||
             ((uVar10 == uVar33 &&
              (*(byte *)(param_1 + iVar25 + 0x14ac) <= *(byte *)(param_1 + (int)uVar27 + 0x14ac)))))
          {
            uVar14 = (uint)uVar28;
            break;
          }
          *(uint *)(param_1 + (long)(int)(uint)uVar28 * 4 + 0xbb0) = uVar27;
          uVar27 = *(uint *)(param_1 + 0x14a4);
          uVar38 = uVar14 * 2;
          uVar28 = (ulong)uVar14;
        } while ((int)uVar38 <= (int)uVar27);
        lVar24 = param_1 + (long)(int)uVar14 * 4;
      }
      *(int *)(lVar24 + 0xbb0) = iVar25;
      if ((long)uVar22 < 2) goto code_r0x00690780;
      uVar27 = *(uint *)(param_1 + 0x14a4);
      uVar22 = uVar22 - 1;
    } while( true );
  }
LAB_00690784:
  lVar24 = (long)(int)uVar17;
  do {
    iVar19 = uVar27 - 1;
    iVar25 = *(int *)(param_1 + 0xbb4);
    *(int *)(param_1 + 0x14a4) = iVar19;
    iVar26 = *(int *)(param_1 + (long)(int)uVar27 * 4 + 0xbb0);
    *(int *)(param_1 + 0xbb4) = iVar26;
    piVar34 = (int *)(param_1 + 0xbb4);
    if (2 < (int)uVar27) {
      uVar17 = 1;
      uVar27 = 2;
      do {
        if ((int)uVar27 < iVar19) {
          puVar2 = (uint *)(param_1 + 0xbb0 + ((long)(int)uVar27 | 1U) * 4);
          puVar16 = (uint *)(param_1 + 0xbb0 + (long)(int)uVar27 * 4);
          lVar18 = (long)(int)*puVar2;
          uVar10 = *(ushort *)(lVar20 + lVar18 * 4);
          uVar33 = *(ushort *)(lVar20 + (long)(int)*puVar16 * 4);
          if ((uVar10 < uVar33) ||
             ((uVar10 == uVar33 &&
              (*(byte *)(param_1 + 0x14ac + lVar18) <=
               *(byte *)(param_1 + 0x14ac + (long)(int)*puVar16))))) {
            uVar27 = uVar27 | 1;
            puVar16 = puVar2;
          }
        }
        else {
          puVar16 = (uint *)(param_1 + (long)(int)uVar27 * 4 + 0xbb0);
        }
        uVar38 = *puVar16;
        uVar10 = *(ushort *)(lVar20 + (long)iVar26 * 4);
        uVar33 = *(ushort *)
                  (lVar20 + (-(ulong)(uVar38 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar38 << 2));
        if ((uVar10 < uVar33) ||
           ((uVar10 == uVar33 &&
            (*(byte *)(param_1 + iVar26 + 0x14ac) <= *(byte *)(param_1 + (int)uVar38 + 0x14ac)))))
        break;
        *(uint *)(param_1 + (long)(int)uVar17 * 4 + 0xbb0) = uVar38;
        iVar19 = *(int *)(param_1 + 0x14a4);
        uVar38 = uVar27 * 2;
        uVar17 = uVar27;
        uVar27 = uVar38;
      } while ((int)uVar38 <= iVar19);
      piVar34 = (int *)(param_1 + (long)(int)uVar17 * 4 + 0xbb0);
    }
    *piVar34 = iVar26;
    lVar18 = (long)*(int *)(param_1 + 0x14a8) + -1;
    iVar26 = *(int *)(param_1 + 0xbb4);
    *(int *)(param_1 + 0x14a8) = (int)lVar18;
    *(int *)(param_1 + 0xbb0 + lVar18 * 4) = iVar25;
    lVar18 = (long)*(int *)(param_1 + 0x14a8) + -1;
    *(int *)(param_1 + 0x14a8) = (int)lVar18;
    psVar3 = (short *)(lVar20 + (long)iVar25 * 4);
    *(int *)(param_1 + 0xbb0 + lVar18 * 4) = iVar26;
    psVar36 = (short *)(lVar20 + (long)iVar26 * 4);
    puVar37 = (ushort *)(lVar20 + lVar24 * 4);
    *puVar37 = *psVar36 + *psVar3;
    lVar18 = param_1 + 0x14ac;
    bVar7 = *(byte *)(lVar18 + iVar25);
    bVar8 = *(byte *)(lVar18 + iVar26);
    if (bVar8 <= bVar7) {
      bVar8 = bVar7;
    }
    pbVar4 = (byte *)(lVar18 + lVar24);
    *pbVar4 = bVar8 + 1;
    iVar26 = (int)lVar24;
    psVar36[1] = (short)lVar24;
    psVar3[1] = (short)lVar24;
    iVar25 = *(int *)(param_1 + 0x14a4);
    lVar24 = lVar24 + 1;
    *(int *)(param_1 + 0xbb4) = iVar26;
    piVar34 = (int *)(param_1 + 0xbb4);
    if (1 < iVar25) {
      uVar17 = 1;
      uVar27 = 2;
      do {
        if ((int)uVar27 < iVar25) {
          puVar2 = (uint *)(param_1 + 0xbb0 + ((long)(int)uVar27 | 1U) * 4);
          puVar16 = (uint *)(param_1 + 0xbb0 + (long)(int)uVar27 * 4);
          lVar18 = (long)(int)*puVar2;
          uVar10 = *(ushort *)(lVar20 + lVar18 * 4);
          uVar33 = *(ushort *)(lVar20 + (long)(int)*puVar16 * 4);
          if ((uVar10 < uVar33) ||
             ((uVar10 == uVar33 &&
              (*(byte *)(param_1 + 0x14ac + lVar18) <=
               *(byte *)(param_1 + 0x14ac + (long)(int)*puVar16))))) {
            uVar27 = uVar27 | 1;
            puVar16 = puVar2;
          }
        }
        else {
          puVar16 = (uint *)(param_1 + (long)(int)uVar27 * 4 + 0xbb0);
        }
        uVar38 = *puVar16;
        uVar10 = *puVar37;
        uVar33 = *(ushort *)
                  (lVar20 + (-(ulong)(uVar38 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar38 << 2));
        if ((uVar10 < uVar33) ||
           ((uVar10 == uVar33 && (*pbVar4 <= *(byte *)(param_1 + (int)uVar38 + 0x14ac))))) break;
        *(uint *)(param_1 + (long)(int)uVar17 * 4 + 0xbb0) = uVar38;
        iVar25 = *(int *)(param_1 + 0x14a4);
        uVar38 = uVar27 * 2;
        uVar17 = uVar27;
        uVar27 = uVar38;
      } while ((int)uVar38 <= iVar25);
      piVar34 = (int *)(param_1 + (long)(int)uVar17 * 4 + 0xbb0);
    }
    *piVar34 = iVar26;
    uVar27 = *(uint *)(param_1 + 0x14a4);
    if ((int)uVar27 < 2) {
      lVar24 = (long)*(int *)(param_1 + 0x14a8) + -1;
      *(int *)(param_1 + 0x14a8) = (int)lVar24;
      *(undefined4 *)(param_1 + 0xbb0 + lVar24 * 4) = *(undefined4 *)(param_1 + 0xbb4);
      plVar29 = (long *)param_2[2];
      lVar23 = *param_2;
      iVar25 = (int)param_2[1];
      lVar24 = *plVar29;
      lVar18 = plVar29[1];
      iVar26 = (int)plVar29[2];
      iVar19 = (int)plVar29[3];
      lVar30 = (long)iVar19;
      *(undefined8 *)(param_1 + 0xba8) = 0;
      *(undefined8 *)(param_1 + 0xba0) = 0;
      *(undefined8 *)(param_1 + 0xb98) = 0;
      *(undefined8 *)(param_1 + 0xb90) = 0;
      *(undefined2 *)
       (lVar23 + (long)*(int *)(param_1 + 0xbb0 + (long)*(int *)(param_1 + 0x14a8) * 4) * 4 + 2) = 0
      ;
      iVar11 = *(int *)(param_1 + 0x14a8);
      if (iVar11 < 0x23c) {
        iVar31 = 0;
        if (lVar24 == 0) {
          lVar24 = (long)iVar11 + 0x2ed;
          do {
            iVar11 = *(int *)(param_1 + lVar24 * 4);
            lVar35 = lVar23 + (long)iVar11 * 4;
            uVar10 = *(ushort *)(lVar23 + (ulong)*(ushort *)(lVar35 + 2) * 4 + 2);
            if ((int)(uint)uVar10 < iVar19) {
              iVar13 = uVar10 + 1;
            }
            else {
              iVar31 = iVar31 + 1;
              iVar13 = iVar19;
            }
            *(short *)(lVar35 + 2) = (short)iVar13;
            if (iVar11 <= iVar25) {
              lVar35 = param_1 + (long)iVar13 * 2;
              *(short *)(lVar35 + 0xb90) = *(short *)(lVar35 + 0xb90) + 1;
              if (iVar11 < iVar26) {
                iVar15 = 0;
              }
              else {
                iVar15 = *(int *)(lVar18 + (long)(iVar11 - iVar26) * 4);
              }
              *(ulong *)(param_1 + 0x1708) =
                   *(long *)(param_1 + 0x1708) +
                   (ulong)*(ushort *)(lVar23 + (long)iVar11 * 4) * (long)(iVar15 + iVar13);
            }
            lVar24 = lVar24 + 1;
          } while (lVar24 != 0x529);
        }
        else {
          lVar35 = (long)iVar11 + 0x2ed;
          do {
            iVar11 = *(int *)(param_1 + lVar35 * 4);
            lVar39 = lVar23 + (long)iVar11 * 4;
            uVar10 = *(ushort *)(lVar23 + (ulong)*(ushort *)(lVar39 + 2) * 4 + 2);
            if ((int)(uint)uVar10 < iVar19) {
              iVar13 = uVar10 + 1;
            }
            else {
              iVar31 = iVar31 + 1;
              iVar13 = iVar19;
            }
            *(short *)(lVar39 + 2) = (short)iVar13;
            if (iVar11 <= iVar25) {
              lVar39 = param_1 + (long)iVar13 * 2;
              *(short *)(lVar39 + 0xb90) = *(short *)(lVar39 + 0xb90) + 1;
              if (iVar11 < iVar26) {
                iVar15 = 0;
              }
              else {
                iVar15 = *(int *)(lVar18 + (long)(iVar11 - iVar26) * 4);
              }
              lVar39 = (long)iVar11 * 4;
              uVar22 = (ulong)*(ushort *)(lVar23 + lVar39);
              *(ulong *)(param_1 + 0x1708) =
                   *(long *)(param_1 + 0x1708) + uVar22 * (long)(iVar15 + iVar13);
              *(ulong *)(param_1 + 0x1710) =
                   *(long *)(param_1 + 0x1710) +
                   ((ulong)*(ushort *)(lVar24 + lVar39 + 2) + (long)iVar15) * uVar22;
            }
            lVar35 = lVar35 + 1;
          } while (lVar35 != 0x529);
        }
        if (iVar31 != 0) {
          psVar3 = (short *)(param_1 + lVar30 * 2 + 0xb90);
          do {
            psVar36 = psVar3;
            lVar24 = (lVar30 << 0x20) + 0x100000000;
            do {
              psVar36 = psVar36 + -1;
              lVar24 = lVar24 + -0x100000000;
            } while (*psVar36 == 0);
            *psVar36 = *psVar36 + -1;
            lVar24 = param_1 + (lVar24 >> 0x1f);
            *(short *)(lVar24 + 0xb90) = *(short *)(lVar24 + 0xb90) + 2;
            sVar9 = *psVar3;
            iVar26 = iVar31 + -2;
            *psVar3 = sVar9 + -1;
            bVar1 = 1 < iVar31;
            iVar31 = iVar26;
          } while (iVar26 != 0 && bVar1);
          if (iVar19 != 0) {
            iVar26 = 0x23d;
            uVar10 = sVar9 - 1;
            while( true ) {
              if (uVar10 != 0) {
                uVar17 = (uint)uVar10;
                do {
                  piVar34 = (int *)(param_1 + 0xbac + (long)iVar26 * 4);
                  do {
                    iVar19 = *piVar34;
                    iVar26 = iVar26 + -1;
                    piVar34 = piVar34 + -1;
                  } while (iVar25 < iVar19);
                  puVar37 = (ushort *)(lVar23 + (long)iVar19 * 4 + 2);
                  uVar10 = *puVar37;
                  if ((uint)lVar30 != (uint)uVar10) {
                    *(ulong *)(param_1 + 0x1708) =
                         *(long *)(param_1 + 0x1708) +
                         (lVar30 - (ulong)uVar10) * (ulong)*(ushort *)(lVar23 + (long)iVar19 * 4);
                    *puVar37 = (ushort)lVar30;
                  }
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
              lVar30 = lVar30 + -1;
              if ((int)lVar30 == 0) break;
              uVar10 = *(ushort *)(param_1 + lVar30 * 2 + 0xb90);
            }
          }
        }
      }
      auStack_30[1] = *(short *)(param_1 + 0xb90) * 2;
      auStack_30[2] = (auStack_30[1] + *(short *)(param_1 + 0xb92)) * 2;
      auStack_30[3] = (auStack_30[2] + *(short *)(param_1 + 0xb94)) * 2;
      auStack_30[4] = (auStack_30[3] + *(short *)(param_1 + 0xb96)) * 2;
      local_26 = (auStack_30[4] + *(short *)(param_1 + 0xb98)) * 2;
      local_24 = (local_26 + *(short *)(param_1 + 0xb9a)) * 2;
      local_22 = (local_24 + *(short *)(param_1 + 0xb9c)) * 2;
      local_20 = (local_22 + *(short *)(param_1 + 0xb9e)) * 2;
      local_1e = (local_20 + *(short *)(param_1 + 0xba0)) * 2;
      local_1c = (local_1e + *(short *)(param_1 + 0xba2)) * 2;
      local_1a = (local_1c + *(short *)(param_1 + 0xba4)) * 2;
      local_18 = (local_1a + *(short *)(param_1 + 0xba6)) * 2;
      local_16 = (*(short *)(param_1 + 0xba8) + local_18) * 2;
      local_14 = (*(short *)(param_1 + 0xbaa) + local_16) * 2;
      local_12 = (local_14 + *(short *)(param_1 + 0xbac)) * 2;
      if (-1 < (int)uVar21) {
        uVar22 = 0;
        do {
          uVar10 = *(ushort *)(lVar20 + uVar22 * 4 + 2);
          uVar28 = (ulong)uVar10;
          if (uVar28 != 0) {
            uVar27 = (uint)auStack_30[uVar28];
            auStack_30[uVar28] = auStack_30[uVar28] + 1;
            uVar17 = uVar10 & 3;
            if (uVar10 - 1 < 3) {
              uVar38 = 0;
              uVar33 = uVar10;
            }
            else {
              uVar38 = 0;
              iVar25 = uVar17 - uVar10;
              do {
                uVar14 = uVar27 & 1;
                uVar5 = uVar27 & 2;
                uVar6 = uVar27 >> 2;
                uVar12 = uVar27 >> 3;
                uVar27 = uVar27 >> 4;
                uVar38 = uVar12 & 1 | (uVar5 | (uVar38 & 0x1fffffff | uVar14) << 2 | uVar6 & 1) << 1
                ;
                uVar33 = (ushort)uVar38;
                uVar38 = uVar38 << 1;
                iVar25 = iVar25 + 4;
              } while (iVar25 != 0);
            }
            if ((uVar10 & 3) != 0) {
              iVar25 = -uVar17;
              do {
                uVar17 = uVar27 & 1;
                uVar27 = uVar27 >> 1;
                uVar38 = uVar38 | uVar17;
                uVar33 = (ushort)uVar38;
                uVar38 = uVar38 << 1;
                iVar25 = iVar25 + 1;
              } while (iVar25 != 0);
            }
            *(ushort *)(lVar20 + uVar22 * 4) = uVar33;
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar21 + 1);
      }
      return;
    }
  } while( true );
code_r0x00690780:
  uVar27 = *(uint *)(param_1 + 0x14a4);
  goto LAB_00690784;
}


