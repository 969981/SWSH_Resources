/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3e00; name: FUN_008e3e00
 */


void FUN_008e3e00(long param_1)

{
  byte bVar1;
  
  *(undefined4 *)(param_1 + 0x358) = 0;
  if (*(ushort *)(param_1 + 0x344) < 9999) {
    *(ushort *)(param_1 + 0x344) = *(ushort *)(param_1 + 0x344) + 1;
  }
  bVar1 = 0;
  if ((byte)(*(char *)(param_1 + 0x453) + 1U) < 3) {
    bVar1 = *(char *)(param_1 + 0x453) + 1;
  }
  *(byte *)(param_1 + 0x453) = bVar1;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x450) = 0;
  *(undefined1 *)(param_1 + 0x342) = 1;
  return;
}


