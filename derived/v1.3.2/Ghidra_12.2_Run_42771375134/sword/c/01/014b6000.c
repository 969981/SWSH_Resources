/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b6000; name: FUN_014b6000
 */


void FUN_014b6000(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  tm *ptVar7;
  time_t local_70;
  undefined8 local_68;
  
  uVar5 = FUN_0087f070();
  FUN_00878f70(param_1,3,0);
  FUN_00878f70(param_1,0,0);
  FUN_00878f70(param_1,1,0);
  FUN_00878f70(param_1,2,0);
  local_68 = FUN_006c5800();
  local_70 = FUN_006c5880(&local_68);
  ptVar7 = localtime(&local_70);
  iVar3 = ptVar7->tm_year;
  iVar1 = ptVar7->tm_mday;
  iVar2 = ptVar7->tm_mon;
  FUN_00878f70(param_1,7,param_4);
  FUN_00878f70(param_1,4,(uint)(iVar3 % 100) % 100);
  FUN_00878f70(param_1,5,iVar2 + 1);
  FUN_00878f70(param_1,6,iVar1);
  FUN_0087d350(param_1,*param_2);
  FUN_0087d3a0(param_1,param_3);
  uVar6 = FUN_0087a5f0(param_1);
  FUN_00878f70(param_1,9,uVar6);
  uVar4 = FUN_008d4270();
  FUN_00878a70(param_1,uVar4);
  FUN_0087f0c0(param_1,uVar5 & 1);
  return;
}


