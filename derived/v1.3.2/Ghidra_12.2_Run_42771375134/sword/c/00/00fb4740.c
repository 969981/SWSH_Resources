/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb4740; name: FUN_00fb4740
 */


void FUN_00fb4740(long param_1,undefined4 param_2,byte param_3)

{
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = param_2;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 1;
  *(byte *)(param_1 + 0x5b) = param_3 & 1;
  return;
}


