/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01107850; name: FUN_01107850
 */


void FUN_01107850(long param_1)

{
  if (*(char *)(param_1 + 0x7c) == '\0') {
    *(undefined8 *)(param_1 + 0x84) = 0x42b4000000000000;
    *(undefined4 *)(param_1 + 0x8c) = 0x3e800000;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return;
  }
  return;
}


