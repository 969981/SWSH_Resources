/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a6fb60; name: FUN_00a6fb60
 */


char FUN_00a6fb60(long param_1)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(param_1 + 0x548);
  cVar1 = false;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 9;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = (**(code **)(*plVar4 + 400))(plVar4);
    if ((uVar3 & 1) == 0) {
      cVar1 = false;
    }
    else {
      cVar1 = FUN_00ad59f0(plVar4);
      cVar1 = cVar1 != '\0';
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar4 = *(long **)(param_1 + 0x550);
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 9;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = (**(code **)(*plVar4 + 400))(plVar4);
    if (((uVar3 & 1) != 0) && (cVar2 = FUN_00ad59f0(plVar4), cVar2 != '\0')) {
      cVar1 = cVar1 + '\x01';
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar4 = *(long **)(param_1 + 0x558);
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 9;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = (**(code **)(*plVar4 + 400))(plVar4);
    if (((uVar3 & 1) != 0) && (cVar2 = FUN_00ad59f0(plVar4), cVar2 != '\0')) {
      cVar1 = cVar1 + '\x01';
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar4 = *(long **)(param_1 + 0x560);
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 9;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = (**(code **)(*plVar4 + 400))(plVar4);
    if (((uVar3 & 1) != 0) && (cVar2 = FUN_00ad59f0(plVar4), cVar2 != '\0')) {
      cVar1 = cVar1 + '\x01';
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar4 = *(long **)(param_1 + 0x568);
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 9;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = (**(code **)(*plVar4 + 400))(plVar4);
    if (((uVar3 & 1) != 0) && (cVar2 = FUN_00ad59f0(plVar4), cVar2 != '\0')) {
      cVar1 = cVar1 + '\x01';
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar4 = *(long **)(param_1 + 0x570);
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 9;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = (**(code **)(*plVar4 + 400))(plVar4);
    if (((uVar3 & 1) != 0) && (cVar2 = FUN_00ad59f0(plVar4), cVar2 != '\0')) {
      cVar1 = cVar1 + '\x01';
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar4 = *(long **)(param_1 + 0x578);
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 9;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = (**(code **)(*plVar4 + 400))(plVar4);
    if (((uVar3 & 1) != 0) && (cVar2 = FUN_00ad59f0(plVar4), cVar2 != '\0')) {
      cVar1 = cVar1 + '\x01';
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  return cVar1;
}


