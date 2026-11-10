/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cd2e0; name: FUN_004cd2e0
 */


void FUN_004cd2e0(long *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  param_1[0x16] = 0;
  puVar1 = PTR_DAT_02713548;
  auVar2 = NEON_fmov(0x3f800000,4);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[3] = auVar2._8_8_;
  param_1[2] = auVar2._0_8_;
  param_1[0x2c] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0x80000000;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0xc] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 0xf) = 0x80000000;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x80000000;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((long)param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2a) = 0x80000000;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x80000000;
  *(undefined4 *)((long)param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0x80000000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined4 *)((long)param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x80000000;
  *(undefined4 *)((long)param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0x80000000;
  *(undefined4 *)((long)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = -0x8000000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x80000000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = auVar2._8_8_;
  param_1[0x18] = auVar2._0_8_;
  return;
}


