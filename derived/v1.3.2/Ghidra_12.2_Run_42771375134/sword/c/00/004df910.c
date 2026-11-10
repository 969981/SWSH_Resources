/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004df910; name: FUN_004df910
 */


void FUN_004df910(long *param_1)

{
  undefined *puVar1;
  
  FUN_004dd860();
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = PTR_DAT_027135f8;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = (long)(puVar1 + 0x1e0);
  param_1[6] = (long)(puVar1 + 0x278);
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = (long)(PTR_DAT_02713600 + 0x10);
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0xff;
  *(undefined1 *)(param_1 + 0x18) = 0xff;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x2b;
  param_1[0x1e] = 0;
  param_1[7] = 0;
  *(undefined2 *)((long)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f800000ffffffff;
  param_1[0xc] = 0x1ffffffff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return;
}


