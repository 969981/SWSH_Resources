/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01009f80; name: FUN_01009f80
 */


/* WARNING: Control flow encountered bad instruction data */

long FUN_01009f80(long param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  ushort *puVar15;
  long *plVar16;
  
  plVar16 = *(long **)(param_1 + 0x3d8);
  do {
    if (plVar16 == (long *)0x0) {
      return 0;
    }
    uVar6 = FUN_00fc6b20(plVar16 + 4);
    if ((uVar6 & 1) != 0) {
      uVar9 = *(ulong *)(param_1 + 0x3b8);
      uVar6 = plVar16[4];
      if ((uVar9 - 1 & uVar9) == 0) {
        plVar10 = *(long **)(*(long *)(param_1 + 0x3b0) + (uVar9 - 1 & uVar6) * 8);
        do {
          do {
            plVar10 = (long *)*plVar10;
          } while (uVar6 != plVar10[1]);
        } while (plVar10[2] != uVar6);
      }
      else {
        uVar11 = uVar6;
        if (uVar9 <= uVar6) {
          uVar11 = 0;
          if (uVar9 != 0) {
            uVar11 = uVar6 / uVar9;
          }
          uVar11 = uVar6 - uVar11 * uVar9;
        }
        plVar10 = *(long **)(*(long *)(param_1 + 0x3b0) + uVar11 * 8);
        do {
          do {
            plVar10 = (long *)*plVar10;
          } while (uVar6 != plVar10[1]);
        } while (plVar10[2] != uVar6);
      }
      puVar12 = *(uint **)(*(long *)((long)plVar10 + 0x38) + 400);
      piVar1 = (int *)((long)puVar12 + (ulong)*puVar12);
      uVar9 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
      puVar2 = (uint *)((long)piVar1 + uVar9);
      uVar11 = (ulong)*puVar2;
      puVar2 = (uint *)((long)puVar2 + uVar11);
      puVar7 = puVar2 + 1;
      uVar6 = (ulong)*puVar2;
      if (uVar6 != 0) {
        lVar13 = (long)puVar12 + uVar9 + *puVar12 + uVar11;
        puVar2 = puVar7 + uVar6;
        do {
          lVar13 = lVar13 + 4;
          piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
          puVar15 = (ushort *)((long)piVar1 - (long)*piVar1);
          if (*puVar15 < 0x2f) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          puVar12 = (uint *)0x0;
          if ((ulong)puVar15[0x17] != 0) {
            puVar12 = (uint *)((long)piVar1 + (ulong)puVar15[0x17]);
            puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
          }
          puVar3 = (uint *)((long)piVar1 + (ulong)puVar15[0x17]);
          uVar9 = (ulong)*puVar3;
          puVar3 = (uint *)((long)puVar3 + uVar9);
          uVar6 = (ulong)*puVar3;
          if (puVar12 != puVar3 + uVar6) {
            lVar14 = 0;
            do {
              uVar11 = (ulong)*(uint *)((long)puVar12 + lVar14 + 4);
              lVar4 = uVar11 + *(ushort *)
                                ((long)puVar12 +
                                lVar14 + (uVar11 - (long)*(int *)((long)puVar12 +
                                                                 lVar14 + uVar11 + 4)) + 8);
              lVar4 = lVar4 + (ulong)*(uint *)((long)puVar12 + lVar14 + lVar4 + 4);
              lVar4 = lVar4 + (ulong)*(ushort *)
                                      ((long)puVar12 +
                                      lVar14 + (lVar4 - *(int *)((long)puVar12 + lVar14 + lVar4 + 4)
                                               ) + 8);
              lVar4 = lVar4 + (ulong)*(uint *)((long)puVar12 + lVar14 + lVar4 + 4);
              lVar4 = lVar4 + (ulong)*(ushort *)
                                      ((long)puVar12 +
                                      lVar14 + (lVar4 - *(int *)((long)puVar12 + lVar14 + lVar4 + 4)
                                               ) + 8);
              lVar4 = lVar4 + (ulong)*(uint *)((long)puVar12 + lVar14 + lVar4 + 4);
              lVar5 = lVar14 + (lVar4 - *(int *)((long)puVar12 + lVar14 + lVar4 + 4));
              if ((*(ushort *)((long)puVar12 + lVar5 + 4) < 0x17) ||
                 (uVar11 = (ulong)*(ushort *)((long)puVar12 + lVar5 + 0x1a), uVar11 == 0)) {
                if (*param_2 == 0) goto LAB_0100a200;
              }
              else if (*param_2 == *(long *)((long)puVar12 + lVar14 + lVar4 + uVar11 + 4)) {
LAB_0100a200:
                piVar1 = (int *)((long)((long)piVar1 + (ulong)puVar15[2]) +
                                (ulong)*(uint *)((long)piVar1 + (ulong)puVar15[2]));
                if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
                   (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar6 == 0)) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
                }
                *param_3 = uVar8;
                return (long)puVar12 + lVar14 + (ulong)*(uint *)((long)puVar12 + lVar14 + 4) + 4;
              }
              lVar14 = lVar14 + 4;
            } while (lVar13 + ((uVar9 + uVar6 * 4 + (ulong)puVar15[0x17] + (ulong)*puVar7) -
                              (long)puVar12) != lVar14);
          }
          puVar7 = puVar7 + 1;
        } while (puVar7 != puVar2);
      }
    }
    plVar16 = (long *)*plVar16;
  } while( true );
}


