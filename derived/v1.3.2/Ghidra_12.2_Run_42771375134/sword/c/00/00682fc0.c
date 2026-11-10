/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00682fc0; name: FUN_00682fc0
 */


ulong FUN_00682fc0(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x88))();
  uVar2 = (param_2 + lVar1) - 1U & -param_2;
  (**(code **)(*param_1 + 0x90))(param_1,uVar2,0);
  return uVar2;
}


