/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ea970; name: FUN_012ea970
 */


void FUN_012ea970(long param_1)

{
  *(undefined1 *)(param_1 + 0x894) = 1;
  *(char *)(param_1 + 0x895) = (char)((*(byte *)(param_1 + 0x895) + 1) % 100);
  return;
}


