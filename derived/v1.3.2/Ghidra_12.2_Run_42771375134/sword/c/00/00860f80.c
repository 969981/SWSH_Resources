/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00860f80; name: FUN_00860f80
 */


uint FUN_00860f80(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [48];
  undefined1 auStack_108 [216];
  
  FUN_008468d0(auStack_108);
  uVar2 = FUN_0080c180(auStack_108,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    FUN_00801270(auStack_138,2,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor_database.cc"
                 ,0x13a);
    uVar3 = FUN_00800f30(auStack_138,
                         "Invalid file descriptor data passed to EncodedDescriptorDatabase::Add().")
    ;
    FUN_00800fa0(auStack_140,uVar3);
    FUN_00801290(auStack_138);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00861040(param_1 + 8,auStack_108,param_2,param_3);
  }
  FUN_00846d50(auStack_108);
  return uVar1 & 1;
}


