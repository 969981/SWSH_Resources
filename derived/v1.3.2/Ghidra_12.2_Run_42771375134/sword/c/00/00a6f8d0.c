/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a6f8d0; name: FUN_00a6f8d0
 */


undefined8 FUN_00a6f8d0(long param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x548);
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 9;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar2 = (**(code **)(*plVar4 + 400))(plVar4);
    if (((uVar2 & 1) != 0) && (cVar1 = FUN_00ad59f0(plVar4), cVar1 != '\0')) goto LAB_00a6fb04;
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar4 = *(long **)(param_1 + 0x550);
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 9;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar2 = (**(code **)(*plVar4 + 400))(plVar4);
    if (((uVar2 & 1) != 0) && (cVar1 = FUN_00ad59f0(plVar4), cVar1 != '\0')) goto LAB_00a6fb04;
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar4 = *(long **)(param_1 + 0x558);
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 9;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar2 = (**(code **)(*plVar4 + 400))(plVar4);
    if (((uVar2 & 1) != 0) && (cVar1 = FUN_00ad59f0(plVar4), cVar1 != '\0')) goto LAB_00a6fb04;
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar4 = *(long **)(param_1 + 0x560);
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 9;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar2 = (**(code **)(*plVar4 + 400))(plVar4);
    if (((uVar2 & 1) != 0) && (cVar1 = FUN_00ad59f0(plVar4), cVar1 != '\0')) goto LAB_00a6fb04;
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar4 = *(long **)(param_1 + 0x568);
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 9;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar2 = (**(code **)(*plVar4 + 400))(plVar4);
    if (((uVar2 & 1) != 0) && (cVar1 = FUN_00ad59f0(plVar4), cVar1 != '\0')) goto LAB_00a6fb04;
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar4 = *(long **)(param_1 + 0x570);
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 9;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar2 = (**(code **)(*plVar4 + 400))(plVar4);
    if (((uVar2 & 1) != 0) && (cVar1 = FUN_00ad59f0(plVar4), cVar1 != '\0')) goto LAB_00a6fb04;
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar4 = *(long **)(param_1 + 0x578);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  plVar3 = plVar4 + 9;
  (**(code **)(*plVar3 + 0x10))(plVar3);
  uVar2 = (**(code **)(*plVar4 + 400))(plVar4);
  if (((uVar2 & 1) == 0) || (cVar1 = FUN_00ad59f0(plVar4), cVar1 == '\0')) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    return 0;
  }
LAB_00a6fb04:
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return 1;
}


