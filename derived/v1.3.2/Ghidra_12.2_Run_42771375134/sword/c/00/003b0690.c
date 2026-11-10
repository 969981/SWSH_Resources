/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b0690; name: FUN_003b0690
 */


void FUN_003b0690(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((*param_1 != 0) &&
     (uVar1 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff, uVar1 != 0 || (int)param_1[1] != 0)) {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 0x10;
    *param_1 = lVar2;
  }
  if ((param_1[2] != 0) &&
     (uVar1 = *(uint *)((long)param_1 + 0x1c) & 0x7fffffff, uVar1 != 0 || (int)param_1[3] != 0)) {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 4;
    param_1[2] = lVar2;
  }
  if ((param_1[4] != 0) &&
     (uVar1 = *(uint *)((long)param_1 + 0x2c) & 0x7fffffff, uVar1 != 0 || (int)param_1[5] != 0)) {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 0xc;
    param_1[4] = lVar2;
  }
  if ((param_1[6] != 0) &&
     (uVar1 = *(uint *)((long)param_1 + 0x3c) & 0x7fffffff, uVar1 != 0 || (int)param_1[7] != 0)) {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 0x10;
    param_1[6] = lVar2;
  }
  if ((param_1[8] != 0) &&
     (uVar1 = *(uint *)((long)param_1 + 0x4c) & 0x7fffffff, uVar1 != 0 || (int)param_1[9] != 0)) {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 4;
    param_1[8] = lVar2;
  }
  if ((param_1[10] != 0) &&
     (uVar1 = *(uint *)((long)param_1 + 0x5c) & 0x7fffffff, uVar1 != 0 || (int)param_1[0xb] != 0)) {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 0x10;
    param_1[10] = lVar2;
  }
  if ((param_1[0xc] != 0) &&
     (uVar1 = *(uint *)((long)param_1 + 0x6c) & 0x7fffffff, uVar1 != 0 || (int)param_1[0xd] != 0)) {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 4;
    param_1[0xc] = lVar2;
  }
  if ((param_1[0xe] != 0) &&
     (uVar1 = *(uint *)((long)param_1 + 0x7c) & 0x7fffffff, uVar1 != 0 || (int)param_1[0xf] != 0)) {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 0x24;
    param_1[0xe] = lVar2;
  }
  if ((param_1[0x10] != 0) &&
     (uVar1 = *(uint *)((long)param_1 + 0x8c) & 0x7fffffff, uVar1 != 0 || (int)param_1[0x11] != 0))
  {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 0x10;
    param_1[0x10] = lVar2;
  }
  if ((param_1[0x12] != 0) &&
     (uVar1 = *(uint *)((long)param_1 + 0x9c) & 0x7fffffff, uVar1 != 0 || (int)param_1[0x13] != 0))
  {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 0x10;
    param_1[0x12] = lVar2;
  }
  if ((param_1[0x14] != 0) &&
     (uVar1 = *(uint *)((long)param_1 + 0xac) & 0x7fffffff, uVar1 != 0 || (int)param_1[0x15] != 0))
  {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 0x10;
    param_1[0x14] = lVar2;
  }
  if ((param_1[0x18] != 0) &&
     (uVar1 = *(uint *)((long)param_1 + 0xcc) & 0x7fffffff, uVar1 != 0 || (int)param_1[0x19] != 0))
  {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 0x10;
    param_1[0x18] = lVar2;
  }
  return;
}


