/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ccb80; name: FUN_010ccb80
 */


void FUN_010ccb80(long param_1)

{
  if (*(char *)(param_1 + 0x5cb) != '\0') {
    FUN_010364c0(param_1,3);
    *(undefined1 *)(param_1 + 0x5cb) = 0;
  }
  return;
}


