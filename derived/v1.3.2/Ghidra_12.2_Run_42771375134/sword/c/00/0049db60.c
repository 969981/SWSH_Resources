/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049db60; name: FUN_0049db60
 */


void FUN_0049db60(long *param_1,long param_2,int param_3,int param_4,undefined1 *param_5)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  int *piVar15;
  
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 == 0) {
LAB_0049dbc8:
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
    }
    return;
  }
  uVar3 = (int)param_2 + param_3;
  uVar10 = 0;
  if (uVar4 != 0) {
    uVar10 = uVar3 / uVar4;
  }
  plVar14 = *(long **)(param_1[3] + (ulong)(uVar3 - uVar10 * uVar4) * 8);
  while( true ) {
    if (plVar14 == (long *)0x0) goto LAB_0049dbc8;
    if ((*plVar14 == param_2) && ((int)plVar14[1] == param_3)) break;
    plVar14 = (long *)plVar14[2];
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = (int)plVar14[0xb] != 0;
  }
  if (*(uint *)(plVar14 + 0xb) == 0) {
    return;
  }
  piVar15 = (int *)plVar14[10];
  lVar8 = (ulong)*(uint *)(plVar14 + 0xb) * 0x18;
  while (*piVar15 != param_4) {
    piVar15 = piVar15 + 6;
    lVar8 = lVar8 + -0x18;
    if (lVar8 == 0) {
      return;
    }
  }
  uVar4 = piVar15[1];
  if (*(long *)(piVar15 + 2) != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    piVar15[2] = 0;
    piVar15[3] = 0;
  }
  piVar15[4] = 0;
  piVar15[5] = 0;
  uVar10 = *(uint *)(plVar14 + 0xb);
  piVar9 = (int *)(plVar14[10] + (ulong)uVar10 * 0x18 + -0x18);
  if (piVar15 < piVar9) {
    do {
      piVar11 = piVar15 + 6;
      *(undefined8 *)piVar15 = *(undefined8 *)piVar11;
      *(undefined8 *)(piVar15 + 2) = *(undefined8 *)(piVar15 + 8);
      *(undefined8 *)(piVar15 + 4) = *(undefined8 *)(piVar15 + 10);
      piVar15 = piVar11;
    } while (piVar11 < piVar9);
    uVar10 = *(uint *)(plVar14 + 0xb);
  }
  *(uint *)(plVar14 + 0xb) = uVar10 - 1;
  uVar10 = *(uint *)(param_1 + 1);
  if (uVar10 != 0) {
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = uVar4 / uVar10;
    }
    for (puVar7 = *(uint **)(*param_1 + (ulong)(uVar4 - uVar6 * uVar10) * 8); puVar7 != (uint *)0x0;
        puVar7 = *(uint **)(puVar7 + 2)) {
      if (*puVar7 == uVar4) {
        FUN_0049c400(puVar7,plVar14);
        break;
      }
    }
  }
  FUN_00477e90(*(undefined8 *)PTR_DAT_02712dc0,plVar14,uVar4);
  if ((int)plVar14[0xb] != 0) {
    return;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 != 0) {
    uVar10 = 0;
    if (uVar4 != 0) {
      uVar10 = uVar3 / uVar4;
    }
    plVar2 = (long *)(param_1[3] + (ulong)(uVar3 - uVar10 * uVar4) * 8);
    plVar13 = (long *)*plVar2;
    if (plVar13 != (long *)0x0) {
      plVar12 = (long *)0x0;
      do {
        if ((*plVar13 == param_2) && ((int)plVar13[1] == param_3)) {
          if (plVar12 != (long *)0x0) {
            plVar2 = plVar12 + 2;
          }
          *plVar2 = plVar13[2];
          *(int *)(param_1 + 5) = (int)param_1[5] + -1;
          break;
        }
        plVar1 = plVar13 + 2;
        plVar12 = plVar13;
        plVar13 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
    }
  }
  uVar5 = *(undefined4 *)PTR_DAT_02712a90;
  if (plVar14[10] != 0) {
    *(undefined4 *)(plVar14 + 0xb) = 0;
    FUN_00404870(uVar5);
    plVar14[10] = 0;
    *(undefined4 *)((long)plVar14 + 0x5c) = 0;
  }
  FUN_00404870(uVar5,plVar14);
  return;
}


