/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0156d3d0; name: FUN_0156d3d0
 */


uint FUN_0156d3d0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  local_48 = 0;
  local_60 = 0x59f780da124cba17;
  local_58 = "IsUseExtraMsg";
  local_50 = 0xd;
  cVar2 = FUN_00782340(param_2,&local_60);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00782530(param_2);
    uVar3 = uVar3 & 1;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_60 = 0xd98a04f12437020f;
  local_58 = "IsNoWait";
  local_50 = 8;
  local_48 = 0;
  cVar2 = FUN_00782340(param_2,&local_60);
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00782530(param_2);
    uVar4 = uVar4 & 0xffffffff;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_60 = 0xc97ba528e8905578;
  local_58 = "IsBlockDisplay";
  local_50 = 0xe;
  local_48 = 0;
  cVar2 = FUN_00782340(param_2,&local_60);
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00782530(param_2);
    uVar5 = uVar5 & 0xffffffff;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_60 = 0x7daaec59e3826c49;
  local_58 = "IsUseZoneMessage";
  local_50 = 0x10;
  local_48 = 0;
  cVar2 = FUN_00782340(param_2,&local_60);
  if (cVar2 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00782530(param_2);
    uVar6 = uVar6 & 0xffffffff;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_60 = 0xbe6a68a6d1f780b9;
  local_58 = "IsAboveFadeLayer";
  local_50 = 0x10;
  local_48 = 0;
  cVar2 = FUN_00782340(param_2,&local_60);
  if (cVar2 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00782530(param_2);
    uVar7 = uVar7 & 0xffffffff;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  uVar1 = uVar3 | 2;
  if ((uVar4 & 1) == 0) {
    uVar1 = uVar3;
  }
  uVar3 = uVar1 | 4;
  if ((uVar5 & 1) == 0) {
    uVar3 = uVar1;
  }
  uVar1 = uVar3 | 8;
  if ((uVar6 & 1) == 0) {
    uVar1 = uVar3;
  }
  uVar3 = uVar1 | 0x10;
  if ((uVar7 & 1) == 0) {
    uVar3 = uVar1;
  }
  return uVar3;
}


