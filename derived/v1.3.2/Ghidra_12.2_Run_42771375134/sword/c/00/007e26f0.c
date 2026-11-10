/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e26f0; name: FUN_007e26f0
 */


void FUN_007e26f0(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined *local_50;
  code *pcStack_48;
  undefined1 local_40;
  
  if (DAT_029f55a0 != 2) {
    local_40 = 0;
    local_50 = PTR_DAT_02716670 + 0x10;
    pcStack_48 = FUN_007f76a0;
    FUN_00801c10(&DAT_029f55a0,&local_50);
    FUN_00801390(&local_50);
  }
  uVar1 = FUN_00860f80(DAT_029f5598,param_1,param_2);
  if ((uVar1 & 1) == 0) {
    FUN_00801270(&local_50,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                 ,0x48c);
    uVar2 = FUN_00800f30(&local_50,
                         "CHECK failed: generated_database_->Add(encoded_file_descriptor, size): ");
    FUN_00800fa0(auStack_58,uVar2);
    FUN_00801290(&local_50);
  }
  return;
}


