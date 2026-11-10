/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f33a0; name: FUN_001f33a0
 */


void FUN_001f33a0(long *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 0x30007;
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_02711168 + 0x10);
  FUN_001e0d50(param_1 + 3,0);
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_02711170 + 0x10);
                    /* try { // try from 001f3404 to 001f340b has its CatchHandler @ 001f34cc */
  FUN_00206e00(param_1 + 5);
  puVar1 = PTR_DAT_02711178;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = (long)(puVar1 + 0x10);
                    /* try { // try from 001f342c to 001f3433 has its CatchHandler @ 001f3498 */
  FUN_003d95e0(param_1 + 0x10,0);
  *(undefined1 *)((long)param_1 + 0xad) = 0;
  *(undefined4 *)(param_1 + 0x12) = *param_2;
  *(undefined4 *)((long)param_1 + 0x94) = param_2[1];
  *(undefined4 *)(param_1 + 0x13) = param_2[2];
  *(undefined4 *)((long)param_1 + 0x9c) = param_2[3];
  *(undefined4 *)(param_1 + 0x14) = param_2[4];
  *(undefined4 *)((long)param_1 + 0xa4) = param_2[5];
  *(undefined4 *)(param_1 + 0x15) = param_2[6];
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(uint *)(param_1 + 0xd) =
       *(uint *)(param_1 + 0xd) & 0xf0000000 | *(uint *)(param_1 + 0xd) & 0xffffff | 0x5000000;
  return;
}


