/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e26c0; name: FUN_008e26c0
 */


void FUN_008e26c0(long param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  
  param_2 = param_2 & 0xff;
  lVar3 = param_1 + param_2 * 0x1c;
  pbVar1 = (byte *)(lVar3 + 0x2db);
  bVar2 = *(byte *)(lVar3 + 0x2db);
  if (bVar2 < 0x10) {
    bVar2 = bVar2 & 0xf | 0x10;
    *pbVar1 = bVar2;
    *(char *)(param_1 + 0x340) = *(char *)(param_1 + 0x340) + '\x01';
  }
  bVar2 = bVar2 & 0xf0 | 1;
  *pbVar1 = bVar2;
  if (*(char *)(param_1 + param_2 * 0x1c + 0x2e0) != '\0') {
    *(byte *)(param_1 + param_2 * 0x1c + 0x2cf) = bVar2;
  }
  return;
}


