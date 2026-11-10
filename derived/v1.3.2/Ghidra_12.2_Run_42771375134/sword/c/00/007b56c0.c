/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b56c0; name: FUN_007b56c0
 */


undefined4 FUN_007b56c0(void)

{
  long lVar1;
  
  lVar1 = *(long *)PTR_DAT_02716a30;
  if (lVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 4 + 0x180);
}


