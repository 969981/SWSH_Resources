/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081f430; name: FUN_0081f430
 */


undefined8 FUN_0081f430(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == 0) {
    FUN_00801270(auStack_60,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/map.h"
                 ,0x71);
    uVar4 = FUN_00800f30(auStack_60,"Protocol Buffer map usage error:\n");
    uVar4 = FUN_00800f30(uVar4,"MapKey::type MapKey is not initialized. ");
    uVar4 = FUN_00800f30(uVar4,"Call set methods to initialize MapKey.");
    FUN_00800fa0(auStack_90,uVar4);
    FUN_00801290(auStack_60);
    iVar1 = *(int *)(param_1 + 1);
  }
  if (iVar1 != 9) {
    FUN_00801270(auStack_90,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/map.h"
                 ,0xad);
    uVar4 = FUN_00800f30(auStack_90,"Protocol Buffer map usage error:\n");
    uVar4 = FUN_00800f30(uVar4,"MapKey::GetStringValue");
    uVar4 = FUN_00800f30(uVar4," type does not match\n");
    uVar4 = FUN_00800f30(uVar4,"  Expected : ");
    puVar3 = PTR_PTR_02717128;
    uVar4 = FUN_00800f30(uVar4,*(undefined8 *)(PTR_PTR_02717128 + 0x48));
    uVar4 = FUN_00800f30(uVar4,&DAT_01d245b7);
    uVar4 = FUN_00800f30(uVar4,"  Actual   : ");
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 == 0) {
      FUN_00801270(auStack_60,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/map.h"
                   ,0x71);
      uVar5 = FUN_00800f30(auStack_60,"Protocol Buffer map usage error:\n");
      uVar5 = FUN_00800f30(uVar5,"MapKey::type MapKey is not initialized. ");
      uVar5 = FUN_00800f30(uVar5,"Call set methods to initialize MapKey.");
      FUN_00800fa0(auStack_28,uVar5);
      FUN_00801290(auStack_60);
      uVar2 = *(uint *)(param_1 + 1);
    }
    uVar4 = FUN_00800f30(uVar4,*(undefined8 *)(puVar3 + (ulong)uVar2 * 8));
    FUN_00800fa0(auStack_60,uVar4);
    FUN_00801290(auStack_90);
  }
  return *param_1;
}


