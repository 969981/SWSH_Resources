/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e0a040; name: FUN_00e0a040
 */


void FUN_00e0a040(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  param_1[9] = 0;
  param_1[10] = 0x447a00000000001e;
  puVar2 = PTR_DAT_0271ef70;
  *(undefined4 *)(param_1 + 0xb) = 0x44fa0000;
  *(undefined2 *)((long)param_1 + 0x5c) = 0x101;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x4a742400;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar4;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = lVar4;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = lVar4;
  param_1[0x1a] = 0;
  lVar3 = *(long *)PTR_DAT_027194d8;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x1d] = lVar3;
  param_1[0x1e] = -0x340d631b7bddd9bb;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = (long)&DAT_01d38550;
  param_1[0x20] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = lVar4;
  FUN_00db17d0(param_1 + 0x30);
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x45] = param_1[1];
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x48] = (long)(PTR_DAT_02710ac8 + 0x10);
  param_1[0x49] = 0;
  param_1[0x6b] = 0;
  *(undefined2 *)((long)param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = -1;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_00e0a1f0:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_00e0a1f0;
  }
  param_1[0x70] = lVar3;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_00e0a234:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_00e0a234;
  }
  param_1[0x76] = lVar3;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x80) != 0)) {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 != 0) goto LAB_00e0a274;
  }
  lVar3 = FUN_0075ecb0();
LAB_00e0a274:
  param_1[0x7c] = lVar3;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = -0x340d631b7bddd9bb;
  param_1[0x80] = -0x340d631b7bddd9bb;
  FUN_00e0a2e0(param_1 + 0x10,3000);
  FUN_00dba3a0(param_1 + 0x16,0x800);
  FUN_00e0a4b0(param_1 + 0x42,0x80);
  FUN_00e0a690(param_1 + 0x29,7);
  FUN_00e0a7f0(param_1 + 0x6d,0x15e);
  return;
}


