/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00825740; name: FUN_00825740
 */


undefined4 FUN_00825740(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  switch(*(undefined4 *)(PTR_DAT_02717150 + (ulong)*(byte *)(param_1 + 1) * 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    return *(undefined4 *)*param_1;
  case 9:
  case 10:
    return *(undefined4 *)(*param_1 + 8);
  default:
    FUN_00801270(auStack_40,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_set.cc"
                 ,0x6a6);
    uVar1 = FUN_00800f30(auStack_40,"Can\'t get here.");
    FUN_00800fa0(auStack_48,uVar1);
    FUN_00801290(auStack_40);
    return 0;
  }
}


