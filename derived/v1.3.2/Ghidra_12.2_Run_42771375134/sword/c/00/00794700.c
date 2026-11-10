/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00794700; name: FUN_00794700
 */


void FUN_00794700(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x270) + 0xe0);
  if ((lVar1 == 0) || (*(int *)(*(long *)(param_1 + 0x270) + 0xe8) != *(int *)(lVar1 + 0x2c))) {
    return;
  }
  FUN_0078d120();
  FUN_019d6660();
  return;
}


