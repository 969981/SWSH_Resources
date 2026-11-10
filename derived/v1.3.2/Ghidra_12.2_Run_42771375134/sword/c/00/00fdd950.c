/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdd950; name: FUN_00fdd950
 */


void FUN_00fdd950(long param_1)

{
  if (*(char *)(param_1 + 0x5d8) == '\0') {
    FUN_010364c0(param_1,2);
    *(undefined1 *)(param_1 + 0x5d8) = 1;
    return;
  }
  return;
}


