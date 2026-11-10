/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d0480; name: FUN_003d0480
 */


void FUN_003d0480(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long local_30;
  long local_28;
  
  plVar1 = (long *)(param_1 + 0x18);
  *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 0x200000;
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar4 = (ulong)uVar2;
  uVar3 = *(uint *)(param_1 + 0x28);
  local_28 = param_2;
  if (uVar2 == uVar3) {
    *(uint *)(param_2 + 0x50) = uVar2;
    if (uVar2 < (*(uint *)(param_1 + 0x24) & 0x7fffffff)) {
      *(long *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = param_2;
      *(uint *)(param_1 + 0x20) = uVar2 + 1;
    }
    else {
      FUN_003d8ca0(plVar1,&local_28);
      uVar4 = (ulong)*(uint *)(param_1 + 0x28);
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x18);
    local_30 = *(long *)(lVar5 + (ulong)uVar3 * 8);
    *(uint *)(local_30 + 0x50) = uVar2;
    if (uVar2 < (*(uint *)(param_1 + 0x24) & 0x7fffffff)) {
      *(long *)(lVar5 + uVar4 * 8) = local_30;
      *(uint *)(param_1 + 0x20) = uVar2 + 1;
      uVar4 = (ulong)uVar3;
    }
    else {
      FUN_003d8ca0(plVar1,&local_30);
      uVar4 = (ulong)*(uint *)(param_1 + 0x28);
    }
    *(int *)(local_28 + 0x50) = (int)uVar4;
    *(long *)(*plVar1 + uVar4 * 8) = local_28;
  }
  *(int *)(param_1 + 0x28) = (int)uVar4 + 1;
  return;
}


