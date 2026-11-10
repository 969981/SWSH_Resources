/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080c870; name: FUN_0080c870
 */


void FUN_0080c870(int *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if ((*(long **)(param_1 + 4) != (long *)0x0) &&
     (0 < param_1[0xb] + (param_1[2] - *param_1) + param_1[7])) {
    (**(code **)(**(long **)(param_1 + 4) + 0x18))();
    param_1[6] = param_1[6] - (param_1[0xb] + (param_1[2] - (int)*(undefined8 *)param_1));
    param_1[7] = 0;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_1;
    param_1[0xb] = 0;
  }
  if (param_1[0xd] == -2) {
    FUN_00801270(auStack_50,1,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/coded_stream.cc"
                 ,0x51);
    uVar1 = FUN_00800f30(auStack_50,"The total number of bytes read was ");
    uVar1 = FUN_00801220(uVar1,param_1[6]);
    FUN_00800fa0(auStack_18,uVar1);
    FUN_00801290(auStack_50);
  }
  return;
}


