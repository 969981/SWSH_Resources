/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01536450; name: FUN_01536450
 */


undefined4 FUN_01536450(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x9a58) == param_2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x9a78) == param_2) {
    return 1;
  }
  if (*(int *)(param_1 + 0x9a98) == param_2) {
    return 2;
  }
  uVar1 = 3;
  if (*(int *)(param_1 + 0x9ab8) != param_2) {
    uVar1 = 4;
  }
  return uVar1;
}


