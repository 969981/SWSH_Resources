/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00816410; name: FUN_00816410
 */


void FUN_00816410(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  FUN_00801270(auStack_50,3,
               "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_message_util.cc"
               ,0x4d);
  uVar1 = FUN_00800f30(auStack_50,"CHECK failed: false: ");
  uVar1 = FUN_00800f30(uVar1,param_1);
  uVar1 = FUN_00800f30(uVar1,&DAT_01d43d7d);
  uVar1 = FUN_00801220(uVar1,param_2);
  FUN_00800fa0(auStack_58,uVar1);
  FUN_00801290(auStack_50);
                    /* WARNING: Subroutine does not return */
  exit(1);
}


