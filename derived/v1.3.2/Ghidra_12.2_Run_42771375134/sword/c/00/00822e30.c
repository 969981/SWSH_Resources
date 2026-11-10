/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00822e30; name: FUN_00822e30
 */


undefined8 FUN_00822e30(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != *(int *)(param_2 + 8)) {
    FUN_00801270(auStack_50,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/map.h"
                 ,0xb5);
    uVar2 = FUN_00800f30(auStack_50,"Unsupported: type mismatch");
    FUN_00800fa0(auStack_58,uVar2);
    FUN_00801290(auStack_50);
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar1 == 0) {
    FUN_00801270(auStack_50,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/map.h"
                 ,0x71);
    uVar2 = FUN_00800f30(auStack_50,"Protocol Buffer map usage error:\n");
    uVar2 = FUN_00800f30(uVar2,"MapKey::type MapKey is not initialized. ");
    uVar2 = FUN_00800f30(uVar2,"Call set methods to initialize MapKey.");
    FUN_00800fa0(auStack_58,uVar2);
    FUN_00801290(auStack_50);
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar1 - 1U < 10) {
                    /* WARNING: Could not recover jumptable at 0x00822e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_021416a8 + *(int *)(&DAT_021416a8 + (ulong)(iVar1 - 1U) * 4)))();
    return uVar2;
  }
  return 0;
}


