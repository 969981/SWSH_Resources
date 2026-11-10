/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b5a60; name: FUN_014b5a60
 */


void FUN_014b5a60(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  tm *ptVar11;
  time_t local_70;
  undefined8 local_68;
  
  uVar5 = FUN_0087f070();
  uVar10 = FUN_01524c50(param_2,param_1);
  if ((uVar10 & 1) == 0) {
    uVar6 = FUN_00878e20(param_1,7);
    uVar7 = FUN_00878e20(param_1,4);
    uVar8 = FUN_00878e20(param_1,5);
    uVar9 = FUN_00878e20(param_1,6);
    FUN_00878f70(param_1,3,uVar6);
    FUN_00878f70(param_1,0,uVar7 % 100);
    FUN_00878f70(param_1,1,uVar8);
    FUN_00878f70(param_1,2,uVar9);
    local_68 = FUN_006c5800();
    local_70 = FUN_006c5880(&local_68);
    ptVar11 = localtime(&local_70);
    iVar3 = ptVar11->tm_year;
    iVar1 = ptVar11->tm_mday;
    iVar2 = ptVar11->tm_mon;
    FUN_00878f70(param_1,7,param_3);
    FUN_00878f70(param_1,4,(uint)(iVar3 % 100) % 100);
    FUN_00878f70(param_1,5,iVar2 + 1);
  }
  else {
    local_68 = FUN_006c5800();
    local_70 = FUN_006c5880(&local_68);
    ptVar11 = localtime(&local_70);
    iVar3 = ptVar11->tm_year;
    iVar1 = ptVar11->tm_mday;
    iVar2 = ptVar11->tm_mon;
    FUN_00878f70(param_1,7,param_3);
    FUN_00878f70(param_1,4,(uint)(iVar3 % 100) % 100);
    FUN_00878f70(param_1,5,iVar2 + 1);
  }
  FUN_00878f70(param_1,6,iVar1);
  FUN_014b56b0(param_1,param_2,param_4);
  uVar4 = FUN_008d4270();
  FUN_00878a70(param_1,uVar4);
  FUN_0087f0c0(param_1,uVar5 & 1);
  return;
}


