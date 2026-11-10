/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010e5850; name: FUN_010e5850
 */


void FUN_010e5850(long param_1)

{
  if (*(char *)(param_1 + 0x70) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x78) != '\0') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}


