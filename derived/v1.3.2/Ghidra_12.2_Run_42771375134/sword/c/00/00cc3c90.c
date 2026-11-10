/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc3c90; name: FUN_00cc3c90
 */


void FUN_00cc3c90(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar1 = PTR_DAT_0271c688;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[9] = (long)(puVar1 + 0x48);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar3;
  param_1[0xb] = -0x340d631b7bddd9bb;
  param_1[0xc] = (long)&DAT_01d38550;
  param_1[0x44] = (long)&DAT_01d38550;
  param_1[0x48] = (long)&DAT_01d38550;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = -0x340d631b7bddd9bb;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = -0x340d631b7bddd9bb;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0xf] = -0x340d631b7bddd9bb;
  param_1[0x10] = (long)&DAT_01d38550;
  param_1[0x13] = -0x340d631b7bddd9bb;
  param_1[0x14] = (long)&DAT_01d38550;
  param_1[0x17] = -0x340d631b7bddd9bb;
  param_1[0x18] = (long)&DAT_01d38550;
  param_1[0x1b] = -0x340d631b7bddd9bb;
  param_1[0x1c] = (long)&DAT_01d38550;
  param_1[0x1f] = -0x340d631b7bddd9bb;
  param_1[0x20] = (long)&DAT_01d38550;
  param_1[0x23] = -0x340d631b7bddd9bb;
  param_1[0x24] = (long)&DAT_01d38550;
  param_1[0x27] = -0x340d631b7bddd9bb;
  param_1[0x28] = (long)&DAT_01d38550;
  param_1[0x2b] = -0x340d631b7bddd9bb;
  param_1[0x2c] = (long)&DAT_01d38550;
  param_1[0x2f] = -0x340d631b7bddd9bb;
  param_1[0x30] = (long)&DAT_01d38550;
  param_1[0x33] = -0x340d631b7bddd9bb;
  param_1[0x34] = (long)&DAT_01d38550;
  param_1[0x37] = -0x340d631b7bddd9bb;
  param_1[0x38] = (long)&DAT_01d38550;
  param_1[0x3b] = -0x340d631b7bddd9bb;
  param_1[0x3c] = (long)&DAT_01d38550;
  param_1[0x3f] = -0x340d631b7bddd9bb;
  param_1[0x40] = (long)&DAT_01d38550;
  param_1[0xb] = 0x490450f7e301058;
  param_1[0xc] = (long)&DAT_01d0ab7d;
  param_1[0xd] = 4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  param_1[0xe] = 0;
  param_1[0xf] = -0xc60433cec30e7a7;
  param_1[0x10] = (long)&DAT_01d00d52;
  param_1[0x11] = 4;
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
    param_1[0x12] = 0;
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0x15024c95d0a2772c;
  param_1[0x14] = (long)"eyebrow";
  param_1[0x15] = 7;
  if (param_1[0x16] != 0) {
    (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
    param_1[0x16] = 0;
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0x1766c48396ca8902;
  param_1[0x18] = (long)"eyelash";
  param_1[0x19] = 7;
  if (param_1[0x1a] != 0) {
    (**(code **)(*(long *)(param_1[0x1a] + 0x48) + 0x18))();
    param_1[0x1a] = 0;
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = -0x5682fbd8f54a6706;
  param_1[0x1c] = (long)&DAT_01d112d7;
  param_1[0x1d] = 3;
  if (param_1[0x1e] != 0) {
    (**(code **)(*(long *)(param_1[0x1e] + 0x48) + 0x18))();
    param_1[0x1e] = 0;
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = -0x74da7d8c8121a5e;
  param_1[0x20] = (long)&DAT_01d2cc32;
  param_1[0x21] = 3;
  if (param_1[0x22] != 0) {
    (**(code **)(*(long *)(param_1[0x22] + 0x48) + 0x18))();
    param_1[0x22] = 0;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0x40e8c4e796cb27eb;
  param_1[0x24] = (long)"glass";
  param_1[0x25] = 5;
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
    param_1[0x26] = 0;
  }
  param_1[0x26] = 0;
  param_1[0x27] = -0x204f1cd8d5f54605;
  param_1[0x28] = (long)&DAT_01cf9ebf;
  param_1[0x29] = 3;
  if (param_1[0x2a] != 0) {
    (**(code **)(*(long *)(param_1[0x2a] + 0x48) + 0x18))();
    param_1[0x2a] = 0;
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = -0xa86fa1a277dc2a3;
  param_1[0x2c] = (long)&DAT_01cd7461;
  param_1[0x2d] = 4;
  if (param_1[0x2e] != 0) {
    (**(code **)(*(long *)(param_1[0x2e] + 0x48) + 0x18))();
    param_1[0x2e] = 0;
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x7d9b9ea0de959227;
  param_1[0x30] = (long)"inner";
  param_1[0x31] = 5;
  if (param_1[0x32] != 0) {
    (**(code **)(*(long *)(param_1[0x32] + 0x48) + 0x18))();
    param_1[0x32] = 0;
  }
  param_1[0x32] = 0;
  param_1[0x33] = -0x195efed8d283e58f;
  param_1[0x34] = (long)&DAT_01d3a872;
  param_1[0x35] = 3;
  if (param_1[0x36] != 0) {
    (**(code **)(*(long *)(param_1[0x36] + 0x48) + 0x18))();
    param_1[0x36] = 0;
  }
  param_1[0x36] = 0;
  param_1[0x37] = -0x3a0b8318af536262;
  param_1[0x38] = (long)"glove";
  param_1[0x39] = 5;
  if (param_1[0x3a] != 0) {
    (**(code **)(*(long *)(param_1[0x3a] + 0x48) + 0x18))();
    param_1[0x3a] = 0;
  }
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x1d433a6be917b93b;
  param_1[0x3c] = (long)"bottoms";
  param_1[0x3d] = 7;
  if (param_1[0x3e] != 0) {
    (**(code **)(*(long *)(param_1[0x3e] + 0x48) + 0x18))();
    param_1[0x3e] = 0;
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x4e914a726c6e1952;
  param_1[0x40] = (long)"socks";
  param_1[0x41] = 5;
  if (param_1[0x42] != 0) {
    (**(code **)(*(long *)(param_1[0x42] + 0x48) + 0x18))();
    param_1[0x42] = 0;
  }
  param_1[0x43] = 0x4355e65a738c7bd3;
  param_1[0x44] = (long)"shoes";
  param_1[0x42] = 0;
  param_1[0x45] = 5;
  if (param_1[0x46] != 0) {
    (**(code **)(*(long *)(param_1[0x46] + 0x48) + 0x18))();
    param_1[0x46] = 0;
  }
  param_1[0x47] = -0x499c7eda6ff6f19e;
  param_1[0x48] = (long)"cycling";
  param_1[0x46] = 0;
  param_1[0x49] = 7;
  if (param_1[0x4a] != 0) {
    (**(code **)(*(long *)(param_1[0x4a] + 0x48) + 0x18))();
    param_1[0x4a] = 0;
  }
  param_1[0x4a] = 0;
  lVar2 = FUN_00cbf610(param_2);
  lVar3 = FUN_00cbf600(param_2);
  param_1[0x4b] = lVar2;
  param_1[0x4c] = lVar3;
  return;
}


