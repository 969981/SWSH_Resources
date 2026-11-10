/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00933980; name: FUN_00933980
 */


undefined8 FUN_00933980(long param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  
  bVar2 = *(byte *)(param_1 + 0x38);
  if (bVar2 < 2) {
    return 0;
  }
  uVar1 = *(byte *)(param_1 + 0x39) + 1;
  cVar3 = '\0';
  if (bVar2 != 0) {
    cVar3 = (char)(uVar1 / bVar2);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(byte *)(param_1 + 0x39) = (char)uVar1 - cVar3 * bVar2;
  return 1;
}


