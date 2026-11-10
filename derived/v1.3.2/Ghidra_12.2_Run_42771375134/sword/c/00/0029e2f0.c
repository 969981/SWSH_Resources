/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029e2f0; name: FUN_0029e2f0
 */


void FUN_0029e2f0(long *param_1,long param_2,undefined4 *param_3)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 0x30002;
  puVar1 = PTR_DAT_02711f80;
  *(undefined4 *)(param_1 + 3) = 1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = (long)(puVar1 + 0xb8);
  *(undefined2 *)((long)param_1 + 0x44) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3f80000000000000;
  param_1[0x14] = param_2;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 4) = *param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_3[1];
  *(undefined4 *)(param_1 + 5) = param_3[2];
  *(undefined4 *)((long)param_1 + 0x2c) = param_3[3];
  *(undefined4 *)(param_1 + 6) = param_3[4];
  *(undefined4 *)((long)param_1 + 0x34) = param_3[5];
  *(undefined4 *)(param_1 + 7) = param_3[6];
  *(undefined4 *)((long)param_1 + 0x3c) = param_3[7];
  *(undefined4 *)(param_1 + 8) = param_3[8];
  memcpy((undefined2 *)((long)param_1 + 0x44),param_3 + 9,0x24);
  return;
}


