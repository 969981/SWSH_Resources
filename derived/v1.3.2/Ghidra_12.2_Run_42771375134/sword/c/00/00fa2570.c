/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa2570; name: FUN_00fa2570
 */


ulong FUN_00fa2570(ulong *param_1,uint param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte local_a0 [128];
  
  local_a0[0x70] = 0;
  local_a0[0x71] = 0;
  local_a0[0x72] = 0;
  local_a0[0x73] = 0;
  local_a0[0x74] = 0;
  local_a0[0x75] = 0;
  local_a0[0x76] = 0;
  local_a0[0x77] = 0;
  local_a0[0x78] = 0;
  local_a0[0x79] = 0;
  local_a0[0x7a] = 0;
  local_a0[0x7b] = 0;
  local_a0[0x7c] = 0;
  local_a0[0x7d] = 0;
  local_a0[0x7e] = 0;
  local_a0[0x7f] = 0;
  local_a0[0x60] = 0;
  local_a0[0x61] = 0;
  local_a0[0x62] = 0;
  local_a0[99] = 0;
  local_a0[100] = 0;
  local_a0[0x65] = 0;
  local_a0[0x66] = 0;
  local_a0[0x67] = 0;
  local_a0[0x68] = 0;
  local_a0[0x69] = 0;
  local_a0[0x6a] = 0;
  local_a0[0x6b] = 0;
  local_a0[0x6c] = 0;
  local_a0[0x6d] = 0;
  local_a0[0x6e] = 0;
  local_a0[0x6f] = 0;
  local_a0[0x50] = 0;
  local_a0[0x51] = 0;
  local_a0[0x52] = 0;
  local_a0[0x53] = 0;
  local_a0[0x54] = 0;
  local_a0[0x55] = 0;
  local_a0[0x56] = 0;
  local_a0[0x57] = 0;
  local_a0[0x58] = 0;
  local_a0[0x59] = 0;
  local_a0[0x5a] = 0;
  local_a0[0x5b] = 0;
  local_a0[0x5c] = 0;
  local_a0[0x5d] = 0;
  local_a0[0x5e] = 0;
  local_a0[0x5f] = 0;
  uVar2 = 0xcbf29ce484222645;
  local_a0[0x40] = 0;
  local_a0[0x41] = 0;
  local_a0[0x42] = 0;
  local_a0[0x43] = 0;
  local_a0[0x44] = 0;
  local_a0[0x45] = 0;
  local_a0[0x46] = 0;
  local_a0[0x47] = 0;
  local_a0[0x48] = 0;
  local_a0[0x49] = 0;
  local_a0[0x4a] = 0;
  local_a0[0x4b] = 0;
  local_a0[0x4c] = 0;
  local_a0[0x4d] = 0;
  local_a0[0x4e] = 0;
  local_a0[0x4f] = 0;
  local_a0[0x30] = 0;
  local_a0[0x31] = 0;
  local_a0[0x32] = 0;
  local_a0[0x33] = 0;
  local_a0[0x34] = 0;
  local_a0[0x35] = 0;
  local_a0[0x36] = 0;
  local_a0[0x37] = 0;
  local_a0[0x38] = 0;
  local_a0[0x39] = 0;
  local_a0[0x3a] = 0;
  local_a0[0x3b] = 0;
  local_a0[0x3c] = 0;
  local_a0[0x3d] = 0;
  local_a0[0x3e] = 0;
  local_a0[0x3f] = 0;
  local_a0[0x20] = 0;
  local_a0[0x21] = 0;
  local_a0[0x22] = 0;
  local_a0[0x23] = 0;
  local_a0[0x24] = 0;
  local_a0[0x25] = 0;
  local_a0[0x26] = 0;
  local_a0[0x27] = 0;
  local_a0[0x28] = 0;
  local_a0[0x29] = 0;
  local_a0[0x2a] = 0;
  local_a0[0x2b] = 0;
  local_a0[0x2c] = 0;
  local_a0[0x2d] = 0;
  local_a0[0x2e] = 0;
  local_a0[0x2f] = 0;
  local_a0[0x10] = 0;
  local_a0[0x11] = 0;
  local_a0[0x12] = 0;
  local_a0[0x13] = 0;
  local_a0[0x14] = 0;
  local_a0[0x15] = 0;
  local_a0[0x16] = 0;
  local_a0[0x17] = 0;
  local_a0[0x18] = 0;
  local_a0[0x19] = 0;
  local_a0[0x1a] = 0;
  local_a0[0x1b] = 0;
  local_a0[0x1c] = 0;
  local_a0[0x1d] = 0;
  local_a0[0x1e] = 0;
  local_a0[0x1f] = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[8] = 0;
  local_a0[9] = 0;
  local_a0[10] = 0;
  local_a0[0xb] = 0;
  local_a0[0xc] = 0;
  local_a0[0xd] = 0;
  local_a0[0xe] = 0;
  local_a0[0xf] = 0;
  snprintf((char *)local_a0,0x80,"%lu_%u",*param_1,param_2);
  if (local_a0[0] != 0) {
    pbVar1 = (byte *)((ulong)local_a0 | 1);
    do {
      uVar2 = (uVar2 ^ local_a0[0]) * 0x100000001b3;
      local_a0[0] = *pbVar1;
      pbVar1 = pbVar1 + 1;
    } while (local_a0[0] != 0);
  }
  return uVar2;
}


