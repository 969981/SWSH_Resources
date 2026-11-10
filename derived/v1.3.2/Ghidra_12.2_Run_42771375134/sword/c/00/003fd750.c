/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fd750; name: FUN_003fd750
 */


void FUN_003fd750(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
  if ((param_2 & 1) != 0) {
    FUN_003fcf40(param_1,0,*(long *)(lVar3 + 0x728) + 0x70);
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 0) {
    FUN_00190b50(lVar3 + 0x11f8,(uVar1 & 0x1fffffff) + 1);
    lVar2 = (ulong)(uVar1 >> 5 & 0xffffff) * 4;
    *(uint *)(*(long *)(lVar3 + 0x11f8) + lVar2) =
         *(uint *)(*(long *)(lVar3 + 0x11f8) + lVar2) | 1 << (ulong)(uVar1 & 0x1f);
    return;
  }
  return;
}


