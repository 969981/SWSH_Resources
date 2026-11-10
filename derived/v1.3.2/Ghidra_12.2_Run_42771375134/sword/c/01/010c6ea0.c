/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c6ea0; name: FUN_010c6ea0
 */


void FUN_010c6ea0(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\0') {
    FUN_01036f70(*(undefined8 *)(param_1 + 0x78));
    *(undefined1 *)(param_1 + 0x80) = 1;
    return;
  }
  return;
}


