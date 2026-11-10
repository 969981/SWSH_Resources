/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b1200; name: FUN_003b1200
 */


void FUN_003b1200(long param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x180))();
  (**(code **)(**(long **)(param_1 + 0x20) + 0x168))
            (*(long **)(param_1 + 0x20),param_2,param_2 + (ulong)param_3 * 0x10,0,
             *(undefined4 *)(param_1 + 100));
  iVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x180))();
  *(uint *)(param_1 + 100) = param_3;
  *(int *)(param_1 + 0x68) = (iVar2 - iVar1) + *(int *)(param_1 + 0x68);
  return;
}


