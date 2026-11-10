/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fa580; name: FUN_008fa580
 */


bool FUN_008fa580(long param_1)

{
  if (*(short *)(param_1 + 0x166) == 0) {
    return false;
  }
  return *(int *)(param_1 + 0x170) == 2;
}


