/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01549cd0; name: FUN_01549cd0
 */


bool FUN_01549cd0(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 auStack_28 [8];
  PosixTime aPStack_18 [8];
  
  iVar2 = nn::time::StandardNetworkSystemClock::GetCurrentTime(aPStack_18);
  if (iVar2 == 0) {
    FUN_017cbf40(auStack_28,aPStack_18);
    uVar3 = FUN_017cc140(auStack_28);
    bVar4 = *(byte *)(param_1 + 0x15b9);
    if (bVar4 < 10) {
      bVar4 = bVar4 + 1;
      *(byte *)(param_1 + 0x15b9) = bVar4;
    }
    bVar1 = 9 < bVar4;
    *(bool *)(param_1 + 0x15b8) = bVar1;
    *(undefined8 *)(param_1 + 0x15b0) = uVar3;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x15b8) != '\0';
  }
  return bVar1;
}


