/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b5f10; name: FUN_014b5f10
 */


void FUN_014b5f10(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  tm *ptVar6;
  time_t local_50;
  undefined8 local_48;
  
  local_48 = FUN_006c5800();
  local_50 = FUN_006c5880(&local_48);
  ptVar6 = localtime(&local_50);
  iVar3 = ptVar6->tm_year;
  iVar1 = ptVar6->tm_mday;
  iVar2 = ptVar6->tm_mon;
  FUN_00878f70(param_1,7,0x9e);
  FUN_00878f70(param_1,4,(uint)(iVar3 % 100) % 100);
  FUN_00878f70(param_1,5,iVar2 + 1);
  FUN_00878f70(param_1,6,iVar1);
  uVar5 = FUN_0087a5f0(param_1);
  FUN_00878f70(param_1,9,uVar5);
  uVar4 = FUN_008d4270();
  FUN_00878a70(param_1,uVar4);
  return;
}


