/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049c170; name: FUN_0049c170
 */


undefined8 FUN_0049c170(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  
  puVar9 = PTR_DAT_02712a90;
  plVar3 = (long *)(param_1 + 0x58);
  iVar14 = *(int *)(param_1 + 0x60) + -1;
  if (-1 < iVar14) {
    iVar5 = *(int *)(param_2 + 0x48);
    iVar15 = 0;
    do {
      while( true ) {
        iVar8 = iVar14 - iVar15;
        if (iVar8 < 0) {
          iVar8 = iVar8 + 1;
        }
        iVar8 = iVar15 + (iVar8 >> 1);
        uVar16 = *(ulong *)(*plVar3 + (long)iVar8 * 8);
        iVar6 = *(int *)(uVar16 + 0x48);
        if ((iVar6 <= iVar5) && (uVar16 <= param_2 || iVar5 != iVar6)) break;
        iVar14 = iVar8 + -1;
        if (iVar14 < iVar15) goto LAB_0049c21c;
      }
      if ((iVar5 == iVar6 || iVar5 < iVar6) && (param_2 <= uVar16 || iVar5 != iVar6)) {
        if (*plVar3 + (long)iVar8 * 8 != 0) goto LAB_0049c3c0;
        break;
      }
      iVar15 = iVar8 + 1;
    } while (iVar15 <= iVar14);
  }
LAB_0049c21c:
  plVar4 = (long *)(param_1 + 0x48);
  iVar14 = *(int *)(param_1 + 0x50) + -1;
  if (-1 < iVar14) {
    iVar5 = *(int *)(param_2 + 0x48);
    iVar15 = 0;
    do {
      while( true ) {
        iVar8 = iVar14 - iVar15;
        if (iVar8 < 0) {
          iVar8 = iVar8 + 1;
        }
        iVar8 = iVar15 + (iVar8 >> 1);
        uVar16 = *(ulong *)(*plVar4 + (long)iVar8 * 8);
        iVar6 = *(int *)(uVar16 + 0x48);
        if ((iVar6 <= iVar5) && (uVar16 <= param_2 || iVar5 != iVar6)) break;
        iVar14 = iVar8 + -1;
        if (iVar14 < iVar15) goto LAB_0049c2a0;
      }
      if ((iVar5 == iVar6 || iVar5 < iVar6) && (param_2 <= uVar16 || iVar5 != iVar6)) {
        if (*plVar4 + (long)iVar8 * 8 != 0) goto LAB_0049c3c0;
        break;
      }
      iVar15 = iVar8 + 1;
    } while (iVar15 <= iVar14);
  }
LAB_0049c2a0:
  uVar2 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x60) + 1;
  if (*(uint *)(param_1 + 0x54) < uVar2) {
    puVar10 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)(uVar2 * 2) << 3);
    if (puVar10 != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1 + 0x48);
      if ((puVar13 != (undefined8 *)0x0) && (puVar13 != puVar10)) {
        uVar7 = *(uint *)(param_1 + 0x50);
        if (uVar7 != 0) {
          uVar16 = 0;
          puVar13 = puVar10;
          do {
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = 0;
            }
            lVar1 = uVar16 * 8;
            uVar16 = uVar16 + 1;
            *puVar13 = *(undefined8 *)(*plVar4 + lVar1);
            puVar13 = puVar13 + 1;
          } while (uVar7 != uVar16);
          puVar13 = (undefined8 *)*plVar4;
        }
        FUN_00404870(*(undefined4 *)puVar9,puVar13);
      }
      *(undefined8 **)(param_1 + 0x48) = puVar10;
      *(uint *)(param_1 + 0x54) = uVar2 * 2;
      goto LAB_0049c328;
    }
LAB_0049c3c8:
    uVar12 = 0x34;
  }
  else {
LAB_0049c328:
    puVar9 = PTR_DAT_02712a90;
    if (*(uint *)(param_1 + 100) < uVar2) {
      puVar10 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)(uVar2 * 2) << 3);
      if (puVar10 == (undefined8 *)0x0) goto LAB_0049c3c8;
      puVar13 = *(undefined8 **)(param_1 + 0x58);
      if ((puVar13 != (undefined8 *)0x0) && (puVar13 != puVar10)) {
        uVar7 = *(uint *)(param_1 + 0x60);
        if (uVar7 != 0) {
          uVar16 = 0;
          puVar13 = puVar10;
          do {
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = 0;
            }
            lVar1 = uVar16 * 8;
            uVar16 = uVar16 + 1;
            *puVar13 = *(undefined8 *)(*plVar3 + lVar1);
            puVar13 = puVar13 + 1;
          } while (uVar7 != uVar16);
          puVar13 = (undefined8 *)*plVar3;
        }
        FUN_00404870(*(undefined4 *)puVar9,puVar13);
      }
      *(undefined8 **)(param_1 + 0x58) = puVar10;
      *(uint *)(param_1 + 100) = uVar2 * 2;
    }
    if ((param_3 & 1) == 0) {
      plVar4 = plVar3;
    }
    puVar11 = (ulong *)FUN_00478b70(plVar4,param_2);
    if (puVar11 != (ulong *)0x0) {
      *puVar11 = param_2;
    }
LAB_0049c3c0:
    uVar12 = 1;
  }
  return uVar12;
}


