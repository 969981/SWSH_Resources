/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005d9b00; name: FUN_005d9b00
 */


void FUN_005d9b00(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_027141a8 + 0x10);
  FUN_005bf710(param_1 + 1);
  puVar1 = PTR_DAT_027141b0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 8;
  param_1[8] = 0;
  param_1[3] = (long)(puVar1 + 0x10);
  param_1[4] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[4] = lVar2;
  }
  puVar1 = PTR_DAT_027141b8;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 8;
  param_1[0x12] = 0;
  param_1[0xd] = (long)puVar1;
  param_1[0xe] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0xe] = lVar2;
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = (long)puVar1;
  param_1[0x18] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 8;
  param_1[0x1c] = 0;
  lVar2 = FUN_005bc6f0();
  param_1[0x18] = lVar2;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = (long)puVar1;
  param_1[0x22] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 8;
  param_1[0x26] = 0;
  lVar2 = FUN_005bc6f0();
  puVar1 = PTR_DAT_027141c0;
  param_1[0x22] = lVar2;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 8;
  param_1[0x30] = 0;
  param_1[0x2b] = (long)(puVar1 + 0x10);
  param_1[0x2c] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x2c] = lVar2;
  }
  puVar1 = PTR_DAT_027141c8;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 8;
  param_1[0x3a] = 0;
  param_1[0x35] = (long)(puVar1 + 0x10);
  param_1[0x36] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x36] = lVar2;
  }
  puVar1 = PTR_DAT_027141d0;
  param_1[0x41] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x43] = 8;
  param_1[0x42] = 0;
  param_1[0x3f] = (long)(puVar1 + 0x10);
  param_1[0x40] = param_2;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x40] = lVar2;
    return;
  }
  return;
}


