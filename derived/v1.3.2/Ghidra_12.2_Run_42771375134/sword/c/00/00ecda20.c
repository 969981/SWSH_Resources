/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecda20; name: FUN_00ecda20
 */


bool FUN_00ecda20(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    return true;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x60) + 0x68);
  if (iVar1 == 1) {
    return false;
  }
  return iVar1 != 0;
}


