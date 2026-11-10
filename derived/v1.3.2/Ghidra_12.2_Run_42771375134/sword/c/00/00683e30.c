/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00683e30; name: FUN_00683e30
 */


void FUN_00683e30(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_02714e48 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[5] = lVar2;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[0xb] = lVar2;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[0x17] = 0;
    param_1[0x11] = lVar2;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x18] = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[0x17] = lVar2;
  }
  else {
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xb] = param_2;
    param_1[0xc] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x11] = param_2;
    param_1[0x12] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x17] = param_2;
    param_1[0x18] = 0;
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  puVar1 = PTR_DAT_02714e50 + 0x10;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0x170;
  param_1[0x24] = 0;
  param_1[0x1f] = (long)puVar1;
  param_1[0x20] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x20] = lVar2;
  }
  puVar1 = PTR_DAT_02714e58;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 8;
  param_1[0x2e] = 0;
  param_1[0x29] = (long)(puVar1 + 0x10);
  param_1[0x2a] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x2a] = lVar2;
    return;
  }
  return;
}


