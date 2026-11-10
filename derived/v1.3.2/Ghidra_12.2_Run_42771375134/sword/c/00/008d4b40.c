/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d4b40; name: FUN_008d4b40
 */


bool FUN_008d4b40(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x178) == 2) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x170) + 0x48))();
    return iVar1 == 0;
  }
  return true;
}


