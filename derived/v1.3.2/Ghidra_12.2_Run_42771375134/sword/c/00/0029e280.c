/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029e280; name: FUN_0029e280
 */


void FUN_0029e280(long *param_1)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 0x30002;
  *(undefined4 *)(param_1 + 3) = 1;
  puVar1 = PTR_DAT_02711f80;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[2] = (long)(puVar1 + 0xb8);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0xfe7ffffffe7fffff;
  *(undefined8 *)((long)param_1 + 0x34) = 0xfe7fffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f80000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3f80000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f80000000000000;
  return;
}


