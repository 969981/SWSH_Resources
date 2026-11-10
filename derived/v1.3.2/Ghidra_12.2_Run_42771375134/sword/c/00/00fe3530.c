/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe3530; name: FUN_00fe3530
 */


void FUN_00fe3530(long param_1,byte param_2)

{
  undefined *puVar1;
  
  if ((param_2 & 1) == *(byte *)(param_1 + 0x5f0)) {
    return;
  }
  *(byte *)(param_1 + 0x5f0) = param_2 & 1;
  puVar1 = PTR_DAT_027231a0;
  if ((param_2 & 1) == 0) {
    puVar1 = PTR_DAT_02723198;
  }
  FUN_00ffd010(param_1 + 0x100,puVar1);
  return;
}


