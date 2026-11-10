/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00643330; name: FUN_00643330
 */


void FUN_00643330(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_027149c0 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = PTR_DAT_027149c8;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[9] = 0;
  param_1[10] = 0x38;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[7] = lVar2;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar1 = PTR_DAT_027149d0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x14;
  param_1[0x16] = 0;
  param_1[0x11] = (long)(puVar1 + 0x10);
  param_1[0x12] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x12] = lVar2;
  }
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x3f800000;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = 0x3f800000;
  puVar1 = PTR_DAT_027149d8 + 0x10;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x24] = (long)puVar1;
  param_1[0x25] = param_2;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0x28;
  param_1[0x29] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x25] = lVar2;
  }
  puVar1 = PTR_DAT_027149e0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 2;
  param_1[0x33] = 0;
  param_1[0x2e] = (long)(puVar1 + 0x10);
  param_1[0x2f] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x2f] = lVar2;
  }
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x57] = (long)(PTR_DAT_027149b8 + 0x10);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  FUN_005bf710(param_1 + 0x58,param_2);
  param_1[0x57] = (long)(PTR_DAT_027149e8 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x3f800000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = 0x3f800000;
  param_1[0x41] = 0;
  param_1[0x42] = 0x3f80000000000000;
  param_1[0x43] = 0x3f800000;
  param_1[0x44] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x5a] = (long)param_1;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x3f80000000000000;
  param_1[0x3b] = 0x3f80000000000000;
  param_1[0x3c] = 0x3f80000000000000;
  param_1[0x3d] = 0x3f800000;
  param_1[0x3e] = 0x3f80000000000000;
  param_1[0x3f] = 0x3f8000003f800000;
  param_1[0x40] = 0x3f80000000000000;
  return;
}


