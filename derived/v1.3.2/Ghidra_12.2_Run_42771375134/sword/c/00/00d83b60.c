/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d83b60; name: FUN_00d83b60
 */


void FUN_00d83b60(long param_1,byte param_2)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x119) = param_2 & 1;
  iVar1 = *(int *)(param_1 + 0x54);
  if (2 < iVar1 - 2U) {
    return;
  }
  if ((param_2 & 1) == 0) {
    FUN_00d83bf0(param_1,1,0);
    FUN_00d83bf0(param_1,2,0);
    return;
  }
  FUN_00d83bf0(param_1,1,iVar1 != 3);
  FUN_00d83bf0(param_1,2,iVar1 == 3);
  return;
}


