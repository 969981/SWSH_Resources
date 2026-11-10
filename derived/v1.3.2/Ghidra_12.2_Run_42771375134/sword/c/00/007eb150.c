/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007eb150; name: FUN_007eb150
 */


void FUN_007eb150(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    FUN_00801270(auStack_60,1,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                 ,0xce6);
    uVar2 = FUN_00800f60(auStack_60,param_1 + 0x38);
    uVar2 = FUN_00800f30(uVar2,&DAT_01ce77a5);
    uVar2 = FUN_00800f60(uVar2,param_2);
    uVar2 = FUN_00800f30(uVar2,&DAT_01d17acd);
    uVar2 = FUN_00800f60(uVar2,param_5);
    FUN_00800fa0(auStack_28,uVar2);
    FUN_00801290(auStack_60);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007eb1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x38,param_2,param_3,param_4,param_5);
  return;
}


