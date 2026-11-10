/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ea2a0; name: FUN_014ea2a0
 */


void FUN_014ea2a0(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\0') {
    FUN_0077d660(*(undefined8 *)(param_1 + 0x80));
    *(undefined1 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x78) = 1;
    return;
  }
  return;
}


