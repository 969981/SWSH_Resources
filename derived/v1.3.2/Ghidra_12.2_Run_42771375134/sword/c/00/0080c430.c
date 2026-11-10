/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080c430; name: FUN_0080c430
 */


void FUN_0080c430(int param_1,int param_2,int param_3,long *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  byte local_78 [16];
  void *local_68;
  undefined1 auStack_60 [48];
  
  if (param_1 != param_2) {
    FUN_00801270(auStack_60,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message_lite.cc"
                 ,0x41);
    uVar1 = FUN_00800f30(auStack_60,
                         "CHECK failed: (byte_size_before_serialization) == (byte_size_after_serialization): "
                        );
    (**(code **)(*param_4 + 0x10))(local_78,param_4);
    uVar1 = FUN_00800f60(uVar1,local_78);
    uVar1 = FUN_00800f30(uVar1," was modified concurrently during serialization.");
    FUN_00800fa0(auStack_80,uVar1);
    if ((local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    FUN_00801290(auStack_60);
  }
  if (param_3 != param_1) {
    FUN_00801270(auStack_60,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message_lite.cc"
                 ,0x44);
    uVar1 = FUN_00800f30(auStack_60,
                         "CHECK failed: (bytes_produced_by_serialization) == (byte_size_before_serialization): "
                        );
    uVar1 = FUN_00800f30(uVar1,
                         "Byte size calculation and serialization were inconsistent.  This may indicate a bug in protocol buffers or it may be caused by concurrent modification of "
                        );
    (**(code **)(*param_4 + 0x10))(local_78,param_4);
    uVar1 = FUN_00800f60(uVar1,local_78);
    uVar1 = FUN_00800f30(uVar1,&DAT_01cddc9a);
    FUN_00800fa0(auStack_80,uVar1);
    if ((local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    FUN_00801290(auStack_60);
  }
  FUN_00801270(auStack_60,3,
               "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message_lite.cc"
               ,0x48);
  uVar1 = FUN_00800f30(auStack_60,"This shouldn\'t be called if all the sizes are equal.");
  FUN_00800fa0(local_78,uVar1);
  FUN_00801290(auStack_60);
  return;
}


