/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5c30; name: FUN_008e5c30
 */


void FUN_008e5c30(long param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x299);
  uVar2 = FUN_009a3940();
  if (bVar1 < uVar2) {
    *(char *)(param_1 + 0x299) = *(char *)(param_1 + 0x299) + '\x01';
  }
  return;
}


