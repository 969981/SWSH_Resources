/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a37b50; name: FUN_00a37b50
 */


void FUN_00a37b50(long param_1)

{
  *(byte *)(param_1 + 0x61d) = *(byte *)(param_1 + 0x61d) ^ 1;
  *(undefined1 *)(param_1 + 0x67e) = 1;
  FUN_00a37620(param_1,param_1 + 0x5d8);
  *(undefined1 *)(param_1 + 0x67e) = 0;
  return;
}


