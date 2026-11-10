/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00faf870; name: FUN_00faf870
 */


void FUN_00faf870(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  puVar1 = PTR_DAT_02722e78 + 0x10;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar3;
  puVar1 = PTR_DAT_027164d8 + 0x10;
  param_1[0x41] = 0;
  param_1[10] = (long)puVar1;
  param_1[0xb] = 0;
  param_1[0x3e] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = (long)puVar1;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = (long)puVar1;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = (long)puVar1;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = (long)puVar1;
  param_1[0xeb] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = (long)puVar1;
  param_1[0x10d] = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  param_1[0xfd] = 0;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  param_1[0xf8] = (long)puVar1;
  param_1[0x12f] = 0;
  param_1[0x12e] = 0;
  param_1[0x12d] = 0;
  param_1[300] = 0;
  param_1[0x11f] = 0;
  param_1[0x11e] = 0;
  param_1[0x11d] = 0;
  param_1[0x11c] = 0;
  param_1[0x11b] = 0;
  param_1[0x11a] = (long)puVar1;
  param_1[0x151] = 0;
  param_1[0x150] = 0;
  param_1[0x14f] = 0;
  param_1[0x14e] = 0;
  param_1[0x141] = 0;
  param_1[0x140] = 0;
  param_1[0x13f] = 0;
  param_1[0x13e] = 0;
  param_1[0x13d] = 0;
  param_1[0x13c] = (long)puVar1;
  param_1[0x173] = 0;
  param_1[0x172] = 0;
  param_1[0x171] = 0;
  param_1[0x170] = 0;
  param_1[0x163] = 0;
  param_1[0x162] = 0;
  param_1[0x161] = 0;
  param_1[0x160] = 0;
  param_1[0x15f] = 0;
  param_1[0x15e] = (long)puVar1;
  *(undefined1 *)(param_1 + 400) = 0;
  param_1[399] = 0;
  param_1[0x18e] = 0;
  param_1[0x18d] = 0;
  param_1[0x18c] = 0;
  param_1[0x18b] = 0;
  param_1[0x18a] = 0;
  param_1[0x189] = 0;
  param_1[0x188] = 0;
  param_1[0x187] = 0;
  param_1[0x186] = 0;
  param_1[0x185] = 0;
  param_1[0x184] = 0;
  param_1[0x183] = 0;
  param_1[0x182] = 0;
  param_1[0x181] = 0;
  param_1[0x180] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = (long)puVar1;
  param_1[0x2d] = 0;
  return;
}


