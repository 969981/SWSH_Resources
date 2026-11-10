/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003aa6a0; name: FUN_003aa6a0
 */


void FUN_003aa6a0(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x298);
  uVar2 = *(int *)(param_1 + 0x2a0) - 1;
  uVar1 = *(ushort *)(param_2 + 0x58);
  lVar4 = *(long *)(lVar3 + (ulong)uVar2 * 8);
  *(ushort *)(lVar4 + 0x58) = uVar1;
  *(uint *)(param_1 + 0x2a0) = uVar2;
  *(long *)(lVar3 + (ulong)uVar1 * 8) = lVar4;
  return;
}


