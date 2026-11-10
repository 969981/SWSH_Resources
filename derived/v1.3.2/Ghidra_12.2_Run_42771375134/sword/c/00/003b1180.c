/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b1180; name: FUN_003b1180
 */


void FUN_003b1180(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x180))();
  (**(code **)(**(long **)(param_1 + 0x20) + 0x168))
            (*(long **)(param_1 + 0x20),0,0,param_2,param_2 + 1);
  iVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x180))();
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 0x68) = (iVar2 - iVar1) + *(int *)(param_1 + 0x68);
  return;
}


