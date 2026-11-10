/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01549c70; name: FUN_01549c70
 */


bool FUN_01549c70(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  PosixTime aPStack_28 [8];
  
  iVar1 = nn::time::StandardNetworkSystemClock::GetCurrentTime(aPStack_28);
  if ((iVar1 == 0) && (FUN_017cbf40(auStack_30,aPStack_28), param_1 != (undefined8 *)0x0)) {
    uVar2 = FUN_017cc140(auStack_30);
    *param_1 = uVar2;
  }
  return iVar1 == 0;
}


