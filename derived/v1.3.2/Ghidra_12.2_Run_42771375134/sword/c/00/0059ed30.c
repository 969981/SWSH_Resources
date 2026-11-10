/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059ed30; name: FUN_0059ed30
 */


ulong FUN_0059ed30(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((param_1[4] == 0) || (uVar2 = (**(code **)(*param_1 + 8))(param_1), -1 < (int)uVar2)) {
    uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar2 = (ulong)(uVar1 & (int)uVar1 >> 0x1f);
  }
  return uVar2;
}


