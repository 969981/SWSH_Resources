/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00933770; name: FUN_00933770
 */


void FUN_00933770(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = 5;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 5;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 5;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 5;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 5;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  return;
}


