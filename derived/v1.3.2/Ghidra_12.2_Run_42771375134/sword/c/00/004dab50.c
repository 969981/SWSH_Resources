/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004dab50; name: FUN_004dab50
 */


void FUN_004dab50(long *param_1)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = -0x3a80000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfb | 1;
  *(byte *)((long)param_1 + 0x8c) = *(byte *)((long)param_1 + 0x8c) & 0xfe;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (long)(PTR_DAT_02713590 + 0x10);
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  param_1[0x14] = (long)(PTR_DAT_02713580 + 0x10);
  param_1[0x15] = 0;
  FUN_004d6e20(param_1 + 0x16);
  param_1[0x22] = 0;
  param_1[0x23] = 0x2b00000000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x2b00000000;
  param_1[0x30] = (long)param_1;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)((long)param_1 + 0x124) = 0;
  param_1[0x27] = 0x1ffffffff;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)((long)param_1 + 0x15c) = 0;
  param_1[0x2e] = 0x1ffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0x3f800000ffffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x3f800000ffffffff;
  param_1[0x34] = (long)(PTR_DAT_02713128 + 0x10);
  param_1[0x35] = 0;
  FUN_004cd2e0(param_1 + 0x36);
  param_1[0x6f] = 0;
  puVar1 = PTR_DAT_02713598;
  param_1[0x70] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = (long)(puVar1 + 0x10);
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  return;
}


