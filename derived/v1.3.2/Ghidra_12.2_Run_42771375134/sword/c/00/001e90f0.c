/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e90f0; name: FUN_001e90f0
 */


void FUN_001e90f0(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined2 *param_5)

{
  undefined *puVar1;
  undefined2 local_48 [4];
  
  *(undefined4 *)(param_1 + 1) = 0x3000b;
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_02711120 + 0x10);
  FUN_001e0d50(param_1 + 3,0);
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_02711128 + 0x10);
  local_48[0] = *param_5;
                    /* try { // try from 001e9170 to 001e9183 has its CatchHandler @ 001e91d4 */
  FUN_001edb10(param_1 + 5,param_2,param_3 + 0x20,param_4,local_48);
  param_1[0x1a] = (long)param_1;
  puVar1 = PTR_DAT_02711130;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = param_3;
  param_1[0x17] = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)param_1 + 0xdc) = 1;
                    /* try { // try from 001e91a8 to 001e91ab has its CatchHandler @ 001e91c4 */
  FUN_003ff470(param_3 + 0x18);
  return;
}


