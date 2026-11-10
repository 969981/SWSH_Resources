/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00812b70; name: FUN_00812b70
 */


undefined8 FUN_00812b70(undefined4 param_1,long param_2,long *param_3,ulong *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  plVar5 = (long *)(**(code **)(*param_3 + 0xb0))(param_3);
  if (param_2 == 0) {
    uVar8 = (**(code **)(*plVar5 + 0x18))(plVar5,param_3);
    pbVar2 = (byte *)*param_4;
    if (pbVar2 < (byte *)param_4[1]) {
      uVar6 = (ulong)*pbVar2;
      if (-1 < (char)*pbVar2) {
        *param_4 = (ulong)(pbVar2 + 1);
        goto LAB_00812d04;
      }
    }
    else {
      uVar6 = 0;
    }
    uVar6 = FUN_0080d5d0(param_4,uVar6);
    if (-1 < (long)uVar6) {
LAB_00812d04:
      uVar8 = FUN_00810030(uVar8,param_1);
      uVar8 = FUN_0080cff0(param_4,uVar8,uVar6 & 0xffffffff);
      return uVar8;
    }
  }
  else if ((*(int *)(param_2 + 0x40) == 3) || (*(int *)(param_2 + 0x3c) != 0xb)) {
    FUN_00801270(auStack_60,2,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/wire_format.cc"
                 ,0x1c7);
    uVar8 = FUN_00800f30(auStack_60,"Extensions of MessageSets must be optional messages.");
    FUN_00800fa0(auStack_68,uVar8);
    FUN_00801290(auStack_60);
  }
  else {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x138))(plVar5,param_3,param_2,param_4[9]);
    pcVar1 = (char *)*param_4;
    if ((pcVar1 < (char *)param_4[1]) && (cVar3 = *pcVar1, -1 < cVar3)) {
      *param_4 = (ulong)(pcVar1 + 1);
      uVar6 = FUN_0080ca20(param_4,cVar3);
    }
    else {
      iVar4 = FUN_0080d720(param_4);
      if (iVar4 < 0) {
        return 0;
      }
      uVar6 = FUN_0080ca20(param_4,iVar4);
    }
    if ((-1 < (long)uVar6) &&
       (uVar7 = (**(code **)(*plVar5 + 0x58))(plVar5,param_4), (uVar7 & 1) != 0)) {
      uVar8 = FUN_0080cb90(param_4,uVar6 & 0xffffffff);
      return uVar8;
    }
  }
  return 0;
}


