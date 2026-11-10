/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d97780; name: FUN_00d97780
 */


void FUN_00d97780(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_02710a18 + 0x10);
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710860;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar2 = PTR_DAT_0271e678;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar4;
  param_1[9] = (long)(puVar2 + 0xd8);
  puVar1 = PTR_DAT_0271d378 + 0x10;
  param_1[0x32] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = (long)(puVar2 + 0x108);
  param_1[0xc] = 0;
  param_1[0x10] = (long)puVar1;
  param_1[0x11] = 0;
  FUN_00784cb0(param_1 + 0x34);
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = (long)puVar1;
  param_1[0x72] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = (long)puVar1;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = -0x340d631b7bddd9bb;
  param_1[0x9b] = -0x340d631b7bddd9bb;
  param_1[0x98] = 0;
  FUN_0160ebb0(param_1 + 0x9c);
  return;
}


