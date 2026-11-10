/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090da70; name: FUN_0090da70
 */


bool FUN_0090da70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = FUN_0087b880(param_3,0);
  iVar2 = FUN_0087b880(param_2,0);
  if (iVar1 != iVar2) {
    FUN_0087bfb0(param_2,0,iVar1);
  }
  iVar3 = FUN_0087b880(param_3,1);
  iVar4 = FUN_0087b880(param_2,1);
  if (iVar3 != iVar4) {
    FUN_0087bfb0(param_2,1,iVar3);
  }
  iVar5 = FUN_0087b880(param_3,2);
  iVar6 = FUN_0087b880(param_2,2);
  if (iVar5 != iVar6) {
    FUN_0087bfb0(param_2,2,iVar5);
  }
  iVar7 = FUN_0087b880(param_3,3);
  iVar8 = FUN_0087b880(param_2,3);
  if (iVar7 != iVar8) {
    FUN_0087bfb0(param_2,3,iVar7);
  }
  return iVar7 != iVar8 || (iVar5 != iVar6 || (iVar3 != iVar4 || iVar1 != iVar2));
}


