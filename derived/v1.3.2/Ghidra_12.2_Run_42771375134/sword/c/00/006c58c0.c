/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c58c0; name: FUN_006c58c0
 */


uint FUN_006c58c0(ClockSnapshot *param_1,ClockSnapshot *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  SteadyClockTimePoint aSStack_78 [40];
  SteadyClockTimePoint aSStack_50 [40];
  long local_28;
  
  nn::time::ClockSnapshot::GetStandardSteadyClockTimePoint();
  nn::time::ClockSnapshot::GetStandardSteadyClockTimePoint();
  iVar1 = nn::time::GetSpanBetween(&local_28,aSStack_50,aSStack_78);
  uVar2 = 0;
  if ((iVar1 == 0) && (0 < local_28)) {
    lVar3 = nn::time::CalculateStandardUserSystemClockDifferenceByUser(param_1,param_2);
    if (lVar3 == 0) {
      nn::time::ClockSnapshot::GetLocationName();
      nn::time::ClockSnapshot::GetLocationName();
      uVar2 = nn::time::operator==((LocationName *)aSStack_50,(LocationName *)aSStack_78);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2 & 1;
}


