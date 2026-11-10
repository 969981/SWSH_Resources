/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100d460; name: FUN_0100d460
 */


ulong FUN_0100d460(long param_1,long *param_2)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  
  plVar6 = *(long **)(param_1 + 0x3d8);
  if (plVar6 != (long *)0x0) {
    uVar8 = *(ulong *)(param_1 + 0x3b8);
    lVar7 = *param_2;
    if ((uVar8 - 1 & uVar8) == 0) {
      do {
        uVar10 = plVar6[4];
        plVar11 = *(long **)(*(long *)(param_1 + 0x3b0) + (uVar8 - 1 & uVar10) * 8);
        do {
          do {
            plVar11 = (long *)*plVar11;
          } while (uVar10 != plVar11[1]);
        } while (plVar11[2] != uVar10);
        piVar1 = (int *)((long)*(uint **)(plVar11[7] + 400) + (ulong)**(uint **)(plVar11[7] + 400));
        puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
        puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
        if ((ulong)*puVar2 != 0) {
          lVar12 = 0;
          do {
            uVar9 = (ulong)*(uint *)((long)puVar2 + lVar12 + 4);
            lVar3 = uVar9 + *(ushort *)
                             ((long)puVar2 +
                             lVar12 + (uVar9 - (long)*(int *)((long)puVar2 + lVar12 + uVar9 + 4)) +
                             8);
            lVar3 = lVar3 + (ulong)*(uint *)((long)puVar2 + lVar12 + lVar3 + 4);
            lVar4 = lVar12 + (lVar3 - *(int *)((long)puVar2 + lVar12 + lVar3 + 4));
            if ((*(ushort *)((long)puVar2 + lVar4 + 4) < 7) ||
               (uVar9 = (ulong)*(ushort *)((long)puVar2 + lVar4 + 10), uVar9 == 0)) {
              if (lVar7 == 0) {
                return uVar10;
              }
            }
            else if (lVar7 == *(long *)((long)puVar2 + lVar12 + lVar3 + uVar9 + 4)) {
              return uVar10;
            }
            lVar12 = lVar12 + 4;
          } while ((ulong)*puVar2 * 4 != lVar12);
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      do {
        uVar9 = plVar6[4];
        uVar10 = uVar9;
        if (uVar8 <= uVar9) {
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = uVar9 / uVar8;
          }
          uVar10 = uVar9 - uVar10 * uVar8;
        }
        plVar11 = *(long **)(*(long *)(param_1 + 0x3b0) + uVar10 * 8);
        do {
          do {
            plVar11 = (long *)*plVar11;
          } while (uVar9 != plVar11[1]);
        } while (plVar11[2] != uVar9);
        puVar13 = *(uint **)(plVar11[7] + 400);
        piVar1 = (int *)((long)puVar13 + (ulong)*puVar13);
        uVar14 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
        puVar2 = (uint *)((long)piVar1 + uVar14);
        uVar15 = (ulong)*puVar2;
        uVar10 = (ulong)*(uint *)((long)puVar2 + uVar15);
        if (uVar10 != 0) {
          lVar3 = *puVar13 + uVar15 + uVar14;
          lVar12 = 0;
          do {
            uVar14 = (ulong)*(uint *)((long)puVar13 + lVar12 + lVar3 + 4);
            lVar4 = uVar14 + *(ushort *)
                              ((long)puVar13 +
                              lVar12 + (uVar14 - (long)*(int *)((long)puVar13 +
                                                               lVar12 + uVar14 + lVar3 + 4)) + lVar3
                              + 8);
            lVar4 = lVar4 + (ulong)*(uint *)((long)puVar13 + lVar12 + lVar4 + lVar3 + 4);
            lVar5 = lVar12 + (lVar4 - *(int *)((long)puVar13 + lVar12 + lVar4 + lVar3 + 4)) + lVar3;
            if ((*(ushort *)((long)puVar13 + lVar5 + 4) < 7) ||
               (uVar14 = (ulong)*(ushort *)((long)puVar13 + lVar5 + 10), uVar14 == 0)) {
              if (lVar7 == 0) {
                return uVar9;
              }
            }
            else if (lVar7 == *(long *)((long)puVar13 + lVar12 + lVar4 + uVar14 + lVar3 + 4)) {
              return uVar9;
            }
            lVar12 = lVar12 + 4;
          } while (uVar10 * 4 != lVar12);
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return 0xcbf29ce484222645;
}


