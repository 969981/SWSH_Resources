/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bd760; name: FUN_004bd760
 */


void FUN_004bd760(undefined8 *param_1)

{
  *param_1 = 0x20000000;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  return;
}


