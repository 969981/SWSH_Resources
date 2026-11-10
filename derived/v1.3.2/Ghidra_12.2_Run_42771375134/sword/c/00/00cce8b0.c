/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cce8b0; name: FUN_00cce8b0
 */


void FUN_00cce8b0(long param_1,byte param_2)

{
  param_2 = param_2 & 1;
  if (param_2 == *(byte *)(param_1 + 0x635)) {
    return;
  }
  *(byte *)(param_1 + 0x635) = param_2;
  FUN_00cce790(param_1,0,param_2,1,0xcbf29ce484222645,0);
  return;
}


