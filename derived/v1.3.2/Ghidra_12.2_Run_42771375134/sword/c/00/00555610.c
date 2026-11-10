/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00555610; name: FUN_00555610
 */


undefined8
FUN_00555610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,long param_9
            ,undefined4 param_10)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(param_9 + 0x270) = param_1;
  *(undefined4 *)(param_9 + 0x274) = param_2;
  *(undefined4 *)(param_9 + 0x278) = param_3;
  *(undefined4 *)(param_9 + 0x27c) = param_4;
  *(undefined4 *)(param_9 + 0x280) = param_5;
  *(undefined4 *)(param_9 + 0x284) = param_6;
  *(undefined4 *)(param_9 + 0x288) = param_7;
  *(undefined4 *)(param_9 + 0x28c) = param_8;
  *(undefined4 *)(param_9 + 0x290) = in_stack_00000000;
  *(undefined4 *)(param_9 + 0x294) = param_10;
  *(undefined4 *)(param_9 + 0x298) = in_stack_00000008;
  return 0;
}


