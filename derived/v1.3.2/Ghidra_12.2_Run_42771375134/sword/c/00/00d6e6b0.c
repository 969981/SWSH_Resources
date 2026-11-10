/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6e6b0; name: FUN_00d6e6b0
 */


void FUN_00d6e6b0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x7c0,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  puVar2[6] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  *puVar2 = 0;
  puVar2[1] = 0xcbf29ce484222645;
  puVar2[2] = &DAT_01d38550;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar1 = PTR_DAT_02715b00 + 0x10;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0x3e] = 0;
  puVar2[0x3f] = 0;
  puVar2[0x3c] = 0;
  puVar2[0x3d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  puVar2[0x2c] = 0;
  puVar2[0x2d] = 0;
  puVar2[8] = puVar1;
  puVar2[9] = 0;
  puVar1 = PTR_DAT_02715070 + 0x10;
  puVar2[0x61] = 0;
  puVar2[0x60] = 0;
  puVar2[0x5f] = 0;
  puVar2[0x5e] = 0;
  puVar2[0x51] = 0;
  puVar2[0x50] = 0;
  puVar2[0x4f] = 0;
  puVar2[0x4e] = 0;
  puVar2[0x2a] = puVar1;
  puVar2[0x2b] = 0;
  puVar1 = PTR_DAT_027164d8 + 0x10;
  puVar2[0x4d] = 0;
  puVar2[0x83] = 0;
  puVar2[0x82] = 0;
  puVar2[0x81] = 0;
  puVar2[0x80] = 0;
  puVar2[0x73] = 0;
  puVar2[0x72] = 0;
  puVar2[0x71] = 0;
  puVar2[0x70] = 0;
  puVar2[0x6f] = 0;
  puVar2[0x4c] = puVar1;
  puVar2[0x6e] = PTR_DAT_027196e0 + 0x10;
  puVar2[0xa5] = 0;
  puVar2[0xa4] = 0;
  puVar2[0xa3] = 0;
  puVar2[0xa2] = 0;
  puVar2[0x95] = 0;
  puVar2[0x94] = 0;
  puVar2[0x93] = 0;
  puVar2[0x92] = 0;
  puVar2[0x91] = 0;
  puVar2[0x90] = PTR_DAT_02715040 + 0x10;
  puVar2[199] = 0;
  puVar2[0xc6] = 0;
  puVar2[0xc5] = 0;
  puVar2[0xc4] = 0;
  puVar2[0xb7] = 0;
  puVar2[0xb6] = 0;
  puVar2[0xb5] = 0;
  puVar2[0xb4] = 0;
  puVar1 = PTR_DAT_02710818 + 0x10;
  puVar2[0xb3] = 0;
  puVar2[0xe9] = 0;
  puVar2[0xe8] = 0;
  puVar2[0xe7] = 0;
  puVar2[0xe6] = 0;
  puVar2[0xd9] = 0;
  puVar2[0xd8] = 0;
  puVar2[0xd7] = 0;
  puVar2[0xd6] = 0;
  puVar2[0xd5] = 0;
  puVar2[0xb2] = puVar1;
  puVar2[0xd4] = PTR_DAT_027194a8 + 0x10;
  puVar2[0xf7] = 0;
  puVar2[0xf6] = 0;
  *param_1 = puVar2;
  param_1[1] = param_2;
  param_1[2] = 0x7c0;
  param_1[3] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return;
}


