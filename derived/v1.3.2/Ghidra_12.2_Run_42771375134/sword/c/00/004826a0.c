/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004826a0; name: FUN_004826a0
 */


void FUN_004826a0(long *param_1)

{
  if (param_1[0xe] != 0) {
    (**(code **)(*param_1 + 0xe8))();
    *PTR_DAT_02713288 = 1;
  }
  return;
}


