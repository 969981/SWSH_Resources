/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0156ef30; name: FUN_0156ef30
 */


void FUN_0156ef30(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar7 = *param_1;
  local_60 = 0x553dac0c028e0195;
  local_58 = "ItemNo";
  local_50 = 6;
  local_48 = 0;
  uVar4 = FUN_00782340(param_2,&local_60);
  iVar1 = FUN_00782440(param_2,uVar4);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_60 = 0xf4c87b26a4b2bfd3;
  local_58 = "Num";
  local_50 = 3;
  local_48 = 0;
  uVar4 = FUN_00782340(param_2,&local_60);
  iVar2 = FUN_00782440(param_2,uVar4);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_60 = 0xae8bb4b4f8778895;
  local_58 = "IsForceOpenDesc";
  local_50 = 0xf;
  local_48 = 0;
  uVar4 = FUN_00782340(param_2,&local_60);
  uVar5 = FUN_00782530(param_2,uVar4);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_60 = 0xb800b2aa1de92584;
  local_58 = "IsAdd";
  local_50 = 5;
  local_48 = 0;
  uVar4 = 8;
  if ((uVar5 & 1) == 0) {
    uVar4 = 9;
  }
  uVar6 = FUN_00782340(param_2,&local_60);
  uVar3 = FUN_00782530(param_2,uVar6);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_60 = 0x3df3d4ccd8ecf02d;
  local_58 = "IsPlayME";
  local_50 = 8;
  local_48 = 0;
  uVar6 = FUN_00782340(param_2,&local_60);
  uVar5 = FUN_00782530(param_2,uVar6);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  uVar6 = 2;
  if ((uVar5 & 1) == 0) {
    uVar6 = 3;
  }
  FUN_0076dba0(*(long *)(lVar7 + 0x90) + 0x60,uVar6);
  FUN_0076dba0(*(long *)(lVar7 + 0x90) + 0x60,~uVar3 & 1);
  FUN_0076dba0(*(long *)(lVar7 + 0x90) + 0x60,uVar4);
  FUN_0076dba0(*(long *)(lVar7 + 0x90) + 0x60,(long)iVar2);
  FUN_0076dba0(*(long *)(lVar7 + 0x90) + 0x60,(long)iVar1);
  return;
}


