/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bfb430; name: FUN_00bfb430
 */


void FUN_00bfb430(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x630) + 0x58) & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x850) = 0;
  FUN_00beec30();
  return;
}


