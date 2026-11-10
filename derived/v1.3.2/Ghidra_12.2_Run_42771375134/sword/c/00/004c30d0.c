/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c30d0; name: FUN_004c30d0
 */


void FUN_004c30d0(long param_1,long param_2,char *param_3,undefined4 param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    FUN_0048f980(*(undefined8 *)PTR_DAT_02712ad0,*(int *)(param_2 + 0x2c),param_3);
  }
  puVar4 = PTR_DAT_02712a90;
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar14 = (ulong)uVar2;
  puVar6 = puVar8 + uVar14 * 4;
  plVar13 = *(long **)(param_2 + 0x40);
  puVar15 = puVar8;
  if (uVar2 == 0) {
LAB_004c3164:
    if (puVar15 == puVar6) goto LAB_004c3174;
    puVar15 = puVar15 + 1;
  }
  else {
    lVar11 = uVar14 << 5;
    do {
      if ((long *)*puVar15 == plVar13) goto LAB_004c3164;
      lVar11 = lVar11 + -0x20;
      puVar15 = puVar15 + 4;
    } while (lVar11 != 0);
LAB_004c3174:
    if (uVar2 == 0) {
LAB_004c31a8:
      if (puVar8 == puVar6) goto LAB_004c31d0;
      puVar15 = puVar8 + 1;
      *(undefined2 *)(puVar8 + 3) = 0;
      puVar8[2] = 0;
      *puVar15 = 0;
    }
    else {
      lVar11 = uVar14 << 5;
      do {
        if ((long *)*puVar8 == plVar13) goto LAB_004c31a8;
        lVar11 = lVar11 + -0x20;
        puVar8 = puVar8 + 4;
      } while (lVar11 != 0);
LAB_004c31d0:
      uVar16 = *(uint *)(param_1 + 0x1c);
      if (uVar16 <= uVar2) {
        uVar16 = uVar16 + 1;
        lVar11 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar16 << 5);
        if (lVar11 == 0) {
          return;
        }
        lVar7 = *(long *)(param_1 + 0x10);
        if ((lVar7 != 0) && (lVar7 != lVar11)) {
          uVar14 = (ulong)*(uint *)(param_1 + 0x18);
          if (*(uint *)(param_1 + 0x18) != 0) {
            lVar7 = 0;
            do {
              puVar15 = (undefined8 *)(lVar11 + lVar7);
              if (puVar15 != (undefined8 *)0x0) {
                lVar1 = lVar11 + lVar7;
                *(undefined2 *)(lVar1 + 0x18) = 0;
                *(undefined8 *)(lVar1 + 8) = 0;
                *(undefined8 *)(lVar1 + 0x10) = 0;
              }
              puVar6 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar7);
              lVar7 = lVar7 + 0x20;
              puVar15[3] = puVar6[3];
              puVar15[2] = puVar6[2];
              puVar15[1] = puVar6[1];
              uVar14 = uVar14 - 1;
              *puVar15 = *puVar6;
            } while (uVar14 != 0);
            lVar7 = *(long *)(param_1 + 0x10);
          }
          FUN_00404870(*(undefined4 *)puVar4,lVar7);
        }
        *(long *)(param_1 + 0x10) = lVar11;
        *(uint *)(param_1 + 0x1c) = uVar16;
      }
      if (uVar16 <= uVar2) {
        return;
      }
      uVar2 = *(uint *)(param_1 + 0x18);
      lVar11 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x18) = uVar2 + 1;
      puVar15 = (undefined8 *)(lVar11 + (ulong)uVar2 * 0x20);
      if (puVar15 == (undefined8 *)0x0) {
        return;
      }
      *puVar15 = plVar13;
      lVar11 = lVar11 + (ulong)uVar2 * 0x20;
      puVar15 = (undefined8 *)(lVar11 + 8);
      *puVar15 = 0;
      *(undefined2 *)(lVar11 + 0x18) = 0;
      *(undefined8 *)(lVar11 + 0x10) = 0;
    }
    plVar13 = *(long **)(param_2 + 0x40);
  }
  iVar5 = (**(code **)(*plVar13 + 0x88))(plVar13);
  if (((iVar5 == 0) || (iVar5 = (**(code **)(*plVar13 + 0x88))(plVar13), iVar5 == 10)) &&
     (*param_3 != -0x50)) {
    return;
  }
  puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  FUN_004c48c0(puVar6,param_2,plVar13);
  uVar14 = FUN_004c49e0(puVar6,param_3,param_4);
  if ((uVar14 & 1) == 0) goto LAB_004c339c;
  cVar3 = *param_3;
  if (cVar3 != -0x80) {
    if (cVar3 != -0x70) goto LAB_004c33cc;
    if (param_3[3] != '\0') goto LAB_004c3418;
  }
  plVar13 = (long *)puVar15[1];
  if (plVar13 != (long *)0x0) {
    if ((param_5 & 1) == 0) {
      do {
        uVar14 = FUN_004c4b40(puVar6,plVar13);
        if ((uVar14 & 1) != 0) goto LAB_004c33c0;
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        if ((plVar13[3] == puVar6[3]) && (uVar14 = FUN_004c4b40(puVar6,plVar13), (uVar14 & 1) != 0))
        goto LAB_004c33c0;
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
LAB_004c339c:
  FUN_004c4930(puVar6);
  return;
LAB_004c33c0:
  cVar3 = *param_3;
  if (cVar3 == -0x70) goto LAB_004c3418;
LAB_004c33cc:
  if ((((cVar3 != -0x80) && ((cVar3 != -0x70 || (param_3[3] != '\0')))) &&
      (*(char *)(puVar6 + 5) == -0x50)) &&
     ((*(char *)((long)puVar6 + 0x2a) == '{' || (*(char *)((long)puVar6 + 0x2a) == 'x')))) {
    FUN_004c3bc0(param_1,puVar6[3],param_4,*(undefined1 *)((long)puVar6 + 0x29));
  }
LAB_004c3418:
  puVar8 = puVar15 + 1;
  if ((undefined8 *)*puVar8 == (undefined8 *)0x0) {
    *puVar6 = 0;
    *puVar8 = puVar6;
  }
  else {
    puVar10 = (undefined8 *)*puVar8;
    puVar12 = (undefined8 *)0x0;
    do {
      puVar9 = puVar10;
      puVar10 = puVar9;
      if (*(int *)((long)puVar6 + 0x2c) < *(int *)((long)puVar9 + 0x2c)) goto LAB_004c3450;
      puVar10 = (undefined8 *)*puVar9;
      puVar12 = puVar9;
    } while (puVar10 != (undefined8 *)0x0);
    puVar9 = (undefined8 *)0x0;
LAB_004c3450:
    *puVar6 = puVar10;
    if (puVar12 != (undefined8 *)0x0) {
      puVar8 = puVar12;
    }
    *puVar8 = puVar6;
    if (puVar9 != (undefined8 *)0x0) {
      return;
    }
  }
  *puVar15 = puVar6;
  return;
}


