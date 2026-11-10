/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01325a20; name: FUN_01325a20
 */


float FUN_01325a20(long param_1)

{
  long lVar1;
  
  nn::os::GetSystemTick();
  lVar1 = nn::os::ConvertToTimeSpan();
  lVar1 = lVar1 - *(long *)(param_1 + 0x380);
  *(long *)(param_1 + 0x388) = lVar1;
  return (float)((double)lVar1 / DAT_01cd50a0);
}


