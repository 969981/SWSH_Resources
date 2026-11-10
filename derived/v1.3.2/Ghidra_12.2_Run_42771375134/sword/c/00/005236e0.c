/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005236e0; name: FUN_005236e0
 */


byte FUN_005236e0(long param_1,byte param_2)

{
  *(undefined1 *)(param_1 + 0x895) = 1;
  *(byte *)(param_1 + 0xbcd) = *(byte *)(param_1 + 0x1b8) != 0 & param_2;
  return *(byte *)(param_1 + 0x1b8) ^ 1;
}


