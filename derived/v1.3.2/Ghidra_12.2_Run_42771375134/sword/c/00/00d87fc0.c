/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d87fc0; name: FUN_00d87fc0
 */


void FUN_00d87fc0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ApplicationPlayStatistics aAStack_60 [8];
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
  Uid aUStack_38 [20];
  int iStack_24;
  
  nn::account::ListOpenUsers(&iStack_24,aUStack_38,1);
  lVar3 = *(long *)(param_2 + 0x90);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  local_48 = DAT_0215ff50;
  local_40 = DAT_0215ff58;
  uVar1 = FUN_01510f00(lVar2,0x4562c6961c74460e);
  if ((uVar1 & 1) == 0) {
    local_58 = 0;
    nn::pdm::QueryApplicationPlayStatistics(aAStack_60,aUStack_38,(ApplicationId *)&local_48,1);
    if (0 < local_50) {
      FUN_01511030(lVar2,local_40);
    }
  }
  local_48 = DAT_0215ff60;
  local_40 = DAT_0215ff68;
  uVar1 = FUN_01510f00(lVar2,0x97eed939c804e4af);
  if ((uVar1 & 1) == 0) {
    local_58 = 0;
    nn::pdm::QueryApplicationPlayStatistics(aAStack_60,aUStack_38,(ApplicationId *)&local_48,1);
    if (0 < local_50) {
      FUN_01511030(lVar2,local_40);
    }
  }
  local_48 = DAT_0215ff70;
  local_40 = DAT_0215ff78;
  uVar1 = FUN_01510f00(lVar2,0xadf4ef67bf24ddae);
  if ((uVar1 & 1) == 0) {
    local_58 = 0;
    nn::pdm::QueryApplicationPlayStatistics(aAStack_60,aUStack_38,(ApplicationId *)&local_48,1);
    if (0 < local_50) {
      FUN_01511030(lVar2,local_40);
    }
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


