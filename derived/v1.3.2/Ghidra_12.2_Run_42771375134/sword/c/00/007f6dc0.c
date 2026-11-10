/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f6dc0; name: FUN_007f6dc0
 */


void FUN_007f6dc0(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4,undefined8 param_5
                 )

{
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (param_4 == 0x12) {
    param_3 = param_3 << 1 ^ (long)param_3 >> 0x3f;
  }
  else {
    if (param_4 == 0x10) {
      FUN_0080fee0(param_5);
      return;
    }
    if (param_4 != 3) {
      FUN_00801270(auStack_50,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                   ,0x184c);
      uVar1 = FUN_00800f30(auStack_50,"Invalid wire type for CPPTYPE_INT64: ");
      uVar1 = FUN_00801220(uVar1,param_4);
      FUN_00800fa0(auStack_18,uVar1);
      FUN_00801290(auStack_50);
      return;
    }
  }
  FUN_0080fc40(param_5,param_2,param_3);
  return;
}


