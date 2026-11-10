/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008344d0; name: FUN_008344d0
 */


void FUN_008344d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  FUN_00801270(auStack_60,3,
               "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_message_reflection.cc"
               ,0x5a);
  uVar1 = FUN_00800f30(auStack_60,
                       "Protocol Buffer reflection usage error:\n  Method      : google::protobuf::Reflection::"
                      );
  uVar1 = FUN_00800f30(uVar1,param_3);
  uVar1 = FUN_00800f30(uVar1,"\n  Message type: ");
  uVar1 = FUN_00800f60(uVar1,*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_00800f30(uVar1,"\n  Field       : ");
  uVar1 = FUN_00800f60(uVar1,*(undefined8 *)(param_2 + 8));
  uVar1 = FUN_00800f30(uVar1,"\n  Problem     : ");
  uVar1 = FUN_00800f30(uVar1,param_4);
  FUN_00800fa0(auStack_68,uVar1);
  FUN_00801290(auStack_60);
  return;
}


