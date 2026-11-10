/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a1460; name: FUN_002a1460
 */


void FUN_002a1460(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_2 + 8) + 0x7fU & 0xffffffffffffff80;
  *(ulong *)(param_2 + 8) = uVar1 + (ulong)*(uint *)(param_1 + 0x50) * 0x70;
  *(ulong *)(param_1 + 0x58) = uVar1;
  return;
}


