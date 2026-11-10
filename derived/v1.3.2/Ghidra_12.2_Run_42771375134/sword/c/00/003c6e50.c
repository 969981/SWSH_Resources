/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c6e50; name: FUN_003c6e50
 */


void FUN_003c6e50(long param_1,ulong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x25);
  if ((bVar1 >> 4 & 1) != 0) {
    if ((param_2 & 1) != 0) {
      FUN_003cff70(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x1048),param_1);
      bVar1 = *(byte *)(param_1 + 0x25);
    }
    *(byte *)(param_1 + 0x25) = bVar1 & 0xef;
  }
  *(undefined1 *)(param_1 + 0x26) = 0;
  return;
}


