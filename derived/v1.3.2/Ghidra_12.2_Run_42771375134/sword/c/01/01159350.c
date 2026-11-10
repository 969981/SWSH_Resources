/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01159350; name: FUN_01159350
 */


void FUN_01159350(long param_1)

{
  if (*(char *)(param_1 + 0x5cb) == '\0') {
    FUN_010364c0(param_1,3);
    return;
  }
  FUN_010364c0(param_1,1);
  return;
}


