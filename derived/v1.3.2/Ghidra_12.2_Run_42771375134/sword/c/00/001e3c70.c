/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e3c70; name: FUN_001e3c70
 */


void FUN_001e3c70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_003a9630(param_1 + 3,param_2,param_3,param_4 & 1);
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xf0ffffff | 0x7000000;
  return;
}


