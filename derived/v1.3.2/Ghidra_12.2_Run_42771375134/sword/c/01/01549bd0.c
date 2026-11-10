/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01549bd0; name: FUN_01549bd0
 */


bool FUN_01549bd0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  undefined8 local_28;
  
  iVar1 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_28);
  if (iVar1 == 0) {
    FUN_017cbf40(auStack_38,&local_28);
    uVar2 = FUN_017cc140(auStack_38);
    local_28 = *(undefined8 *)(param_1 + 0x15b0);
    lVar3 = FUN_017cc3a0(&local_28);
    local_28 = uVar2;
    lVar4 = FUN_017cc3a0(&local_28);
    if (0x545f < lVar4 - lVar3) {
      *(undefined8 *)(param_1 + 0x15b0) = 0;
      *(undefined2 *)(param_1 + 0x15b8) = 0;
      return false;
    }
  }
  return *(char *)(param_1 + 0x15b8) != '\0';
}


