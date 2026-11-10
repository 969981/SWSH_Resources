/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00677a40; name: FUN_00677a40
 */


void FUN_00677a40(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_02714db0 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[7] = 0x300000000;
  param_1[8] = 0;
  param_1[9] = 0x300000000;
  param_1[10] = 0;
  param_1[0xb] = 1;
  *(undefined4 *)(param_1 + 0xc) = 3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = param_2;
  param_1[0xe] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[0xd] = lVar2;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[0x13] = lVar2;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[0x19] = lVar2;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[0x1f] = lVar2;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[0x25] = lVar2;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[0x2b] = lVar2;
  }
  else {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x13] = param_2;
    param_1[0x14] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x19] = param_2;
    param_1[0x1a] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x1f] = param_2;
    param_1[0x20] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x25] = param_2;
    param_1[0x26] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2b] = param_2;
    param_1[0x2c] = 0;
  }
  puVar1 = PTR_DAT_02713f98;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0x30;
  param_1[0x36] = 0;
  param_1[0x31] = (long)(puVar1 + 0x10);
  param_1[0x32] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x32] = lVar2;
  }
  param_1[0x3b] = (long)(puVar1 + 0x10);
  param_1[0x3c] = param_2;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0x30;
  param_1[0x40] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x3c] = lVar2;
  }
  param_1[0x46] = param_2;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x45) = 1;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[0x46] = lVar2;
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[0x4c] = lVar2;
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    param_1[0x55] = 0;
    param_1[0x54] = 0;
    param_1[0x53] = 0;
    param_1[0x52] = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[0x52] = lVar2;
  }
  else {
    param_1[0x4c] = param_2;
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x52] = param_2;
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    param_1[0x55] = 0;
    param_1[0x54] = 0;
    param_1[0x53] = 0;
  }
  puVar1 = PTR_DAT_02714328;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x59] = param_2;
  param_1[0x5c] = 1;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x58] = (long)(puVar1 + 0x10);
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x59] = lVar2;
  }
  *(undefined2 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  param_1[0x62] = 0x100000000;
  param_1[0x65] = param_2;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  if (param_2 != 0) {
    return;
  }
  lVar2 = FUN_005bc740();
  if (lVar2 == 0) {
    lVar2 = FUN_005bc6f0();
  }
  else {
    lVar2 = FUN_005bc740();
  }
  param_1[0x65] = lVar2;
  return;
}


