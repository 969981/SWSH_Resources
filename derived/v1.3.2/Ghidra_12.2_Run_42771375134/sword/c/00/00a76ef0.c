/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a76ef0; name: FUN_00a76ef0
 */


undefined8 FUN_00a76ef0(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  
  if (*(uint *)(param_1 + 0x1704) != 0xff) {
    lVar2 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x1704) * 8 + 0x548);
    if (lVar2 == 0) {
      cVar1 = FUN_00ad59f0(0);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      cVar1 = FUN_00ad59f0(lVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if (*(uint *)(param_1 + 0x1708) != 0xff) {
    lVar2 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x1708) * 8 + 0x548);
    if (lVar2 == 0) {
      cVar1 = FUN_00ad59f0(0);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      cVar1 = FUN_00ad59f0(lVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if (*(uint *)(param_1 + 0x170c) != 0xff) {
    lVar2 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x170c) * 8 + 0x548);
    if (lVar2 == 0) {
      cVar1 = FUN_00ad59f0(0);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      cVar1 = FUN_00ad59f0(lVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if (*(uint *)(param_1 + 0x1710) != 0xff) {
    lVar2 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x1710) * 8 + 0x548);
    if (lVar2 == 0) {
      cVar1 = FUN_00ad59f0(0);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      cVar1 = FUN_00ad59f0(lVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if (*(uint *)(param_1 + 0x1714) != 0xff) {
    lVar2 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x1714) * 8 + 0x548);
    if (lVar2 == 0) {
      cVar1 = FUN_00ad59f0(0);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      cVar1 = FUN_00ad59f0(lVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if (*(uint *)(param_1 + 0x1718) != 0xff) {
    lVar2 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x1718) * 8 + 0x548);
    if (lVar2 == 0) {
      cVar1 = FUN_00ad59f0(0);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      cVar1 = FUN_00ad59f0(lVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if (*(uint *)(param_1 + 0x171c) != 0xff) {
    lVar2 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x171c) * 8 + 0x548);
    if (lVar2 == 0) {
      cVar1 = FUN_00ad59f0(0);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      cVar1 = FUN_00ad59f0(lVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


