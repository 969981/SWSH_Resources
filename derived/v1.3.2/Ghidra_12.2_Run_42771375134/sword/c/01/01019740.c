/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01019740; name: FUN_01019740
 */


undefined8 FUN_01019740(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  lVar2 = *(long *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(bool *)(param_1 + 0x88) = lVar2 != 0;
  if (lVar2 == 0) {
    return 2;
  }
  while (iVar1 = FUN_01018fe0(lVar2,*(undefined8 *)(param_1 + 0x60)), iVar1 == 3) {
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar2 == 0) {
      return 2;
    }
  }
  if (iVar1 != 1) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x78);
    if (*(long *)(lVar2 + 0x60) == 0) {
      *(undefined8 *)(param_1 + 0x78) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      *(undefined1 *)(param_1 + 0x89) = 1;
      return 1;
    }
    plVar6 = (long *)(*(long *)(lVar2 + 0x60) + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar2 = *(long *)(param_1 + 0x78);
    lVar3 = *(long *)(lVar2 + 0x60);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      lVar2 = *(long *)(param_1 + 0x78);
    }
    lVar4 = *(long *)(lVar2 + 0x60);
    *(undefined8 *)(lVar2 + 0x60) = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    lVar2 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar2 == 0) {
      *(long *)(param_1 + 0x78) = lVar3;
      return 0;
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    lVar2 = *(long *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = lVar3;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      return 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      lVar2 = *(long *)(param_1 + 0x80);
    }
    *(long *)(param_1 + 0x78) = lVar2;
    *(undefined8 *)(param_1 + 0x80) = uVar5;
  }
  return 0;
}


