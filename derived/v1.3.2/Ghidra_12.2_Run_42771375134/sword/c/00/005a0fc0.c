/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a0fc0; name: FUN_005a0fc0
 */


undefined8
FUN_005a0fc0(long param_1,undefined8 param_2,undefined4 param_3,byte param_4,undefined4 param_5,
            byte param_6,byte param_7,undefined8 param_8,undefined4 param_9,undefined8 param_10,
            undefined8 param_11,undefined4 param_12)

{
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000058;
  
  FUN_005a0da0(param_1,param_2,0xffffffff);
  *(byte *)(param_1 + 0x48) = param_4 & 1;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x40) = param_12;
  *(byte *)(param_1 + 100) = param_7 & 1;
  *(undefined4 *)(param_1 + 0x60) = in_stack_00000058;
  *(char **)(param_1 + 0x80) = "UserDef";
  *(undefined4 *)(param_1 + 0x88) = param_5;
  *(undefined4 *)(param_1 + 0x8c) = in_stack_00000038;
  *(undefined4 *)(param_1 + 0x90) = in_stack_00000040;
  *(undefined4 *)(param_1 + 0x94) = in_stack_00000048;
  *(byte *)(param_1 + 0x98) = param_6 & 1;
  return 0;
}


