/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00416950; name: FUN_00416950
 */


void FUN_00416950(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  *(undefined2 *)((long)param_1 + 0x42) = 0;
  return;
}


