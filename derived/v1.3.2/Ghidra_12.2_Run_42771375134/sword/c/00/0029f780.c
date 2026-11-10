/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029f780; name: FUN_0029f780
 */


void FUN_0029f780(long param_1,long param_2)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0x18) != 0) {
    uVar1 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar1 + (ulong)*(uint *)(param_1 + 0x18) * 0x10;
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}


