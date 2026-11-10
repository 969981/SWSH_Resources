/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006df880; name: FUN_006df880
 */


void FUN_006df880(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar5;
  puVar3 = PTR_DAT_027154d8;
  *PTR_DAT_027154d0 = 1;
  param_1[0xb] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar1 = PTR_DAT_02710ac8 + 0x10;
  param_1[9] = (long)(puVar3 + 0x40);
  param_1[10] = (long)puVar1;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x2c] = -0x340d631b7bddd9bb;
  param_1[0x2d] = (long)&DAT_01d38550;
  param_1[0x30] = -0x340d631b7bddd9bb;
  param_1[0x31] = (long)&DAT_01d38550;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar4 = FUN_0075ecb0();
  }
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x37] = lVar4;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3c] = 0x3f80000000000003;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return;
}


