/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9b20; name: FUN_008f9b20
 */


void FUN_008f9b20(long param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_009c98b0(param_2);
  if (*(char *)(param_1 + 0x174) == cVar1) {
    bVar2 = FUN_009c9910(param_2);
    *(undefined1 *)(*(long *)(param_1 + 0x88) + (ulong)bVar2 + 0xb47) = 1;
  }
  return;
}


