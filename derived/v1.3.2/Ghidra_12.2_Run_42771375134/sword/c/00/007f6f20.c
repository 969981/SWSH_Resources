/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f6f20; name: FUN_007f6f20
 */


void FUN_007f6f20(void)

{
  undefined8 uVar1;
  int in_w3;
  undefined8 in_x4;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (in_w3 == 6) {
    FUN_0080fee0(in_x4);
    return;
  }
  if (in_w3 == 4) {
    FUN_0080fc40(in_x4);
    return;
  }
  FUN_00801270(auStack_50,3,
               "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
               ,0x186e);
  uVar1 = FUN_00800f30(auStack_50,"Invalid wire type for CPPTYPE_UINT64: ");
  uVar1 = FUN_00801220(uVar1,in_w3);
  FUN_00800fa0(auStack_18,uVar1);
  FUN_00801290(auStack_50);
  return;
}


