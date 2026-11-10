/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040b6f0; name: FUN_0040b6f0
 */


void FUN_0040b6f0(long param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_0041a530(*(long *)(param_1 + 0x18),param_3);
    iVar1 = (param_2 - param_3) + iVar1;
  }
  *(int *)(param_1 + 0x24) = param_2 - iVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) | 1;
  return;
}


