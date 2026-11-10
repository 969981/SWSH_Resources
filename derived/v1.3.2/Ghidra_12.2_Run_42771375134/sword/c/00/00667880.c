/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00667880; name: FUN_00667880
 */


void FUN_00667880(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_02714d08 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[9] = 0;
    param_1[3] = lVar2;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[10] = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[9] = lVar2;
  }
  else {
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[9] = param_2;
    param_1[10] = 0;
  }
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  puVar1 = PTR_DAT_02714d10 + 0x10;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined2 *)((long)param_1 + 0x13c) = 0x100;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = (long)puVar1;
  param_1[0x29] = param_2;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 8;
  param_1[0x2d] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x29] = lVar2;
  }
  param_1[0x32] = (long)puVar1;
  param_1[0x33] = param_2;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 8;
  param_1[0x37] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x33] = lVar2;
  }
  puVar1 = PTR_DAT_02714d18;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x44] = 0;
  param_1[0x40] = 8;
  param_1[0x45] = 0;
  param_1[0x3c] = (long)(puVar1 + 0x10);
  param_1[0x3d] = param_2;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x3d] = lVar2;
  }
  puVar1 = PTR_DAT_02714d20;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x47] = param_2;
  param_1[0x4a] = 8;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x46] = (long)(puVar1 + 0x10);
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x47] = lVar2;
  }
  puVar1 = PTR_DAT_027142e0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x51] = param_2;
  param_1[0x54] = 8;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x50] = (long)(puVar1 + 0x10);
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x51] = lVar2;
  }
  FUN_00667c30(param_1 + 0x5a,param_2);
  param_1[0x17d] = 0;
  *(undefined1 *)(param_1 + 0x17e) = 0;
  param_1[0x184] = 0;
  param_1[0x183] = 0;
  param_1[0x182] = 0;
  param_1[0x181] = 0;
  param_1[0x180] = 0;
  param_1[0x17f] = 0;
  FUN_006964c0(param_1 + 0x185,0);
  puVar1 = PTR_DAT_02714d28;
  param_1[0x18e] = 0;
  param_1[0x18d] = 0;
  param_1[0x194] = 0;
  param_1[0x193] = 0;
  param_1[0x18c] = param_2;
  param_1[399] = 8;
  param_1[0x192] = 0;
  param_1[0x191] = 0;
  param_1[400] = 0;
  param_1[0x18b] = (long)(puVar1 + 0x10);
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x18c] = lVar2;
  }
  param_1[0x195] = (long)(puVar1 + 0x10);
  param_1[0x196] = param_2;
  param_1[0x198] = 0;
  param_1[0x197] = 0;
  param_1[0x199] = 8;
  param_1[0x19e] = 0;
  param_1[0x19d] = 0;
  param_1[0x19c] = 0;
  param_1[0x19b] = 0;
  param_1[0x19a] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x196] = lVar2;
  }
  param_1[0x1a0] = param_2;
  param_1[0x19f] = (long)(puVar1 + 0x10);
  param_1[0x1a2] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a3] = 8;
  param_1[0x1a8] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a4] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x1a0] = lVar2;
  }
  param_1[0x1a9] = (long)(puVar1 + 0x10);
  param_1[0x1aa] = param_2;
  param_1[0x1ac] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ad] = 8;
  param_1[0x1b2] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1af] = 0;
  param_1[0x1ae] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x1aa] = lVar2;
  }
  param_1[0x1b4] = param_2;
  param_1[0x1b3] = (long)(puVar1 + 0x10);
  param_1[0x1b6] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b7] = 8;
  param_1[0x1bc] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1b8] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x1b4] = lVar2;
  }
  param_1[0x1bd] = (long)(puVar1 + 0x10);
  param_1[0x1be] = param_2;
  param_1[0x1c0] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1c1] = 8;
  param_1[0x1c6] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c2] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x1be] = lVar2;
  }
  FUN_00670dc0(param_1 + 0x1c7,param_2);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)((long)param_1 + 0x13e) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return;
}


