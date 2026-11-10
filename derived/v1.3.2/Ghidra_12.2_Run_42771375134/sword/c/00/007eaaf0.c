/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007eaaf0; name: FUN_007eaaf0
 */


void FUN_007eaaf0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      FUN_00801270(auStack_60,2,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                   ,0xcb0);
      uVar2 = FUN_00800f30(auStack_60,"Invalid proto descriptor for file \"");
      uVar2 = FUN_00800f60(uVar2,param_1 + 0x38);
      uVar2 = FUN_00800f30(uVar2,&DAT_01d3017a);
      FUN_00800fa0(auStack_68,uVar2);
      FUN_00801290(auStack_60);
    }
    FUN_00801270(auStack_60,2,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                 ,0xcb3);
    uVar2 = FUN_00800f30(auStack_60,&DAT_01cf96d4);
    uVar2 = FUN_00800f60(uVar2,param_2);
    uVar2 = FUN_00800f30(uVar2,&DAT_01d17acd);
    uVar2 = FUN_00800f60(uVar2,param_5);
    FUN_00800fa0(auStack_68,uVar2);
    FUN_00801290(auStack_60);
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x38,param_2,param_3,param_4,param_5);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}


