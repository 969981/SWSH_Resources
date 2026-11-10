/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0118e050; name: FUN_0118e050
 */


void FUN_0118e050(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_0080e480();
    iVar1 = iVar1 + 1;
  }
  *(int *)(param_1 + 0x20) = iVar1;
  return;
}


