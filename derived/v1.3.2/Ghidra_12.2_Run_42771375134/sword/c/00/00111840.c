/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00111840; name: FUN_00111840
 */


void FUN_00111840(long param_1)

{
  FUN_00112130(param_1,param_1 + (ulong)(1 - *(int *)(param_1 + 0xac)) * 0x10 + 0x38,0);
  *(int *)(param_1 + 0xac) = 1 - *(int *)(param_1 + 0xac);
  return;
}


