/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b5990; name: FUN_014b5990
 */


void FUN_014b5990(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  tm *ptVar5;
  time_t local_50;
  undefined8 local_48;
  
  uVar4 = FUN_0087d610(param_1,2);
  if ((uVar4 & 1) != 0) {
    local_48 = FUN_006c5800();
    local_50 = FUN_006c5880(&local_48);
    ptVar5 = localtime(&local_50);
    iVar3 = ptVar5->tm_year;
    iVar1 = ptVar5->tm_mday;
    iVar2 = ptVar5->tm_mon;
    FUN_00878f70(param_1,7,0x7532);
    FUN_00878f70(param_1,4,(uint)(iVar3 % 100) % 100);
    FUN_00878f70(param_1,5,iVar2 + 1);
    FUN_00878f70(param_1,6,iVar1);
  }
  return;
}


