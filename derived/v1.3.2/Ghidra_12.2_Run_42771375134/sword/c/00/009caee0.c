/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009caee0; name: FUN_009caee0
 */


void FUN_009caee0(long param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(char *)(param_1 + 0x2547) == '\0') || (*(char *)(param_1 + 0x2548) != '\0')) {
    return;
  }
  *(undefined4 *)(param_1 + 0x253c) = param_2;
  *(undefined4 *)(param_1 + 0x2540) = param_3;
  *(char *)(param_1 + 0x2548) = '\x01';
  *(undefined1 *)(param_1 + 0x2549) = 1;
  return;
}


