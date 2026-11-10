/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054b050; name: FUN_0054b050
 */


undefined8 FUN_0054b050(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  FUN_00551860(param_1 + 0x30,&DAT_01d38550);
  FUN_00551860(param_1 + 0x40,&DAT_01d38550);
  plVar5 = *(long **)(param_1 + 0x2f8);
  plVar2 = *(long **)(param_1 + 0x300);
  *(undefined2 *)(param_1 + 0x2f0) = 0;
  puVar1 = PTR_PTR_02713988;
  if (plVar5 != plVar2) {
    do {
      lVar3 = *plVar5;
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)puVar1;
        FUN_00551380(lVar3 + 8);
        FUN_005b9b10(uVar4,lVar3);
        plVar2 = *(long **)(param_1 + 0x300);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar2);
    plVar5 = *(long **)(param_1 + 0x2f8);
  }
  *(long **)(param_1 + 0x300) = plVar5;
  puVar1 = PTR_PTR_02713988;
  plVar5 = *(long **)(param_1 + 0x310);
  plVar2 = *(long **)(param_1 + 0x318);
  if (plVar5 != plVar2) {
    do {
      lVar3 = *plVar5;
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)puVar1;
        FUN_0054ac30(lVar3);
        if (*(long *)(lVar3 + 0x70) != 0) {
          *(long *)(lVar3 + 0x78) = *(long *)(lVar3 + 0x70);
          FUN_005b9b10(*(undefined8 *)puVar1);
        }
        FUN_00551380(lVar3 + 0x20);
        FUN_00551380(lVar3 + 8);
        FUN_005b9b10(uVar4,lVar3);
        plVar2 = *(long **)(param_1 + 0x318);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar2);
    plVar5 = *(long **)(param_1 + 0x310);
  }
  *(long **)(param_1 + 0x318) = plVar5;
  puVar1 = PTR_PTR_02713988;
  plVar5 = *(long **)(param_1 + 0x328);
  plVar2 = *(long **)(param_1 + 0x330);
  if (plVar5 != plVar2) {
    do {
      lVar3 = *plVar5;
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)puVar1;
        if ((*(char *)(lVar3 + 0x40) != '\0') && (*(long *)(lVar3 + 0x48) != 0)) {
          FUN_005b9b10(uVar4,*(long *)(lVar3 + 0x48) + -8);
        }
        *(undefined1 *)(lVar3 + 0x40) = 0;
        *(undefined8 *)(lVar3 + 0x48) = 0;
        *(undefined4 *)(lVar3 + 0x1c) = 0;
        FUN_00551380(lVar3 + 0x30);
        FUN_00551380(lVar3 + 8);
        FUN_005b9b10(uVar4,lVar3);
        plVar2 = *(long **)(param_1 + 0x330);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar2);
    plVar5 = *(long **)(param_1 + 0x328);
  }
  *(long **)(param_1 + 0x330) = plVar5;
  if (*(long *)(param_1 + 0x3c8) != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,*(long *)(param_1 + 0x3c8) + -8);
    *(undefined8 *)(param_1 + 0x3c8) = 0;
  }
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (*(char *)(param_1 + 0x340) != '\0') {
    if (*(long *)(param_1 + 0x348) == 0) goto LAB_0054b220;
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,*(long *)(param_1 + 0x348) + -8);
  }
  *(undefined8 *)(param_1 + 0x348) = 0;
LAB_0054b220:
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  return 0;
}


