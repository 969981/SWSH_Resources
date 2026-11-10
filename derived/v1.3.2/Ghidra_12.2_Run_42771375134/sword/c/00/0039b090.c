/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039b090; name: FUN_0039b090
 */


void FUN_0039b090(long *param_1,byte param_2,long param_3)

{
  undefined *puVar1;
  
  param_1[2] = 1;
  param_1[3] = 0;
  puVar1 = PTR_DAT_027126f0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
                    /* try { // try from 0039b0e4 to 0039b0ef has its CatchHandler @ 0039b16c */
  FUN_003a6570(param_1 + 10,param_1 + 0x3f2);
  param_1[0x3f0] = 0x6400000000;
  *(undefined4 *)((long)param_1 + 0x1f8c) = 0;
                    /* try { // try from 0039b0fc to 0039b103 has its CatchHandler @ 0039b150 */
  FUN_0039ebd0(param_1 + 0x3f2);
  param_1[0x3f8] = 0;
  param_1[0x3f9] = 0;
  param_1[0x3fa] = 0;
  param_1[0x3fb] = 0;
  *(byte *)(param_1 + 0x3fc) = param_2 & 1;
  *(undefined2 *)((long)param_1 + 0x1fe1) = 0;
  param_1[0x3fd] = 0;
  param_1[0x3fe] = 0;
  param_1[0x3ff] = 0;
  param_1[0x400] = 0;
  param_1[0x401] = param_3;
  return;
}


