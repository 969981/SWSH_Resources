/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f8d50; name: FUN_003f8d50
 */


void FUN_003f8d50(long param_1,long param_2)

{
  ulong uVar1;
  ulong *puVar2;
  
  if (*(int *)(param_1 + 0x48) == 6) {
    uVar1 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar1 + (ulong)*(ushort *)(param_1 + 0x78) * 2;
    puVar2 = (ulong *)(param_1 + 0x70);
  }
  else {
    if (*(int *)(param_1 + 0x48) != 5) {
      return;
    }
    uVar1 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar1 + (ulong)*(ushort *)(param_1 + 0x90) * 2;
    puVar2 = (ulong *)(param_1 + 0x88);
  }
  *puVar2 = uVar1;
  return;
}


