/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00935790; name: FUN_00935790
 */


void FUN_00935790(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    iVar1 = 1;
    *(undefined4 *)(param_1 + 8) = 1;
  }
  *param_2 = iVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}


