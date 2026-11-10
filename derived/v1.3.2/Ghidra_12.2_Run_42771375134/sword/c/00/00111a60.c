/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00111a60; name: FUN_00111a60
 */


void FUN_00111a60(long param_1)

{
  FUN_00112130(param_1,param_1 + (ulong)(1 - *(int *)(param_1 + 0xb4)) * 0x10 + 0x18,0);
  *(int *)(param_1 + 0xb4) = 1 - *(int *)(param_1 + 0xb4);
  return;
}


