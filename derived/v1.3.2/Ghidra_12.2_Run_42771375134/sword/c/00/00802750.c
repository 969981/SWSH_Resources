/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00802750; name: FUN_00802750
 */


void FUN_00802750(long *param_1,int param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  *(undefined1 *)((long)param_1 + 0xe9) = 1;
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008027a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3,param_4);
    return;
  }
  if (param_2 < 0) {
    FUN_00801270(auStack_60,2,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format.cc"
                 ,0x12f);
    uVar2 = FUN_00800f30(auStack_60,"Error parsing text-format ");
    uVar2 = FUN_00800f60(uVar2,*(undefined8 *)(param_1[0x1b] + 8));
  }
  else {
    FUN_00801270(auStack_60,2,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format.cc"
                 ,0x12a);
    uVar2 = FUN_00800f30(auStack_60,"Error parsing text-format ");
    uVar2 = FUN_00800f60(uVar2,*(undefined8 *)(param_1[0x1b] + 8));
    uVar2 = FUN_00800f30(uVar2,&DAT_01d17acd);
    uVar2 = FUN_00801220(uVar2,param_2 + 1);
    uVar2 = FUN_00800f30(uVar2,&DAT_01d43d7d);
    uVar2 = FUN_00801220(uVar2,param_3 + 1);
  }
  uVar2 = FUN_00800f30(uVar2,&DAT_01d17acd);
  uVar2 = FUN_00800f60(uVar2,param_4);
  FUN_00800fa0(auStack_68,uVar2);
  FUN_00801290(auStack_60);
  return;
}


