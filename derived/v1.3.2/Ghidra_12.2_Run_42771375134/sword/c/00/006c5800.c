/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c5800; name: FUN_006c5800
 */


undefined8 FUN_006c5800(void)

{
  undefined8 local_4070;
  undefined8 uStack_4068;
  undefined8 local_4060;
  undefined8 uStack_4058;
  undefined4 local_4050;
  TimeZoneRule aTStack_4048 [16388];
  int iStack_44;
  CalendarAdditionalInfo aCStack_40 [24];
  CalendarTime aCStack_28 [8];
  PosixTime aPStack_18 [8];
  
  nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_18);
  nn::time::ToCalendarTime(aCStack_28,aCStack_40,aPStack_18);
  local_4050 = 0;
  local_4060 = 0;
  uStack_4058 = 0;
  local_4070 = 0x544d47;
  uStack_4068 = 0;
  nn::time::LoadTimeZoneRule(aTStack_4048,(LocationName *)&local_4070);
  nn::time::ToPosixTime(&iStack_44,(PosixTime *)&local_4070,2,aCStack_28,aTStack_4048);
  return local_4070;
}


