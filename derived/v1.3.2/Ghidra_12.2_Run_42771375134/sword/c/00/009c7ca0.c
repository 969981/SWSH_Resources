/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c7ca0; name: FUN_009c7ca0
 */


void FUN_009c7ca0(undefined2 *param_1,byte param_2,undefined2 param_3)

{
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = param_3;
  *(byte *)((long)param_1 + 3) = param_2 & 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


