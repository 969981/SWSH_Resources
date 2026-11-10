/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c12920; name: FUN_00c12920
 */


void FUN_00c12920(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(long *)(param_1 + 0x630) + 0x58);
  if ((bVar1 & 1) == 0) {
    *(byte *)(*(long *)(param_1 + 0x630) + 0x58) = bVar1 | 1;
    FUN_00beec10();
    return;
  }
  return;
}


