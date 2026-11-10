/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba310; name: FUN_003ba310
 */


void FUN_003ba310(long *param_1,undefined1 param_2)

{
  *(undefined1 *)((long)param_1 + 0xf) = param_2;
  if (*param_1 == 0) {
    return;
  }
  FUN_003ba760();
  return;
}


