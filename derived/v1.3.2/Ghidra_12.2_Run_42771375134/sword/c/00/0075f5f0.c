/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075f5f0; name: FUN_0075f5f0
 */


void FUN_0075f5f0(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  if ((bVar1 >> 4 & 1) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    bVar1 = *(byte *)(param_1 + 0xc) & 0xef;
    *(byte *)(param_1 + 0xc) = bVar1;
  }
  *(byte *)(param_1 + 0xc) = bVar1 | 8;
  return;
}


