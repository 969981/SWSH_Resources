/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ae380; name: FUN_003ae380
 */


void FUN_003ae380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined2 *param_5)

{
  FUN_003ba290(param_1,5,1,0,0,0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x50) = *param_5;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
                    /* try { // try from 003ae3e8 to 003ae3f7 has its CatchHandler @ 003ae40c */
  FUN_003ae420(param_1,param_2,param_4);
  return;
}


