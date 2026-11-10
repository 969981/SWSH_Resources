/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a97900; name: FUN_00a97900
 */


byte FUN_00a97900(long param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  lVar5 = *(long *)(param_1 + 8);
  plVar6 = *(long **)(lVar5 + 0x548);
  bVar2 = false;
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 9;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
    if (((uVar4 & 1) == 0) || (uVar4 = FUN_00ad2d90(plVar6), (uVar4 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      cVar3 = FUN_00ad59f0(plVar6);
      bVar2 = cVar3 == '\0';
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = *(long *)(param_1 + 8);
  }
  plVar6 = *(long **)(lVar5 + 0x550);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 9;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
    bVar1 = bVar2;
    if (((uVar4 & 1) != 0) && (uVar4 = FUN_00ad2d90(plVar6), (uVar4 & 1) != 0)) {
      cVar3 = FUN_00ad59f0(plVar6);
      bVar1 = bVar2 | 2;
      if (cVar3 != '\0') {
        bVar1 = bVar2;
      }
    }
    bVar2 = bVar1;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = *(long *)(param_1 + 8);
  }
  plVar6 = *(long **)(lVar5 + 0x558);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 9;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
    bVar1 = bVar2;
    if (((uVar4 & 1) != 0) && (uVar4 = FUN_00ad2d90(plVar6), (uVar4 & 1) != 0)) {
      cVar3 = FUN_00ad59f0(plVar6);
      bVar1 = bVar2 | 4;
      if (cVar3 != '\0') {
        bVar1 = bVar2;
      }
    }
    bVar2 = bVar1;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = *(long *)(param_1 + 8);
  }
  plVar6 = *(long **)(lVar5 + 0x560);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 9;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
    bVar1 = bVar2;
    if (((uVar4 & 1) != 0) && (uVar4 = FUN_00ad2d90(plVar6), (uVar4 & 1) != 0)) {
      cVar3 = FUN_00ad59f0(plVar6);
      bVar1 = bVar2 | 8;
      if (cVar3 != '\0') {
        bVar1 = bVar2;
      }
    }
    bVar2 = bVar1;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = *(long *)(param_1 + 8);
  }
  plVar6 = *(long **)(lVar5 + 0x568);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 9;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
    bVar1 = bVar2;
    if (((uVar4 & 1) != 0) && (uVar4 = FUN_00ad2d90(plVar6), (uVar4 & 1) != 0)) {
      cVar3 = FUN_00ad59f0(plVar6);
      bVar1 = bVar2 | 0x10;
      if (cVar3 != '\0') {
        bVar1 = bVar2;
      }
    }
    bVar2 = bVar1;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = *(long *)(param_1 + 8);
  }
  plVar6 = *(long **)(lVar5 + 0x570);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 9;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
    bVar1 = bVar2;
    if (((uVar4 & 1) != 0) && (uVar4 = FUN_00ad2d90(plVar6), (uVar4 & 1) != 0)) {
      cVar3 = FUN_00ad59f0(plVar6);
      bVar1 = bVar2 | 0x20;
      if (cVar3 != '\0') {
        bVar1 = bVar2;
      }
    }
    bVar2 = bVar1;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = *(long *)(param_1 + 8);
  }
  plVar6 = *(long **)(lVar5 + 0x578);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 9;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
    bVar1 = bVar2;
    if (((uVar4 & 1) != 0) && (uVar4 = FUN_00ad2d90(plVar6), (uVar4 & 1) != 0)) {
      cVar3 = FUN_00ad59f0(plVar6);
      bVar1 = bVar2 | 0x40;
      if (cVar3 != '\0') {
        bVar1 = bVar2;
      }
    }
    bVar2 = bVar1;
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  return bVar2;
}


