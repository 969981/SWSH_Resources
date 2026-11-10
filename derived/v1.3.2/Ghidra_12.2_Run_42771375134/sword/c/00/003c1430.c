/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c1430; name: FUN_003c1430
 */


void FUN_003c1430(undefined2 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  *param_1 = 0x20;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x14) = param_3[1];
  *(undefined8 *)(param_1 + 0x18) = *param_3;
  uVar1 = param_3[2];
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(undefined8 *)(param_1 + 0x22) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


