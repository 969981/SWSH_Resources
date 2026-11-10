/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001edb70; name: FUN_001edb70
 */


void FUN_001edb70(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 0x30006;
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_02711140 + 0x10);
  FUN_001e0d50(param_1 + 3,0);
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_02711148 + 0x10);
                    /* try { // try from 001edbd4 to 001edbdb has its CatchHandler @ 001edcc0 */
  FUN_00206e00(param_1 + 5);
  puVar1 = PTR_DAT_02711150;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = (long)(puVar1 + 0x10);
                    /* try { // try from 001edbfc to 001edc07 has its CatchHandler @ 001edc8c */
  FUN_003bd750(param_1 + 0x10,1,param_2);
  param_1[0x28] = param_1[0x12];
  param_1[0x29] = param_1[0x13];
  *(int *)(param_1 + 0x2b) = (int)param_1[0x15];
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((long)param_1 + 0xd4);
  *(int *)((long)param_1 + 0x164) = (int)param_1[0x1b];
  *(int *)((long)param_1 + 0x15c) = (int)param_1[0x1a];
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xf0ffffff | 0x3000000;
  *(int *)(param_1 + 0x2d) = (int)param_1[0x1c];
  param_1[0x2a] = param_1[0x14];
  *(undefined8 *)((long)param_1 + 0x16c) = *(undefined8 *)((long)param_1 + 0xe4);
  *(undefined4 *)((long)param_1 + 0x174) = *(undefined4 *)((long)param_1 + 0x11c);
  puVar1 = PTR_DAT_02711158;
  param_1[0x2f] = 1;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


