/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b12d0; name: FUN_003b12d0
 */


void FUN_003b12d0(long param_1,int param_2)

{
  (**(code **)(**(long **)(param_1 + 0x20) + 0x178))
            (*(long **)(param_1 + 0x20),0,0,param_2,param_2 + 1);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  return;
}


