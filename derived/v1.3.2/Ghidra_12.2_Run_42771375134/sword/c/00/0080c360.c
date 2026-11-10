/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080c360; name: FUN_0080c360
 */


long FUN_0080c360(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [24];
  char local_58;
  undefined1 auStack_50 [32];
  undefined1 auStack_28 [8];
  
  iVar1 = (**(code **)(*param_1 + 0x78))();
  FUN_0080e830(auStack_50,param_3,iVar1,0xffffffff);
  FUN_0080db00(auStack_70,auStack_50);
  (**(code **)(*param_1 + 0x68))(param_1,auStack_70);
  if (local_58 != '\0') {
    FUN_00801270(auStack_a0,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message_lite.cc"
                 ,0xe6);
    uVar2 = FUN_00800f30(auStack_a0,"CHECK failed: !coded_out.HadError(): ");
    FUN_00800fa0(auStack_28,uVar2);
    FUN_00801290(auStack_a0);
  }
  FUN_0080db90(auStack_70);
  thunk_FUN_0080ee40(auStack_50);
  return param_3 + iVar1;
}


