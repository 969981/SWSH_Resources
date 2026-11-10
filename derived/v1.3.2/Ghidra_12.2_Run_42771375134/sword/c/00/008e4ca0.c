/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e4ca0; name: FUN_008e4ca0
 */


void FUN_008e4ca0(long param_1,short param_2)

{
  if (param_2 == 0) {
    param_2 = 1;
  }
  *(short *)(param_1 + 0x33a) = param_2;
  return;
}


