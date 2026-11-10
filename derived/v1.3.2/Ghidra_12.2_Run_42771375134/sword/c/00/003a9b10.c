/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a9b10; name: FUN_003a9b10
 */


void FUN_003a9b10(long *param_1,long *param_2)

{
  param_1[4] = param_2[1];
  param_1[3] = *param_2;
  if (*param_1 == 0) {
    return;
  }
  FUN_003aa700();
  return;
}


