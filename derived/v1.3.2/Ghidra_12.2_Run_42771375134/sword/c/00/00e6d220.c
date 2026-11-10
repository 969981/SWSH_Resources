/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e6d220; name: FUN_00e6d220
 */


void FUN_00e6d220(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long param_9)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(param_9 + 0x58c) = param_1;
  *(undefined4 *)(param_9 + 0x5a0) = param_5;
  *(undefined4 *)(param_9 + 0x5a4) = param_6;
  *(undefined4 *)(param_9 + 0x5a8) = param_7;
  *(undefined4 *)(param_9 + 0x5ac) = param_8;
  *(undefined4 *)(param_9 + 0x5b0) = in_stack_00000000;
  *(undefined4 *)(param_9 + 0x5b4) = in_stack_00000008;
  *(undefined4 *)(param_9 + 0x5cc) = 0;
  *(ulong *)(param_9 + 0x598) = (ulong)param_4;
  *(ulong *)(param_9 + 0x590) = CONCAT44(param_3,param_2);
  *(undefined4 *)(param_9 + 0x5c0) = 1;
  return;
}


