/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00543d20; name: FUN_00543d20
 */


ulong FUN_00543d20(long *param_1,undefined4 param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x68))();
  if (param_3 != (long *)0x0) {
    uVar1 = (**(code **)(*param_3 + 0x78))(param_3,param_1,param_2);
    uVar2 = (ulong)(uVar1 & (int)uVar1 >> 0x1f);
  }
  return uVar2;
}


