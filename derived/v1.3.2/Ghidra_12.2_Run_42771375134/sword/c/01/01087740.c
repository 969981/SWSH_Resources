/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01087740; name: FUN_01087740
 */


bool FUN_01087740(long param_1)

{
  *(undefined1 *)(param_1 + 0xa3) = 1;
  FUN_01086630();
  return *(char *)(param_1 + 0xa0) == '\x03';
}


