/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045b3c0; name: FUN_0045b3c0
 */


void FUN_0045b3c0(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(byte *)((long)param_1 + 0x12) = *(byte *)((long)param_1 + 0x12) & 0xfc;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


