/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01399580; name: FUN_01399580
 */


void FUN_01399580(long param_1,int param_2)

{
  *(int *)(param_1 + 0xb8) = param_2;
  if (param_2 == 1) {
    FUN_01398910(param_1,0);
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  return;
}


