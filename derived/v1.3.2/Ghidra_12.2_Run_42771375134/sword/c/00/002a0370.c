/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a0370; name: FUN_002a0370
 */


void FUN_002a0370(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar3 + (ulong)*(uint *)(param_1 + 0x1c) * 0xc;
    *(ulong *)(param_1 + 0x28) = uVar3;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = *(int *)(param_1 + 0x20) * 3;
    uVar3 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    if ((*(byte *)(param_1 + 0x5c) >> 1 & 1) == 0) {
      lVar1 = (ulong)uVar2 * 4;
    }
    else {
      lVar1 = (ulong)uVar2 * 2;
    }
    *(ulong *)(param_2 + 8) = uVar3 + lVar1;
    *(ulong *)(param_1 + 0x30) = uVar3;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar3 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar3 + *(uint *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x50) = uVar3;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar3 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar3 + (ulong)*(uint *)(param_1 + 0x20) * 2;
    *(ulong *)(param_1 + 0x60) = uVar3;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar3 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar3 + (ulong)*(uint *)(param_1 + 0x20) * 4;
    *(ulong *)(param_1 + 0x68) = uVar3;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar3 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar3 + (ulong)(uint)(*(int *)(param_1 + 0x20) * 3) * 4;
    *(ulong *)(param_1 + 0x70) = uVar3;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}


