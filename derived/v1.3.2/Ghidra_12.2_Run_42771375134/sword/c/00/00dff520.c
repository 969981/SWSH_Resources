/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dff520; name: FUN_00dff520
 */


void FUN_00dff520(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  long lVar8;
  ushort *puVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  ushort *puVar18;
  long lVar19;
  uint *puVar20;
  byte bVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar11 = (uint *)0x0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0xffffffff00000000;
  param_1[1] = 0;
  puVar20 = *(uint **)(*(long *)(param_2 + 0x68) + 400);
  uVar28 = *puVar20;
  piVar15 = (int *)((long)puVar20 + (ulong)uVar28);
  puVar9 = (ushort *)((long)piVar15 - (long)*piVar15);
  lVar19 = *param_3;
  if (0xc < *puVar9) {
    puVar11 = (uint *)0x0;
    if ((ulong)puVar9[6] != 0) {
      puVar11 = (uint *)((long)piVar15 + (ulong)puVar9[6]);
      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    }
  }
  uVar26 = *puVar11;
  if (uVar26 != 0) {
    uVar14 = 0;
    do {
      puVar11 = puVar11 + 1;
      uVar12 = (ulong)*puVar11;
      lVar16 = uVar12 - (long)*(int *)((long)puVar11 + uVar12);
      if (*(ushort *)((long)puVar11 + lVar16) < 5) {
        piVar13 = (int *)0x0;
      }
      else {
        uVar17 = (ulong)*(ushort *)((long)puVar11 + lVar16 + 4);
        piVar13 = (int *)0x0;
        if (uVar17 != 0) {
          lVar16 = uVar12 + uVar17;
          piVar13 = (int *)((long)puVar11 + lVar16 + (ulong)*(uint *)((long)puVar11 + lVar16));
        }
      }
      if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar17 == 0)) {
        if (lVar19 == 0) goto LAB_00dff648;
      }
      else if (lVar19 == *(long *)((long)piVar13 + uVar17)) {
LAB_00dff648:
        *(undefined4 *)param_1 = 0;
        lVar19 = 0;
        if (4 < *(ushort *)((long)puVar11 + (uVar12 - (long)*(int *)((long)puVar11 + uVar12)))) {
          uVar14 = (ulong)*(ushort *)
                           ((long)puVar11 + (uVar12 - (long)*(int *)((long)puVar11 + uVar12)) + 4);
          if (uVar14 == 0) {
            lVar19 = 0;
          }
          else {
            lVar19 = (long)puVar11 + uVar14 + *(uint *)((long)puVar11 + uVar14 + uVar12) + uVar12;
          }
        }
        FUN_00e00a40(param_1,lVar19);
        lVar19 = *param_4;
        *(undefined1 *)((long)param_1 + 0x91) = 1;
        puVar9 = (ushort *)((long)piVar15 - (long)*piVar15);
        break;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar26);
  }
  puVar11 = (uint *)((long)piVar15 + (ulong)puVar9[3]);
  uVar14 = (ulong)*puVar11;
  uVar26 = *(uint *)((long)puVar11 + uVar14);
  if (uVar26 != 0) {
    uVar12 = 0;
    lVar16 = (long)puVar20 + uVar14 + puVar9[3] + (ulong)uVar28 + 10;
    do {
      uVar14 = (ulong)*(uint *)(lVar16 + -6);
      lVar10 = lVar16 + uVar14;
      lVar8 = lVar16 + (uVar14 - (long)*(int *)(lVar10 + -6));
      if (*(ushort *)(lVar8 + -6) < 5) {
        piVar13 = (int *)0x0;
      }
      else {
        uVar17 = (ulong)*(ushort *)(lVar8 + -2);
        piVar13 = (int *)0x0;
        if (uVar17 != 0) {
          lVar8 = uVar14 + uVar17;
          piVar13 = (int *)(lVar16 + lVar8 + (ulong)*(uint *)(lVar16 + lVar8 + -6) + -6);
        }
      }
      if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar17 == 0)) {
        if (lVar19 == 0) goto LAB_00dff768;
      }
      else if (lVar19 == *(long *)((long)piVar13 + uVar17)) {
LAB_00dff768:
        *(undefined4 *)param_1 = 1;
        lVar8 = 0;
        if (4 < *(ushort *)(lVar16 + (uVar14 - (long)*(int *)(lVar10 + -6)) + -6)) {
          uVar12 = (ulong)*(ushort *)(lVar16 + (uVar14 - (long)*(int *)(lVar10 + -6)) + -2);
          if (uVar12 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = lVar16 + uVar12 + *(uint *)(lVar16 + uVar12 + uVar14 + -6) + uVar14 + -6;
          }
        }
        FUN_00e00a40(param_1,lVar8);
        piVar13 = (int *)0x0;
        if (6 < *(ushort *)(lVar16 + (uVar14 - (long)*(int *)(lVar10 + -6)) + -6)) {
          uVar12 = (ulong)*(ushort *)(lVar16 + (uVar14 - (long)*(int *)(lVar10 + -6)));
          piVar13 = (int *)0x0;
          if (uVar12 != 0) {
            piVar13 = (int *)(lVar16 + uVar12 + *(uint *)(lVar16 + uVar12 + uVar14 + -6) + uVar14 +
                             -6);
          }
        }
        fVar23 = 0.0;
        uVar28 = 0;
        if (6 < *(ushort *)((long)piVar13 - (long)*piVar13)) {
          uVar14 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[3];
          uVar28 = 0;
          if (uVar14 != 0) {
            uVar28 = *(uint *)((long)piVar13 + uVar14);
          }
        }
        param_1[3] = (ulong)uVar28;
        param_1[2] = 0;
        uVar6 = *(ushort *)((long)piVar13 + (4 - (long)*piVar13));
        puVar2 = (undefined4 *)((long)piVar13 + (ulong)uVar6);
        uVar22 = *puVar2;
        puVar3 = (undefined4 *)0x0;
        if (uVar6 != 0) {
          puVar3 = puVar2;
        }
        uVar24 = puVar3[1];
        param_1[5] = (ulong)(uint)puVar2[2];
        param_1[4] = CONCAT44(uVar24,uVar22);
        fVar29 = *(float *)PTR_FloatPi_02715160;
        fVar30 = *(float *)PTR_FloatDegree180_027194f0;
        fVar25 = fVar29 / fVar30;
        *(float *)((long)param_1 + 0x34) =
             *(float *)((long)piVar13 + (ulong)*(ushort *)((long)piVar13 + (8 - (long)*piVar13))) *
             fVar25;
        *(float *)(param_1 + 6) =
             fVar25 * *(float *)((long)piVar13 +
                                (ulong)*(ushort *)((long)piVar13 + (8 - (long)*piVar13)) + 4);
        *(float *)(param_1 + 7) =
             fVar25 * *(float *)((long)piVar13 +
                                (ulong)*(ushort *)((long)piVar13 + (8 - (long)*piVar13)) + 8);
        if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 0xb) ||
           (uVar14 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[5], uVar14 == 0))
        goto LAB_00e00010;
        bVar21 = *(byte *)((long)piVar13 + uVar14);
        goto LAB_00e0000c;
      }
      uVar12 = uVar12 + 1;
      lVar16 = lVar16 + 4;
    } while (uVar12 < uVar26);
  }
  if ((*puVar9 < 9) || ((ulong)puVar9[4] == 0)) {
    puVar11 = (uint *)0x0;
    uVar28 = uRam0000000000000000;
  }
  else {
    puVar11 = (uint *)((long)piVar15 + (ulong)puVar9[4]);
    puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    uVar28 = *puVar11;
  }
  if (uVar28 != 0) {
    uVar14 = 0;
    puVar11 = puVar11 + 3;
    do {
      uVar12 = (ulong)puVar11[-2];
      lVar16 = uVar12 - (long)*(int *)((long)puVar11 + (uVar12 - 8));
      if (*(ushort *)((long)puVar11 + lVar16 + -8) < 5) {
        piVar13 = (int *)0x0;
      }
      else {
        uVar17 = (ulong)*(ushort *)((long)puVar11 + lVar16 + -4);
        piVar13 = (int *)0x0;
        if (uVar17 != 0) {
          lVar16 = uVar12 + uVar17;
          piVar13 = (int *)((long)puVar11 +
                           lVar16 + (ulong)*(uint *)((long)puVar11 + lVar16 + -8) + -8);
        }
      }
      if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar17 == 0)) {
        if (lVar19 == 0) goto LAB_00dff890;
      }
      else if (lVar19 == *(long *)((long)piVar13 + uVar17)) {
LAB_00dff890:
        *(undefined4 *)param_1 = 2;
        lVar10 = (long)*(int *)((long)puVar11 + (uVar12 - 8));
        lVar16 = 0;
        if (4 < *(ushort *)((long)puVar11 + (uVar12 - lVar10) + -8)) {
          uVar14 = (ulong)*(ushort *)((long)puVar11 + (uVar12 - lVar10) + -4);
          if (uVar14 == 0) {
            lVar16 = 0;
          }
          else {
            lVar16 = (long)puVar11 +
                     uVar14 + *(uint *)((long)puVar11 + uVar14 + uVar12 + -8) + uVar12 + -8;
          }
        }
        FUN_00e00a40(param_1,lVar16);
        uVar14 = (ulong)*(ushort *)
                         ((long)puVar11 +
                         (uVar12 - (long)*(int *)((long)puVar11 + (uVar12 - 8))) + -2);
        lVar1 = uVar14 + *(uint *)((long)puVar11 + uVar14 + uVar12 + -8);
        uVar28 = *(uint *)((long)puVar11 + lVar1 + uVar12);
        lVar16 = lVar1 + (ulong)*(uint *)((long)puVar11 + lVar1 + uVar12 + -4);
        lVar10 = lVar16 + uVar12;
        lVar8 = (lVar16 - *(int *)((long)puVar11 + lVar10 + -4)) + uVar12;
        fVar23 = 0.0;
        uVar26 = 0;
        if (6 < *(ushort *)((long)puVar11 + lVar8 + -4)) {
          uVar14 = (ulong)*(ushort *)((long)puVar11 + lVar8 + 2);
          uVar26 = 0;
          if (uVar14 != 0) {
            uVar26 = *(uint *)((long)puVar11 + lVar16 + uVar14 + uVar12 + -4);
          }
        }
        param_1[3] = (ulong)uVar26;
        param_1[2] = 0;
        uVar6 = *(ushort *)
                 ((long)puVar11 + (lVar16 - *(int *)((long)puVar11 + lVar10 + -4)) + uVar12);
        puVar2 = (undefined4 *)((long)puVar11 + lVar16 + (ulong)uVar6 + uVar12);
        uVar22 = puVar2[-1];
        puVar3 = (undefined4 *)&DAT_00000004;
        if (uVar6 != 0) {
          puVar3 = puVar2;
        }
        uVar24 = *puVar3;
        param_1[5] = (ulong)(uint)puVar2[1];
        param_1[4] = CONCAT44(uVar24,uVar22);
        fVar29 = *(float *)PTR_FloatPi_02715160;
        fVar30 = *(float *)PTR_FloatDegree180_027194f0;
        fVar27 = fVar29 / fVar30;
        *(float *)((long)param_1 + 0x34) =
             *(float *)((long)puVar11 +
                       lVar16 + (ulong)*(ushort *)
                                        ((long)puVar11 +
                                        (lVar16 - *(int *)((long)puVar11 + lVar10 + -4)) + uVar12 +
                                        4) + uVar12 + -4) * fVar27;
        *(float *)(param_1 + 6) =
             fVar27 * *(float *)((long)puVar11 +
                                lVar16 + (ulong)*(ushort *)
                                                 ((long)puVar11 +
                                                 (lVar16 - *(int *)((long)puVar11 + lVar10 + -4)) +
                                                 uVar12 + 4) + uVar12);
        *(float *)(param_1 + 7) =
             fVar27 * *(float *)((long)puVar11 +
                                lVar16 + (ulong)*(ushort *)
                                                 ((long)puVar11 +
                                                 (lVar16 - *(int *)((long)puVar11 + lVar10 + -4)) +
                                                 uVar12 + 4) + uVar12 + 4);
        lVar10 = (lVar16 - *(int *)((long)puVar11 + lVar10 + -4)) + uVar12;
        fVar25 = 0.0;
        if (10 < *(ushort *)((long)puVar11 + lVar10 + -4)) {
          uVar14 = (ulong)*(ushort *)((long)puVar11 + lVar10 + 6);
          fVar25 = 0.0;
          if (uVar14 != 0) {
            fVar25 = (float)NEON_ucvtf((uint)*(byte *)((long)puVar11 + lVar16 + uVar14 + uVar12 + -4
                                                      ));
          }
        }
        lVar1 = lVar1 + (ulong)uVar28;
        lVar16 = lVar1 + uVar12;
        *(float *)((long)param_1 + 0x3c) = fVar27 * fVar25;
        lVar10 = (lVar1 - *(int *)((long)puVar11 + lVar16)) + uVar12;
        uVar28 = 0;
        if (6 < *(ushort *)((long)puVar11 + lVar10)) {
          uVar14 = (ulong)*(ushort *)((long)puVar11 + lVar10 + 6);
          uVar28 = 0;
          if (uVar14 != 0) {
            uVar28 = *(uint *)((long)puVar11 + lVar1 + uVar14 + uVar12);
          }
        }
        param_1[0xb] = (ulong)uVar28;
        param_1[10] = 0;
        uVar6 = *(ushort *)((long)puVar11 + (lVar1 - *(int *)((long)puVar11 + lVar16)) + uVar12 + 4)
        ;
        puVar2 = (undefined4 *)((long)puVar11 + lVar1 + (ulong)uVar6 + uVar12);
        uVar22 = *puVar2;
        puVar3 = (undefined4 *)0x0;
        if (uVar6 != 0) {
          puVar3 = puVar2;
        }
        uVar24 = puVar3[1];
        param_1[0xd] = (ulong)(uint)puVar2[2];
        param_1[0xc] = CONCAT44(uVar24,uVar22);
        *(float *)((long)param_1 + 0x74) =
             fVar27 * *(float *)((long)puVar11 +
                                lVar1 + (ulong)*(ushort *)
                                                ((long)puVar11 +
                                                (lVar1 - *(int *)((long)puVar11 + lVar16)) + uVar12
                                                + 8) + uVar12);
        *(float *)(param_1 + 0xe) =
             fVar27 * *(float *)((long)puVar11 +
                                lVar1 + (ulong)*(ushort *)
                                                ((long)puVar11 +
                                                (lVar1 - *(int *)((long)puVar11 + lVar16)) + uVar12
                                                + 8) + uVar12 + 4);
        *(float *)(param_1 + 0xf) =
             fVar27 * *(float *)((long)puVar11 +
                                lVar1 + (ulong)*(ushort *)
                                                ((long)puVar11 +
                                                (lVar1 - *(int *)((long)puVar11 + lVar16)) + uVar12
                                                + 8) + uVar12 + 8);
        lVar16 = (lVar1 - *(int *)((long)puVar11 + lVar16)) + uVar12;
        if ((10 < *(ushort *)((long)puVar11 + lVar16)) &&
           (uVar14 = (ulong)*(ushort *)((long)puVar11 + lVar16 + 10), uVar14 != 0)) {
          fVar23 = (float)NEON_ucvtf((uint)*(byte *)((long)puVar11 + lVar1 + uVar14 + uVar12));
        }
        *(float *)((long)param_1 + 0x7c) = fVar27 * fVar23;
        cVar4 = *(char *)((long)param_1 + 0x92);
        goto joined_r0x00dffe8c;
      }
      uVar14 = uVar14 + 1;
      puVar11 = puVar11 + 1;
    } while (uVar14 < uVar28);
  }
  if ((*puVar9 < 0xb) || ((ulong)puVar9[5] == 0)) {
    puVar11 = (uint *)0x0;
    uVar28 = uRam0000000000000000;
  }
  else {
    puVar11 = (uint *)((long)piVar15 + (ulong)puVar9[5]);
    puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    uVar28 = *puVar11;
  }
  if (uVar28 != 0) {
    uVar14 = 0;
    lVar16 = (long)puVar11 + 0x12;
    do {
      uVar12 = (ulong)*(uint *)(lVar16 + -0xe);
      lVar10 = lVar16 + uVar12;
      lVar8 = lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe));
      if (*(ushort *)(lVar8 + -0xe) < 5) {
        piVar13 = (int *)0x0;
      }
      else {
        uVar17 = (ulong)*(ushort *)(lVar8 + -10);
        piVar13 = (int *)0x0;
        if (uVar17 != 0) {
          lVar8 = uVar12 + uVar17;
          piVar13 = (int *)(lVar16 + lVar8 + (ulong)*(uint *)(lVar16 + lVar8 + -0xe) + -0xe);
        }
      }
      if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar17 == 0)) {
        if (lVar19 == 0) goto LAB_00dff9b8;
      }
      else if (lVar19 == *(long *)((long)piVar13 + uVar17)) {
LAB_00dff9b8:
        *(undefined4 *)param_1 = 3;
        lVar8 = 0;
        if (4 < *(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -0xe)) {
          uVar14 = (ulong)*(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -10);
          if (uVar14 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = lVar16 + uVar14 + *(uint *)(lVar16 + uVar14 + uVar12 + -0xe) + uVar12 + -0xe;
          }
        }
        FUN_00e00a40(param_1,lVar8);
        if (*(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -0xe) < 7) {
          bVar7 = false;
        }
        else {
          uVar14 = (ulong)*(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -8);
          bVar7 = false;
          if (uVar14 != 0) {
            bVar7 = *(char *)(lVar16 + uVar14 + uVar12 + -0xe) != '\0';
          }
        }
        *(bool *)(param_1 + 0x12) = bVar7;
        uVar6 = *(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -6);
        lVar8 = lVar16 + uVar6 + uVar12;
        uVar22 = *(undefined4 *)(lVar8 + -0xe);
        puVar2 = (undefined4 *)&DAT_00000004;
        if (uVar6 != 0) {
          puVar2 = (undefined4 *)(lVar8 + -10);
        }
        uVar24 = *puVar2;
        param_1[3] = (ulong)*(uint *)(lVar8 + -6);
        param_1[2] = CONCAT44(uVar24,uVar22);
        uVar6 = *(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -4);
        lVar8 = lVar16 + uVar6 + uVar12;
        uVar22 = *(undefined4 *)(lVar8 + -0xe);
        puVar2 = (undefined4 *)&DAT_00000004;
        if (uVar6 != 0) {
          puVar2 = (undefined4 *)(lVar8 + -10);
        }
        uVar24 = *puVar2;
        param_1[5] = (ulong)*(uint *)(lVar8 + -6);
        param_1[4] = CONCAT44(uVar24,uVar22);
        fVar23 = 0.0;
        fVar27 = 0.0;
        if (0xc < *(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -0xe)) {
          uVar14 = (ulong)*(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -2);
          fVar27 = 0.0;
          if (uVar14 != 0) {
            fVar27 = *(float *)(lVar16 + uVar14 + uVar12 + -0xe);
          }
        }
        fVar29 = *(float *)PTR_FloatPi_02715160;
        fVar30 = *(float *)PTR_FloatDegree180_027194f0;
        fVar25 = fVar29 / fVar30;
        *(float *)(param_1 + 7) = fVar27 * fVar25;
        if ((0xe < *(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -0xe)) &&
           (uVar14 = (ulong)*(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe))),
           uVar14 != 0)) {
          bVar21 = *(byte *)(lVar16 + uVar14 + uVar12 + -0xe);
LAB_00e0000c:
          fVar23 = (float)NEON_ucvtf((uint)bVar21);
        }
LAB_00e00010:
        *(float *)((long)param_1 + 0x3c) = fVar25 * fVar23;
        cVar4 = *(char *)((long)param_1 + 0x92);
joined_r0x00dffe8c:
        if (cVar4 == '\0') {
          return;
        }
        puVar9 = (ushort *)((long)piVar15 - (long)*piVar15);
        uVar6 = *puVar9;
        if ((0xe < uVar6) && ((ulong)puVar9[7] != 0)) {
          puVar11 = (uint *)((long)piVar15 + (ulong)puVar9[7]);
          puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
          uVar28 = *puVar11;
          if (*puVar11 == 0) goto LAB_00e0013c;
LAB_00e00060:
          uVar14 = 0;
          lVar16 = (long)puVar11 + 10;
          while( true ) {
            uVar12 = (ulong)*(uint *)(lVar16 + -6);
            lVar10 = lVar16 + uVar12;
            lVar8 = lVar16 + (uVar12 - (long)*(int *)(lVar10 + -6));
            if (*(ushort *)(lVar8 + -6) < 5) {
              piVar13 = (int *)0x0;
            }
            else {
              uVar17 = (ulong)*(ushort *)(lVar8 + -2);
              piVar13 = (int *)0x0;
              if (uVar17 != 0) {
                lVar8 = uVar12 + uVar17;
                piVar13 = (int *)(lVar16 + lVar8 + (ulong)*(uint *)(lVar16 + lVar8 + -6) + -6);
              }
            }
            puVar18 = (ushort *)((long)piVar13 - (long)*piVar13);
            if (0xe < *puVar18) break;
            if (4 < *puVar18) {
              uVar5 = puVar18[2];
              bVar7 = lVar19 == 0;
              goto joined_r0x00e00108;
            }
            lVar8 = 0;
            if (lVar19 == 0) goto LAB_00e00114;
LAB_00e0012c:
            uVar14 = uVar14 + 1;
            lVar16 = lVar16 + 4;
            if (uVar28 <= uVar14) goto LAB_00e0013c;
          }
          lVar8 = 0;
          if ((ulong)puVar18[7] != 0) {
            lVar8 = *(long *)((long)piVar13 + (ulong)puVar18[7]);
          }
          bVar7 = lVar19 == lVar8;
          uVar5 = puVar18[2];
joined_r0x00e00108:
          if ((ulong)uVar5 != 0) {
            lVar8 = *(long *)((long)piVar13 + (ulong)uVar5);
            if (bVar7) goto LAB_00e00114;
            goto LAB_00e0012c;
          }
          lVar8 = 0;
          if (!bVar7) goto LAB_00e0012c;
LAB_00e00114:
          if (*param_4 != lVar8) goto LAB_00e0012c;
          *(undefined4 *)param_1 = 1;
          lVar19 = 0;
          if (4 < *(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -6)) + -6)) {
            uVar14 = (ulong)*(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -6)) + -2);
            if (uVar14 == 0) {
              lVar19 = 0;
            }
            else {
              lVar19 = lVar16 + uVar14 + *(uint *)(lVar16 + uVar14 + uVar12 + -6) + uVar12 + -6;
            }
          }
          FUN_00e00a40(param_1,lVar19);
          piVar15 = (int *)0x0;
          if (6 < *(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -6)) + -6)) {
            uVar14 = (ulong)*(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -6)));
            piVar15 = (int *)0x0;
            if (uVar14 != 0) {
              piVar15 = (int *)(lVar16 + uVar14 + *(uint *)(lVar16 + uVar14 + uVar12 + -6) + uVar12
                               + -6);
            }
          }
          fVar23 = 0.0;
          uVar28 = 0;
          if (6 < *(ushort *)((long)piVar15 - (long)*piVar15)) {
            uVar14 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3];
            uVar28 = 0;
            if (uVar14 != 0) {
              uVar28 = *(uint *)((long)piVar15 + uVar14);
            }
          }
          param_1[3] = (ulong)uVar28;
          param_1[2] = 0;
          uVar6 = *(ushort *)((long)piVar15 + (4 - (long)*piVar15));
          puVar2 = (undefined4 *)((long)piVar15 + (ulong)uVar6);
          uVar22 = *puVar2;
          puVar3 = (undefined4 *)0x0;
          if (uVar6 != 0) {
            puVar3 = puVar2;
          }
          uVar24 = puVar3[1];
          param_1[5] = (ulong)(uint)puVar2[2];
          param_1[4] = CONCAT44(uVar24,uVar22);
          fVar25 = fVar29 / fVar30;
          *(float *)((long)param_1 + 0x34) =
               *(float *)((long)piVar15 + (ulong)*(ushort *)((long)piVar15 + (8 - (long)*piVar15)))
               * fVar25;
          *(float *)(param_1 + 6) =
               fVar25 * *(float *)((long)piVar15 +
                                  (ulong)*(ushort *)((long)piVar15 + (8 - (long)*piVar15)) + 4);
          *(float *)(param_1 + 7) =
               fVar25 * *(float *)((long)piVar15 +
                                  (ulong)*(ushort *)((long)piVar15 + (8 - (long)*piVar15)) + 8);
          if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 0xb) ||
             (uVar14 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[5], uVar14 == 0))
          goto LAB_00e00a18;
          bVar21 = *(byte *)((long)piVar15 + uVar14);
LAB_00e00a14:
          fVar23 = (float)NEON_ucvtf((uint)bVar21);
LAB_00e00a18:
          *(float *)((long)param_1 + 0x3c) = (fVar29 / fVar30) * fVar23;
          return;
        }
        puVar11 = (uint *)0x0;
        uVar28 = uRam0000000000000000;
        if (uRam0000000000000000 != 0) goto LAB_00e00060;
LAB_00e0013c:
        if ((uVar6 < 0x11) || ((ulong)puVar9[8] == 0)) {
          puVar11 = (uint *)0x0;
          uVar28 = uRam0000000000000000;
        }
        else {
          puVar11 = (uint *)((long)piVar15 + (ulong)puVar9[8]);
          puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
          uVar28 = *puVar11;
        }
        if (uVar28 != 0) {
          uVar14 = 0;
          puVar11 = puVar11 + 3;
          do {
            uVar12 = (ulong)puVar11[-2];
            lVar16 = uVar12 - (long)*(int *)((long)puVar11 + (uVar12 - 8));
            if (*(ushort *)((long)puVar11 + lVar16 + -8) < 5) {
              piVar13 = (int *)0x0;
            }
            else {
              uVar17 = (ulong)*(ushort *)((long)puVar11 + lVar16 + -4);
              piVar13 = (int *)0x0;
              if (uVar17 != 0) {
                lVar16 = uVar12 + uVar17;
                piVar13 = (int *)((long)puVar11 +
                                 lVar16 + (ulong)*(uint *)((long)puVar11 + lVar16 + -8) + -8);
              }
            }
            puVar18 = (ushort *)((long)piVar13 - (long)*piVar13);
            if (*puVar18 < 0xf) {
              if (4 < *puVar18) {
                uVar5 = puVar18[2];
                bVar7 = lVar19 == 0;
                goto joined_r0x00e00218;
              }
              lVar16 = 0;
              if (lVar19 == 0) goto LAB_00e00224;
            }
            else {
              lVar16 = 0;
              if ((ulong)puVar18[7] != 0) {
                lVar16 = *(long *)((long)piVar13 + (ulong)puVar18[7]);
              }
              bVar7 = lVar19 == lVar16;
              uVar5 = puVar18[2];
joined_r0x00e00218:
              if ((ulong)uVar5 == 0) {
                lVar16 = 0;
              }
              else {
                lVar16 = *(long *)((long)piVar13 + (ulong)uVar5);
              }
              if (bVar7) {
LAB_00e00224:
                if (*param_4 == lVar16) {
                  *(undefined4 *)param_1 = 2;
                  lVar16 = (long)*(int *)((long)puVar11 + (uVar12 - 8));
                  lVar19 = 0;
                  if (4 < *(ushort *)((long)puVar11 + (uVar12 - lVar16) + -8)) {
                    uVar14 = (ulong)*(ushort *)((long)puVar11 + (uVar12 - lVar16) + -4);
                    if (uVar14 == 0) {
                      lVar19 = 0;
                    }
                    else {
                      lVar19 = (long)puVar11 +
                               uVar14 + *(uint *)((long)puVar11 + uVar14 + uVar12 + -8) + uVar12 +
                               -8;
                    }
                  }
                  FUN_00e00a40(param_1,lVar19);
                  uVar14 = (ulong)*(ushort *)
                                   ((long)puVar11 +
                                   (uVar12 - (long)*(int *)((long)puVar11 + (uVar12 - 8))) + -2);
                  lVar8 = uVar14 + *(uint *)((long)puVar11 + uVar14 + uVar12 + -8);
                  uVar28 = *(uint *)((long)puVar11 + lVar8 + uVar12);
                  lVar19 = lVar8 + (ulong)*(uint *)((long)puVar11 + lVar8 + uVar12 + -4);
                  lVar16 = lVar19 + uVar12;
                  lVar10 = (lVar19 - *(int *)((long)puVar11 + lVar16 + -4)) + uVar12;
                  fVar23 = 0.0;
                  uVar26 = 0;
                  if (6 < *(ushort *)((long)puVar11 + lVar10 + -4)) {
                    uVar14 = (ulong)*(ushort *)((long)puVar11 + lVar10 + 2);
                    uVar26 = 0;
                    if (uVar14 != 0) {
                      uVar26 = *(uint *)((long)puVar11 + lVar19 + uVar14 + uVar12 + -4);
                    }
                  }
                  param_1[3] = (ulong)uVar26;
                  param_1[2] = 0;
                  uVar6 = *(ushort *)
                           ((long)puVar11 +
                           (lVar19 - *(int *)((long)puVar11 + lVar16 + -4)) + uVar12);
                  puVar2 = (undefined4 *)((long)puVar11 + lVar19 + (ulong)uVar6 + uVar12);
                  uVar22 = puVar2[-1];
                  puVar3 = (undefined4 *)&DAT_00000004;
                  if (uVar6 != 0) {
                    puVar3 = puVar2;
                  }
                  uVar24 = *puVar3;
                  param_1[5] = (ulong)(uint)puVar2[1];
                  param_1[4] = CONCAT44(uVar24,uVar22);
                  fVar29 = fVar29 / fVar30;
                  *(float *)((long)param_1 + 0x34) =
                       *(float *)((long)puVar11 +
                                 lVar19 + (ulong)*(ushort *)
                                                  ((long)puVar11 +
                                                  (lVar19 - *(int *)((long)puVar11 + lVar16 + -4)) +
                                                  uVar12 + 4) + uVar12 + -4) * fVar29;
                  *(float *)(param_1 + 6) =
                       fVar29 * *(float *)((long)puVar11 +
                                          lVar19 + (ulong)*(ushort *)
                                                           ((long)puVar11 +
                                                           (lVar19 - *(int *)((long)puVar11 +
                                                                             lVar16 + -4)) + uVar12
                                                           + 4) + uVar12);
                  *(float *)(param_1 + 7) =
                       fVar29 * *(float *)((long)puVar11 +
                                          lVar19 + (ulong)*(ushort *)
                                                           ((long)puVar11 +
                                                           (lVar19 - *(int *)((long)puVar11 +
                                                                             lVar16 + -4)) + uVar12
                                                           + 4) + uVar12 + 4);
                  lVar16 = (lVar19 - *(int *)((long)puVar11 + lVar16 + -4)) + uVar12;
                  fVar30 = 0.0;
                  if (10 < *(ushort *)((long)puVar11 + lVar16 + -4)) {
                    uVar14 = (ulong)*(ushort *)((long)puVar11 + lVar16 + 6);
                    fVar30 = 0.0;
                    if (uVar14 != 0) {
                      fVar30 = (float)NEON_ucvtf((uint)*(byte *)((long)puVar11 +
                                                                lVar19 + uVar14 + uVar12 + -4));
                    }
                  }
                  lVar8 = lVar8 + (ulong)uVar28;
                  lVar19 = lVar8 + uVar12;
                  *(float *)((long)param_1 + 0x3c) = fVar29 * fVar30;
                  lVar16 = (lVar8 - *(int *)((long)puVar11 + lVar19)) + uVar12;
                  uVar28 = 0;
                  if (6 < *(ushort *)((long)puVar11 + lVar16)) {
                    uVar14 = (ulong)*(ushort *)((long)puVar11 + lVar16 + 6);
                    uVar28 = 0;
                    if (uVar14 != 0) {
                      uVar28 = *(uint *)((long)puVar11 + lVar8 + uVar14 + uVar12);
                    }
                  }
                  param_1[0xb] = (ulong)uVar28;
                  param_1[10] = 0;
                  uVar6 = *(ushort *)
                           ((long)puVar11 + (lVar8 - *(int *)((long)puVar11 + lVar19)) + uVar12 + 4)
                  ;
                  puVar2 = (undefined4 *)((long)puVar11 + lVar8 + (ulong)uVar6 + uVar12);
                  uVar22 = *puVar2;
                  puVar3 = (undefined4 *)0x0;
                  if (uVar6 != 0) {
                    puVar3 = puVar2;
                  }
                  uVar24 = puVar3[1];
                  param_1[0xd] = (ulong)(uint)puVar2[2];
                  param_1[0xc] = CONCAT44(uVar24,uVar22);
                  *(float *)((long)param_1 + 0x74) =
                       fVar29 * *(float *)((long)puVar11 +
                                          lVar8 + (ulong)*(ushort *)
                                                          ((long)puVar11 +
                                                          (lVar8 - *(int *)((long)puVar11 + lVar19))
                                                          + uVar12 + 8) + uVar12);
                  *(float *)(param_1 + 0xe) =
                       fVar29 * *(float *)((long)puVar11 +
                                          lVar8 + (ulong)*(ushort *)
                                                          ((long)puVar11 +
                                                          (lVar8 - *(int *)((long)puVar11 + lVar19))
                                                          + uVar12 + 8) + uVar12 + 4);
                  *(float *)(param_1 + 0xf) =
                       fVar29 * *(float *)((long)puVar11 +
                                          lVar8 + (ulong)*(ushort *)
                                                          ((long)puVar11 +
                                                          (lVar8 - *(int *)((long)puVar11 + lVar19))
                                                          + uVar12 + 8) + uVar12 + 8);
                  lVar19 = (lVar8 - *(int *)((long)puVar11 + lVar19)) + uVar12;
                  if ((10 < *(ushort *)((long)puVar11 + lVar19)) &&
                     (uVar14 = (ulong)*(ushort *)((long)puVar11 + lVar19 + 10), uVar14 != 0)) {
                    fVar23 = (float)NEON_ucvtf((uint)*(byte *)((long)puVar11 +
                                                              lVar8 + uVar14 + uVar12));
                  }
                  *(float *)((long)param_1 + 0x7c) = fVar29 * fVar23;
                  return;
                }
              }
            }
            uVar14 = uVar14 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar14 < uVar28);
        }
        if ((uVar6 < 0x13) || ((ulong)puVar9[9] == 0)) {
          puVar11 = (uint *)0x0;
          uVar28 = uRam0000000000000000;
        }
        else {
          puVar11 = (uint *)((long)piVar15 + (ulong)puVar9[9]);
          puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
          uVar28 = *puVar11;
        }
        if (uVar28 == 0) {
          return;
        }
        uVar14 = 0;
        lVar16 = (long)puVar11 + 0x12;
        do {
          uVar12 = (ulong)*(uint *)(lVar16 + -0xe);
          lVar10 = lVar16 + uVar12;
          lVar8 = lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe));
          if (*(ushort *)(lVar8 + -0xe) < 5) {
            piVar15 = (int *)0x0;
          }
          else {
            uVar17 = (ulong)*(ushort *)(lVar8 + -10);
            piVar15 = (int *)0x0;
            if (uVar17 != 0) {
              lVar8 = uVar12 + uVar17;
              piVar15 = (int *)(lVar16 + lVar8 + (ulong)*(uint *)(lVar16 + lVar8 + -0xe) + -0xe);
            }
          }
          puVar9 = (ushort *)((long)piVar15 - (long)*piVar15);
          if (*puVar9 < 0xf) {
            if (4 < *puVar9) {
              uVar6 = puVar9[2];
              bVar7 = lVar19 == 0;
              goto joined_r0x00e00328;
            }
            lVar8 = 0;
            if (lVar19 == 0) goto LAB_00e00334;
          }
          else {
            lVar8 = 0;
            if ((ulong)puVar9[7] != 0) {
              lVar8 = *(long *)((long)piVar15 + (ulong)puVar9[7]);
            }
            bVar7 = lVar19 == lVar8;
            uVar6 = puVar9[2];
joined_r0x00e00328:
            if ((ulong)uVar6 == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = *(long *)((long)piVar15 + (ulong)uVar6);
            }
            if (bVar7) {
LAB_00e00334:
              if (*param_4 == lVar8) {
                *(undefined4 *)param_1 = 3;
                lVar19 = 0;
                if (4 < *(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -0xe)) {
                  uVar14 = (ulong)*(ushort *)
                                   (lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -10);
                  if (uVar14 == 0) {
                    lVar19 = 0;
                  }
                  else {
                    lVar19 = lVar16 + uVar14 + *(uint *)(lVar16 + uVar14 + uVar12 + -0xe) + uVar12 +
                             -0xe;
                  }
                }
                FUN_00e00a40(param_1,lVar19);
                if (*(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -0xe) < 7) {
                  bVar7 = false;
                }
                else {
                  uVar14 = (ulong)*(ushort *)
                                   (lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -8);
                  bVar7 = false;
                  if (uVar14 != 0) {
                    bVar7 = *(char *)(lVar16 + uVar14 + uVar12 + -0xe) != '\0';
                  }
                }
                *(bool *)(param_1 + 0x12) = bVar7;
                uVar6 = *(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -6);
                lVar19 = lVar16 + uVar6 + uVar12;
                uVar22 = *(undefined4 *)(lVar19 + -0xe);
                puVar2 = (undefined4 *)&DAT_00000004;
                if (uVar6 != 0) {
                  puVar2 = (undefined4 *)(lVar19 + -10);
                }
                uVar24 = *puVar2;
                param_1[3] = (ulong)*(uint *)(lVar19 + -6);
                param_1[2] = CONCAT44(uVar24,uVar22);
                uVar6 = *(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -4);
                lVar19 = lVar16 + uVar6 + uVar12;
                uVar22 = *(undefined4 *)(lVar19 + -0xe);
                puVar2 = (undefined4 *)&DAT_00000004;
                if (uVar6 != 0) {
                  puVar2 = (undefined4 *)(lVar19 + -10);
                }
                uVar24 = *puVar2;
                param_1[5] = (ulong)*(uint *)(lVar19 + -6);
                param_1[4] = CONCAT44(uVar24,uVar22);
                fVar23 = 0.0;
                fVar25 = 0.0;
                if (0xc < *(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -0xe)) {
                  uVar14 = (ulong)*(ushort *)
                                   (lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -2);
                  fVar25 = 0.0;
                  if (uVar14 != 0) {
                    fVar25 = *(float *)(lVar16 + uVar14 + uVar12 + -0xe);
                  }
                }
                *(float *)(param_1 + 7) = fVar25 * (fVar29 / fVar30);
                if ((*(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe)) + -0xe) < 0xf) ||
                   (uVar14 = (ulong)*(ushort *)(lVar16 + (uVar12 - (long)*(int *)(lVar10 + -0xe))),
                   uVar14 == 0)) goto LAB_00e00a18;
                bVar21 = *(byte *)(lVar16 + uVar14 + uVar12 + -0xe);
                goto LAB_00e00a14;
              }
            }
          }
          uVar14 = uVar14 + 1;
          lVar16 = lVar16 + 4;
          if (uVar28 <= uVar14) {
            return;
          }
        } while( true );
      }
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 4;
    } while (uVar14 < uVar28);
  }
  return;
}


