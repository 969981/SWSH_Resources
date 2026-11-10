/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001da2f0; name: FUN_001da2f0
 */


void FUN_001da2f0(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  long *local_58;
  
  *(undefined4 *)(param_1 + 1) = 0x10010;
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_027110a8 + 0x10);
  FUN_001e0d50(param_1 + 3,0);
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_02711090 + 0x10);
                    /* try { // try from 001da364 to 001da36b has its CatchHandler @ 001da578 */
  FUN_00206e00(param_1 + 5);
  puVar2 = PTR_DAT_027110b0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = (long)(puVar2 + 0x10);
                    /* try { // try from 001da38c to 001da39b has its CatchHandler @ 001da544 */
  FUN_003bd750(param_1 + 0x10,4,param_2);
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xf0ffffff | 0x3000000;
  param_1[0x28] = param_1[0x12];
  param_1[0x29] = param_1[0x13];
  param_1[0x2a] = param_1[0x14];
  *(int *)(param_1 + 0x2b) = (int)param_1[0x15];
  *(int *)((long)param_1 + 0x15c) = (int)param_1[0x1a];
  *(int *)((long)param_1 + 0x164) = (int)param_1[0x1b];
  *(int *)(param_1 + 0x2d) = (int)param_1[0x1c];
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((long)param_1 + 0xd4);
  *(undefined8 *)((long)param_1 + 0x16c) = *(undefined8 *)((long)param_1 + 0xe4);
  *(undefined4 *)((long)param_1 + 0x174) = *(undefined4 *)((long)param_1 + 0x11c);
  puVar2 = PTR_DAT_02711098;
  param_1[0x31] = 0;
  param_1[0x32] = param_4;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x38] = (long)(param_1 + 0x33);
  param_1[0x39] = 0x400000000;
  *(undefined1 *)(param_1 + 0x37) = 1;
  param_1[0x2f] = 1;
  param_1[0x30] = param_3;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xf0ffffff | 0x4000000;
  uVar1 = *(uint *)(param_3 + 0x90);
  if (uVar1 < (*(uint *)(param_3 + 0x94) & 0x7fffffff)) {
    *(long **)(*(long *)(param_3 + 0x88) + (ulong)uVar1 * 8) = param_1;
    *(uint *)(param_3 + 0x90) = uVar1 + 1;
  }
  else {
                    /* try { // try from 001da460 to 001da4a3 has its CatchHandler @ 001da4c0 */
    local_58 = param_1;
    FUN_001dedd0(param_3 + 0x60,&local_58);
  }
  if (param_4 != 0) {
    uVar1 = *(uint *)(param_4 + 0x1c8);
    if (uVar1 < (*(uint *)(param_4 + 0x1cc) & 0x7fffffff)) {
      *(long **)(*(long *)(param_4 + 0x1c0) + (ulong)uVar1 * 8) = param_1;
      *(uint *)(param_4 + 0x1c8) = uVar1 + 1;
    }
    else {
      local_58 = param_1;
      FUN_001dedd0(param_4 + 0x198,&local_58);
    }
  }
  return;
}


