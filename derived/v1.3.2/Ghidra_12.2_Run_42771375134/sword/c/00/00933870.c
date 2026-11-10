/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00933870; name: FUN_00933870
 */


void FUN_00933870(long param_1,undefined4 param_2)

{
  byte bVar1;
  
  if ((ulong)*(byte *)(param_1 + 0x38) < 5) {
    *(undefined4 *)(param_1 + 0x10 + (ulong)*(byte *)(param_1 + 0x38) * 8) = param_2;
    bVar1 = *(byte *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x10 + (ulong)bVar1 * 8 + 4) = 0;
    *(byte *)(param_1 + 0x38) = bVar1 + 1;
  }
  return;
}


