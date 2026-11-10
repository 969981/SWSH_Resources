/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00732e30; name: FUN_00732e30
 */


bool FUN_00732e30(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(int *)(param_1 + 0x1d0) * 3;
  lVar2 = *(long *)(*(long *)(param_1 + 0x1c8) + 0x170);
  if ((1L << ((ulong)uVar1 & 0x3f) & *(ulong *)(lVar2 + ((ulong)(uVar1 >> 3) & 0x1ffffff8))) == 0) {
    return false;
  }
  if ((*(ulong *)(lVar2 + ((ulong)(uVar1 + 1 >> 3) & 0x1ffffff8)) &
      1L << ((ulong)(uVar1 + 1) & 0x3f)) == 0) {
    return false;
  }
  if ((*(ulong *)(lVar2 + ((ulong)(uVar1 + 2 >> 3) & 0x1ffffff8)) &
      1L << ((ulong)(uVar1 + 2) & 0x3f)) == 0) {
    return false;
  }
  return *(int *)(param_1 + 0x78) == -1;
}


