/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecdfd0; name: FUN_00ecdfd0
 */


bool FUN_00ecdfd0(void)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  long *plVar10;
  ushort *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  lVar5 = FUN_00e7e2e0();
  lVar14 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  plVar6 = *(long **)(lVar14 + 0x3d8);
  if (plVar6 != (long *)0x0) {
    uVar12 = *(ulong *)(lVar14 + 0x3b8);
    if ((uVar12 - 1 & uVar12) == 0) {
      do {
        uVar9 = plVar6[2];
        plVar10 = *(long **)(*(long *)(lVar14 + 0x3b0) + (uVar9 & uVar12 - 1) * 8);
        do {
          do {
            plVar10 = (long *)*plVar10;
          } while (uVar9 != plVar10[1]);
        } while (plVar10[2] != uVar9);
        piVar8 = (int *)((long)*(uint **)(plVar10[7] + 400) + (ulong)**(uint **)(plVar10[7] + 400));
        puVar11 = (ushort *)((long)piVar8 - (long)*piVar8);
        puVar1 = (uint *)((long)((long)piVar8 + (ulong)puVar11[2]) +
                         (ulong)*(uint *)((long)piVar8 + (ulong)puVar11[2]));
        if (*puVar1 != 0) {
          lVar13 = 0;
          do {
            uVar9 = (ulong)*(uint *)((long)puVar1 + lVar13 + 4);
            lVar2 = uVar9 + *(ushort *)
                             ((long)puVar1 +
                             lVar13 + (uVar9 - (long)*(int *)((long)puVar1 + lVar13 + uVar9 + 4)) +
                             8);
            lVar2 = lVar2 + (ulong)*(uint *)((long)puVar1 + lVar13 + lVar2 + 4);
            lVar3 = lVar13 + (lVar2 - *(int *)((long)puVar1 + lVar13 + lVar2 + 4));
            if ((*(ushort *)((long)puVar1 + lVar3 + 4) < 7) ||
               (uVar9 = (ulong)*(ushort *)((long)puVar1 + lVar3 + 10), uVar9 == 0)) {
              if (lVar5 == 0) goto LAB_00ece24c;
            }
            else if (*(long *)((long)puVar1 + lVar13 + lVar2 + uVar9 + 4) == lVar5)
            goto LAB_00ece24c;
            lVar13 = lVar13 + 4;
          } while ((ulong)*puVar1 * 4 != lVar13);
        }
        plVar6 = (long *)*plVar6;
        bVar4 = false;
      } while (plVar6 != (long *)0x0);
      goto joined_r0x00ece298;
    }
    do {
      uVar7 = plVar6[2];
      uVar9 = uVar7;
      if (uVar12 <= uVar7) {
        uVar9 = 0;
        if (uVar12 != 0) {
          uVar9 = uVar7 / uVar12;
        }
        uVar9 = uVar7 - uVar9 * uVar12;
      }
      plVar10 = *(long **)(*(long *)(lVar14 + 0x3b0) + uVar9 * 8);
      do {
        do {
          plVar10 = (long *)*plVar10;
        } while (uVar7 != plVar10[1]);
      } while (plVar10[2] != uVar7);
      piVar8 = (int *)((long)*(uint **)(plVar10[7] + 400) + (ulong)**(uint **)(plVar10[7] + 400));
      puVar11 = (ushort *)((long)piVar8 - (long)*piVar8);
      puVar1 = (uint *)((long)((long)piVar8 + (ulong)puVar11[2]) +
                       (ulong)*(uint *)((long)piVar8 + (ulong)puVar11[2]));
      if (*puVar1 != 0) {
        lVar13 = 0;
        do {
          uVar9 = (ulong)*(uint *)((long)puVar1 + lVar13 + 4);
          lVar2 = uVar9 + *(ushort *)
                           ((long)puVar1 +
                           lVar13 + (uVar9 - (long)*(int *)((long)puVar1 + lVar13 + uVar9 + 4)) + 8)
          ;
          lVar2 = lVar2 + (ulong)*(uint *)((long)puVar1 + lVar13 + lVar2 + 4);
          lVar3 = lVar13 + (lVar2 - *(int *)((long)puVar1 + lVar13 + lVar2 + 4));
          if ((*(ushort *)((long)puVar1 + lVar3 + 4) < 7) ||
             (uVar9 = (ulong)*(ushort *)((long)puVar1 + lVar3 + 10), uVar9 == 0)) {
            if (lVar5 == 0) goto LAB_00ece24c;
          }
          else if (*(long *)((long)puVar1 + lVar13 + lVar2 + uVar9 + 4) == lVar5) goto LAB_00ece24c;
          lVar13 = lVar13 + 4;
        } while ((ulong)*puVar1 * 4 != lVar13);
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
LAB_00ece294:
  bVar4 = false;
joined_r0x00ece298:
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  return bVar4;
LAB_00ece24c:
  if ((0x3e < *puVar11) && ((ulong)puVar11[0x1f] != 0)) {
    bVar4 = *(char *)((long)piVar8 + (ulong)puVar11[0x1f]) != '\0';
    goto joined_r0x00ece298;
  }
  goto LAB_00ece294;
}


