/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045b680; name: FUN_0045b680
 */


void FUN_0045b680(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    FUN_0045b530(param_1);
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,param_1);
    return;
  }
  return;
}


