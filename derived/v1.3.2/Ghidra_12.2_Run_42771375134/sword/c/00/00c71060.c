/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c71060; name: FUN_00c71060
 */


void FUN_00c71060(long param_1)

{
  if (*(long *)(param_1 + 0x120) != 0) {
    FUN_0069bae0();
    *(undefined1 *)(param_1 + 0x128) = 0;
  }
  return;
}


