/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2620; name: FUN_008e2620
 */


undefined4 FUN_008e2620(long param_1,ulong param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  
  param_2 = param_2 & 0xff;
  lVar3 = param_1 + param_2 * 0x1c;
  bVar1 = *(char *)(lVar3 + 0x2d8) + param_3;
  bVar2 = *(byte *)(lVar3 + 0x2d9);
  if (bVar1 <= *(byte *)(lVar3 + 0x2d9)) {
    bVar2 = bVar1;
  }
  *(byte *)(lVar3 + 0x2d8) = bVar2;
  if (*(char *)(lVar3 + 0x2e0) != '\0') {
    *(byte *)(param_1 + param_2 * 0x1c + 0x2cc) = bVar2;
  }
  return *(undefined4 *)(param_1 + param_2 * 0x1c + 0x2d4);
}


