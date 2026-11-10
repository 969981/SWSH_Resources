/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152d990; name: FUN_0152d990
 */


void FUN_0152d990(long param_1,int param_2,undefined8 *param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + (long)param_2 * 0x2861 + 0x1fb0);
  FUN_008664a0(*param_3,pbVar1 + (ulong)*pbVar1 * 0x158 + 1);
  *pbVar1 = *pbVar1 + 1;
  return;
}


