/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d3780; name: FUN_008d3780
 */


undefined4 FUN_008d3780(void)

{
  uint uVar1;
  
  uVar1 = *(byte *)(*(long *)PTR_DAT_02710828 + 0x50) - 1;
  if (uVar1 < 10) {
    return *(undefined4 *)(&DAT_02147010 + (long)(char)uVar1 * 4);
  }
  return 1;
}


