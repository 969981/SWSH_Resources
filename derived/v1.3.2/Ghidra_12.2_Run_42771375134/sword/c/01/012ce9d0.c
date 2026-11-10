/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ce9d0; name: FUN_012ce9d0
 */


bool FUN_012ce9d0(long param_1)

{
  ulong uVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    cVar2 = *(char *)(param_1 + 0x74);
    lVar4 = *(long *)(param_1 + 0x80);
  }
  else {
    plVar3 = (long *)(*(long *)(param_1 + 0x68) + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    cVar2 = *(char *)(param_1 + 0x74);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = *(long *)(param_1 + 0x80);
  }
  uVar1 = (ulong)(cVar2 != '\0');
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x98);
    if (*(char *)(param_1 + 0x8c) != '\0') {
      uVar1 = uVar1 + 1;
    }
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    cVar2 = *(char *)(param_1 + 0x8c);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = *(long *)(param_1 + 0x98);
    if (cVar2 != '\0') {
      uVar1 = uVar1 + 1;
    }
  }
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0xb0);
    if (*(char *)(param_1 + 0xa4) != '\0') {
      uVar1 = uVar1 + 1;
    }
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    cVar2 = *(char *)(param_1 + 0xa4);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = *(long *)(param_1 + 0xb0);
    if (cVar2 != '\0') {
      uVar1 = uVar1 + 1;
    }
  }
  if (lVar4 == 0) {
    cVar2 = *(char *)(param_1 + 0xbc);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    cVar2 = *(char *)(param_1 + 0xbc);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return uVar1 != -(ulong)(cVar2 != '\0');
}


