/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c7190; name: FUN_013c7190
 */


void FUN_013c7190(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x9a0,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar1 = PTR_DAT_02715070;
  *puVar2 = *param_3;
  puVar1 = puVar1 + 0x10;
  puVar2[2] = puVar1;
  puVar2[3] = 0;
  puVar2[0x24] = puVar1;
  puVar2[0x25] = 0;
  puVar2[0x46] = puVar1;
  puVar2[0x68] = puVar1;
  puVar2[0x8a] = puVar1;
  puVar2[0xac] = puVar1;
  puVar2[0xce] = puVar1;
  puVar2[0xf0] = puVar1;
  puVar2[0x112] = puVar1;
  puVar2[0x5b] = 0;
  puVar2[0x5a] = 0;
  puVar2[0x59] = 0;
  puVar2[0x58] = 0;
  puVar2[0x4b] = 0;
  puVar2[0x4a] = 0;
  puVar2[0x49] = 0;
  puVar2[0x48] = 0;
  puVar2[0x47] = 0;
  puVar2[0x7d] = 0;
  puVar2[0x7c] = 0;
  puVar2[0x7b] = 0;
  puVar2[0x7a] = 0;
  puVar2[0x6d] = 0;
  puVar2[0x6c] = 0;
  puVar2[0x6b] = 0;
  puVar2[0x6a] = 0;
  puVar2[0x69] = 0;
  puVar2[0x9f] = 0;
  puVar2[0x9e] = 0;
  puVar2[0x9d] = 0;
  puVar2[0x9c] = 0;
  puVar2[0x8f] = 0;
  puVar2[0x8e] = 0;
  puVar2[0x8d] = 0;
  puVar2[0x8c] = 0;
  puVar2[0x8b] = 0;
  puVar2[0xc1] = 0;
  puVar2[0xc0] = 0;
  puVar2[0xbf] = 0;
  puVar2[0xbe] = 0;
  puVar2[0xb1] = 0;
  puVar2[0xb0] = 0;
  puVar2[0xaf] = 0;
  puVar2[0xae] = 0;
  puVar2[0xad] = 0;
  puVar2[0xe3] = 0;
  puVar2[0xe2] = 0;
  puVar2[0xe1] = 0;
  puVar2[0xe0] = 0;
  puVar2[0xd3] = 0;
  puVar2[0xd2] = 0;
  puVar2[0xd1] = 0;
  puVar2[0xd0] = 0;
  puVar2[0xcf] = 0;
  puVar2[0x105] = 0;
  puVar2[0x104] = 0;
  puVar2[0x103] = 0;
  puVar2[0x102] = 0;
  puVar2[0xf5] = 0;
  puVar2[0xf4] = 0;
  puVar2[0xf3] = 0;
  puVar2[0xf2] = 0;
  puVar2[0xf1] = 0;
  puVar2[0x127] = 0;
  puVar2[0x126] = 0;
  puVar2[0x125] = 0;
  puVar2[0x124] = 0;
  puVar2[0x117] = 0;
  puVar2[0x116] = 0;
  puVar2[0x115] = 0;
  puVar2[0x114] = 0;
  puVar2[0x113] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[0x38] = 0;
  puVar2[0x39] = 0;
  puVar2[0x36] = 0;
  puVar2[0x37] = 0;
  puVar2[0x28] = 0;
  puVar2[0x29] = 0;
  puVar2[0x26] = 0;
  puVar2[0x27] = 0;
  *param_1 = (long)puVar2;
  param_1[1] = (long)param_2;
  param_1[2] = 0x9a0;
  param_1[3] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return;
}


