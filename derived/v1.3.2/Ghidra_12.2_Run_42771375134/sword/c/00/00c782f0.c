/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c782f0; name: FUN_00c782f0
 */


void FUN_00c782f0(long *param_1)

{
  long local_38 [3];
  
  *param_1 = (long)(PTR_DAT_0271c338 + 0x10);
  param_1[1] = 0xf4b17a579f18960;
  param_1[2] = -0x7d5d4e8add6295a5;
  nn::time::StandardSteadyClock::GetCurrentTimePoint((SteadyClockTimePoint *)local_38);
  param_1[1] = local_38[0];
  param_1[2] = -0x7d5d4e8add6295a5;
  return;
}


