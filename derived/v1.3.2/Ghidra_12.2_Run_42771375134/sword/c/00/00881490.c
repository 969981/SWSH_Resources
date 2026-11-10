/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00881490; name: FUN_00881490
 */


void FUN_00881490(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 < 0x33b) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 8) = iVar1;
  return;
}


