/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523f60; name: FUN_00523f60
 */


byte FUN_00523f60(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0xbd0) = param_1;
  *(undefined4 *)(param_4 + 0xbd4) = param_2;
  *(undefined4 *)(param_4 + 0xbd8) = param_3;
  return *(byte *)(param_4 + 0x1c6) ^ 1;
}


