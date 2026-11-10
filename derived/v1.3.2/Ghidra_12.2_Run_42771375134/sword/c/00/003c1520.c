/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c1520; name: FUN_003c1520
 */


bool FUN_003c1520(long param_1)

{
  bool bVar1;
  
  bVar1 = *(long *)(param_1 + 0x50) != 0;
  if (bVar1) {
    FUN_003c6060();
  }
  return bVar1;
}


