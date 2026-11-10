/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00114490; name: FUN_00114490
 */


void FUN_00114490(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  if ((*(uint *)(*(long *)(param_1 + 0xa0) + (ulong)(param_2 >> 5) * 4) & uVar1) != 0) {
    FUN_00116010(param_1 + 0xb0);
    lVar2 = (ulong)(param_2 >> 5) * 4;
    *(uint *)(*(long *)(param_1 + 0xa0) + lVar2) =
         *(uint *)(*(long *)(param_1 + 0xa0) + lVar2) & (uVar1 ^ 0xffffffff);
  }
  return;
}


