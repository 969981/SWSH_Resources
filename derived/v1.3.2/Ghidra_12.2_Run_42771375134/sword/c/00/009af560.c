/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009af560; name: FUN_009af560
 */


void FUN_009af560(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  *param_1 = param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 1) = param_3 & 0x7fffffff;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  return;
}


