/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e60e60; name: FUN_00e60e60
 */


void FUN_00e60e60(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x4ec) == param_1) {
    return;
  }
  FUN_00e5edc0(param_2,param_2 + 0xb50);
  return;
}


