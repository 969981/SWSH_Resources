/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b25c0; name: FUN_003b25c0
 */


void FUN_003b25c0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 8) != 0) &&
     (uVar1 = *(uint *)(param_1 + 0x14) & 0x7fffffff, uVar1 != 0 || *(int *)(param_1 + 0x10) != 0))
  {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 4;
    *(long *)(param_1 + 8) = lVar2;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (uVar1 = *(uint *)(param_1 + 0x24) & 0x7fffffff, uVar1 != 0 || *(int *)(param_1 + 0x20) != 0))
  {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 4;
    *(long *)(param_1 + 0x18) = lVar2;
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (uVar1 = *(uint *)(param_1 + 0x34) & 0x7fffffff, uVar1 != 0 || *(int *)(param_1 + 0x30) != 0))
  {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 4;
    *(long *)(param_1 + 0x28) = lVar2;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (uVar1 = *(uint *)(param_1 + 0x44) & 0x7fffffff, uVar1 != 0 || *(int *)(param_1 + 0x40) != 0))
  {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 4;
    *(long *)(param_1 + 0x38) = lVar2;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (uVar1 = *(uint *)(param_1 + 0x54) & 0x7fffffff, uVar1 != 0 || *(int *)(param_1 + 0x50) != 0))
  {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 4;
    *(long *)(param_1 + 0x48) = lVar2;
  }
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (uVar1 = *(uint *)(param_1 + 100) & 0x7fffffff, uVar1 != 0 || *(int *)(param_1 + 0x60) != 0)) {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 4;
    *(long *)(param_1 + 0x58) = lVar2;
  }
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (uVar1 = *(uint *)(param_1 + 0x74) & 0x7fffffff, uVar1 != 0 || *(int *)(param_1 + 0x70) != 0))
  {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 4;
    *(long *)(param_1 + 0x68) = lVar2;
  }
  return;
}


