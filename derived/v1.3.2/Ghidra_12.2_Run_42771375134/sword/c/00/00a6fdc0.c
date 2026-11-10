/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a6fdc0; name: FUN_00a6fdc0
 */


uint FUN_00a6fdc0(long *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = (long *)param_1[0xa9];
  if (plVar6 == (long *)0x0) {
    uVar2 = 0;
    plVar6 = (long *)param_1[0xaa];
  }
  else {
    plVar5 = plVar6 + 9;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
    if (((uVar4 & 1) == 0) || (cVar1 = FUN_00ad59f0(plVar6), cVar1 == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x748))(param_1,0);
      uVar2 = uVar2 ^ param_2 ^ 1;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
    plVar6 = (long *)param_1[0xaa];
  }
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 9;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
    if (((uVar4 & 1) != 0) && (cVar1 = FUN_00ad59f0(plVar6), cVar1 != '\0')) {
      uVar3 = (**(code **)(*param_1 + 0x748))(param_1,1);
      uVar2 = uVar2 | uVar3 ^ param_2 ^ 1;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar6 = (long *)param_1[0xab];
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 9;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
    if (((uVar4 & 1) != 0) && (cVar1 = FUN_00ad59f0(plVar6), cVar1 != '\0')) {
      uVar3 = (**(code **)(*param_1 + 0x748))(param_1,2);
      uVar2 = uVar2 | uVar3 ^ param_2 ^ 1;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar6 = (long *)param_1[0xac];
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 9;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
    if (((uVar4 & 1) != 0) && (cVar1 = FUN_00ad59f0(plVar6), cVar1 != '\0')) {
      uVar3 = (**(code **)(*param_1 + 0x748))(param_1,3);
      uVar2 = uVar2 | uVar3 ^ param_2 ^ 1;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar6 = (long *)param_1[0xad];
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 9;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
    if (((uVar4 & 1) != 0) && (cVar1 = FUN_00ad59f0(plVar6), cVar1 != '\0')) {
      uVar3 = (**(code **)(*param_1 + 0x748))(param_1,4);
      uVar2 = uVar2 | uVar3 ^ param_2 ^ 1;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar6 = (long *)param_1[0xae];
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 9;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
    if (((uVar4 & 1) != 0) && (cVar1 = FUN_00ad59f0(plVar6), cVar1 != '\0')) {
      uVar3 = (**(code **)(*param_1 + 0x748))(param_1,5);
      uVar2 = uVar2 | uVar3 ^ param_2 ^ 1;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar6 = (long *)param_1[0xaf];
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 9;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
    if (((uVar4 & 1) != 0) && (cVar1 = FUN_00ad59f0(plVar6), cVar1 != '\0')) {
      uVar3 = (**(code **)(*param_1 + 0x748))(param_1,6);
      uVar2 = uVar2 | uVar3 ^ param_2 ^ 1;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  return uVar2 & 1;
}


