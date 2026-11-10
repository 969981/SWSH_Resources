/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e76460; name: FUN_00e76460
 */


undefined8 FUN_00e76460(long *param_1)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ushort *puVar11;
  ushort uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  long *plVar22;
  uint *puVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  
  lVar26 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar26 != 0) {
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
  }
  plVar16 = *(long **)(lVar26 + 0x3d8);
  uVar27 = 0xcbf29ce484222645;
  if (plVar16 != (long *)0x0) {
    uVar18 = *(ulong *)(lVar26 + 0x3b8);
    lVar17 = *param_1;
    do {
      uVar19 = plVar16[2];
      if ((uVar18 - 1 & uVar18) == 0) {
        plVar22 = *(long **)(*(long *)(lVar26 + 0x3b0) + (uVar19 & uVar18 - 1) * 8);
        do {
          do {
            plVar22 = (long *)*plVar22;
          } while (uVar19 != plVar22[1]);
        } while (plVar22[2] != uVar19);
      }
      else {
        uVar21 = uVar19;
        if (uVar18 <= uVar19) {
          uVar21 = 0;
          if (uVar18 != 0) {
            uVar21 = uVar19 / uVar18;
          }
          uVar21 = uVar19 - uVar21 * uVar18;
        }
        plVar22 = *(long **)(*(long *)(lVar26 + 0x3b0) + uVar21 * 8);
        do {
          do {
            plVar22 = (long *)*plVar22;
          } while (uVar19 != plVar22[1]);
        } while (plVar22[2] != uVar19);
      }
      puVar23 = *(uint **)(*(long *)((long)plVar22 + 0x38) + 400);
      piVar1 = (int *)((long)puVar23 + (ulong)*puVar23);
      uVar19 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
      puVar2 = (uint *)((long)piVar1 + uVar19);
      uVar21 = (ulong)*puVar2;
      puVar2 = (uint *)((long)puVar2 + uVar21);
      puVar20 = puVar2 + 1;
      uVar5 = *puVar2;
      if (uVar5 != 0) {
        puVar2 = puVar20 + uVar5;
        lVar24 = (long)puVar23 + *puVar23 + uVar21 + uVar19;
        do {
          uVar25 = (ulong)*puVar20;
          piVar1 = (int *)((long)puVar20 + uVar25);
          iVar6 = *piVar1;
          uVar21 = (ulong)*(ushort *)((long)piVar1 + (6 - (long)iVar6));
          puVar23 = (uint *)((long)piVar1 + uVar21);
          uVar9 = (ulong)*puVar23;
          uVar19 = (ulong)*(uint *)((long)puVar23 + uVar9);
          if (uVar19 != 0) {
            lVar7 = 0;
            lVar8 = lVar24 + uVar9 + uVar21 + uVar25;
            do {
              uVar21 = (ulong)*(uint *)(lVar8 + lVar7 + 8);
              uVar9 = (ulong)*(ushort *)
                              (lVar8 + (uVar21 - (long)*(int *)(lVar8 + uVar21 + lVar7 + 8)) + lVar7
                              + 0xc);
              uVar13 = (ulong)*(uint *)(lVar8 + uVar21 + uVar9 + lVar7 + 8);
              lVar3 = uVar21 + uVar9 + uVar13;
              uVar14 = (ulong)*(ushort *)
                               (lVar8 + (lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8)) + lVar7 + 0xc)
              ;
              uVar15 = (ulong)*(uint *)(lVar8 + lVar3 + uVar14 + lVar7 + 8);
              lVar3 = lVar3 + uVar14 + uVar15;
              lVar28 = lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8);
              lVar4 = lVar8 + lVar7 + lVar28;
              uVar12 = *(ushort *)(lVar4 + 8);
              if ((uVar12 < 0x17) || (uVar30 = (ulong)*(ushort *)(lVar4 + 0x1e), uVar30 == 0)) {
                if (lVar17 == 0) goto LAB_00e772bc;
              }
              else if (*(long *)(lVar8 + lVar3 + uVar30 + lVar7 + 8) == lVar17) {
LAB_00e772bc:
                if (0x18 < uVar12) goto LAB_00e77300;
                uVar27 = 0;
                goto joined_r0x00e772c8;
              }
              lVar7 = lVar7 + 4;
            } while (uVar19 * 4 != lVar7);
          }
          uVar21 = (ulong)*(ushort *)((long)piVar1 + (0x24 - (long)iVar6));
          puVar23 = (uint *)((long)piVar1 + uVar21);
          uVar9 = (ulong)*puVar23;
          uVar19 = (ulong)*(uint *)((long)puVar23 + uVar9);
          if (uVar19 != 0) {
            lVar7 = 0;
            lVar8 = lVar24 + uVar9 + uVar21 + uVar25;
            do {
              uVar21 = (ulong)*(uint *)(lVar8 + lVar7 + 8);
              lVar4 = uVar21 + *(ushort *)
                                (lVar8 + (uVar21 - (long)*(int *)(lVar8 + uVar21 + lVar7 + 8)) +
                                 lVar7 + 0xc);
              lVar4 = lVar4 + (ulong)*(uint *)(lVar8 + lVar4 + lVar7 + 8);
              lVar4 = lVar4 + (ulong)*(ushort *)
                                      (lVar8 + (lVar4 - *(int *)(lVar8 + lVar4 + lVar7 + 8)) + lVar7
                                      + 0xc);
              lVar4 = lVar4 + (ulong)*(uint *)(lVar8 + lVar4 + lVar7 + 8);
              lVar3 = lVar8 + lVar7 + (lVar4 - *(int *)(lVar8 + lVar4 + lVar7 + 8));
              if ((*(ushort *)(lVar3 + 8) < 5) ||
                 (uVar21 = (ulong)*(ushort *)(lVar3 + 0xc), uVar21 == 0)) {
                piVar10 = (int *)0x0;
              }
              else {
                lVar4 = lVar4 + uVar21;
                piVar10 = (int *)(lVar8 + lVar7 + lVar4 + (ulong)*(uint *)(lVar8 + lVar4 + lVar7 + 8
                                                                          ) + 8);
              }
              puVar11 = (ushort *)((long)piVar10 - (long)*piVar10);
              uVar12 = *puVar11;
              if ((uVar12 < 0x17) || ((ulong)puVar11[0xb] == 0)) {
                if (lVar17 == 0) goto LAB_00e772a0;
              }
              else if (*(long *)((long)piVar10 + (ulong)puVar11[0xb]) == lVar17) goto LAB_00e772a0;
              lVar7 = lVar7 + 4;
            } while (uVar19 * 4 != lVar7);
          }
          uVar21 = (ulong)*(ushort *)((long)piVar1 + (8 - (long)iVar6));
          puVar23 = (uint *)((long)piVar1 + uVar21);
          uVar9 = (ulong)*puVar23;
          uVar19 = (ulong)*(uint *)((long)puVar23 + uVar9);
          if (uVar19 != 0) {
            lVar7 = 0;
            lVar8 = lVar24 + uVar9 + uVar21 + uVar25;
            do {
              uVar21 = (ulong)*(uint *)(lVar8 + lVar7 + 8);
              lVar4 = uVar21 + *(ushort *)
                                (lVar8 + (uVar21 - (long)*(int *)(lVar8 + uVar21 + lVar7 + 8)) +
                                 lVar7 + 0xe);
              lVar4 = lVar4 + (ulong)*(uint *)(lVar8 + lVar4 + lVar7 + 8);
              lVar4 = lVar4 + (ulong)*(ushort *)
                                      (lVar8 + (lVar4 - *(int *)(lVar8 + lVar4 + lVar7 + 8)) + lVar7
                                      + 0xc);
              lVar4 = lVar4 + (ulong)*(uint *)(lVar8 + lVar4 + lVar7 + 8);
              lVar3 = lVar8 + lVar7 + (lVar4 - *(int *)(lVar8 + lVar4 + lVar7 + 8));
              if ((*(ushort *)(lVar3 + 8) < 5) ||
                 (uVar21 = (ulong)*(ushort *)(lVar3 + 0xc), uVar21 == 0)) {
                piVar10 = (int *)0x0;
              }
              else {
                lVar4 = lVar4 + uVar21;
                piVar10 = (int *)(lVar8 + lVar7 + lVar4 + (ulong)*(uint *)(lVar8 + lVar4 + lVar7 + 8
                                                                          ) + 8);
              }
              puVar11 = (ushort *)((long)piVar10 - (long)*piVar10);
              uVar12 = *puVar11;
              if ((uVar12 < 0x17) || ((ulong)puVar11[0xb] == 0)) {
                if (lVar17 == 0) goto LAB_00e772a0;
              }
              else if (*(long *)((long)piVar10 + (ulong)puVar11[0xb]) == lVar17) goto LAB_00e772a0;
              lVar7 = lVar7 + 4;
            } while (uVar19 * 4 != lVar7);
          }
          uVar21 = (ulong)*(ushort *)((long)piVar1 + (10 - (long)iVar6));
          puVar23 = (uint *)((long)piVar1 + uVar21);
          uVar9 = (ulong)*puVar23;
          uVar19 = (ulong)*(uint *)((long)puVar23 + uVar9);
          if (uVar19 != 0) {
            lVar7 = 0;
            lVar8 = lVar24 + uVar9 + uVar21 + uVar25;
            do {
              uVar21 = (ulong)*(uint *)(lVar8 + lVar7 + 8);
              uVar9 = (ulong)*(ushort *)
                              (lVar8 + (uVar21 - (long)*(int *)(lVar8 + uVar21 + lVar7 + 8)) + lVar7
                              + 0xc);
              uVar13 = (ulong)*(uint *)(lVar8 + uVar21 + uVar9 + lVar7 + 8);
              lVar3 = uVar21 + uVar9 + uVar13;
              uVar14 = (ulong)*(ushort *)
                               (lVar8 + (lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8)) + lVar7 + 0xc)
              ;
              uVar15 = (ulong)*(uint *)(lVar8 + lVar3 + uVar14 + lVar7 + 8);
              lVar3 = lVar3 + uVar14 + uVar15;
              lVar28 = lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8);
              lVar4 = lVar8 + lVar7 + lVar28;
              uVar12 = *(ushort *)(lVar4 + 8);
              if ((uVar12 < 0x17) || (uVar30 = (ulong)*(ushort *)(lVar4 + 0x1e), uVar30 == 0)) {
                if (lVar17 == 0) goto LAB_00e772f8;
              }
              else if (*(long *)(lVar8 + lVar3 + uVar30 + lVar7 + 8) == lVar17) goto LAB_00e772f8;
              lVar7 = lVar7 + 4;
            } while (uVar19 * 4 != lVar7);
          }
          uVar21 = (ulong)*(ushort *)((long)piVar1 + (0xc - (long)iVar6));
          puVar23 = (uint *)((long)piVar1 + uVar21);
          uVar9 = (ulong)*puVar23;
          uVar19 = (ulong)*(uint *)((long)puVar23 + uVar9);
          if (uVar19 != 0) {
            lVar7 = 0;
            lVar8 = lVar24 + uVar9 + uVar21 + uVar25;
            do {
              uVar21 = (ulong)*(uint *)(lVar8 + lVar7 + 8);
              uVar9 = (ulong)*(ushort *)
                              (lVar8 + (uVar21 - (long)*(int *)(lVar8 + uVar21 + lVar7 + 8)) + lVar7
                              + 0xc);
              uVar13 = (ulong)*(uint *)(lVar8 + uVar21 + uVar9 + lVar7 + 8);
              lVar3 = uVar21 + uVar9 + uVar13;
              uVar14 = (ulong)*(ushort *)
                               (lVar8 + (lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8)) + lVar7 + 0xc)
              ;
              uVar15 = (ulong)*(uint *)(lVar8 + lVar3 + uVar14 + lVar7 + 8);
              lVar3 = lVar3 + uVar14 + uVar15;
              lVar28 = lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8);
              lVar4 = lVar8 + lVar7 + lVar28;
              uVar12 = *(ushort *)(lVar4 + 8);
              if ((uVar12 < 0x17) || (uVar30 = (ulong)*(ushort *)(lVar4 + 0x1e), uVar30 == 0)) {
                if (lVar17 == 0) goto LAB_00e772f8;
              }
              else if (*(long *)(lVar8 + lVar3 + uVar30 + lVar7 + 8) == lVar17) goto LAB_00e772f8;
              lVar7 = lVar7 + 4;
            } while (uVar19 * 4 != lVar7);
          }
          uVar21 = (ulong)*(ushort *)((long)piVar1 + (0xe - (long)iVar6));
          puVar23 = (uint *)((long)piVar1 + uVar21);
          uVar9 = (ulong)*puVar23;
          uVar19 = (ulong)*(uint *)((long)puVar23 + uVar9);
          if (uVar19 != 0) {
            lVar7 = 0;
            lVar8 = lVar24 + uVar9 + uVar21 + uVar25;
            do {
              uVar21 = (ulong)*(uint *)(lVar8 + lVar7 + 8);
              uVar9 = (ulong)*(ushort *)
                              (lVar8 + (uVar21 - (long)*(int *)(lVar8 + uVar21 + lVar7 + 8)) + lVar7
                              + 0xc);
              uVar13 = (ulong)*(uint *)(lVar8 + uVar21 + uVar9 + lVar7 + 8);
              lVar3 = uVar21 + uVar9 + uVar13;
              uVar14 = (ulong)*(ushort *)
                               (lVar8 + (lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8)) + lVar7 + 0xc)
              ;
              uVar15 = (ulong)*(uint *)(lVar8 + lVar3 + uVar14 + lVar7 + 8);
              lVar3 = lVar3 + uVar14 + uVar15;
              lVar28 = lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8);
              lVar4 = lVar8 + lVar7 + lVar28;
              uVar12 = *(ushort *)(lVar4 + 8);
              if ((uVar12 < 0x17) || (uVar30 = (ulong)*(ushort *)(lVar4 + 0x1e), uVar30 == 0)) {
                if (lVar17 == 0) goto LAB_00e772f8;
              }
              else if (*(long *)(lVar8 + lVar3 + uVar30 + lVar7 + 8) == lVar17) goto LAB_00e772f8;
              lVar7 = lVar7 + 4;
            } while (uVar19 * 4 != lVar7);
          }
          uVar21 = (ulong)*(ushort *)((long)piVar1 + (0x10 - (long)iVar6));
          puVar23 = (uint *)((long)piVar1 + uVar21);
          uVar9 = (ulong)*puVar23;
          uVar19 = (ulong)*(uint *)((long)puVar23 + uVar9);
          if (uVar19 != 0) {
            lVar7 = 0;
            lVar8 = lVar24 + uVar9 + uVar21 + uVar25;
            do {
              uVar21 = (ulong)*(uint *)(lVar8 + lVar7 + 8);
              uVar9 = (ulong)*(ushort *)
                              (lVar8 + (uVar21 - (long)*(int *)(lVar8 + uVar21 + lVar7 + 8)) + lVar7
                              + 0xc);
              uVar13 = (ulong)*(uint *)(lVar8 + uVar21 + uVar9 + lVar7 + 8);
              lVar3 = uVar21 + uVar9 + uVar13;
              uVar14 = (ulong)*(ushort *)
                               (lVar8 + (lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8)) + lVar7 + 0xc)
              ;
              uVar15 = (ulong)*(uint *)(lVar8 + lVar3 + uVar14 + lVar7 + 8);
              lVar3 = lVar3 + uVar14 + uVar15;
              lVar28 = lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8);
              lVar4 = lVar8 + lVar7 + lVar28;
              uVar12 = *(ushort *)(lVar4 + 8);
              if ((uVar12 < 0x17) || (uVar30 = (ulong)*(ushort *)(lVar4 + 0x1e), uVar30 == 0)) {
                if (lVar17 == 0) goto LAB_00e772f8;
              }
              else if (*(long *)(lVar8 + lVar3 + uVar30 + lVar7 + 8) == lVar17) goto LAB_00e772f8;
              lVar7 = lVar7 + 4;
            } while (uVar19 * 4 != lVar7);
          }
          uVar21 = (ulong)*(ushort *)((long)piVar1 + (0x12 - (long)iVar6));
          puVar23 = (uint *)((long)piVar1 + uVar21);
          uVar9 = (ulong)*puVar23;
          uVar19 = (ulong)*(uint *)((long)puVar23 + uVar9);
          if (uVar19 != 0) {
            lVar7 = 0;
            lVar8 = lVar24 + uVar9 + uVar21 + uVar25;
            do {
              uVar21 = (ulong)*(uint *)(lVar8 + lVar7 + 8);
              uVar9 = (ulong)*(ushort *)
                              (lVar8 + (uVar21 - (long)*(int *)(lVar8 + uVar21 + lVar7 + 8)) + lVar7
                              + 0xc);
              uVar13 = (ulong)*(uint *)(lVar8 + uVar21 + uVar9 + lVar7 + 8);
              lVar3 = uVar21 + uVar9 + uVar13;
              uVar14 = (ulong)*(ushort *)
                               (lVar8 + (lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8)) + lVar7 + 0xc)
              ;
              uVar15 = (ulong)*(uint *)(lVar8 + lVar3 + uVar14 + lVar7 + 8);
              lVar3 = lVar3 + uVar14 + uVar15;
              lVar28 = lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8);
              lVar4 = lVar8 + lVar7 + lVar28;
              uVar12 = *(ushort *)(lVar4 + 8);
              if ((uVar12 < 0x17) || (uVar30 = (ulong)*(ushort *)(lVar4 + 0x1e), uVar30 == 0)) {
                if (lVar17 == 0) goto LAB_00e772f8;
              }
              else if (*(long *)(lVar8 + lVar3 + uVar30 + lVar7 + 8) == lVar17) goto LAB_00e772f8;
              lVar7 = lVar7 + 4;
            } while (uVar19 * 4 != lVar7);
          }
          uVar21 = (ulong)*(ushort *)((long)piVar1 + (0x14 - (long)iVar6));
          puVar23 = (uint *)((long)piVar1 + uVar21);
          uVar9 = (ulong)*puVar23;
          uVar19 = (ulong)*(uint *)((long)puVar23 + uVar9);
          if (uVar19 != 0) {
            lVar7 = 0;
            lVar8 = lVar24 + uVar9 + uVar21 + uVar25;
            do {
              uVar21 = (ulong)*(uint *)(lVar8 + lVar7 + 8);
              uVar9 = (ulong)*(ushort *)
                              (lVar8 + (uVar21 - (long)*(int *)(lVar8 + uVar21 + lVar7 + 8)) + lVar7
                              + 0xc);
              lVar3 = uVar21 + uVar9;
              uVar13 = (ulong)*(uint *)(lVar8 + lVar3 + lVar7 + 8);
              lVar3 = lVar3 + uVar13;
              uVar14 = (ulong)*(ushort *)
                               (lVar8 + (lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8)) + lVar7 + 0xc)
              ;
              lVar3 = lVar3 + uVar14;
              uVar15 = (ulong)*(uint *)(lVar8 + lVar3 + lVar7 + 8);
              lVar3 = lVar3 + uVar15;
              uVar30 = (ulong)*(ushort *)
                               (lVar8 + (lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8)) + lVar7 + 0xc)
              ;
              lVar3 = lVar3 + uVar30;
              uVar29 = (ulong)*(uint *)(lVar8 + lVar3 + lVar7 + 8);
              lVar3 = lVar3 + uVar29;
              lVar28 = lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8);
              lVar4 = lVar8 + lVar7 + lVar28;
              uVar12 = *(ushort *)(lVar4 + 8);
              if ((uVar12 < 0x17) || (uVar31 = (ulong)*(ushort *)(lVar4 + 0x1e), uVar31 == 0)) {
                if (lVar17 == 0) goto LAB_00e77338;
              }
              else if (*(long *)(lVar8 + lVar3 + uVar31 + lVar7 + 8) == lVar17) {
LAB_00e77338:
                if ((uVar12 < 0x19) ||
                   (uVar18 = (ulong)*(ushort *)(lVar8 + lVar28 + lVar7 + 0x20), uVar18 == 0))
                goto LAB_00e773c0;
                uVar27 = *(undefined8 *)
                          (lVar8 + uVar18 + uVar21 + uVar9 + uVar13 + uVar14 + uVar15 + uVar30 +
                                   uVar29 + lVar7 + 8);
                goto joined_r0x00e77330;
              }
              lVar7 = lVar7 + 4;
            } while (uVar19 * 4 != lVar7);
          }
          uVar21 = (ulong)*(ushort *)((long)piVar1 + (0x16 - (long)iVar6));
          puVar23 = (uint *)((long)piVar1 + uVar21);
          uVar9 = (ulong)*puVar23;
          uVar19 = (ulong)*(uint *)((long)puVar23 + uVar9);
          if (uVar19 != 0) {
            lVar7 = 0;
            lVar8 = lVar24 + uVar9 + uVar21 + uVar25;
            do {
              uVar21 = (ulong)*(uint *)(lVar8 + lVar7 + 8);
              uVar9 = (ulong)*(ushort *)
                              (lVar8 + (uVar21 - (long)*(int *)(lVar8 + uVar21 + lVar7 + 8)) + lVar7
                              + 0xc);
              uVar13 = (ulong)*(uint *)(lVar8 + uVar21 + uVar9 + lVar7 + 8);
              lVar3 = uVar21 + uVar9 + uVar13;
              uVar14 = (ulong)*(ushort *)
                               (lVar8 + (lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8)) + lVar7 + 0xc)
              ;
              uVar15 = (ulong)*(uint *)(lVar8 + lVar3 + uVar14 + lVar7 + 8);
              lVar3 = lVar3 + uVar14 + uVar15;
              lVar28 = lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8);
              lVar4 = lVar8 + lVar7 + lVar28;
              uVar12 = *(ushort *)(lVar4 + 8);
              if ((uVar12 < 0x17) || (uVar30 = (ulong)*(ushort *)(lVar4 + 0x1e), uVar30 == 0)) {
                if (lVar17 == 0) goto LAB_00e772f8;
              }
              else if (*(long *)(lVar8 + lVar3 + uVar30 + lVar7 + 8) == lVar17) goto LAB_00e772f8;
              lVar7 = lVar7 + 4;
            } while (uVar19 * 4 != lVar7);
          }
          uVar21 = (ulong)*(ushort *)((long)piVar1 + (0x18 - (long)iVar6));
          puVar23 = (uint *)((long)piVar1 + uVar21);
          uVar9 = (ulong)*puVar23;
          uVar19 = (ulong)*(uint *)((long)puVar23 + uVar9);
          if (uVar19 != 0) {
            lVar7 = 0;
            lVar8 = lVar24 + uVar9 + uVar21 + uVar25;
            do {
              uVar21 = (ulong)*(uint *)(lVar8 + lVar7 + 8);
              uVar9 = (ulong)*(ushort *)
                              (lVar8 + (uVar21 - (long)*(int *)(lVar8 + uVar21 + lVar7 + 8)) + lVar7
                              + 0xc);
              uVar13 = (ulong)*(uint *)(lVar8 + uVar21 + uVar9 + lVar7 + 8);
              lVar3 = uVar21 + uVar9 + uVar13;
              uVar14 = (ulong)*(ushort *)
                               (lVar8 + (lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8)) + lVar7 + 0xc)
              ;
              uVar15 = (ulong)*(uint *)(lVar8 + lVar3 + uVar14 + lVar7 + 8);
              lVar3 = lVar3 + uVar14 + uVar15;
              lVar28 = lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8);
              lVar4 = lVar8 + lVar7 + lVar28;
              uVar12 = *(ushort *)(lVar4 + 8);
              if ((uVar12 < 0x17) || (uVar30 = (ulong)*(ushort *)(lVar4 + 0x1e), uVar30 == 0)) {
                if (lVar17 == 0) goto LAB_00e772f8;
              }
              else if (*(long *)(lVar8 + lVar3 + uVar30 + lVar7 + 8) == lVar17) goto LAB_00e772f8;
              lVar7 = lVar7 + 4;
            } while (uVar19 * 4 != lVar7);
          }
          uVar21 = (ulong)*(ushort *)((long)piVar1 + (0x1a - (long)iVar6));
          puVar23 = (uint *)((long)piVar1 + uVar21);
          uVar9 = (ulong)*puVar23;
          uVar19 = (ulong)*(uint *)((long)puVar23 + uVar9);
          if (uVar19 != 0) {
            lVar7 = 0;
            lVar8 = lVar24 + uVar9 + uVar21 + uVar25;
            do {
              uVar21 = (ulong)*(uint *)(lVar8 + lVar7 + 8);
              uVar9 = (ulong)*(ushort *)
                              (lVar8 + (uVar21 - (long)*(int *)(lVar8 + uVar21 + lVar7 + 8)) + lVar7
                              + 0xc);
              uVar13 = (ulong)*(uint *)(lVar8 + uVar21 + uVar9 + lVar7 + 8);
              lVar3 = uVar21 + uVar9 + uVar13;
              uVar14 = (ulong)*(ushort *)
                               (lVar8 + (lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8)) + lVar7 + 0xc)
              ;
              uVar15 = (ulong)*(uint *)(lVar8 + lVar3 + uVar14 + lVar7 + 8);
              lVar3 = lVar3 + uVar14 + uVar15;
              lVar28 = lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8);
              lVar4 = lVar8 + lVar7 + lVar28;
              uVar12 = *(ushort *)(lVar4 + 8);
              if ((uVar12 < 0x17) || (uVar30 = (ulong)*(ushort *)(lVar4 + 0x1e), uVar30 == 0)) {
                if (lVar17 == 0) goto LAB_00e772f8;
              }
              else if (*(long *)(lVar8 + lVar3 + uVar30 + lVar7 + 8) == lVar17) goto LAB_00e772f8;
              lVar7 = lVar7 + 4;
            } while (uVar19 * 4 != lVar7);
          }
          uVar19 = (ulong)*(ushort *)((long)piVar1 + (0x1c - (long)iVar6));
          puVar23 = (uint *)((long)piVar1 + uVar19);
          uVar21 = (ulong)*puVar23;
          uVar9 = (ulong)*(uint *)((long)puVar23 + uVar21);
          if (uVar9 != 0) {
            lVar7 = 0;
            lVar8 = lVar24 + uVar21 + uVar19 + uVar25;
            do {
              uVar19 = (ulong)*(uint *)(lVar8 + lVar7 + 8);
              uVar21 = (ulong)*(ushort *)
                               (lVar8 + (uVar19 - (long)*(int *)(lVar8 + uVar19 + lVar7 + 8)) +
                                lVar7 + 0xc);
              lVar3 = uVar19 + uVar21;
              uVar25 = (ulong)*(uint *)(lVar8 + lVar3 + lVar7 + 8);
              lVar3 = lVar3 + uVar25;
              uVar13 = (ulong)*(ushort *)
                               (lVar8 + (lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8)) + lVar7 + 0xc)
              ;
              lVar3 = lVar3 + uVar13;
              uVar14 = (ulong)*(uint *)(lVar8 + lVar3 + lVar7 + 8);
              lVar3 = lVar3 + uVar14;
              lVar28 = lVar3 - *(int *)(lVar8 + lVar3 + lVar7 + 8);
              lVar4 = lVar8 + lVar7 + lVar28;
              uVar12 = *(ushort *)(lVar4 + 8);
              if ((uVar12 < 0x17) || (uVar15 = (ulong)*(ushort *)(lVar4 + 0x1e), uVar15 == 0)) {
                if (lVar17 == 0) goto LAB_00e77380;
              }
              else if (*(long *)(lVar8 + lVar3 + uVar15 + lVar7 + 8) == lVar17) {
LAB_00e77380:
                if ((uVar12 < 0x19) ||
                   (uVar18 = (ulong)*(ushort *)(lVar8 + lVar28 + lVar7 + 0x20), uVar18 == 0))
                goto LAB_00e773c0;
                uVar27 = *(undefined8 *)
                          (lVar8 + uVar18 + uVar19 + uVar21 + uVar25 + uVar13 + uVar14 + lVar7 + 8);
                goto joined_r0x00e77330;
              }
              lVar7 = lVar7 + 4;
            } while (uVar9 * 4 != lVar7);
          }
          puVar20 = puVar20 + 1;
          lVar24 = lVar24 + 4;
        } while (puVar20 != puVar2);
      }
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)0x0);
  }
joined_r0x00e772c8:
  if (lVar26 != 0) {
LAB_00e772cc:
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))((long *)(lVar26 + 0x48));
  }
  return uVar27;
LAB_00e772a0:
  if ((uVar12 < 0x19) || ((ulong)puVar11[0xc] == 0)) goto LAB_00e773c0;
  uVar27 = *(undefined8 *)((long)piVar10 + (ulong)puVar11[0xc]);
  goto joined_r0x00e772c8;
LAB_00e772f8:
  if (uVar12 < 0x19) {
LAB_00e773c0:
    uVar27 = 0;
  }
  else {
LAB_00e77300:
    uVar18 = (ulong)*(ushort *)(lVar8 + lVar28 + lVar7 + 0x20);
    if (uVar18 == 0) goto LAB_00e773c0;
    uVar27 = *(undefined8 *)(lVar8 + uVar18 + uVar21 + uVar9 + uVar13 + uVar14 + uVar15 + lVar7 + 8)
    ;
  }
joined_r0x00e77330:
  if (lVar26 == 0) {
    return uVar27;
  }
  goto LAB_00e772cc;
}


