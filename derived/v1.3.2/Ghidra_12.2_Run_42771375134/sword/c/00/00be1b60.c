/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be1b60; name: FUN_00be1b60
 */


bool FUN_00be1b60(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  undefined8 local_60;
  CalendarAdditionalInfo aCStack_58 [24];
  CalendarTime local_40 [4];
  char cStack_3c;
  undefined1 auStack_38 [8];
  
  if ((*param_1 == 0) || (*(long *)(param_1 + 0x212) != 0x644)) {
    return false;
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,400,0x10);
  if (lVar4 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_009fe380(lVar4,param_2);
  *(long **)(lVar4 + 8) = param_2;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 400;
  *(undefined8 *)(lVar4 + 0x20) = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 == 0) {
    return false;
  }
  plVar6 = (long *)(lVar4 + 0x48);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  if (*(long *)(param_1 + 0x212) == 0x644) {
    uVar5 = FUN_009fe850(lVar4,param_1 + 0x12);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar6);
    if ((((uVar5 & 1) != 0) && (*(long *)PTR_DAT_02716748 != 0)) &&
       (lVar3 = FUN_007ad1e0(), lVar3 != 0)) {
      FUN_017cbe80(auStack_38);
      uVar5 = FUN_0185c210(lVar3,auStack_38);
      if ((uVar5 & 1) != 0) {
        local_60 = FUN_017cc550(auStack_38);
        nn::time::ToCalendarTime(local_40,aCStack_58,(PosixTime *)&local_60);
        uVar1 = FUN_009fe1a0(lVar4,0x10);
        uVar2 = FUN_009fe1a0(lVar4,0x11);
        if (uVar2 == 0 && uVar1 == 0) {
          bVar7 = true;
        }
        else {
          bVar7 = uVar1 <= (uint)(int)cStack_3c && (uint)(int)cStack_3c <= uVar2;
        }
        goto LAB_00be1d20;
      }
    }
  }
  else {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  bVar7 = false;
LAB_00be1d20:
  (**(code **)(*plVar6 + 0x18))(plVar6);
  return bVar7;
}


