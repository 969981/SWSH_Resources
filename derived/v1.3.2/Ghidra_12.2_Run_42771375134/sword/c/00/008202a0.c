/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008202a0; name: FUN_008202a0
 */


undefined8 FUN_008202a0(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  iVar5 = (int)param_1[1];
  if ((iVar5 == 0) || (*param_1 == 0)) {
    FUN_00801270(auStack_60,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/map.h"
                 ,0x1a8);
    uVar3 = FUN_00800f30(auStack_60,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00800f30(uVar3,"MapValueRef::type MapValueRef is not initialized.");
    FUN_00800fa0(auStack_90,uVar3);
    FUN_00801290(auStack_60);
    iVar5 = (int)param_1[1];
  }
  if (iVar5 != 4) {
    FUN_00801270(auStack_90,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/map.h"
                 ,0x163);
    uVar3 = FUN_00800f30(auStack_90,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00800f30(uVar3,"MapValueRef::GetUInt64Value");
    uVar3 = FUN_00800f30(uVar3," type does not match\n");
    uVar3 = FUN_00800f30(uVar3,"  Expected : ");
    puVar2 = PTR_PTR_02717128;
    uVar3 = FUN_00800f30(uVar3,*(undefined8 *)(PTR_PTR_02717128 + 0x20));
    uVar3 = FUN_00800f30(uVar3,&DAT_01d245b7);
    uVar3 = FUN_00800f30(uVar3,"  Actual   : ");
    uVar1 = *(uint *)(param_1 + 1);
    if ((uVar1 == 0) || (*param_1 == 0)) {
      FUN_00801270(auStack_60,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/map.h"
                   ,0x1a8);
      uVar4 = FUN_00800f30(auStack_60,"Protocol Buffer map usage error:\n");
      uVar4 = FUN_00800f30(uVar4,"MapValueRef::type MapValueRef is not initialized.");
      FUN_00800fa0(auStack_28,uVar4);
      FUN_00801290(auStack_60);
      uVar1 = *(uint *)(param_1 + 1);
    }
    uVar3 = FUN_00800f30(uVar3,*(undefined8 *)(puVar2 + (ulong)uVar1 * 8));
    FUN_00800fa0(auStack_60,uVar3);
    FUN_00801290(auStack_90);
  }
  return *(undefined8 *)*param_1;
}


