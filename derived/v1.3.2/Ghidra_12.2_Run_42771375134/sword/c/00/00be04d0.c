/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be04d0; name: FUN_00be04d0
 */


void FUN_00be04d0(undefined8 *param_1,PosixTime *param_2)

{
  CalendarAdditionalInfo aCStack_38 [24];
  short local_18;
  byte local_16;
  byte local_15;
  byte local_14;
  byte local_13;
  
  nn::time::ToCalendarTime((CalendarTime *)&local_18,aCStack_38,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(uint *)(param_1 + 2) = local_16 - 1;
  *(int *)((long)param_1 + 0x14) = local_18 + -0x76c;
  *(uint *)(param_1 + 1) = (uint)local_14;
  *(uint *)((long)param_1 + 0xc) = (uint)local_15;
  param_1[5] = 0;
  param_1[6] = 0;
  *(uint *)((long)param_1 + 4) = (uint)local_13;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


