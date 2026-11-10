/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e90e90; name: FUN_00e90e90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e90e90(long *param_1)

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
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  puVar2 = PTR_DAT_0271ff18;
  puVar1 = PTR_DAT_0271ff18 + 0x10;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar4;
  param_1[9] = (long)(puVar2 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x18] = param_1[0xe];
  param_1[0x19] = param_1[0xf];
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  lVar4 = _UNK_01d4a0d8;
  lVar3 = _DAT_01d4a0d0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x26) = 0x3f000000;
  *(undefined4 *)((long)param_1 + 0x1e4) = 0x3f800000;
  param_1[0x11] = lVar4;
  param_1[0x10] = lVar3;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x1e] = param_1[0x14];
  param_1[0x1f] = param_1[0x15];
  param_1[0x1a] = param_1[0x10];
  lVar4 = _UNK_01d4abd8;
  lVar3 = _DAT_01d4abd0;
  param_1[0x1d] = param_1[0x13];
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x1b] = param_1[0x11];
  param_1[0x1c] = param_1[0x12];
  *(undefined4 *)(param_1 + 0x16) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x20) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x2a) = 0x3e99999a;
  param_1[0x25] = lVar4;
  param_1[0x24] = lVar3;
  return;
}


