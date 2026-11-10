/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00655780; name: FUN_00655780
 */


void FUN_00655780(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_02714b48 + 0x178;
  *param_1 = (long)(PTR_DAT_02714b48 + 0x10);
  param_1[1] = (long)puVar1;
  FUN_00638e20(param_1 + 2);
  param_1[4] = param_3;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[6] = lVar2;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0xb;
  param_1[0x60] = 0;
  param_1[0x69] = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 4;
  param_1[0x19] = 0;
  param_1[0x58] = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 4;
  param_1[0x59] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x144) = 4;
  param_1[0x5a] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)((long)param_1 + 0x17c) = 4;
  param_1[0x5b] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)((long)param_1 + 0x1b4) = 4;
  param_1[0x5c] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)((long)param_1 + 0x1ec) = 4;
  param_1[0x5d] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x224) = 4;
  param_1[0x5e] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)((long)param_1 + 0x25c) = 4;
  param_1[0x5f] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)((long)param_1 + 0x28c) = 4;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return;
}


