/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f6d00; name: FUN_007f6d00
 */


void FUN_007f6d00(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (param_4 == 0x11) {
    uVar2 = (ulong)(uint)(param_3 << 1 ^ param_3 >> 0x1f);
  }
  else {
    if (param_4 == 0xf) {
      FUN_0080fd90(param_5);
      return;
    }
    if (param_4 != 5) {
      FUN_00801270(auStack_50,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                   ,0x1836);
      uVar1 = FUN_00800f30(auStack_50,"Invalid wire type for CPPTYPE_INT32: ");
      uVar1 = FUN_00801220(uVar1,param_4);
      FUN_00800fa0(auStack_18,uVar1);
      FUN_00801290(auStack_50);
      return;
    }
    uVar2 = (ulong)param_3;
  }
  FUN_0080fc40(param_5,param_2,uVar2);
  return;
}


