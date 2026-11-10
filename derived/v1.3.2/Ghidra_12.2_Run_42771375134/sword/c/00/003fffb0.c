/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fffb0; name: FUN_003fffb0
 */


int FUN_003fffb0(ThreadType *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int local_28 [2];
  
  if (*(int *)(param_1 + 0x1d0) != 0) {
    nn::os::GetThreadCoreMask((int *)0x0,(ulong *)local_28,param_1);
    nn::os::SetThreadCoreMask(param_1,-1,(ulong)param_2);
    return local_28[0];
  }
  iVar2 = *(int *)(param_1 + 0x1c8);
  *(uint *)(param_1 + 0x1c8) = param_2;
  iVar1 = 0;
  if (iVar2 != -1) {
    iVar1 = iVar2;
  }
  return iVar1;
}


