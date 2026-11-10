/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004810c0; name: FUN_004810c0
 */


void FUN_004810c0(undefined8 *param_1,undefined2 param_2,byte param_3,byte param_4)

{
  *(undefined2 *)(param_1 + 2) = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  *(byte *)((long)param_1 + 0x12) = param_3 & 1;
  *(byte *)((long)param_1 + 0x13) = param_4 & 1;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


