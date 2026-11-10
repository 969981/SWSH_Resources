/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041cfb0; name: FUN_0041cfb0
 */


void FUN_0041cfb0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  int *piVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  
  lVar10 = *(long *)(param_1 + 0x80);
  uVar3 = *(uint *)(lVar10 + 0xe8);
  if (uVar3 != 0) {
    uVar17 = 0;
    puVar1 = PTR_DAT_02712c28 + 0x10;
    do {
      while( true ) {
        lVar13 = *(long *)(lVar10 + 0xe0);
        piVar18 = (int *)(lVar13 + uVar17 * 0x18);
        if ((*(int *)(param_1 + 0x88) == *piVar18) &&
           (lVar7 = FUN_004148d0(*(undefined8 *)(param_1 + 0x80),
                                 *(undefined4 *)(lVar13 + uVar17 * 0x18 + 4)), lVar7 != 0)) break;
LAB_0041d490:
        uVar17 = uVar17 + 1;
        if (uVar17 == uVar3) {
          return;
        }
      }
      if (((*(ushort *)(lVar7 + 0xc) & 0x7c) == 4) &&
         ((((*(ushort *)(lVar7 + 0xc) >> 1 & 1) == 0 ||
           (*(int *)(lVar13 + uVar17 * 0x18 + 8) < *(int *)(param_1 + 0xa8))) ||
          (*(int *)(lVar13 + uVar17 * 0x18 + 0x14) != 0)))) {
        iVar21 = *(int *)(lVar7 + 0x20);
        uVar4 = *(uint *)(lVar7 + 0x18);
      }
      else {
        iVar21 = 0;
        uVar4 = *(uint *)(lVar7 + 0x18);
      }
      if ((uVar4 & 0xffff0000) == 0x110000) {
        uVar4 = (uint)*(ushort *)PTR_DAT_02712ac0;
        if (*(int *)(lVar13 + uVar17 * 0x18 + 0x14) != 0) {
          uVar4 = (uint)*(ushort *)PTR_DAT_02712ac0 * 4;
        }
        iVar21 = uVar4 + iVar21;
      }
      lVar11 = lVar13 + uVar17 * 0x18;
      piVar12 = (int *)(lVar11 + 8);
      iVar16 = *piVar12;
      iVar15 = *(int *)(lVar11 + 0xc);
      iVar5 = *(int *)(param_1 + 0xa8);
      if (iVar15 + iVar16 <= iVar5) goto LAB_0041d490;
      iVar20 = iVar5 - iVar16;
      if (iVar20 == 0 || iVar5 < iVar16) {
        iVar20 = *(int *)(lVar13 + uVar17 * 0x18 + 0x14);
      }
      else {
        lVar13 = lVar13 + uVar17 * 0x18;
        uVar2 = *(uint *)(lVar13 + 0x10);
        uVar4 = *(int *)(lVar13 + 0x14) + iVar20;
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        iVar15 = iVar15 - iVar20;
        iVar20 = uVar4 - uVar6 * uVar2;
        iVar16 = iVar5;
      }
      plVar8 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
      if (plVar8 == (long *)0x0) goto LAB_0041d490;
      *(int *)(plVar8 + 2) = iVar16 - iVar21;
      plVar8[3] = (long)piVar18;
      *(int *)(plVar8 + 4) = iVar15;
      *(int *)((long)plVar8 + 0x24) = iVar20;
      *(int *)(plVar8 + 5) = iVar21;
      plVar8[6] = 0;
      *plVar8 = (long)puVar1;
      FUN_0041b2a0(param_1 + 0x60,plVar8);
      if ((*(uint *)(lVar7 + 0x18) & 0xffff0000) == 0x100000) goto LAB_0041d490;
      puVar19 = *(uint **)(*(long *)(param_1 + 0x80) + 200);
      uVar4 = *(uint *)(*(long *)(param_1 + 0x80) + 0xd0);
      iVar21 = *piVar12;
      puVar14 = puVar19;
      if (uVar4 != 0) {
        lVar13 = (ulong)uVar4 * 0x18;
        do {
          if ((uVar17 == *puVar14) && (puVar14[1] == 0)) goto LAB_0041d1b8;
          lVar13 = lVar13 + -0x18;
          puVar14 = puVar14 + 6;
        } while (lVar13 != 0);
        puVar14 = puVar19 + (ulong)uVar4 * 6;
      }
LAB_0041d1b8:
      if (((puVar14 != (uint *)0x0) && (puVar19 + (ulong)uVar4 * 6 != puVar14)) &&
         ((*(long *)(puVar14 + 2) != 0 &&
          (puVar9 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20),
          puVar9 != (undefined8 *)0x0)))) {
        *puVar9 = puVar14;
        puVar9[1] = 0;
        *(int *)(puVar9 + 2) = iVar21;
        if (plVar8[6] == 0) {
          plVar8[6] = (long)puVar9;
          puVar9[3] = 0;
        }
        else {
          puVar9[3] = plVar8[6];
          plVar8[6] = (long)puVar9;
        }
      }
      puVar19 = *(uint **)(*(long *)(param_1 + 0x80) + 200);
      uVar4 = *(uint *)(*(long *)(param_1 + 0x80) + 0xd0);
      iVar21 = *piVar12;
      puVar14 = puVar19;
      if (uVar4 != 0) {
        lVar13 = (ulong)uVar4 * 0x18;
        do {
          if ((uVar17 == *puVar14) && (puVar14[1] == 1)) goto LAB_0041d25c;
          lVar13 = lVar13 + -0x18;
          puVar14 = puVar14 + 6;
        } while (lVar13 != 0);
        puVar14 = puVar19 + (ulong)uVar4 * 6;
      }
LAB_0041d25c:
      if ((((puVar14 != (uint *)0x0) && (puVar19 + (ulong)uVar4 * 6 != puVar14)) &&
          (*(long *)(puVar14 + 2) != 0)) &&
         (puVar9 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20),
         puVar9 != (undefined8 *)0x0)) {
        *puVar9 = puVar14;
        puVar9[1] = 0;
        *(int *)(puVar9 + 2) = iVar21;
        if (plVar8[6] == 0) {
          plVar8[6] = (long)puVar9;
          puVar9[3] = 0;
        }
        else {
          puVar9[3] = plVar8[6];
          plVar8[6] = (long)puVar9;
        }
      }
      puVar19 = *(uint **)(*(long *)(param_1 + 0x80) + 200);
      uVar4 = *(uint *)(*(long *)(param_1 + 0x80) + 0xd0);
      iVar21 = *piVar12;
      puVar14 = puVar19;
      if (uVar4 != 0) {
        lVar13 = (ulong)uVar4 * 0x18;
        do {
          if ((uVar17 == *puVar14) && (puVar14[1] == 2)) goto LAB_0041d300;
          lVar13 = lVar13 + -0x18;
          puVar14 = puVar14 + 6;
        } while (lVar13 != 0);
        puVar14 = puVar19 + (ulong)uVar4 * 6;
      }
LAB_0041d300:
      if (((puVar14 != (uint *)0x0) && (puVar19 + (ulong)uVar4 * 6 != puVar14)) &&
         ((*(long *)(puVar14 + 2) != 0 &&
          (puVar9 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20),
          puVar9 != (undefined8 *)0x0)))) {
        *puVar9 = puVar14;
        puVar9[1] = 0;
        *(int *)(puVar9 + 2) = iVar21;
        if (plVar8[6] == 0) {
          plVar8[6] = (long)puVar9;
          puVar9[3] = 0;
        }
        else {
          puVar9[3] = plVar8[6];
          plVar8[6] = (long)puVar9;
        }
      }
      puVar19 = *(uint **)(*(long *)(param_1 + 0x80) + 200);
      uVar4 = *(uint *)(*(long *)(param_1 + 0x80) + 0xd0);
      iVar21 = *piVar12;
      puVar14 = puVar19;
      if (uVar4 != 0) {
        lVar13 = (ulong)uVar4 * 0x18;
        do {
          if ((uVar17 == *puVar14) && (puVar14[1] == 3)) goto LAB_0041d3a4;
          lVar13 = lVar13 + -0x18;
          puVar14 = puVar14 + 6;
        } while (lVar13 != 0);
        puVar14 = puVar19 + (ulong)uVar4 * 6;
      }
LAB_0041d3a4:
      if ((((puVar14 != (uint *)0x0) && (puVar19 + (ulong)uVar4 * 6 != puVar14)) &&
          (*(long *)(puVar14 + 2) != 0)) &&
         (puVar9 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20),
         puVar9 != (undefined8 *)0x0)) {
        *puVar9 = puVar14;
        puVar9[1] = 0;
        *(int *)(puVar9 + 2) = iVar21;
        if (plVar8[6] == 0) {
          plVar8[6] = (long)puVar9;
          puVar9[3] = 0;
        }
        else {
          puVar9[3] = plVar8[6];
          plVar8[6] = (long)puVar9;
        }
      }
      puVar19 = *(uint **)(*(long *)(param_1 + 0x80) + 200);
      uVar4 = *(uint *)(*(long *)(param_1 + 0x80) + 0xd0);
      iVar21 = *piVar12;
      puVar14 = puVar19;
      if (uVar4 != 0) {
        lVar13 = (ulong)uVar4 * 0x18;
        do {
          if ((uVar17 == *puVar14) && (puVar14[1] == 4)) goto LAB_0041d448;
          lVar13 = lVar13 + -0x18;
          puVar14 = puVar14 + 6;
        } while (lVar13 != 0);
        puVar14 = puVar19 + (ulong)uVar4 * 6;
      }
LAB_0041d448:
      if (((puVar14 == (uint *)0x0) || (puVar19 + (ulong)uVar4 * 6 == puVar14)) ||
         ((*(long *)(puVar14 + 2) == 0 ||
          (puVar9 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20),
          puVar9 == (undefined8 *)0x0)))) goto LAB_0041d490;
      *puVar9 = puVar14;
      puVar9[1] = 0;
      *(int *)(puVar9 + 2) = iVar21;
      if (plVar8[6] != 0) {
        puVar9[3] = plVar8[6];
        plVar8[6] = (long)puVar9;
        goto LAB_0041d490;
      }
      plVar8[6] = (long)puVar9;
      puVar9[3] = 0;
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar3);
  }
  return;
}


