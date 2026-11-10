/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054ac30; name: FUN_0054ac30
 */


undefined8 FUN_0054ac30(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar2 = PTR_PTR_02713988;
  plVar7 = *(long **)(param_1 + 0x70);
  plVar3 = *(long **)(param_1 + 0x78);
  if (plVar7 != plVar3) {
    do {
      lVar4 = *plVar7;
      if (lVar4 != 0) {
        uVar6 = *(undefined8 *)puVar2;
        FUN_00551380(lVar4 + 8);
        FUN_005b9b10(uVar6,lVar4);
        plVar3 = *(long **)(param_1 + 0x78);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar3);
    plVar7 = *(long **)(param_1 + 0x70);
  }
  *(long **)(param_1 + 0x78) = plVar7;
  *(undefined1 *)(param_1 + 0x68) = 0;
  if ((((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x38) == 0)) ||
      (plVar7 = *(long **)(param_1 + 0x40), plVar7 == (long *)0x0)) ||
     (((*(long *)(param_1 + 0x30) == DAT_0275e808 && (*(long *)(param_1 + 0x38) == DAT_0275e810)) &&
      (plVar7 == DAT_0275e818)))) goto LAB_0054ae04;
  puVar5 = *(undefined8 **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x4c) = 0;
  if (puVar5 == (undefined8 *)0x0) {
LAB_0054ad2c:
    (**(code **)(*plVar7 + 0x18))();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    iVar1 = *(int *)(puVar5 + 1);
    *(int *)(puVar5 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      uVar6 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)*puVar5)(puVar5);
      FUN_005b9b10(uVar6,puVar5);
    }
    plVar7 = *(long **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (plVar7 != (long *)0x0) goto LAB_0054ad2c;
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0xc0) != '\0') {
    if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))();
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))();
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))();
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
  }
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x18))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
LAB_0054ae04:
  FUN_00551860(param_1 + 0x20,&DAT_01d38550);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return 0;
}


