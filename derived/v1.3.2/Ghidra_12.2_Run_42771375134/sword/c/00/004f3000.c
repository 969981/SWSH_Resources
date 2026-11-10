/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f3000; name: FUN_004f3000
 */


void FUN_004f3000(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  *param_1 = (long)(PTR_DAT_02713728 + 0x10);
  lVar5 = param_1[0x1b];
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x8c) = *(int *)(lVar5 + 0x8c) + -1;
    param_1[0x1b] = 0;
  }
  lVar5 = param_1[1];
  if (*(uint *)(lVar5 + 0x40) < 2) {
    lVar7 = 0;
    puVar6 = (undefined4 *)param_1[0x1c];
    iVar2 = (int)param_1[0x1d];
  }
  else {
    lVar7 = *(long *)(*(long *)(lVar5 + 0x38) + 8);
    puVar6 = (undefined4 *)param_1[0x1c];
    iVar2 = (int)param_1[0x1d];
  }
  if (iVar2 == 0) {
    uVar4 = 0;
    puVar8 = puVar6;
  }
  else if (lVar7 == 0) {
    puVar9 = puVar6 + 6;
    FUN_00468bd0(*puVar6,*(undefined8 *)(lVar5 + 0x48),3,0,0xab,0,0,0);
    puVar6 = (undefined4 *)param_1[0x1c];
    uVar4 = *(uint *)(param_1 + 0x1d);
    puVar8 = puVar9;
    if (puVar9 != puVar6 + (ulong)uVar4 * 6) {
      do {
        puVar8 = puVar9 + 6;
        FUN_00468bd0(*puVar9,*(undefined8 *)(param_1[1] + 0x48),3,0,0xab,0,0,0);
        puVar6 = (undefined4 *)param_1[0x1c];
        uVar4 = *(uint *)(param_1 + 0x1d);
        puVar9 = puVar8;
      } while (puVar8 != puVar6 + (ulong)uVar4 * 6);
    }
  }
  else {
    while( true ) {
      puVar8 = puVar6 + 6;
      FUN_0045aa50(0,lVar7,*(undefined8 *)(lVar5 + 0x48),*puVar6);
      FUN_00468bd0(*puVar6,*(undefined8 *)(param_1[1] + 0x48),3,0,0xab,0,0,0);
      puVar6 = (undefined4 *)param_1[0x1c];
      uVar4 = *(uint *)(param_1 + 0x1d);
      if (puVar8 == puVar6 + (ulong)uVar4 * 6) break;
      lVar5 = param_1[1];
      puVar6 = puVar8;
    }
  }
  if (puVar6 != (undefined4 *)0x0) {
    if (uVar4 != 0) {
      do {
        FUN_004e7ce0(puVar6);
        puVar6 = puVar6 + 6;
      } while (puVar8 != puVar6);
      puVar6 = (undefined4 *)param_1[0x1c];
    }
    *(undefined4 *)(param_1 + 0x1d) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640,puVar6);
    param_1[0x1c] = 0;
    *(undefined4 *)((long)param_1 + 0xec) = 0;
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    FUN_004047f0(*(undefined4 *)PTR_DAT_02713640);
    param_1[0xe] = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
  }
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1 + 0x21) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    param_1[0x20] = 0;
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
  }
  if ((param_1[0x10] != 0) && ((char)param_1[0x11] != '\0')) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  param_1[0x10] = 0;
  *param_1 = (long)(PTR_DAT_02713720 + 0x10);
  if (param_1[2] == 0) {
    lVar5 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar5 = param_1[2];
  }
  puVar3 = PTR_DAT_02713630;
  lVar7 = param_1[3];
  plVar1 = (long *)(PTR_DAT_02713630 + 0x10);
  if (*(long **)(PTR_DAT_02713630 + 0x10) != param_1) {
    plVar1 = (long *)(lVar7 + 0x10);
  }
  *plVar1 = lVar5;
  if (*(long **)(puVar3 + 8) == param_1) {
    *(long *)(puVar3 + 8) = lVar7;
  }
  *(int *)puVar3 = *(int *)puVar3 + -1;
  return;
}


