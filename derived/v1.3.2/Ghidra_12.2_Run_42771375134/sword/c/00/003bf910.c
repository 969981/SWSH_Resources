/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bf910; name: FUN_003bf910
 */


void FUN_003bf910(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0xb0);
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 4;
  FUN_00190b50(lVar3 + 0x1198,(uVar1 >> 6) + 1);
  lVar3 = *(long *)(lVar3 + 0x1198);
  lVar2 = (ulong)(uVar1 >> 0xb) * 4;
  *(uint *)(lVar3 + lVar2) = *(uint *)(lVar3 + lVar2) | 1 << (ulong)(uVar1 >> 6 & 0x1f);
  return;
}


