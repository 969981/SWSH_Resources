/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e25a0; name: FUN_008e25a0
 */


void FUN_008e25a0(long param_1,ulong param_2,byte param_3)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = param_1 + (param_2 & 0xff) * 0x1c;
  bVar1 = param_3;
  if (param_3 <= *(byte *)(lVar2 + 0x2d8)) {
    bVar1 = *(byte *)(lVar2 + 0x2d8);
  }
  *(byte *)(lVar2 + 0x2d8) = bVar1 - param_3;
  if (*(char *)(lVar2 + 0x2e0) == '\0') {
    return;
  }
  *(byte *)(param_1 + (param_2 & 0xff) * 0x1c + 0x2cc) = bVar1 - param_3;
  FUN_0087b5b0(*(undefined8 *)(param_1 + 0x60));
  return;
}


