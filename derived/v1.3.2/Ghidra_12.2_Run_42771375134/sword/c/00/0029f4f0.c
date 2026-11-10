/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029f4f0; name: FUN_0029f4f0
 */


void FUN_0029f4f0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar2 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar2 + (ulong)*(ushort *)(param_1 + 2) * 2;
    *(ulong *)(param_1 + 8) = uVar2;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    lVar1 = uVar2 + (ulong)(*(int *)(param_1 + 0x10) + 3U & 0xfffffffc) * 4;
    *(ulong *)(param_1 + 0x18) = uVar2;
    *(ulong *)(param_2 + 8) = lVar1 + (ulong)*(uint *)(param_1 + 0x14);
    *(long *)(param_1 + 0x20) = lVar1;
  }
  return;
}


