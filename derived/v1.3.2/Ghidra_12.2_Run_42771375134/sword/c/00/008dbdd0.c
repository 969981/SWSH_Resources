/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dbdd0; name: FUN_008dbdd0
 */


undefined8 FUN_008dbdd0(long param_1,undefined4 param_2)

{
  if (1 < *(byte *)(param_1 + 10)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  if (*(byte *)(param_1 + 10) == 1) {
    *(undefined1 *)(param_1 + 10) = 2;
  }
  return 1;
}


