/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca5b70; name: FUN_00ca5b70
 */


/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_00ca5b70(undefined8 param_1,long param_2,uint param_3,undefined8 *param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  bool bVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ushort *puVar17;
  int iVar18;
  
  puVar7 = (uint *)FUN_010295e0();
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar11 == 0)) {
    puVar7 = (uint *)0x0;
    uVar3 = uRam0000000000000000;
  }
  else {
    puVar7 = (uint *)((long)piVar1 + uVar11);
    puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
    uVar3 = *puVar7;
  }
  if (uVar3 != 0) {
    lVar12 = 0;
    iVar10 = 0;
    do {
      uVar11 = (ulong)*(uint *)((long)puVar7 + lVar12 + 4);
      lVar9 = lVar12 + (uVar11 - (long)*(int *)((long)puVar7 + lVar12 + uVar11 + 4));
      uVar5 = *(ushort *)((long)puVar7 + lVar9 + 4);
      if (uVar5 < 7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      lVar16 = uVar11 + *(ushort *)((long)puVar7 + lVar9 + 10);
      uVar15 = (ulong)*(ushort *)((long)puVar7 + lVar9 + 8);
      uVar4 = *(uint *)((long)puVar7 +
                       lVar12 + lVar16 + (ulong)*(uint *)((long)puVar7 + lVar12 + lVar16 + 4) + 4);
      lVar16 = 0;
      if (uVar15 != 0) {
        lVar16 = *(long *)((long)puVar7 + lVar12 + uVar11 + uVar15 + 4);
      }
      if (lVar16 == param_2) {
LAB_00ca5cd8:
        if (uVar4 < param_3) {
          return 0;
        }
        iVar10 = param_3 + iVar10 + -1;
        puVar8 = (uint *)FUN_010295e0(param_1);
        piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
        uVar11 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
        puVar2 = (uint *)((long)piVar1 + uVar11);
        uVar14 = (ulong)*puVar2;
        puVar2 = (uint *)((long)puVar2 + uVar14);
        puVar7 = puVar2 + 1;
        uVar15 = (ulong)*puVar2;
        if (uVar15 != 0) {
          puVar2 = puVar7 + uVar15;
          lVar12 = (long)puVar8 + *puVar8 + uVar14 + uVar11;
          do {
            uVar3 = *puVar7;
            piVar1 = (int *)((long)puVar7 + (ulong)uVar3);
            puVar17 = (ushort *)((long)piVar1 - (long)*piVar1);
            uVar5 = puVar17[3];
            puVar8 = (uint *)((long)piVar1 + (ulong)uVar5);
            uVar15 = (ulong)*puVar8;
            uVar11 = (ulong)*(uint *)((long)puVar8 + uVar15);
            if (uVar11 != 0) {
              lVar9 = 0;
              iVar18 = 0;
              do {
                if (iVar10 == iVar18) {
                  if (*puVar17 < 5) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = 0;
                    if ((ulong)puVar17[2] != 0) {
                      uVar13 = *(undefined8 *)((long)piVar1 + (ulong)puVar17[2]);
                    }
                  }
                  *(int *)(param_4 + 1) = iVar18 + 1;
                  lVar12 = lVar12 + uVar15 + uVar5 + (ulong)uVar3;
                  *param_4 = uVar13;
                  lVar16 = lVar12 + lVar9;
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)((long)param_4 + 0xc) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0xc) + lVar9 + 8);
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)(param_4 + 2) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0xc) + lVar9 + 0xc);
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)((long)param_4 + 0x14) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0xc) + lVar9 + 0x10);
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)(param_4 + 3) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0xe) + lVar9 + 8);
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)((long)param_4 + 0x1c) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0xe) + lVar9 + 0xc);
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)(param_4 + 4) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0xe) + lVar9 + 0x10);
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)((long)param_4 + 0x24) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0x10) + lVar9 + 8);
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)(param_4 + 5) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0x10) + lVar9 + 0xc);
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)((long)param_4 + 0x2c) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0x10) + lVar9 + 0x10);
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)(param_4 + 6) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0x12) + lVar9 + 8);
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)((long)param_4 + 0x34) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0x12) + lVar9 + 0xc);
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)(param_4 + 7) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0x12) + lVar9 + 0x10);
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)((long)param_4 + 0x3c) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0x14) + lVar9 + 8);
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)(param_4 + 8) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0x14) + lVar9 + 0xc);
                  uVar11 = (ulong)*(uint *)(lVar16 + 8);
                  *(undefined4 *)((long)param_4 + 0x44) =
                       *(undefined4 *)
                        (lVar12 + uVar11 + *(ushort *)
                                            (lVar12 + (uVar11 - (long)*(int *)(lVar12 + uVar11 +
                                                                               lVar9 + 8)) + lVar9 +
                                            0x14) + lVar9 + 0x10);
                  return 1;
                }
                lVar9 = lVar9 + 4;
                iVar18 = iVar18 + 1;
              } while (uVar11 * 4 != lVar9);
              iVar10 = iVar10 - iVar18;
            }
            puVar7 = puVar7 + 1;
            lVar12 = lVar12 + 4;
          } while (puVar7 != puVar2);
        }
        return 0;
      }
      if ((uVar5 < 9) || (uVar15 = (ulong)*(ushort *)((long)puVar7 + lVar9 + 0xc), uVar15 == 0)) {
        bVar6 = param_2 == 0;
      }
      else {
        bVar6 = *(long *)((long)puVar7 + lVar12 + uVar11 + uVar15 + 4) == param_2;
      }
      if (bVar6) goto LAB_00ca5cd8;
      if ((uVar5 < 0xb) || (uVar15 = (ulong)*(ushort *)((long)puVar7 + lVar9 + 0xe), uVar15 == 0)) {
        if (param_2 == 0) goto LAB_00ca5cd8;
      }
      else if (*(long *)((long)puVar7 + lVar12 + uVar11 + uVar15 + 4) == param_2) goto LAB_00ca5cd8;
      lVar12 = lVar12 + 4;
      iVar10 = uVar4 + iVar10;
    } while ((ulong)uVar3 * 4 != lVar12);
  }
  return 0;
}


