/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e57c0; name: FUN_008e57c0
 */


void FUN_008e57c0(long param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 0x2c4) + param_2;
  if (9 < bVar1) {
    bVar1 = 10;
  }
  *(byte *)(param_1 + 0x2c4) = bVar1;
  *(undefined1 *)(param_1 + 0x2c6) = 1;
  return;
}


