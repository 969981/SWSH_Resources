/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a97bf0; name: FUN_00a97bf0
 */


byte FUN_00a97bf0(long param_1)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 8);
  plVar5 = *(long **)(lVar4 + 0x548);
  bVar1 = false;
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar5 + 400))(plVar5);
    if (((uVar3 & 1) == 0) || (uVar3 = FUN_00ad2d90(plVar5), (uVar3 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      cVar2 = FUN_00ad59f0(plVar5);
      bVar1 = cVar2 != '\0';
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(lVar4 + 0x550);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar5 + 400))(plVar5);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN_00ad2d90(plVar5), (uVar3 & 1) != 0)) {
      cVar2 = FUN_00ad59f0(plVar5);
      if (cVar2 != '\0') {
        bVar1 = bVar1 | 2;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(lVar4 + 0x558);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar5 + 400))(plVar5);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN_00ad2d90(plVar5), (uVar3 & 1) != 0)) {
      cVar2 = FUN_00ad59f0(plVar5);
      if (cVar2 != '\0') {
        bVar1 = bVar1 | 4;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(lVar4 + 0x560);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar5 + 400))(plVar5);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN_00ad2d90(plVar5), (uVar3 & 1) != 0)) {
      cVar2 = FUN_00ad59f0(plVar5);
      if (cVar2 != '\0') {
        bVar1 = bVar1 | 8;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(lVar4 + 0x568);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar5 + 400))(plVar5);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN_00ad2d90(plVar5), (uVar3 & 1) != 0)) {
      cVar2 = FUN_00ad59f0(plVar5);
      if (cVar2 != '\0') {
        bVar1 = bVar1 | 0x10;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(lVar4 + 0x570);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar5 + 400))(plVar5);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN_00ad2d90(plVar5), (uVar3 & 1) != 0)) {
      cVar2 = FUN_00ad59f0(plVar5);
      if (cVar2 != '\0') {
        bVar1 = bVar1 | 0x20;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(lVar4 + 0x578);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar5 + 400))(plVar5);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN_00ad2d90(plVar5), (uVar3 & 1) != 0)) {
      cVar2 = FUN_00ad59f0(plVar5);
      if (cVar2 != '\0') {
        bVar1 = bVar1 | 0x40;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  return bVar1;
}


