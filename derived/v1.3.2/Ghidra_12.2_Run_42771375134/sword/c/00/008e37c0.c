/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e37c0; name: FUN_008e37c0
 */


void FUN_008e37c0(long param_1,byte param_2)

{
  if (param_2 < 4) {
    *(byte *)(param_1 + 0x33f) = param_2;
  }
  return;
}


