/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01009440; name: FUN_01009440
 */


long FUN_01009440(long param_1,long *param_2,ulong *param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  long *plVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  
  plVar6 = *(long **)(param_1 + 0x3d8);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  uVar9 = *(ulong *)(param_1 + 0x3b8);
  lVar7 = *param_2;
  if ((uVar9 - 1 & uVar9) != 0) {
    do {
      uVar8 = plVar6[4];
      uVar11 = uVar8;
      if (uVar9 <= uVar8) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar8 / uVar9;
        }
        uVar11 = uVar8 - uVar11 * uVar9;
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0x3b0) + uVar11 * 8);
      do {
        do {
          plVar12 = (long *)*plVar12;
        } while (uVar8 != plVar12[1]);
      } while (plVar12[2] != uVar8);
      puVar13 = *(uint **)(plVar12[7] + 400);
      uVar11 = (ulong)*puVar13;
      piVar1 = (int *)((long)puVar13 + uVar11);
      uVar14 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
      uVar15 = (ulong)*(uint *)((long)piVar1 + uVar14);
      uVar16 = (ulong)*(uint *)((long)((long)piVar1 + uVar14) + uVar15);
      if (uVar16 != 0) {
        lVar2 = uVar11 + uVar15 + uVar14;
        lVar17 = 0;
        do {
          uVar5 = (ulong)*(uint *)((long)puVar13 + lVar17 + lVar2 + 4);
          lVar3 = uVar5 + *(ushort *)
                           ((long)puVar13 +
                           lVar17 + (uVar5 - (long)*(int *)((long)puVar13 +
                                                           lVar17 + uVar5 + lVar2 + 4)) + lVar2 + 8)
          ;
          lVar3 = lVar3 + (ulong)*(uint *)((long)puVar13 + lVar17 + lVar3 + lVar2 + 4);
          lVar4 = lVar17 + (lVar3 - *(int *)((long)puVar13 + lVar17 + lVar3 + lVar2 + 4)) + lVar2;
          if ((*(ushort *)((long)puVar13 + lVar4 + 4) < 7) ||
             (uVar5 = (ulong)*(ushort *)((long)puVar13 + lVar4 + 10), uVar5 == 0)) {
            if (lVar7 == 0) goto LAB_01009698;
          }
          else if (lVar7 == *(long *)((long)puVar13 + lVar17 + lVar3 + uVar5 + lVar2 + 4)) {
LAB_01009698:
            lVar7 = (long)puVar13 + lVar17 + uVar15 + uVar14 + uVar11;
            goto LAB_010096bc;
          }
          lVar17 = lVar17 + 4;
        } while (uVar16 * 4 != lVar17);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  do {
    uVar8 = plVar6[4];
    plVar12 = *(long **)(*(long *)(param_1 + 0x3b0) + (uVar9 - 1 & uVar8) * 8);
    do {
      do {
        plVar12 = (long *)*plVar12;
      } while (uVar8 != plVar12[1]);
    } while (plVar12[2] != uVar8);
    puVar10 = *(uint **)(plVar12[7] + 400);
    piVar1 = (int *)((long)puVar10 + (ulong)*puVar10);
    uVar11 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
    puVar13 = (uint *)((long)piVar1 + uVar11);
    uVar14 = (ulong)*puVar13;
    puVar13 = (uint *)((long)puVar13 + uVar14);
    if (*puVar13 != 0) {
      lVar17 = 0;
      do {
        uVar15 = (ulong)*(uint *)((long)puVar13 + lVar17 + 4);
        lVar2 = uVar15 + *(ushort *)
                          ((long)puVar13 +
                          lVar17 + (uVar15 - (long)*(int *)((long)puVar13 + lVar17 + uVar15 + 4)) +
                          8);
        lVar2 = lVar2 + (ulong)*(uint *)((long)puVar13 + lVar17 + lVar2 + 4);
        lVar3 = lVar17 + (lVar2 - *(int *)((long)puVar13 + lVar17 + lVar2 + 4));
        if ((*(ushort *)((long)puVar13 + lVar3 + 4) < 7) ||
           (uVar15 = (ulong)*(ushort *)((long)puVar13 + lVar3 + 10), uVar15 == 0)) {
          if (lVar7 == 0) goto LAB_010096ac;
        }
        else if (lVar7 == *(long *)((long)puVar13 + lVar17 + lVar2 + uVar15 + 4)) {
LAB_010096ac:
          lVar7 = (long)puVar10 + lVar17 + uVar14 + uVar11 + (ulong)*puVar10;
LAB_010096bc:
          *param_3 = uVar8;
          return lVar7 + 4 + (ulong)*(uint *)(lVar7 + 4);
        }
        lVar17 = lVar17 + 4;
      } while ((ulong)*puVar13 * 4 != lVar17);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return 0;
    }
  } while( true );
}


