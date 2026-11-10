/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be0420; name: FUN_00be0420
 */


void FUN_00be0420(CalendarTime *param_1)

{
  int iStack_405c;
  LocationName aLStack_4058 [40];
  TimeZoneRule aTStack_4030 [16384];
  PosixTime aPStack_30 [16];
  
  nn::time::GetDeviceLocationName(aLStack_4058);
  nn::time::LoadTimeZoneRule(aTStack_4030,aLStack_4058);
  nn::time::ToPosixTime(&iStack_405c,aPStack_30,2,param_1,aTStack_4030);
  nn::time::ToCalendarTimeInUtc(aPStack_30);
  return;
}


