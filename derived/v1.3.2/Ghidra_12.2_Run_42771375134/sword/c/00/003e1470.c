/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e1470; name: FUN_003e1470
 */


void FUN_003e1470(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  bool bVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  
  puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x720) + 0x7b0);
  if ((*(uint *)(param_1 + 0x1f78) & 0x7fffffff) == 0) {
    uVar19 = 0;
    uVar18 = 0;
  }
  else {
    uVar18 = 0;
    do {
      uVar19 = *(uint *)(*(long *)(param_1 + 0x1f70) + uVar18 * 4);
      if (uVar19 != 0) goto LAB_003e14dc;
      uVar18 = uVar18 + 1;
    } while (uVar18 < (*(uint *)(param_1 + 0x1f78) & 0x7fffffff));
    uVar19 = 0;
  }
LAB_003e14dc:
  FUN_003ff570(*puVar17);
                    /* try { // try from 003e14e4 to 003e14f7 has its CatchHandler @ 003e1dbc */
  plVar6 = (long *)FUN_001a6400(puVar17,0x448,0x10);
                    /* try { // try from 003e1500 to 003e1503 has its CatchHandler @ 003e1db8 */
  FUN_003ff5a0(*puVar17);
  lVar8 = *(long *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x7b8);
  lVar13 = *(long *)(param_1 + 0x808);
  lVar9 = *(long *)(*(long *)(param_1 + 0x810) + 8);
  plVar6[2] = 0;
  plVar6[3] = 0;
  *(undefined4 *)(plVar6 + 4) = 0;
  puVar4 = PTR_DAT_02712918;
  plVar6[5] = lVar9;
  *(undefined4 *)(plVar6 + 6) = uVar3;
  *(undefined4 *)(plVar6 + 0x87) = 0;
  plVar6[0x88] = lVar13;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[1] = lVar8;
  lVar8 = *(long *)(param_1 + 0x748);
  lVar9 = *(long *)(param_1 + 0x728);
  bVar5 = *(char *)(param_1 + 0x818) != '\0';
  while (uVar19 != 0) {
    uVar16 = uVar19 & -uVar19;
    uVar19 = uVar19 - 1 & uVar19;
    uVar11 = (uint)uVar18;
    uVar16 = *(uint *)(PTR_DAT_02710c28 + (ulong)(uVar16 * 0x77cb531 >> 0x1b) * 4) | uVar11 << 5;
    if (uVar19 == 0) {
      do {
        uVar11 = uVar11 + 1;
        uVar18 = (ulong)uVar11;
        if ((*(uint *)(param_1 + 0x1f78) & 0x7fffffff) <= uVar11) {
          uVar19 = 0;
          break;
        }
        uVar19 = *(uint *)(*(long *)(param_1 + 0x1f70) + (ulong)uVar11 * 4);
      } while (uVar19 == 0);
    }
    if (uVar16 == 0xffffffff) break;
    uVar11 = *(uint *)(plVar6 + 0x87);
    lVar13 = *(long *)(*(long *)(lVar8 + 200) + (ulong)(uVar16 & 0x3ffffff) * 0x20 + 0x18);
    *(uint *)(plVar6 + 0x87) = uVar11 + 1;
    plVar6[(ulong)uVar11 + 7] = lVar13 + -0x60;
    lVar13 = *(long *)(lVar13 + -0x28);
    while (lVar13 != 0) {
      while( true ) {
        uVar16 = *(uint *)(lVar13 + 0x18);
        lVar13 = *(long *)(lVar13 + 8);
        if ((uVar16 & 0x60000000) != 0) break;
        uVar11 = (uVar16 & 0x1fffffff) + 0x20 >> 5;
        if ((*(uint *)(lVar9 + 0x78) & 0x7fffffff) < uVar11) {
          pvVar7 = (void *)(**(code **)(**(long **)(lVar9 + 0x80) + 0x10))
                                     (*(long **)(lVar9 + 0x80),uVar11 << 2,
                                      "./../../Common/src\\CmBitMap.h",0x1b7);
          if (((*(void **)(lVar9 + 0x70) != (void *)0x0) &&
              (memcpy(pvVar7,*(void **)(lVar9 + 0x70),(ulong)(uint)(*(int *)(lVar9 + 0x78) << 2)),
              -1 < *(int *)(lVar9 + 0x78))) && (*(long *)(lVar9 + 0x70) != 0)) {
            (**(code **)(**(long **)(lVar9 + 0x80) + 0x18))();
          }
                    /* WARNING: Subroutine does not return */
          memset((void *)((long)pvVar7 + ((ulong)*(uint *)(lVar9 + 0x78) & 0x7fffffff) * 4),0,
                 (ulong)((uVar11 - *(uint *)(lVar9 + 0x78)) * 4));
        }
        lVar10 = (ulong)((uVar16 & 0x1fffffff) >> 5) * 4;
        *(uint *)(*(long *)(lVar9 + 0x70) + lVar10) =
             *(uint *)(*(long *)(lVar9 + 0x70) + lVar10) | 1 << (ulong)(uVar16 & 0x1f);
        if (lVar13 == 0) goto LAB_003e16d8;
      }
    }
LAB_003e16d8:
    if ((int)plVar6[0x87] == 0x80) {
      *(undefined4 *)(plVar6 + 4) = 1;
      plVar6[3] = (long)param_2;
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x20))();
        plVar6[2] = *(long *)(plVar6[3] + 0x10);
      }
      (**(code **)(*plVar6 + 0x28))(plVar6);
      FUN_003ff570(*puVar17);
                    /* try { // try from 003e172c to 003e173f has its CatchHandler @ 003e1e10 */
      plVar6 = (long *)FUN_001a6400(puVar17,0x448,0x10);
                    /* try { // try from 003e1744 to 003e1747 has its CatchHandler @ 003e1e0c */
      FUN_003ff5a0(*puVar17);
      lVar10 = *(long *)(param_1 + 0x18);
      uVar3 = *(undefined4 *)(param_1 + 0x7b8);
      lVar14 = *(long *)(param_1 + 0x808);
      lVar13 = *(long *)(*(long *)(param_1 + 0x810) + 8);
      plVar6[2] = 0;
      plVar6[3] = 0;
      *(undefined4 *)(plVar6 + 4) = 0;
      plVar6[5] = lVar13;
      *(undefined4 *)(plVar6 + 6) = uVar3;
      *plVar6 = (long)(puVar4 + 0x10);
      plVar6[1] = lVar10;
      *(undefined4 *)(plVar6 + 0x87) = 0;
      plVar6[0x88] = lVar14;
    }
    bVar5 = true;
  }
  if ((int)plVar6[0x87] != 0) {
    *(undefined4 *)(plVar6 + 4) = 1;
    plVar6[3] = (long)param_2;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x20))(param_2);
      plVar6[2] = *(long *)(plVar6[3] + 0x10);
    }
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  puVar4 = PTR_DAT_02710c28;
  uVar19 = *(uint *)(param_1 + 0x1f88);
  if ((uVar19 & 0x7fffffff) != 0) {
    uVar18 = 0;
    do {
      uVar16 = *(uint *)(*(long *)(param_1 + 0x1f80) + uVar18 * 4);
      if (uVar16 != 0) {
        if (param_2 == (long *)0x0) {
          puVar15 = PTR_DAT_02712928 + 0x10;
          goto LAB_003e1cb4;
        }
        puVar15 = PTR_DAT_02712928 + 0x10;
        goto LAB_003e1b84;
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < (uVar19 & 0x7fffffff));
  }
LAB_003e17f8:
  *(bool *)(param_1 + 0x818) = bVar5;
  uVar19 = *(uint *)(param_1 + 0x1200) & 0x7fffffff;
  if (uVar19 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = 0;
    do {
      uVar16 = *(uint *)(*(long *)(param_1 + 0x11f8) + uVar18 * 4);
      if (uVar16 != 0) goto LAB_003e1838;
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar19);
  }
  uVar16 = 0;
LAB_003e1838:
  lVar8 = *(long *)(*(long *)(param_1 + 0x720) + 0xa48);
  lVar13 = *(long *)(*(long *)(param_1 + 0x728) + 0x120);
  FUN_003ff570(*puVar17);
                    /* try { // try from 003e185c to 003e186f has its CatchHandler @ 003e1da4 */
  plVar6 = (long *)FUN_001a6400(puVar17,0x840,0x10);
                    /* try { // try from 003e1874 to 003e1877 has its CatchHandler @ 003e1da0 */
  FUN_003ff5a0(*puVar17);
  lVar10 = *(long *)(param_1 + 0x18);
  plVar6[2] = 0;
  plVar6[3] = 0;
  *(undefined4 *)(plVar6 + 4) = 0;
  puVar4 = PTR_DAT_02712920;
  *(undefined4 *)(plVar6 + 0x107) = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[1] = lVar10;
  plVar6[5] = lVar8;
  plVar6[6] = lVar13;
  if (uVar16 == 0) {
    iVar1 = (int)plVar6[0x107];
  }
  else {
    bVar5 = false;
    puVar15 = PTR_DAT_02710c28;
    do {
      uVar19 = uVar16 & -uVar16;
      uVar16 = uVar16 - 1 & uVar16;
      uVar12 = (uint)uVar18;
      uVar11 = *(uint *)(puVar15 + (ulong)(uVar19 * 0x77cb531 >> 0x1b) * 4) | uVar12 << 5;
      if (uVar16 == 0) {
        do {
          uVar12 = uVar12 + 1;
          uVar18 = (ulong)uVar12;
          if ((*(uint *)(param_1 + 0x1200) & 0x7fffffff) <= uVar12) {
            uVar16 = 0;
            break;
          }
          uVar16 = *(uint *)(*(long *)(param_1 + 0x11f8) + (ulong)uVar12 * 4);
        } while (uVar16 == 0);
      }
      if (uVar11 == 0xffffffff) break;
      if ((uVar11 < *(uint *)(*(long *)(param_1 + 0x728) + 0xb8)) &&
         (uVar2 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x728) + 0xb0) + (ulong)uVar11 * 0x10) &
                  0xfffffffffffffff0, uVar2 != 0)) {
        uVar12 = uVar11 + 0x20 >> 5;
        if ((*(uint *)(lVar9 + 0x78) & 0x7fffffff) < uVar12) {
          pvVar7 = (void *)(**(code **)(**(long **)(lVar9 + 0x80) + 0x10))
                                     (*(long **)(lVar9 + 0x80),uVar12 << 2,
                                      "./../../Common/src\\CmBitMap.h",0x1b7);
          if (((*(void **)(lVar9 + 0x70) != (void *)0x0) &&
              (memcpy(pvVar7,*(void **)(lVar9 + 0x70),(ulong)(uint)(*(int *)(lVar9 + 0x78) << 2)),
              -1 < *(int *)(lVar9 + 0x78))) && (*(long *)(lVar9 + 0x70) != 0)) {
            (**(code **)(**(long **)(lVar9 + 0x80) + 0x18))();
          }
                    /* WARNING: Subroutine does not return */
          memset((void *)((long)pvVar7 + ((ulong)*(uint *)(lVar9 + 0x78) & 0x7fffffff) * 4),0,
                 (ulong)((uVar12 - *(uint *)(lVar9 + 0x78)) * 4));
        }
        lVar10 = (ulong)(uVar11 >> 5) * 4;
        *(uint *)(*(long *)(lVar9 + 0x70) + lVar10) =
             *(uint *)(*(long *)(lVar9 + 0x70) + lVar10) |
             1 << (ulong)(*(uint *)(puVar15 + (ulong)(uVar19 * 0x77cb531 >> 0x1b) * 4) & 0x1f);
        uVar19 = *(uint *)(plVar6 + 0x107);
        iVar1 = uVar19 + 1;
        *(int *)(plVar6 + 0x107) = iVar1;
        plVar6[(ulong)uVar19 + 7] = uVar2;
        if (iVar1 == 0x100) {
          *(undefined4 *)(plVar6 + 4) = 1;
          plVar6[3] = (long)param_2;
          if (param_2 != (long *)0x0) {
            (**(code **)(*param_2 + 0x20))();
            plVar6[2] = *(long *)(plVar6[3] + 0x10);
          }
          (**(code **)(*plVar6 + 0x28))(plVar6);
          FUN_003ff570(*puVar17);
                    /* try { // try from 003e1a6c to 003e1a7f has its CatchHandler @ 003e1ddc */
          plVar6 = (long *)FUN_001a6400(puVar17,0x840,0x10);
                    /* try { // try from 003e1a84 to 003e1a87 has its CatchHandler @ 003e1dd8 */
          FUN_003ff5a0(*puVar17);
          lVar10 = *(long *)(param_1 + 0x18);
          plVar6[2] = 0;
          plVar6[3] = 0;
          *(undefined4 *)(plVar6 + 4) = 0;
          *(undefined4 *)(plVar6 + 0x107) = 0;
          *plVar6 = (long)(puVar4 + 0x10);
          plVar6[1] = lVar10;
          plVar6[5] = lVar8;
          plVar6[6] = lVar13;
        }
        bVar5 = true;
        puVar15 = PTR_DAT_02710c28;
      }
    } while (uVar16 != 0);
    if (bVar5) {
      *(undefined1 *)(*(long *)(param_1 + 0x808) + 0x18) = 1;
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x720) + 0xa48) + 0x1c) = 1;
    }
    iVar1 = (int)plVar6[0x107];
  }
  if (iVar1 != 0) {
    *(undefined4 *)(plVar6 + 4) = 1;
    plVar6[3] = (long)param_2;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x20))();
      plVar6[2] = *(long *)(plVar6[3] + 0x10);
    }
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 0x11f8),0,(ulong)(uint)(*(int *)(param_1 + 0x1200) << 2));
LAB_003e1b84:
  uVar11 = uVar16 & -uVar16;
  uVar16 = uVar16 - 1 & uVar16;
  uVar12 = (uint)uVar18;
  uVar11 = *(uint *)(puVar4 + (ulong)(uVar11 * 0x77cb531 >> 0x1b) * 4) | uVar12 << 5;
  if (uVar16 == 0) {
    do {
      uVar12 = uVar12 + 1;
      uVar18 = (ulong)uVar12;
      if ((uVar19 & 0x7fffffff) <= uVar12) {
        uVar16 = 0;
        break;
      }
      uVar16 = *(uint *)(*(long *)(param_1 + 0x1f80) + (ulong)uVar12 * 4);
    } while (uVar16 == 0);
  }
  if (uVar11 == 0xffffffff) goto LAB_003e17f8;
  lVar13 = *(long *)(*(long *)(*(long *)(lVar8 + 200) + (ulong)(uVar11 & 0x3ffffff) * 0x20 + 0x18) +
                    8);
  if (lVar13 != 0) {
    FUN_003ff570(*puVar17);
                    /* try { // try from 003e1c0c to 003e1c1f has its CatchHandler @ 003e1df4 */
    plVar6 = (long *)FUN_001a6400(puVar17,0x48,0x10);
                    /* try { // try from 003e1c24 to 003e1c27 has its CatchHandler @ 003e1df0 */
    FUN_003ff5a0(*puVar17);
    bVar5 = true;
    uVar3 = *(undefined4 *)(param_1 + 0x7b8);
    lVar14 = *(long *)(param_1 + 0x808);
    lVar10 = *(long *)(*(long *)(param_1 + 0x810) + 8);
    plVar6[1] = *(long *)(param_1 + 0x18);
    plVar6[2] = 0;
    *(undefined4 *)(plVar6 + 4) = 0;
    *plVar6 = (long)puVar15;
    plVar6[5] = lVar10;
    *(undefined4 *)(plVar6 + 6) = uVar3;
    plVar6[7] = lVar13;
    plVar6[8] = lVar14;
    *(undefined4 *)(plVar6 + 4) = 1;
    plVar6[3] = (long)param_2;
    (**(code **)(*param_2 + 0x20))();
    plVar6[2] = *(long *)(plVar6[3] + 0x10);
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  if (uVar16 == 0) goto LAB_003e17f8;
  uVar19 = *(uint *)(param_1 + 0x1f88);
  goto LAB_003e1b84;
LAB_003e1cb4:
  uVar11 = uVar16 & -uVar16;
  uVar16 = uVar16 - 1 & uVar16;
  uVar12 = (uint)uVar18;
  uVar11 = *(uint *)(puVar4 + (ulong)(uVar11 * 0x77cb531 >> 0x1b) * 4) | uVar12 << 5;
  if (uVar16 == 0) {
    do {
      uVar12 = uVar12 + 1;
      uVar18 = (ulong)uVar12;
      if ((uVar19 & 0x7fffffff) <= uVar12) {
        uVar16 = 0;
        break;
      }
      uVar16 = *(uint *)(*(long *)(param_1 + 0x1f80) + (ulong)uVar12 * 4);
    } while (uVar16 == 0);
  }
  if (uVar11 == 0xffffffff) goto LAB_003e17f8;
  lVar13 = *(long *)(*(long *)(*(long *)(lVar8 + 200) + (ulong)(uVar11 & 0x3ffffff) * 0x20 + 0x18) +
                    8);
  if (lVar13 != 0) {
    FUN_003ff570(*puVar17);
                    /* try { // try from 003e1d3c to 003e1d4f has its CatchHandler @ 003e1dd4 */
    plVar6 = (long *)FUN_001a6400(puVar17,0x48,0x10);
                    /* try { // try from 003e1d54 to 003e1d57 has its CatchHandler @ 003e1dd0 */
    FUN_003ff5a0(*puVar17);
    bVar5 = true;
    uVar3 = *(undefined4 *)(param_1 + 0x7b8);
    lVar14 = *(long *)(param_1 + 0x808);
    lVar10 = *(long *)(*(long *)(param_1 + 0x810) + 8);
    plVar6[1] = *(long *)(param_1 + 0x18);
    plVar6[2] = 0;
    *(undefined4 *)(plVar6 + 4) = 0;
    *plVar6 = (long)puVar15;
    *(undefined4 *)(plVar6 + 6) = uVar3;
    plVar6[7] = lVar13;
    plVar6[8] = lVar14;
    plVar6[5] = lVar10;
    *(undefined4 *)(plVar6 + 4) = 1;
    plVar6[3] = 0;
    FUN_00192470(plVar6);
  }
  if (uVar16 == 0) goto LAB_003e17f8;
  uVar19 = *(uint *)(param_1 + 0x1f88);
  goto LAB_003e1cb4;
}


