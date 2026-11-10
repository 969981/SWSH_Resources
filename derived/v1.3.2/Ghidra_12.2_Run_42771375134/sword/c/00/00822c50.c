/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00822c50; name: FUN_00822c50
 */


ulong FUN_00822c50(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte bVar5;
  byte *pbVar6;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
    FUN_00801270(auStack_50,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/map.h"
                 ,0x71);
    uVar2 = FUN_00800f30(auStack_50,"Protocol Buffer map usage error:\n");
    uVar2 = FUN_00800f30(uVar2,"MapKey::type MapKey is not initialized. ");
    uVar2 = FUN_00800f30(uVar2,"Call set methods to initialize MapKey.");
    FUN_00800fa0(auStack_18,uVar2);
    FUN_00801290(auStack_50);
    iVar1 = *(int *)(param_2 + 8);
  }
  switch(iVar1) {
  case 1:
    iVar1 = FUN_0081f770(param_2);
    return (long)iVar1;
  case 2:
    uVar4 = FUN_0081f5d0(param_2);
    return uVar4;
  case 3:
    uVar4 = FUN_0081fab0(param_2);
    return uVar4 & 0xffffffff;
  case 4:
    uVar4 = FUN_0081f910(param_2);
    return uVar4;
  case 5:
  case 6:
  case 8:
  case 10:
    FUN_00801270(auStack_50,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/map.h"
                 ,0x6b4);
    uVar2 = FUN_00800f30(auStack_50,"Unsupported");
    FUN_00800fa0(auStack_18,uVar2);
    FUN_00801290(auStack_50);
  default:
    FUN_00801270(auStack_50,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/map.h"
                 ,0x6c3);
    uVar2 = FUN_00800f30(auStack_50,"Can\'t get here.");
    FUN_00800fa0(auStack_18,uVar2);
    FUN_00801290(auStack_50);
    break;
  case 7:
    uVar4 = FUN_0081fc50(param_2);
    return uVar4 & 1;
  case 9:
    pbVar3 = (byte *)FUN_0081f430(param_2);
    pbVar6 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar6 = pbVar3 + 1;
    }
    bVar5 = *pbVar6;
    if (bVar5 != 0) {
      uVar4 = 0;
      do {
        pbVar6 = pbVar6 + 1;
        uVar4 = uVar4 * 5 + (ulong)bVar5;
        bVar5 = *pbVar6;
      } while (bVar5 != 0);
      return uVar4;
    }
  }
  return 0;
}


