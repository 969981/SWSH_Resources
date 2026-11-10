/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2e80; name: FUN_008e2e80
 */


undefined4 FUN_008e2e80(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x35c);
  if ((bVar1 >> 3 & 1) != 0) {
    return 3;
  }
  if ((bVar1 >> 5 & 1) != 0) {
    return 5;
  }
  if ((bVar1 >> 4 & 1) != 0) {
    return 4;
  }
  uVar2 = 0x19;
  if ((bVar1 & 0x40) != 0) {
    uVar2 = 6;
  }
  return uVar2;
}


